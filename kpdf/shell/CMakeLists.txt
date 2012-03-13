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

install( FILES kpdf.desktop DESTINATION ${XDG_APPS_INSTALL_DIR} )
install( FILES shell.rc DESTINATION ${DATA_INSTALL_DIR}/kpdf )


##### kpdf (executable) #########################

kde_add_executable( kpdf AUTOMOC
  SOURCES main.cpp shell.cpp
  LINK kparts-shared
  DESTINATION ${BIN_INSTALL_DIR}
)
