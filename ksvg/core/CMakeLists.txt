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
  ${CMAKE_CURRENT_SOURCE_DIR}
  ${CMAKE_CURRENT_SOURCE_DIR}/../dom
  ${CMAKE_CURRENT_SOURCE_DIR}/../ecma
  ${CMAKE_CURRENT_SOURCE_DIR}/../impl
  ${CMAKE_CURRENT_SOURCE_DIR}/../impl/libs/libtext2path/src
  ${CMAKE_CURRENT_SOURCE_DIR}/../impl/libs/art_support
  ${KDE_INCLUDE_DIR}
  ${QT_INCLUDE_DIR}
  ${FREETYPE_INCLUDE_DIRS}
)


##### headers ###################################

install( FILES
    KSVGCanvas.h CanvasItems.h CanvasItem.h
    CanvasFactory.h DocumentFactory.h
  DESTINATION ${INCLUDE_INSTALL_DIR}/ksvg )


##### other data ################################

install( FILES
    ksvgrenderer.desktop
  DESTINATION ${SERVICETYPES_INSTALL_DIR} )


##### ksvgcore (static) #########################

kde_add_library( ksvgcore STATIC_PIC AUTOMOC
  SOURCES
    KSVGLoader.cpp KSVGCanvas.cpp KSVGReader.cc KSVGTextChunk.cpp
    CanvasFactory.cpp CanvasItems.cpp KSVGHelper.cpp DocumentFactory.cpp
)
