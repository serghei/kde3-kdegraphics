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

install( FILES kfax.desktop DESTINATION ${XDG_APPS_INSTALL_DIR} )
install( FILES kfax.tif kfaxlogo.xpm DESTINATION ${DATA_INSTALL_DIR}/kfax/pics )
install( FILES kfaxui.rc DESTINATION ${DATA_INSTALL_DIR}/kfax )


#### kruler (executable) ########################

kde_add_executable( kfax AUTOMOC
  SOURCES
    options.cpp kfax.cpp faxexpand.cpp faxinit.cpp
    faxinput.cpp viewfax.cpp kfax_printsettings.cpp
  LINK kdeui-shared kdeprint-shared
  DESTINATION ${BIN_INSTALL_DIR}
)

#### icons ########################

kde_install_icons( kfax )