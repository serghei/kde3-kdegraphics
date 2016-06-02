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
  ${CMAKE_CURRENT_SOURCE_DIR}
  ${CMAKE_BINARY_DIR}
  ${QT_INCLUDE_DIR}
  ${KDE_INCLUDE_DIR}
  ${FREETYPE_INCLUDE_DIRS}
  ${FRIBIDI_INCLUDE_DIRS}
  ${FONTCONFIG_INCLUDE_DIRS}
)


##### headers ###################################

install( FILES
    BezierPath.h Glyph.h GlyphTracer.h
  DESTINATION ${INCLUDE_INSTALL_DIR}/libtext2path-0.1 )



##### text2path (static) ########################

kde_add_library( text2path STATIC_PIC
  SOURCES
    Affine.cpp Rectangle.cpp Font.cpp Glyph.cpp
    GlyphTracer.cpp Converter.cpp QtUnicode.cpp
)

##### text2path (shared) ########################

kde_add_library( text2path SHARED
  SOURCES
    Affine.cpp Rectangle.cpp Font.cpp Glyph.cpp
    GlyphTracer.cpp Converter.cpp QtUnicode.cpp
  VERSION 0.0.0
  LINK ${FREETYPE_LIBRARIES} ${FRIBIDI_LIBRARIES} ${FONTCONFIG_LIBRARIES}
  DESTINATION ${LIB_INSTALL_DIR}
)
