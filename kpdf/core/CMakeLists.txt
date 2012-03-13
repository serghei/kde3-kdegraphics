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

add_subdirectory( generator_pdf )
add_subdirectory( generator_kimgio )

include_directories(
  ${CMAKE_CURRENT_BINARY_DIR}
  ${CMAKE_CURRENT_BINARY_DIR}/..
  ${CMAKE_CURRENT_SOURCE_DIR}/..
  ${CMAKE_CURRENT_SOURCE_DIR}/../xpdf
  ${CMAKE_CURRENT_SOURCE_DIR}/../xpdf/goo
  ${CMAKE_BINARY_DIR}
  ${KDE_INCLUDE_DIR}
  ${QT_INCLUDE_DIR}
)


##### kpdfcore (static) #########################

kde_add_library( kpdfcore STATIC_PIC AUTOMOC
  SOURCES
    document.cpp link.cpp page.cpp pagetransition.cpp
  DEPENDENCIES kpdfconf-static
)
