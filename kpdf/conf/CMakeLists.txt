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
  ${CMAKE_CURRENT_BINARY_DIR}/..
  ${CMAKE_BINARY_DIR}
  ${KDE_INCLUDE_DIR}
  ${QT_INCLUDE_DIR}
)


##### other data ################################

install( FILES kpdf.kcfg DESTINATION ${KCFG_INSTALL_DIR} )


##### kpdfconf (static) #########################

kde_add_library( kpdfconf STATIC_PIC
  SOURCES
    dlggeneral.ui dlgperformance.ui dlgaccessibility.ui
    dlgpresentation.ui preferencesdialog.cpp settings.kcfgc
)
