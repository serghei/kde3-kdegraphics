/* This file is part of the KDE project
 * Copyright (C) 2004 Melcrhio FRANZ <mfranz@kde.org>
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

#ifndef __KFILE_RGB_H__
#define __KFILE_RGB_H__

#include <kfilemetainfo.h>

class QStringList;

class KRgbPlugin : public KFilePlugin
{
	Q_OBJECT

public:
	KRgbPlugin(QObject *parent, const char *name, const QStringList& args);
	virtual bool readInfo(KFileMetaInfo& info, uint what);
	virtual bool writeInfo(const KFileMetaInfo& info) const;
	virtual QValidator* createValidator(const QString& mimetype,
			const QString &group, const QString &key,
			QObject* parent, const char* name) const;

};

#endif
