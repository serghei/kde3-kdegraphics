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
  ${CMAKE_BINARY_DIR}
  ${QT_INCLUDE_DIR}
)


#### xf86gammacfg (executable) ##################

if( HAVE_SSTREAM )
  set_source_files_properties( xf86gammacfg.cpp PROPERTIES COMPILE_FLAGS "-DHAVE_SSTREAM" )
endif( )

kde_add_executable( xf86gammacfg
  SOURCES xf86gammacfg.cpp
  DESTINATION ${BIN_INSTALL_DIR}
)
