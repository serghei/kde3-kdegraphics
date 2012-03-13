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

add_subdirectory( lib )
add_subdirectory( kcontrol )
add_subdirectory( server )

include_directories(
  ${CMAKE_CURRENT_BINARY_DIR}
  ${CMAKE_CURRENT_SOURCE_DIR}/lib
  ${CMAKE_BINARY_DIR}
  ${KDE_INCLUDE_DIR}
  ${QT_INCLUDE_DIR}
)

link_directories(
  ${TQT_LIBRARY_DIRS}
)


#### other data #################################

install( FILES mrml.protocol mrml_part.desktop DESTINATION ${SERVICES_INSTALL_DIR} )
install( FILES mrml.desktop DESTINATION ${MIME_INSTALL_DIR}/text )
install( FILES mrml-servicemenu.desktop DESTINATION ${DATA_INSTALL_DIR}/konqueror/servicemenus )


#### kio_mrml (module) ##########################

kde_add_kpart( kio_mrml AUTOMOC
  SOURCES mrml.cpp
  LINK kmrmlstuff-static kio-shared
  DESTINATION ${PLUGIN_INSTALL_DIR}
)


##### libkmrmlpart (module) #######################

kde_add_kpart( libkmrmlpart AUTOMOC
  SOURCES
    mrml_part.cpp mrml_view.cpp loader.cpp mrml_elements.cpp
    mrml_creator.cpp browser.cpp algorithmdialog.cpp collectioncombo.cpp
    algorithmcombo.cpp propertysheet.cpp
  LINK kmrmlstuff-static kparts-shared
  DESTINATION ${PLUGIN_INSTALL_DIR}
)


##### mrmlsearch (kdeinit) ######################

kde_add_kdeinit_executable( mrmlsearch AUTOMOC
  SOURCES mrmlsearch.cpp
  LINK kmrmlstuff-static kdecore-shared
)
