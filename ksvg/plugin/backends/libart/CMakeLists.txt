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

# FIXME KDE_CXXFLAGS = $(USE_EXCEPTIONS)

include_directories(
  ${CMAKE_CURRENT_BINARY_DIR}
  ${CMAKE_CURRENT_SOURCE_DIR}/../../../core
  ${CMAKE_CURRENT_SOURCE_DIR}/../../../dom
  ${CMAKE_CURRENT_SOURCE_DIR}/../../../ecma
  ${CMAKE_CURRENT_SOURCE_DIR}/../../../impl
  ${CMAKE_CURRENT_SOURCE_DIR}/../../../impl/libs/libtext2path/src
  ${CMAKE_CURRENT_SOURCE_DIR}/../../../impl/libs/art_support
  ${CMAKE_BINARY_DIR}
  ${KDE_INCLUDE_DIR}
  ${QT_INCLUDE_DIR}
  ${ART_INCLUDE_DIRS}
  ${FREETYPE_INCLUDE_DIRS}
)

link_directories(
  ${TQT_LIBRARY_DIRS}
)


##### other data ################################

install( FILES
    ksvglibartcanvas.desktop
  DESTINATION ${SERVICES_INSTALL_DIR} )


##### libksvgrendererlibart (module) ############

kde_add_kpart( libksvgrendererlibart
  SOURCES
    BezierPathLibart.cpp GlyphTracerLibart.cpp LibartCanvas.cpp
    LibartCanvasItems.cpp LibartCanvasFactory.cpp
  LINK ksvg-shared
  DESTINATION ${PLUGIN_INSTALL_DIR}
)
