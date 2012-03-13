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
  ${CMAKE_SOURCE_DIR}/kfile-plugins/dependencies/poppler-tqt
)

link_directories(
  ${TQT_LIBRARY_DIRS}
)


#### other data #################################

install( FILES kfile_pdf.desktop DESTINATION ${SERVICES_INSTALL_DIR} )


#### kfile_pdf (module) #########################

kde_add_kpart( kfile_pdf AUTOMOC
  SOURCES kfile_pdf.cpp
  LINK kio-shared -L${CMAKE_BINARY_DIR}/kfile-plugins/dependencies/poppler-tqt -lpoppler-tqt
  DESTINATION ${PLUGIN_INSTALL_DIR}
)
