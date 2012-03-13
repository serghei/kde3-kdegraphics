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

install( FILES
    kviewpresenterconfig.desktop
  DESTINATION ${SERVICES_INSTALL_DIR}/kconfiguredialog )


##### kcm_kviewpresenterconfig (module) #########

kde_add_kpart( kcm_kviewpresenterconfig AUTOMOC
  SOURCES kviewpresenterconfig.cpp
  LINK kutils-shared
  DESTINATION ${PLUGIN_INSTALL_DIR}
)
