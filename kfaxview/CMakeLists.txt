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

kde_import( kviewshell )

add_subdirectory( libkfaximage )

include_directories(
  ${CMAKE_CURRENT_BINARY_DIR}
  ${CMAKE_CURRENT_SOURCE_DIR}/libkfaximage
  ${CMAKE_BINARY_DIR}
  ${CMAKE_SOURCE_DIR}/kviewshell
  ${KDE_INCLUDE_DIR}
  ${QT_INCLUDE_DIR}
)

link_directories(
  ${TQT_LIBRARY_DIRS}
)


#### other data #################################

kde_install_icons( kfaxview )
install( FILES kfaxview.desktop DESTINATION ${XDG_APPS_INSTALL_DIR} )
install( FILES ${CMAKE_SOURCE_DIR}/kviewshell/kviewshell.rc DESTINATION ${DATA_INSTALL_DIR}/kfaxview/kviewshell.rc )
install( FILES kfaxmultipage.desktop kfaxmultipage_tiff.desktop DESTINATION ${SERVICES_INSTALL_DIR} )


#### kfaxviewpart (module) ######################

kde_add_kpart( kfaxviewpart AUTOMOC
  SOURCES faxmultipage.cpp faxrenderer.cpp
  LINK kmultipage-shared kfaximage-static kparts-shared
  DESTINATION ${PLUGIN_INSTALL_DIR}
)


#### kfaxview (executable) ######################

kde_add_executable( kfaxview AUTOMOC
  SOURCES main.cpp
  LINK kviewshell-static kio-shared kparts-shared
  DESTINATION ${BIN_INSTALL_DIR}
)
