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

#ifndef SVGFESpotLightElementImpl_H
#define SVGFESpotLightElementImpl_H

#include "SVGElementImpl.h"

#include "ksvg_lookup.h"

namespace KSVG
{

class SVGAnimatedNumberImpl;
class SVGFESpotLightElementImpl : public SVGElementImpl
{
public:
	SVGFESpotLightElementImpl(DOM::ElementImpl *);
	virtual ~SVGFESpotLightElementImpl();

	SVGAnimatedNumberImpl *x() const;
	SVGAnimatedNumberImpl *y() const;
	SVGAnimatedNumberImpl *z() const;
	SVGAnimatedNumberImpl *pointsAtX() const;
	SVGAnimatedNumberImpl *pointsAtY() const;
	SVGAnimatedNumberImpl *pointsAtZ() const;
	SVGAnimatedNumberImpl *specularExponent() const;
	SVGAnimatedNumberImpl *limitingConeAngle() const;

private:
	SVGAnimatedNumberImpl *m_x;
	SVGAnimatedNumberImpl *m_y;
	SVGAnimatedNumberImpl *m_z;
	SVGAnimatedNumberImpl *m_pointsAtX;
	SVGAnimatedNumberImpl *m_pointsAtY;
	SVGAnimatedNumberImpl *m_pointsAtZ;
	SVGAnimatedNumberImpl *m_specularExponent;
	SVGAnimatedNumberImpl *m_limitingConeAngle;
public:
	KSVG_FORWARDGET
	KSVG_FORWARDPUT
};

}

#endif

// vim:ts=4:noet
