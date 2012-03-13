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

add_subdirectory ( pics )

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

install( FILES kiconedit.desktop DESTINATION ${XDG_APPS_INSTALL_DIR} )
install( FILES kiconeditui.rc DESTINATION ${DATA_INSTALL_DIR}/kiconedit )


#### kiconedit (executable) #####################

kde_add_executable( kiconedit AUTOMOC
  SOURCES
    utils.cpp main.cpp kiconedit.cpp kicongrid.cpp
    kiconcolors.cpp kcolorgrid.cpp palettetoolbar.cpp
    kicon.cpp kresize.cpp knew.cpp properties.cpp
    kiconeditslots.cpp kiconconfig.cpp
  LINK kio-shared kdeprint-shared
  DESTINATION ${BIN_INSTALL_DIR}
)
