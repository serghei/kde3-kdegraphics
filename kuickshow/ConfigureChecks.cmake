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

# imlib
pkg_search_module( IMLIB imlib )
if( NOT IMLIB_FOUND )
  kde_message_fatal( "imlib is required, but was not found on your system" )
endif( )
