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

include( FindPkgConfig )

# find kdelibs
# FIXME should be more flexibile
set( CMAKE_MODULE_PATH "${CMAKE_INSTALL_PREFIX}/share/cmake" )
if( NOT EXISTS "${CMAKE_MODULE_PATH}/FindKDE3.cmake" )
  message( FATAL_ERROR
      "\n"
      "####################################################################\n "
      "${CMAKE_MODULE_PATH}/FindKDE3.cmake does not exists.\n "
      "Please pass corect CMAKE_INSTALL_PREFIX to cmake.\n"
      "####################################################################\n" )
endif( )
include( FindKDE3 )


# fontconfig
if( BUILD_KPDF OR BUILD_KSVG )
  kde_search_module( FONTCONFIG fontconfig )
endif( )


# freetype2
if( BUILD_KDVI OR BUILD_KPDF OR BUILD_KSVG )
  include( FindPkgConfig )
  pkg_search_module( FREETYPE freetype2 )
  if( FREETYPE_FOUND )
    set( HAVE_FREETYPE 1 )
  else( )
    kde_message_fatal( "freetype2 is required, but was not found on your system" )
  endif( )
endif( )
