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

#include "SVGAnimatedLengthImpl.h"
#include "SVGElementImpl.h"

using namespace KSVG;

#include "SVGAnimatedLengthImpl.lut.h"
#include "ksvg_scriptinterpreter.h"
#include "ksvg_bridge.h"

SVGAnimatedLengthImpl::SVGAnimatedLengthImpl(LengthMode mode, SVGElementImpl *object) : DOM::DomShared()
{
	m_baseVal = new SVGLengthImpl(mode, object);
	m_baseVal->ref();

	m_animVal = new SVGLengthImpl(mode, object);
	m_animVal->ref();
}

SVGAnimatedLengthImpl::SVGAnimatedLengthImpl(const SVGAnimatedLengthImpl &other) : DOM::DomShared()
{
	(*this) = other;
}

SVGAnimatedLengthImpl::~SVGAnimatedLengthImpl()
{
	if(m_baseVal)
		m_baseVal->deref();
	if(m_animVal)
		m_animVal->deref();
}

SVGAnimatedLengthImpl &SVGAnimatedLengthImpl::operator=(const SVGAnimatedLengthImpl &other)
{
	*m_baseVal = *(other.m_baseVal);
	*m_animVal = *(other.m_animVal);

	return *this;
}

SVGLengthImpl *SVGAnimatedLengthImpl::baseVal() const
{
	return m_baseVal;
}

SVGLengthImpl *SVGAnimatedLengthImpl::animVal() const
{
	return m_animVal;
}

// Ecma stuff

/*
@namespace KSVG
@begin SVGAnimatedLengthImpl::s_hashTable 3
 baseVal	SVGAnimatedLengthImpl::BaseVal	DontDelete|ReadOnly
 animVal	SVGAnimatedLengthImpl::AnimVal	DontDelete|ReadOnly
@end
*/

Value SVGAnimatedLengthImpl::getValueProperty(ExecState *exec, int token) const
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
