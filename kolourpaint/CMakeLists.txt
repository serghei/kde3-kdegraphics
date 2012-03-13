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

add_subdirectory( cursors )
add_subdirectory( pics )
add_subdirectory( pixmapfx )
add_subdirectory( tools )
add_subdirectory( views )
add_subdirectory( widgets )


include_directories(
  ${CMAKE_CURRENT_BINARY_DIR}
  ${CMAKE_CURRENT_SOURCE_DIR}
  ${CMAKE_CURRENT_SOURCE_DIR}/pixmapfx
  ${CMAKE_CURRENT_SOURCE_DIR}/tools
  ${CMAKE_CURRENT_SOURCE_DIR}/views
  ${CMAKE_CURRENT_SOURCE_DIR}/widgets
  ${KDE_INCLUDE_DIR}
  ${QT_INCLUDE_DIR}
)

link_directories(
  ${TQT_LIBRARY_DIRS}
)


##### other data ################################

install( FILES kolourpaint.desktop DESTINATION ${XDG_APPS_INSTALL_DIR} )
install( FILES kolourpaintui.rc DESTINATION ${DATA_INSTALL_DIR}/kolourpaint )


##### kolourpaint (executable) ##################

kde_file_to_cpp( COPYING kolourpaintlicense.h kpLicenseText )
kde_file_to_cpp( VERSION kolourpaintversion.h kpVersionText )

kde_add_executable( kolourpaint AUTOMOC
  SOURCES
    kolourpaint.cpp kpdocument.cpp kpdocumentmetainfo.cpp
    kpdocumentsaveoptions.cpp kpdocumentsaveoptionswidget.cpp
    kpview.cpp kpcolor.cpp kpcommandhistory.cpp kpmainwindow.cpp
    kpmainwindow_edit.cpp kpmainwindow_help.cpp
    kpmainwindow_image.cpp kpmainwindow_tools.cpp
    kpmainwindow_file.cpp kpmainwindow_settings.cpp
    kpmainwindow_statusbar.cpp kpmainwindow_text.cpp
    kpmainwindow_view.cpp kpselection.cpp kpselectiondrag.cpp
    kpselectiontransparency.cpp kpsinglekeytriggersaction.cpp
    kptemppixmap.cpp kptextstyle.cpp kpthumbnail.cpp kptool.cpp
    kpviewmanager.cpp kpviewscrollablecontainer.cpp kpwidgetmapper.cpp
  LINK
    kolourpainttools-static kolourpaintpixmapfx-static kolourpaintcursors-static
    kolourpaintviews-static kolourpaintwidgets-static
    kdeprint-shared
  DESTINATION ${BIN_INSTALL_DIR}
)
