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
  ${CMAKE_CURRENT_SOURCE_DIR}/..
  ${CMAKE_CURRENT_SOURCE_DIR}/../goo
  ${CMAKE_BINARY_DIR}
  ${QT_INCLUDE_DIR}
)


##### fofi (static) #############################

kde_add_library( fofi STATIC_PIC
  SOURCES
    FoFiBase.cc FoFiEncodings.cc FoFiTrueType.cc FoFiType1.cc
    FoFiType1C.cc
)
