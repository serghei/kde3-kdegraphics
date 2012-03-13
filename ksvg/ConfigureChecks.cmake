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

include( CheckLibraryExists )

# lcms
check_include_file( lcms.h HAVE_LCMS_H )
if( HAVE_LCMS_H )
  set( LCMS_HEADER "lcms.h" CACHE INTERNAL "" FORCE )
endif( )
if( LCMS_HEADER )
  check_library_exists( lcms VEC3init "" HAVE_LCMS )
endif( )
if( HAVE_LCMS )
  set( LCMS_LIBRARY lcms )
else( )
  kde_message_fatal( "lcms is required, but was not found on your system" )
endif( )


# libart-2.0
pkg_search_module( ART libart-2.0 )
if( NOT ART_FOUND )
  kde_message_fatal( "libart-2.0 is required, but was not found on your system" )
endif( )


# freetype2 2.2.x
if( NOT ${FREETYPE_VERSION} VERSION_LESS "2.2" )
  set( HAVE_FREETYPE_2_2_x 1 CACHE INTERNAL "" FORCE )
endif( )


# fribidi
pkg_search_module( FRIBIDI fribidi )
if( FRIBIDI_FOUND )
  check_include_file( fribidi/fribidi-types.h FRIBIDI_NEW_FILENAME )
else( )
  kde_message_fatal( "fribidi is required, but was not found on your system" )
endif( )
