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

add_subdirectory( pics )

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

install( FILES kruler.desktop DESTINATION ${XDG_APPS_INSTALL_DIR} )
install( FILES eventsrc DESTINATION ${DATA_INSTALL_DIR}/kruler )
install( FILES move.wav DESTINATION ${DATA_INSTALL_DIR}/kruler/sounds )
install( FILES uninstall.desktop DESTINATION ${APPS_INSTALL_DIR}/Graphics RENAME kruler.desktop )


#### kruler (executable) ########################

kde_add_executable( kruler AUTOMOC
  SOURCES klineal.cpp main.cpp
  LINK kdeui-shared
  DESTINATION ${BIN_INSTALL_DIR}
)
