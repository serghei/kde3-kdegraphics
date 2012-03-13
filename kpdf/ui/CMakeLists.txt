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
  ${CMAKE_CURRENT_BINARY_DIR}/..
  ${CMAKE_CURRENT_SOURCE_DIR}/..
  ${KDE_INCLUDE_DIR}
  ${QT_INCLUDE_DIR}
)


##### kpdfui (static) ###########################

kde_add_library( kpdfui STATIC_PIC AUTOMOC
  SOURCES
    pagepainter.cpp pageview.cpp pageviewutils.cpp minibar.cpp
    thumbnaillist.cpp searchwidget.cpp toc.cpp propertiesdialog.cpp
    presentationwidget.cpp
  DEPENDENCIES kpdfconf-static
)
