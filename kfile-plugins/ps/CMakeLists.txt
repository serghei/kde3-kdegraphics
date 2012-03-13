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
  ${CMAKE_SOURCE_DIR}/kghostview
  ${KDE_INCLUDE_DIR}
  ${QT_INCLUDE_DIR}
)


#### other data #################################

install( FILES kfile_ps.desktop gsthumbnail.desktop DESTINATION ${SERVICES_INSTALL_DIR} )


#### kfile_ps (module) ########################

kde_add_kpart( kfile_ps AUTOMOC
  SOURCES kfile_ps.cpp
  LINK dscparse-static kio-shared
  DESTINATION ${PLUGIN_INSTALL_DIR}
)


##### gsthumbnail (module) ######################

kde_add_kpart( gsthumbnail AUTOMOC
  SOURCES gscreator.cpp
  LINK dscparse-static ${QT_LIBRARY}
  DESTINATION ${PLUGIN_INSTALL_DIR}
)
