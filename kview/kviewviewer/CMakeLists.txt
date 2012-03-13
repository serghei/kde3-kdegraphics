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
  ${CMAKE_SOURCE_DIR}/kview
  ${KDE_INCLUDE_DIR}
  ${QT_INCLUDE_DIR}
)

link_directories(
  ${TQT_LIBRARY_DIRS}
)


##### other data ################################

install( FILES kviewviewer.desktop DESTINATION ${SERVICES_INSTALL_DIR} )
install( FILES kviewviewer.rc kviewviewer_ro.rc kviewpopup.rc DESTINATION ${DATA_INSTALL_DIR}/kviewviewer )


##### libkviewviewer (module) ###################

kde_add_kpart( libkviewviewer AUTOMOC
  SOURCES
    printimagesettings.ui imagesettings.cpp
    kviewkonqextension.cpp kviewviewer.cpp
  LINK kimageviewer-shared kutils-shared kdeprint-shared
  DESTINATION ${PLUGIN_INSTALL_DIR}
)
