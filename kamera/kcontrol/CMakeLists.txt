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
  ${GPHOTO2_INCLUDE_DIRS}
)

link_directories(
  ${TQT_LIBRARY_DIRS}
)


#### other data #################################

install( FILES kamera.desktop DESTINATION ${XDG_APPS_INSTALL_DIR} )


#### kamera (module) ############################

kde_add_kpart( kcm_kamera SHARED AUTOMOC
  SOURCES kamera.cpp kameradevice.cpp kameraconfigdialog.cpp
  LINK kio-shared ${GPHOTO2_LIBRARIES}
  DESTINATION ${PLUGIN_INSTALL_DIR}
)
