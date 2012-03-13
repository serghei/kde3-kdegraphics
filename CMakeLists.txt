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

cmake_minimum_required( VERSION 2.8 )


##### general package setup #####################

project( kdegraphics )
set( PACKAGE kdegraphics )
set( VERSION 3.6 )


##### features ##################################

option( WITH_ALL_FEATURES "Enable all possible features" OFF )
option( WITH_T1LIB "Enable t1lib support" ${WITH_ALL_FEATURES} )
option( WITH_LIBPAPER "Enable libpaper support" ${WITH_ALL_FEATURES} )
OPTION( WITH_TIFF "Enable tiff support (kfile-plugins)" ${WITH_ALL_FEATURES} )
OPTION( WITH_OPENEXR "Enable openexr support (kfile-plugins)" ${WITH_ALL_FEATURES} )
OPTION( WITH_PDF "Enable pdf support (kfile-plugins)" ${WITH_ALL_FEATURES} )


##### user requested modules ####################


option( BUILD_ALL "Build all" OFF )
option( BUILD_DOC "Build documentation" ${BUILD_ALL} )
option( BUILD_KAMERA "Build kamera" ${BUILD_ALL} )
option( BUILD_KCOLOREDIT "Build kcoloredit" ${BUILD_ALL} )
option( BUILD_KDVI "Build kdvi" ${BUILD_ALL} )
option( BUILD_KFAX "Build kfax" ${BUILD_ALL} )
option( BUILD_KFAXVIEW "Build kfaxview" ${BUILD_ALL} )
option( BUILD_KFILE_PLUGINS "Build kfile-plugins" ${BUILD_ALL} )
option( BUILD_KGAMMA "Build kgamma" ${BUILD_ALL} )
option( BUILD_KGHOSTVIEW "Build kghostview" ${BUILD_ALL} )
option( BUILD_KICONEDIT "Build kiconedit" ${BUILD_ALL} )
option( BUILD_KMRML "Build kmrml" ${BUILD_ALL} )
option( BUILD_KOLOURPAINT "Build kolourpaint" ${BUILD_ALL} )
option( BUILD_KOOKA "Build kooka" ${BUILD_ALL} )
option( BUILD_KPDF "Build kpdf" ${BUILD_ALL} )
option( BUILD_KPOVMODELER "Build kpovmodeler" ${BUILD_ALL} )
option( BUILD_KRULER "Build kruler" ${BUILD_ALL} )
option( BUILD_KSNAPSHOT "Build ksnapshot" ${BUILD_ALL} )
option( BUILD_KSVG "Build ksvg" ${BUILD_ALL} )
option( BUILD_KUICKSHOW "Build kuickshow" ${BUILD_ALL} )
option( BUILD_KVIEW "Build kview" ${BUILD_ALL} )
option( BUILD_KVIEWSHELL "Build kviewshell" ${BUILD_ALL} )
option( BUILD_LIBKSCAN "Build libkscan" ${BUILD_ALL} )


##### configure checks ##########################

include( ConfigureChecks.cmake )


##### kdegraphics directories ###################

kde_conditional_add_subdirectory( BUILD_DOC doc )
kde_conditional_add_subdirectory( BUILD_KAMERA kamera )
kde_conditional_add_subdirectory( BUILD_KCOLOREDIT kcoloredit )
kde_conditional_add_subdirectory( BUILD_KDVI kdvi )
kde_conditional_add_subdirectory( BUILD_KFAX kfax )
kde_conditional_add_subdirectory( BUILD_KFAXVIEW kfaxview )
kde_conditional_add_subdirectory( BUILD_KFILE_PLUGINS kfile-plugins )
kde_conditional_add_subdirectory( BUILD_KGAMMA kgamma )
kde_conditional_add_subdirectory( BUILD_KGHOSTVIEW kghostview )
kde_conditional_add_subdirectory( BUILD_KICONEDIT kiconedit )
kde_conditional_add_subdirectory( BUILD_KMRML kmrml )
kde_conditional_add_subdirectory( BUILD_KOLOURPAINT kolourpaint )
kde_conditional_add_subdirectory( BUILD_KOOKA kooka )
kde_conditional_add_subdirectory( BUILD_KPDF kpdf )
kde_conditional_add_subdirectory( BUILD_KPOVMODELER kpovmodeler )
kde_conditional_add_subdirectory( BUILD_KRULER kruler )
kde_conditional_add_subdirectory( BUILD_KSNAPSHOT ksnapshot )
kde_conditional_add_subdirectory( BUILD_KSVG ksvg )
kde_conditional_add_subdirectory( BUILD_KUICKSHOW kuickshow )
kde_conditional_add_subdirectory( BUILD_KVIEW kview )
kde_conditional_add_subdirectory( BUILD_KVIEWSHELL kviewshell )
kde_conditional_add_subdirectory( BUILD_LIBKSCAN libkscan )


##### write configure files #####################

configure_file( config.h.cmake config.h @ONLY )
