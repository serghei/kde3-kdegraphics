#################################################
#
#  (C) 2010-2012 Serghei Amelian
#  serghei (DOT) amelian (AT) gmail.com
#
#  Improvements and feedback are welcome
#
#  This file is released under GPL >= 2
#
#################################################

# glu
pkg_search_module( GLU glu )
if( NOT GLU_FOUND )
  kde_message_fatal( "glu is required, but was not found on your system" )
endif( )


# xmu
pkg_search_module( XMU xmu )
if( NOT XMU_FOUND )
  kde_message_fatal( "xmu is required, but was not found on your system" )
endif( )
