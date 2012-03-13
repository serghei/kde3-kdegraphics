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

#include <Glyph.h>

#include "SVGDocumentImpl.h"
#include "SVGTextElementImpl.h"
#include "SVGTSpanElementImpl.h"
#include "SVGAnimatedLengthListImpl.h"

#include "KSVGCanvas.h"
#include "KSVGTextChunk.h"

using namespace KSVG;
using namespace KJS;

SVGTSpanElementImpl::SVGTSpanElementImpl(DOM::ElementImpl *impl) : SVGTextPositioningElementImpl(impl)
{
}

SVGTSpanElementImpl::~SVGTSpanElementImpl()
{
}

long SVGTSpanElementImpl::getNumberOfChars()
{
	return text().length();
}

QString SVGTSpanElementImpl::text()
{
	// Otherwhise some js scripts which require a child, don't work (Niko)
	if(!hasChildNodes())
	{
		DOM::Text impl = static_cast<DOM::Document *>(ownerDoc())->createTextNode(DOM::DOMString(""));
		appendChild(impl);
	}

	return textDirectionAwareText();	
}

void SVGTSpanElementImpl::setAttributes()
{
	SVGTextPositioningElementImpl::setAttributes();
}

// vim:ts=4:noet
