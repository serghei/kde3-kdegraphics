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
  ${KDE_INCLUDE_DIR}
  ${QT_INCLUDE_DIR}
)

link_directories(
  ${TQT_LIBRARY_DIRS}
)


##### other data ################################

install( FILES
    kimageviewercanvas.desktop kimageviewer.desktop
  DESTINATION ${SERVICETYPES_INSTALL_DIR} )


##### kimageviewer (shared) #####################

kde_add_library( kimageviewer SHARED AUTOMOC
  SOURCES canvas.cpp viewer.cpp
  VERSION 0.0.0
  LINK kparts-shared
  DESTINATION ${LIB_INSTALL_DIR}
)
