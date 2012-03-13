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

include_directories(
  ${CMAKE_CURRENT_BINARY_DIR}
  ${CMAKE_CURRENT_SOURCE_DIR}
  ${CMAKE_CURRENT_SOURCE_DIR}/..
  ${CMAKE_CURRENT_SOURCE_DIR}/../tools
  ${KDE_INCLUDE_DIR}
  ${QT_INCLUDE_DIR}
)


##### kolourpaintpixmapfx (static) ##############

kde_add_library( kolourpaintpixmapfx STATIC_PIC AUTOMOC
  SOURCES
    kpcoloreffect.cpp kpeffectbalance.cpp kpeffectblursharpen.cpp
    kpeffectemboss.cpp kpeffectflatten.cpp kpeffectinvert.cpp
    kpeffectreducecolors.cpp kpeffectsdialog.cpp kpfloodfill.cpp
    kppixmapfx.cpp
)
