/*
    Copyright (C) 2001-2003 KSVG Team
    This file is part of the KDE project

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#ifndef SVGFEOffsetElementImpl_H
#define SVGFEOffsetElementImpl_H

#include "SVGElementImpl.h"
#include "SVGFilterPrimitiveStandardAttributesImpl.h"

#include "ksvg_lookup.h"

namespace KSVG
{

class SVGAnimatedStringImpl;
class SVGAnimatedNumberImpl;
class SVGFEOffsetElementImpl : public SVGElementImpl,
							   public SVGFilterPrimitiveStandardAttributesImpl
{
public:
	SVGFEOffsetElementImpl(DOM::ElementImpl *impl);
	virtual ~SVGFEOffsetElementImpl();

	SVGAnimatedStringImpl *in1() const;
	SVGAnimatedNumberImpl *dx() const;
	SVGAnimatedNumberImpl *dy() const;

private:
	SVGAnimatedStringImpl *m_in1;
	SVGAnimatedNumberImpl *m_dx;
	SVGAnimatedNumberImpl *m_dy;

public:
	KSVG_FORWARDGET
	KSVG_FORWARDPUT
};

}

#endif

// vim:ts=4:noet
