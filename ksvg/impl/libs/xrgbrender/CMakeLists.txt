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
)


##### ksvgxrgbrender (static) ###################

kde_add_library( ksvgxrgbrender STATIC_PIC
  SOURCES
    gdk-pixbuf-xlib.c gdk-pixbuf-xlib-drawable.c gdk-pixbuf-xlibrgb.c
)
