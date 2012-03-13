#################################################
#
#  (C) 2010-2011 Calvin Morrison
#  mutantturkey@gmail.com
#
#  Improvements and feedback are welcome
#
#  This file is released under GPL >= 2
#
#################################################

include_directories(
  ${CMAKE_CURRENT_BINARY_DIR}
  ${CMAKE_CURRENT_SOURCE_DIR}/../lib
  ${CMAKE_BINARY_DIR}
  ${KDE_INCLUDE_DIR}
  ${QT_INCLUDE_DIR}
)

link_directories(
  ${TQT_LIBRARY_DIRS}
)

#### other data #################################

INSTALL( FILES kcmkmrml.desktop DESTINATION ${XDG_APPS_INSTALL_DIR} )


#### kcm_kmrml (module) ###########################

kde_add_kpart( kcm_kmrml AUTOMOC
  SOURCES
    kcmkmrml.cpp mainpage.cpp indexer.cpp
    serverconfigwidget.ui indexcleaner.cpp
  LINK
    kmrmlstuff-static kparts-shared kio-shared
  DESTINATION ${PLUGIN_INSTALL_DIR}
)
