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


#### kfaximage (library) ########################

kde_add_library( kfaximage STATIC_PIC AUTOMOC
  SOURCES kfaximage.cpp faxexpand.cpp faxinit.cpp
)

#### kfaximage (shared library) ########################

kde_add_library( kfaximage SHARED AUTOMOC
  SOURCES kfaximage.cpp faxexpand.cpp faxinit.cpp
  VERSION 1.0.0
  LINK kparts-shared ${TQT_LIBRARIES}
  DESTINATION ${LIB_INSTALL_DIR}
)