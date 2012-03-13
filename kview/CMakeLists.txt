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

add_subdirectory( kimageviewer )
add_subdirectory( config )
add_subdirectory( kviewcanvas )
add_subdirectory( kviewviewer )
add_subdirectory( modules )
add_subdirectory( photobook )

include_directories(
  ${CMAKE_CURRENT_BINARY_DIR}
  ${CMAKE_BINARY_DIR}
  ${KDE_INCLUDE_DIR}
  ${QT_INCLUDE_DIR}
)

link_directories(
  ${TQT_LIBRARY_DIRS}
)


##### other data ################################

kde_install_icons( kview )
install( FILES kview.desktop DESTINATION ${XDG_APPS_INSTALL_DIR} )
install( FILES kviewui.rc DESTINATION ${DATA_INSTALL_DIR}/kview )


##### kview (kdeinit) ###########################

kde_add_kdeinit_executable( kview AUTOMOC
  SOURCES kview.cpp main.cpp
  LINK kparts-shared kutils-shared
)
