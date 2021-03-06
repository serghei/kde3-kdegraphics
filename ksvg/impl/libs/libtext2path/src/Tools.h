/*
    Copyright (C) 2003 Nikolas Zimmermann <wildfox@kde.org>
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
    aint with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#ifndef T2P_TOOLS_H
#define T2P_TOOLS_H

#include <list>
#include <string>
#include <config.h>
#ifdef HAVE_SSTREAM
#  include <sstream>
#else
#  include <strstream>
#  define ostringstream ostrstream
#endif

#define T2PMAX(a, b) ((b) < (a) ? (a) : (b))
#define T2PMIN(a, b) ((a) < (b) ? (a) : (b))

namespace T2P
{
	class Tools
	{
	public:
		static std::string joinList(char seperator, std::list<std::string> &list)
		{
			std::string result;

			if(list.empty())
				return result;

			bool first = true;
			for(std::list<std::string>::const_iterator it = list.begin(); it != list.end(); ++it)
			{
				std::string string = *it;

				if(!string.empty())
				{
					if(!first)
						result += seperator + string;
					else
					{
						result += string;
						first = false;
					}
				}
			}

			return result;
		}

		template<typename T>
		static std::string a2str(T arg)
		{
			std::ostringstream buffer;
			buffer << arg;
			return buffer.str();
		}
	};
}

#ifdef ostringstream
#  undef ostringstream
#endif

#endif

// vim:ts=4:noet
