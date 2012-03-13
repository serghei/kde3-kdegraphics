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

add_subdirectory( pics )

include_directories(
  ${CMAKE_CURRENT_BINARY_DIR}
  ${CMAKE_BINARY_DIR}
  ${KDE_INCLUDE_DIR}
  ${QT_INCLUDE_DIR}
)

link_directories(
  ${TQT_LIBRARY_DIRS}
)


#### other data #################################

install( FILES kgamma.desktop DESTINATION ${XDG_APPS_INSTALL_DIR} )


#### kcmkgamma (module) #########################

if( HAVE_SSTREAM )
  set_source_files_properties( xvidextwrap.cpp PROPERTIES COMPILE_FLAGS "-DHAVE_SSTREAM" )
endif( )

kde_add_kpart( kcm_kgamma AUTOMOC
  SOURCES
    xf86configpath.cpp xvidextwrap.cpp
    displaynumber.cpp gammactrl.cpp kgamma.cpp
  LINK kparts-shared ${XXF86VM_LIBRARIES}
  DESTINATION ${PLUGIN_INSTALL_DIR}
)
