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

add_definitions(
  -DUNIX
  -DHAVE_STDINCLUDES
)

include_directories(
  ${CMAKE_BINARY_DIR}
  ${QT_INCLUDE_DIR}
)


##### djvu (shared) #############################

kde_add_library( djvu STATIC_PIC
  SOURCES
    Arrays.cpp DjVuDocEditor.cpp DjVuMessageLite.cpp GOS.cpp IW44Image.cpp
    BSByteStream.cpp DjVuDocument.cpp DjVuNavDir.cpp GPixmap.cpp JB2EncodeCodec.cpp
    BSEncodeByteStream.cpp DjVuDumpHelper.cpp DjVuPalette.cpp GRect.cpp
    JB2Image.cpp ByteStream.cpp DjVuErrorList.cpp DjVuPort.cpp GScaler.cpp
    JPEGDecoder.cpp DataPool.cpp DjVuFileCache.cpp DjVuText.cpp GSmartPointer.cpp
    MMRDecoder.cpp DjVuFile.cpp DjVuToPS.cpp GString.cpp MMX.cpp DjVmNav.cpp
    debug.cpp DjVuGlobal.cpp GBitmap.cpp GThreads.cpp UnicodeByteStream.cpp
    DjVmDir0.cpp DjVuGlobalMemory.cpp GContainer.cpp GUnicode.cpp XMLParser.cpp
    DjVmDir.cpp DjVuImage.cpp GException.cpp GURL.cpp XMLTags.cpp DjVmDoc.cpp
    DjVuInfo.cpp GIFFManager.cpp IFFByteStream.cpp ZPCodec.cpp DjVuAnno.cpp
    DjVuMessage.cpp GMapAreas.cpp IW44EncodeCodec.cpp
  DESTINATION ${LIB_INSTALL_DIR}
)
