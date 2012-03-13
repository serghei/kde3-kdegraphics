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

#include <kdebug.h>

#include "SVGAngleImpl.h"
#include "SVGSVGElementImpl.h"
#include "SVGAnimatedAngleImpl.h"

using namespace KSVG;

#include "SVGAnimatedAngleImpl.lut.h"
#include "ksvg_scriptinterpreter.h"
#include "ksvg_bridge.h"

SVGAnimatedAngleImpl::SVGAnimatedAngleImpl() : DOM::DomShared()
{
	KSVG_EMPTY_FLAGS

	m_baseVal = SVGSVGElementImpl::createSVGAngle();
	m_animVal = SVGSVGElementImpl::createSVGAngle();
}

SVGAnimatedAngleImpl::~SVGAnimatedAngleImpl()
{
	if(m_baseVal)
		m_baseVal->deref();
	if(m_animVal)
		m_animVal->deref();
}

SVGAngleImpl *SVGAnimatedAngleImpl::baseVal() const
{
	return m_baseVal;
}

SVGAngleImpl *SVGAnimatedAngleImpl::animVal() const
{
	return m_animVal;
}

// Ecma stuff

/*
@namespace KSVG
@begin SVGAnimatedAngleImpl::s_hashTable 3
 baseVal	SVGAnimatedAngleImpl::BaseVal	DontDelete|ReadOnly
 animVal	SVGAnimatedAngleImpl::AnimVal	DontDelete|ReadOnly
@end
*/

Value SVGAnimatedAngleImpl::getValueProperty(ExecState *exec, int token) const
{
	switch(token)
	{
		case BaseVal:
			return m_baseVal->cache(exec);
		case AnimVal:
			return m_animVal->cache(exec);
		default:
			kdWarning() << "Unhandled token in " << k_funcinfo << " : " << token << endl;
			return Undefined();
	}
}

// vim:ts=4:noet
