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

install( FILES kviewcanvas.desktop DESTINATION ${SERVICES_INSTALL_DIR} )


##### libkviewcanvas (module) ###################

kde_add_kpart( libkviewcanvas AUTOMOC
  SOURCES kimageholder.cpp kimagecanvas.cpp
  LINK kimageviewer-shared kutils-shared
  DESTINATION ${PLUGIN_INSTALL_DIR}
)
