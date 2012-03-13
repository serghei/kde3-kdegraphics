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

add_subdirectory( config )

include_directories(
  ${CMAKE_CURRENT_BINARY_DIR}
  ${CMAKE_CURRENT_SOURCE_DIR}
  ${CMAKE_SOURCE_DIR}/kview
  ${KDE_INCLUDE_DIR}
  ${QT_INCLUDE_DIR}
)

link_directories(
  ${TQT_LIBRARY_DIRS}
)


##### other data ################################

install( FILES
    kviewpresenter.desktop kviewpresenter.rc
  DESTINATION ${DATA_INSTALL_DIR}/kview/kpartplugins )


##### kview_presenterplugin (module) ############

kde_add_kpart( kview_presenterplugin AUTOMOC
  SOURCES
    imagelistitem.cpp imagelistdialog.ui kviewpresenter.cpp
  LINK kio-shared kparts-shared
  DESTINATION ${PLUGIN_INSTALL_DIR}
)
