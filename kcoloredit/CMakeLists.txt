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

kde_install_icons( kcoloredit kcolorchooser )

install( FILES
    kcoloredit.desktop kcolorchooser.desktop
  DESTINATION ${XDG_APPS_INSTALL_DIR} )

install( FILES
    kcoloreditui.rc
  DESTINATION ${DATA_INSTALL_DIR}/kcoloredit )


#### kcoloredit (executable) ####################

kde_add_executable( kcoloredit AUTOMOC
  SOURCES
    kzcolorselector.cpp imageselection.cpp
    texteditselection.cpp gradientselection.cpp colorselector.cpp
    kxycolorselector.cpp paletteview.cpp paletteviewscrolledarea.cpp
    editablestreamhistory.cpp color.cpp palette.cpp loadpalettedlg.cpp
    kcoloreditview.cpp kcoloreditdoc.cpp kcoloredit.cpp main.cpp
  LINK kio-shared
  DESTINATION ${BIN_INSTALL_DIR}
)


##### kcolorchooser (executable) ################

kde_add_executable( kcolorchooser AUTOMOC
  SOURCES kcolorchooser.cpp
  LINK kdeui-shared
  DESTINATION ${BIN_INSTALL_DIR}
)
