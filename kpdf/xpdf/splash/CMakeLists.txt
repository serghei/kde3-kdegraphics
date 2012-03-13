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
  ${CMAKE_CURRENT_SOURCE_DIR}/../fofi
  ${CMAKE_BINARY_DIR}
  ${QT_INCLUDE_DIR}
  ${FREETYPE_INCLUDE_DIRS}
)


##### splash (static) ###########################

kde_add_library( splash STATIC_PIC
  SOURCES
    Splash.cc SplashBitmap.cc SplashClip.cc SplashFTFont.cc
    SplashFTFontEngine.cc SplashFTFontFile.cc SplashFont.cc
    SplashFontEngine.cc SplashFontFile.cc SplashFontFileID.cc
    SplashPath.cc SplashPattern.cc SplashScreen.cc SplashState.cc
    SplashT1Font.cc SplashT1FontEngine.cc SplashT1FontFile.cc
    SplashXPath.cc SplashXPathScanner.cc
)
