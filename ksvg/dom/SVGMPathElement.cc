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

#include "SVGMPathElement.h"
#include "SVGMPathElementImpl.h"

using namespace KSVG;

SVGMPathElement::SVGMPathElement() : SVGElement(), SVGURIReference(), SVGExternalResourcesRequired()
{
	impl = 0;
}

SVGMPathElement::SVGMPathElement(const SVGMPathElement &other) : SVGElement(other), SVGURIReference(other), SVGExternalResourcesRequired(other), impl(0)
{
	(*this) = other;
}

SVGMPathElement &SVGMPathElement::operator =(const SVGMPathElement &other)
{
	SVGElement::operator=(other);
	SVGURIReference::operator=(other);
	SVGExternalResourcesRequired::operator=(other);

	if(impl == other.impl)
		return *this;

	if(impl)
		impl->deref();

	impl = other.impl;

	if(impl)
		impl->ref();

	return *this;
}

SVGMPathElement::SVGMPathElement(SVGMPathElementImpl *other) : SVGElement(other), SVGURIReference(other), SVGExternalResourcesRequired(other)
{
	impl = other;
	if(impl)
		impl->ref();
}

SVGMPathElement::~SVGMPathElement()
{
	if(impl)
		impl->deref();
}

// vim:ts=4:noet
