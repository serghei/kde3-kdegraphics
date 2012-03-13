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
  ${CMAKE_BINARY_DIR}
  ${KDE_INCLUDE_DIR}
  ${QT_INCLUDE_DIR}
)

link_directories(
  ${TQT_LIBRARY_DIRS}
)


#### other data #################################

install( FILES kfile_dvi.desktop DESTINATION ${SERVICES_INSTALL_DIR} )


#### kfile_dvi (module) #########################

kde_add_kpart( kfile_dvi AUTOMOC
  SOURCES kfile_dvi.cpp
  LINK kio-shared
  DESTINATION ${PLUGIN_INSTALL_DIR}
)
