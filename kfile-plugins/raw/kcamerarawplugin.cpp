/* This file is part of the KDE project
 * Copyright (C) Steffen Hansen <hansen@kde.org>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public
 * License as published by the Free Software Foundation version 2.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 *
 */

#include "kcamerarawplugin.h"

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <klocale.h>
#include <kgenericfactory.h>
#include <kdebug.h>
#include <ktempfile.h>
#include <kimageio.h>
#include <qfile.h>
#include <qimage.h>
#include <qwmatrix.h>
#include <cstdio>


typedef KGenericFactory<KCameraRawPlugin> RawFactory;

K_EXPORT_COMPONENT_FACTORY(kfile_raw, RawFactory("kfile_raw"))

#ifndef KDE_EXPORT
# define KDE_EXPORT
#endif

/* Main entry point into raw parser */
extern "C" {
  int extract_thumbnail( FILE*, FILE*, int* );
  extern char make[];
  extern char model[];
}

bool KCameraRawPlugin::createPreview(const QString &path, QImage &img)
{
  /* Open file and extract thumbnail */
  FILE* input = fopen( QFile::encodeName(path), "rb" );
  if( !input ) return false;
  KTempFile output;
  output.setAutoDelete(true);
  int orientation = 0;
  if( extract_thumbnail( input, output.fstream(), &orientation ) ) {
    fclose(input);
    return false;
  }
  fclose(input);
  output.close();
  if( !img.load( output.name() ) ) return false;
  
  if(orientation) {
    QWMatrix M;
    QWMatrix flip= QWMatrix(-1,0,0,1,0,0);
    switch(orientation+1) {  // notice intentional fallthroughs
    case 2: M = flip; break;
    case 4: M = flip;
    case 3: M.rotate(180); break;
    case 5: M = flip;
    case 6: M.rotate(90); break;
    case 7: M = flip;
    case 8: M.rotate(270); break;
    default: break; // should never happen
    }
    img = img.xForm(M);
  }
  return true;	
}

KCameraRawPlugin::KCameraRawPlugin(QObject *parent, const char *name,
				   const QStringList &args )
    : KFilePlugin(parent, name, args)
{
  kdDebug(7034) << "KCameraRawPlugin c'tor" << endl;

  //
  // define all possible meta info items
  //
  KFileMimeTypeInfo *info = addMimeTypeInfo("image/x-raw");
  KFileMimeTypeInfo::GroupInfo *group = addGroupInfo( info, "Info",
						      i18n("Image Info") );
  KFileMimeTypeInfo::ItemInfo* item;
  
  item = addItemInfo( group, "Manufacturer", i18n("Camera Manufacturer"),
		      QVariant::String );
  item = addItemInfo( group, "Model", i18n("Camera Model"),
		      QVariant::String );
  item = addItemInfo( group, "Thumbnail", i18n("Thumbnail"),
                      QVariant::Image );
  setHint( item, KFileMimeTypeInfo::Thumbnail );
}

bool KCameraRawPlugin::readInfo( KFileMetaInfo& info, uint what )
{
    kdDebug(7034) << "KCameraRawPlugin::readInfo()" << endl;
    
    const QString path( info.path() );
    if ( path.isEmpty() ) // remote file
        return false;
    
    KFileMetaInfoGroup group = appendGroup( info, "Info" );
    if ( what & KFileMetaInfo::Thumbnail ){
      QImage img;
      if( createPreview( path,img ) ) {
	appendItem( group, "Thumbnail", img );
	kdDebug(7034) << "thumbnail " << path << " created" << endl;
      }
    } else {
      // HACK: We have to extract thumbnail to get any info...
      QImage img;
      createPreview( path,img );      
    }
    kdDebug(7034) << "make=" << make << endl;
    kdDebug(7034) << "model=" << model << endl;
    if( make[0] ) {
      appendItem( group, "Manufacturer", &make[0] );
    }
    if( model[0] ) {
      appendItem( group, "Model", &model[0] );
    }

    return true;
}

#include "kcamerarawplugin.moc"
