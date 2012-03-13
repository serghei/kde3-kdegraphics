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

kde_import( libkscan )

add_subdirectory( pics )

include_directories(
  ${CMAKE_CURRENT_BINARY_DIR}
  ${CMAKE_BINARY_DIR}
  ${CMAKE_SOURCE_DIR}/libkscan
  ${KDE_INCLUDE_DIR}
  ${QT_INCLUDE_DIR}
)

link_directories(
  ${TQT_LIBRARY_DIRS}
)


##### other data ################################

install( FILES kooka.desktop DESTINATION ${XDG_APPS_INSTALL_DIR} )
install( FILES kookarc DESTINATION ${CONFIG_INSTALL_DIR} )
install( FILES kookaui.rc DESTINATION ${DATA_INSTALL_DIR}/kooka )


##### kooka (executable) ########################

kde_add_executable( kooka AUTOMOC
  SOURCES
    main.cpp kooka.cpp kookaview.cpp kookapref.cpp img_saver.cpp
    ksaneocr.cpp kookaimage.cpp kookaimagemeta.cpp scanpackager.cpp
    imgnamecombo.cpp imageselectline.cpp thumbview.cpp thumbviewitem.cpp
    dwmenuaction.cpp kocrbase.cpp kocrgocr.cpp kocrkadmos.cpp
    kadmosocr.cpp ocrword.cpp ocrresedit.cpp kookaprint.cpp
    imgprintdialog.cpp kocrocrad.cpp
  LINK kscan-shared kparts-shared kdeprint-shared
  DESTINATION ${BIN_INSTALL_DIR}
)
