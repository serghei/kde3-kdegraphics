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
  ${CMAKE_CURRENT_SOURCE_DIR}/../..
  ${KDE_INCLUDE_DIR}
  ${QT_INCLUDE_DIR}
)


##### generatorkimgio (static) ##################

kde_add_library( generatorkimgio STATIC_PIC
  SOURCES generator_kimgio.cpp
)
