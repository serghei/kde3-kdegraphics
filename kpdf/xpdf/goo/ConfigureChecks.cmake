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

include( CheckIncludeFile )

check_include_file( "dirent.h" HAVE_DIRENT_H )
if( NOT HAVE_DIRENT_H )
  check_include_file( "sys/ndir.h" HAVE_SYS_NDIR_H )
  if( NOT HAVE_SYS_NDIR_H )
    check_include_file( "sys/dir.h" HAVE_SYS_DIR_H )
    if( NOT HAVE_SYS_DIR_H )
      check_include_file( "ndir.h" HAVE_NDIR_H )
      if( NOT HAVE_NDIR_H )
        kde_message_fatal( "dirent.h is missing, this should not happen." )
      endif( )
    endif( )
  endif( )
endif( )
