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

include( ConfigureChecks.cmake )

add_subdirectory( dom )
add_subdirectory( impl )
add_subdirectory( core )
add_subdirectory( ecma )
add_subdirectory( plugin )
add_subdirectory( test )

include_directories(
  ${QT_INCLUDE_DIR}
)


##### ksvg (shared) #############################

configure_file( ${TEMPLATE_DUMMY_CPP} dummy.cpp COPYONLY )

kde_add_library( ksvg SHARED
  SOURCES dummy.cpp
  VERSION 0.0.1
  EMBED
    ksvgdom-static ksvgdomimpl-static ksvgcore-static ksvgecma-static
    ksvgxrgbrender-static text2path-static ksvgart-static
  LINK
    khtml-shared ${LCMS_LIBRARY} ${ART_LIBRARIES} ${FRIBIDI_LIBRARIES}
    ${FREETYPE_LIBRARIES} ${FONTCONFIG_LIBRARIES}
  DESTINATION ${LIB_INSTALL_DIR}
)
