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

include( ConfigureChecks.cmake )

include_directories(
  ${CMAKE_CURRENT_SOURCE_DIR}/..
  ${CMAKE_BINARY_DIR}
  ${QT_INCLUDE_DIR}
)


##### goo (static) ##############################

kde_add_library( goo STATIC_PIC
  SOURCES
    GHash.cc GList.cc GString.cc gfile.cc gmem.cc gmempp.cc
)
