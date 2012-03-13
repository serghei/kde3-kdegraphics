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

project( libksane )

include( ConfigureChecks.cmake )

add_subdirectory( pics )

include_directories(
  ${CMAKE_CURRENT_BINARY_DIR}
  ${CMAKE_CURRENT_SOURCE_DIR}
  ${KDE_INCLUDE_DIR}
  ${QT_INCLUDE_DIR}
  ${SANE_INCLUDE_DIRS}
)

link_directories(
  ${TQT_LIBRARY_DIRS}
)


##### other data ################################

install( FILES scanservice.desktop DESTINATION ${SERVICES_INSTALL_DIR} )


##### kscan (shared) ############################

kde_add_library( kscan SHARED AUTOMOC
  SOURCES
    kscandevice.cpp kscanslider.cpp kgammatable.cpp kscanoption.cpp
    kscanoptset.cpp gammadialog.cpp dispgamma.cpp scansourcedialog.cpp
    scanparams.cpp massscandialog.cpp devselector.cpp scandialog.cpp
    img_canvas.cpp previewer.cpp imgscaledialog.cpp sizeindicator.cpp
    imgscaninfo.cpp
  VERSION 1.0.0
  LINK kio-shared ${SANE_LIBRARIES}
  DESTINATION ${LIB_INSTALL_DIR}
)


##### install cmake export file #################

kde_install_export( )
