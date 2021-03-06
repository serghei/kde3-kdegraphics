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

    You should have received a copy of the GNU Library General Public
    License along with this library; see the file COPYING.LIB.  If
    not, write to the Free Software Foundation, Inc., 51 Franklin Street,
    Fifth Floor, Boston, MA 02110-1301, USA.


    This file includes excerpts from the Scalable Vector Graphics
    (SVG) 1.0 Specification (Proposed Recommendation)
    http://www.w3.org/TR/SVG

    Copyright � 2001 World Wide Web Consortium, (Massachusetts
    Institute of Technology, Institut National de Recherche en
    Informatique et en Automatique, Keio University).
    All Rights Reserved.

    $Id: SVGCircleElement.h 490589 2005-12-22 12:56:21Z scripty $
 */

#ifndef SVGCircleElement_H
#define SVGCircleElement_H

#include "SVGElement.h"
#include "SVGTests.h"
#include "SVGLangSpace.h"
#include "SVGExternalResourcesRequired.h"
#include "SVGStylable.h"
#include "SVGTransformable.h"

namespace KSVG
{

class SVGCircleElementImpl;

class SVGAnimatedLength;
/**
 * The <code>circle</code> element defines a circle based on a center
 * point and radius.
 *
 * For more info look here : <a href =
 * "http://www.w3.org/TR/SVG/shapes.html#CircleElement">9.3 The
 * 'circle' element</a>.
 */
class KDE_EXPORT SVGCircleElement : public SVGElement,
						 public SVGTests,
					   	 public SVGLangSpace,
					 	 public SVGExternalResourcesRequired,
						 public SVGStylable,
						 public SVGTransformable
{
public:
	SVGCircleElement();
	SVGCircleElement(const SVGCircleElement &);
	SVGCircleElement &operator=(const SVGCircleElement &other);
	SVGCircleElement(SVGCircleElementImpl *);
	~SVGCircleElement();

	/**
	 * The x-axis coordinate of the center of the circle.
	 * If the attribute is not specified, the effect is as if a value
	 * of "0" were specified.
	 *
	 * This attribute is animatable.
	 *
	 * @return The x-axis coordinate of the center of the circle.
	 */
	SVGAnimatedLength cx();

	/**
	 * The y-axis coordinate of the center of the circle.
	 * If the attribute is not specified, the effect is as if a value
	 * of "0" were specified.
	 *
	 * This attribute is animatable.
	 *
	 * @return The y-axis coordinate of the center of the circle.
	 */
	SVGAnimatedLength cy();

	/**
	 * The radius of the circle.
	 * A negative value is an error (see <a href =
	 * "http://www.w3.org/TR/SVG/implnote.html#ErrorProcessing">
	 * Error processing</a>). A value of zero disables rendering of
	 * the element.
	 *
	 * This attribute is animatable.
	 *
	 * @return The radius of the circle.
	 */
	SVGAnimatedLength r();

	// Internal! - NOT PART OF THE SVG SPECIFICATION
	SVGCircleElementImpl *handle() const { return impl; }

private:
	SVGCircleElementImpl *impl;
};

}

#endif

// vim:ts=4:noet
