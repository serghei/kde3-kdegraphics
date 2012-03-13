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
  ${KDE_INCLUDE_DIR}
  ${QT_INCLUDE_DIR}
)

link_directories(
  ${TQT_LIBRARY_DIRS}
)


##### other data ################################

kde_install_icons( photobook )
install( FILES photobook.desktop DESTINATION ${SERVICES_INSTALL_DIR} )
install( FILES photobookui.rc DESTINATION ${DATA_INSTALL_DIR}/photobook )


##### libphotobook (module) #####################

kde_add_kpart( libphotobook AUTOMOC
  SOURCES photobook.cpp
  LINK kparts-shared
  DESTINATION ${PLUGIN_INSTALL_DIR}
)
