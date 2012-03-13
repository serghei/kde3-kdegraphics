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
  ${CMAKE_CURRENT_SOURCE_DIR}/../splash
  ${CMAKE_BINARY_DIR}
  ${QT_INCLUDE_DIR}
  ${FREETYPE_INCLUDE_DIRS}
)


##### xpdf (static) #############################

kde_add_library( xpdf STATIC_PIC
  SOURCES
    Annot.cc Array.cc BuiltinFont.cc BuiltinFontTables.cc
    Catalog.cc CharCodeToUnicode.cc CMap.cc Decrypt.cc Dict.cc
    FontEncodingTables.cc Function.cc Gfx.cc GfxFont.cc GfxState.cc
    GlobalParams.cc JArithmeticDecoder.cc JBIG2Stream.cc Lexer.cc Link.cc
    NameToCharCode.cc Object.cc Outline.cc OutputDev.cc PDFDoc.cc
    PDFDocEncoding.cc PreScanOutputDev.cc PSTokenizer.cc Page.cc
    Parser.cc PSOutputDev.cc SecurityHandler.cc SplashOutputDev.cc
    Stream.cc JPXStream.cc TextOutputDev.cc UnicodeMap.cc
    UnicodeTypeTable.cc XRef.cc
)
