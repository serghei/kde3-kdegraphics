// -*- C++ -*-
/***************************************************************************
 *   Copyright (C) 2005 by Stefan Kebekus                                  *
 *   kebekus@kde.org                                                       *
 *                                                                         *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.             *
 ***************************************************************************/

#ifndef _PREBOOKMARK_H_
#define _PREBOOKMARK_H_

#include <qstring.h>

/*! \brief Bookmark representation
  
This class presents a bookmark in a format that is used internally by
the DVI prescan routines.
*/

class PreBookmark
{
 public:
  PreBookmark(const QString& t, const QString& a, Q_UINT16 n) {title=t; anchorName=a; noOfChildren=n;}
  PreBookmark() {title=QString::null; anchorName=QString::null; noOfChildren=0;}

  // Title of the bookmark
  QString title;

  // Name of the anchor
  QString anchorName;

  // Number of subordinate bookmarks
  Q_UINT16 noOfChildren;
};

#endif
