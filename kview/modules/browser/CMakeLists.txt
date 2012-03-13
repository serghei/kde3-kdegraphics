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
  ${CMAKE_SOURCE_DIR}/kview
  ${KDE_INCLUDE_DIR}
  ${QT_INCLUDE_DIR}
)

link_directories(
  ${TQT_LIBRARY_DIRS}
)


##### other data ################################

install( FILES
    kviewbrowser.desktop kviewbrowser.rc
  DESTINATION ${DATA_INSTALL_DIR}/kviewviewer/kpartplugins )


##### kview_browserplugin (module) ##############

kde_add_kpart( kview_browserplugin AUTOMOC
  SOURCES
    kmyfileitemlist.cpp kviewbrowser.cpp
  LINK kparts-shared
  DESTINATION ${PLUGIN_INSTALL_DIR}
)
