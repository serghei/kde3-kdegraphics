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

include( ConfigureChecks.cmake )

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

install( FILES kfile_tiff.desktop DESTINATION ${SERVICES_INSTALL_DIR} )


#### kfile_tiff (module) ########################

kde_add_kpart( kfile_tiff AUTOMOC
  SOURCES kfile_tiff.cpp
  LINK kio-shared ${TIFF_LIBRARY}
  DESTINATION ${PLUGIN_INSTALL_DIR}
)
