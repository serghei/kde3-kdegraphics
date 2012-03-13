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

check_include_file( stdlib.h HAVE_STDLIB_H )
check_include_file( unistd.h HAVE_UNISTD_H )
