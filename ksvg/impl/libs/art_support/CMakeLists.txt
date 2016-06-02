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
  ${CMAKE_BINARY_DIR}
  ${KDE_INCLUDE_DIR}
  ${ART_INCLUDE_DIRS}
)


##### ksvgart (static) ##########################

kde_add_library( ksvgart STATIC_PIC
  SOURCES
    art_render_misc.c art_rgba_svp.c art_misc.c
)
