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

include( ConfigureChecks.cmake )

add_definitions(
  -DKSNAPVERSION="0.7"
)

include_directories(
  ${CMAKE_CURRENT_BINARY_DIR}
  ${CMAKE_CURRENT_SOURCE_DIR}
  ${CMAKE_BINARY_DIR}
  ${KDE_INCLUDE_DIR}
  ${QT_INCLUDE_DIR}
)

link_directories(
  ${TQT_LIBRARY_DIRS}
)


##### other data ################################

kde_install_icons( ksnapshot )
install( FILES ksnapshot.desktop DESTINATION ${XDG_APPS_INSTALL_DIR} )


##### ksnapshot (executable) ####################

kde_add_executable( ksnapshot AUTOMOC
  SOURCES
    ksnapshotiface.skel main.cpp ksnapshot.cpp regiongrabber.cpp
    windowgrabber.cpp ksnapshotwidget.ui
  LINK kdeprint-shared
  DESTINATION ${BIN_INSTALL_DIR}
)
