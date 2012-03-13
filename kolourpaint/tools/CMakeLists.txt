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
  ${CMAKE_CURRENT_SOURCE_DIR}/../pixmapfx
  ${CMAKE_CURRENT_SOURCE_DIR}/../widgets
  ${CMAKE_CURRENT_SOURCE_DIR}/../cursors
  ${KDE_INCLUDE_DIR}
  ${QT_INCLUDE_DIR}
)


##### kolourpainttools (static) #################

kde_add_library( kolourpainttools STATIC_PIC AUTOMOC
  SOURCES
    kptoolaction.cpp kptoolairspray.cpp kptoolautocrop.cpp
    kptoolbrush.cpp kptoolclear.cpp kptoolcolorpicker.cpp
    kptoolcolorwasher.cpp kptoolconverttograyscale.cpp kptoolcrop.cpp
    kptoolcurve.cpp kptoolellipse.cpp kptoolellipticalselection.cpp
    kptooleraser.cpp kptoolflip.cpp kptoolfloodfill.cpp
    kptoolfreeformselection.cpp kptoolline.cpp kptoolpen.cpp
    kptoolpolygon.cpp kptoolpolyline.cpp kptoolpreviewdialog.cpp
    kptoolrectangle.cpp kptoolrectselection.cpp kptoolresizescale.cpp
    kptoolrotate.cpp kptoolroundedrectangle.cpp kptoolselection.cpp
    kptoolskew.cpp kptooltext.cpp
)
