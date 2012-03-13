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

pkg_search_module( GPHOTO2 libgphoto2 )
if( NOT GPHOTO2_FOUND )
  kde_message_fatal( "libgphoto2 is required, but was not found on your system" )
endif( )
