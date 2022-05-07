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

add_subdirectory( libdjvu )

include_directories(
  ${CMAKE_CURRENT_BINARY_DIR}
  ${CMAKE_CURRENT_BINARY_DIR}/../..
  ${CMAKE_CURRENT_SOURCE_DIR}/libdjvu
  ${CMAKE_CURRENT_SOURCE_DIR}/../..
  ${CMAKE_BINARY_DIR}
  ${KDE_INCLUDE_DIR}
  ${QT_INCLUDE_DIR}
)

link_directories(
  ${TQT_LIBRARY_DIRS}
)


##### other data ################################

install( FILES djvumultipage.desktop DESTINATION ${SERVICES_INSTALL_DIR} )
install( FILES djvumultipage.kcfg DESTINATION ${KCFG_INSTALL_DIR} )
install( FILES djvumultipage.rc DESTINATION ${DATA_INSTALL_DIR} )


##### djvuviewpart (module) #####################

kde_add_kpart( djvuviewpart AUTOMOC
  SOURCES
    djvumultipage.cpp djvurenderer.cpp
    kprintDialogPage_DJVUpageoptions.cpp
    kprintDialogPage_DJVUconversionoptions.cpp
    kprintDialogPage_DJVUconversionoptions_basewidget.ui
    pageRangeWidget_base.ui pageRangeWidget.cpp prefs.kcfgc
  LINK djvu-static kmultipage-shared
  DESTINATION ${PLUGIN_INSTALL_DIR}
)
