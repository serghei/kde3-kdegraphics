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

# OpenEXR
pkg_search_module( OPENEXR OpenEXR )
if( NOT OPENEXR_FOUND )
  kde_message_fatal( "OpenEXR is required, but was not found on your system" )
endif( )
