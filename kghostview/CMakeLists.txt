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

add_subdirectory( data )

include_directories(
  ${CMAKE_CURRENT_BINARY_DIR}
  ${CMAKE_BINARY_DIR}
  ${KDE_INCLUDE_DIR}
  ${QT_INCLUDE_DIR}
)


#### other data #################################

kde_install_icons( kghostview )
install( FILES kghostview.desktop DESTINATION ${XDG_APPS_INSTALL_DIR} )
install( FILES kghostview_part.desktop DESTINATION ${SERVICES_INSTALL_DIR} )
install( FILES kgv_part.rc kghostviewui.rc DESTINATION ${DATA_INSTALL_DIR}/kghostview )
install( FILES kghostview.kcfg DESTINATION ${KCFG_INSTALL_DIR} )
install( FILES kghostview.upd DESTINATION ${KCONF_UPDATE_INSTALL_DIR} )
install( PROGRAMS update-to-xt-names.pl DESTINATION ${KCONF_UPDATE_INSTALL_DIR} )


#### kghostviewlib (shared) #####################

kde_add_library( kghostviewlib SHARED AUTOMOC
  SOURCES
    kgvshell.cpp kgvdocument.cpp kgv_miniwidget.cpp
    marklist.cpp logwindow.cpp infodialog.cpp kgvpageview.cpp ps.c
    kgv_view.cpp scrollbox.cpp  kgvpagedecorator.cpp
    kgvconfigdialog.cpp kgvmainwidget.cpp  kdscerrordialog.cpp
    displayoptions.cpp kpswidget.cpp fullscreenfilter.cpp
    kgvfactory.cpp  generalsettingswidget.ui gssettingswidget.ui
    thumbnailservice.cpp  configuration.kcfgc
  LINK dscparse-static kdeprint-shared kparts-shared
  VERSION 0.0.0
  DESTINATION ${LIB_INSTALL_DIR}
)


#### kghostviewpart (module) ####################

kde_add_kpart( libkghostviewpart AUTOMOC
  SOURCES part_init.cpp
  LINK kghostviewlib-shared
  DESTINATION ${PLUGIN_INSTALL_DIR}
)


#### kghostview (executable) ####################

kde_add_executable( kghostview AUTOMOC
  SOURCES main.cpp
  LINK kghostviewlib-shared
  DESTINATION ${BIN_INSTALL_DIR}
)


##### dscparse (static) #########################

kde_add_library( dscparse STATIC_PIC AUTOMOC
  SOURCES dscparse.cpp dscparse_adapter.cpp
)
