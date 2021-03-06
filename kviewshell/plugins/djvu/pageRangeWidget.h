/***************************************************************************
 *   Copyright (C) 2005 by Stefan Kebekus                                  *
 *   kebekus@kde.org                                                       *
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

#ifndef PAGERANGEWIDGET_H
#define PAGERANGEWIDGET_H

#include <knuminput.h>

#include "pageRangeWidget_base.h"


class PageRangeWidget : public PageRangeWidget_base
{
Q_OBJECT

public:
  PageRangeWidget( Q_UINT16 _from, Q_UINT16 _to, Q_UINT16 _current, QWidget *parent = 0, const char *name = 0 );

  Q_UINT16 getFrom() const {return (from == 0) ? 0 : from->value(); }
  Q_UINT16 getTo() const {return (to == 0) ? 0 : to->value(); }

private slots:
  void toValueChanged(int val);
  void fromValueChanged(int val);
};


#endif // PAGERANGETOWIDGET_H
