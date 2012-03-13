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
  ${CMAKE_CURRENT_SOURCE_DIR}/../../core
  ${CMAKE_CURRENT_SOURCE_DIR}/../../dom
  ${CMAKE_CURRENT_SOURCE_DIR}/../../ecma
  ${CMAKE_CURRENT_SOURCE_DIR}/../../impl
  ${CMAKE_CURRENT_SOURCE_DIR}/../../impl/libs/libtext2path/src
  ${KDE_INCLUDE_DIR}
  ${QT_INCLUDE_DIR}
  ${FREETYPE_INCLUDE_DIRS}
)

link_directories(
  ${TQT_LIBRARY_DIRS}
)


##### svgdisplay (executable) ###################

kde_add_executable( svgdisplay AUTOMOC
  SOURCES SVGTestWidget.cc svgdisplay.cc
  LINK ksvg-shared
  DESTINATION ${BIN_INSTALL_DIR}
)


##### printnodetest (executable) ################

kde_add_executable( printnodetest AUTOMOC
  SOURCES printnodetest.cpp
  LINK ksvg-shared
  DESTINATION ${BIN_INSTALL_DIR}
)
