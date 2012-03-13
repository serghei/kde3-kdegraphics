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
  ${OPENEXR_INCLUDE_DIRS}
)

link_directories(
  ${TQT_LIBRARY_DIRS}
)


#### other data #################################

install( FILES kfile_exr.desktop DESTINATION ${SERVICES_INSTALL_DIR} )


#### kfile_exr (module) #########################

kde_add_kpart( kfile_exr AUTOMOC
  SOURCES kfile_exr.cpp
  LINK kio-shared ${OPENEXR_LIBRARIES}
  DESTINATION ${PLUGIN_INSTALL_DIR}
)
