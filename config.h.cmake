#cmakedefine VERSION "@VERSION@"

// poppler-tqt
#cmakedefine HAVE_POPPLER_016

// kpdf, kdvi
#cmakedefine HAVE_FREETYPE 1

// kpdf
#cmakedefine HAVE_DIRENT_H 1
#cmakedefine HAVE_SYS_NDIR_H 1
#cmakedefine HAVE_SYS_DIR_H 1
#cmakedefine HAVE_NDIR_H 1
#cmakedefine HAVE_PAPER_H 1

// ksvg
#define STDC_HEADERS 1
#cmakedefine LCMS_HEADER <@LCMS_HEADER@>
#cmakedefine HAVE_FREETYPE_2_2_x 1
#cmakedefine FRIBIDI_NEW_FILENAME 1

// kviewshell (djvu plugin)
#cmakedefine HAVE_WCHAR_T 1
#cmakedefine HAVE_ISWSPACE 1
#cmakedefine HAVE_WCRTOMB 1
#cmakedefine HAVE_MBSTATE_T 1
#if !defined(HAVE_WCHAR_T)
  #define HAS_WCHAR 0
  #define HAS_WCTYPE 0
  #define HAS_MBSTATE 0
#else
  #define HAS_WCHAR 1
  #if defined(HAVE_WCTYPE_H) && defined(HAVE_ISWSPACE)
    #define HAS_WCTYPE 1
  #endif
  #if defined(HAVE_MBSTATE_T) && defined(HAVE_WCRTOMB)
    #define HAS_MBSTATE 1
  #endif
#endif

// kmrml
#cmakedefine HAVE_STDLIB_H 1
#cmakedefine HAVE_UNISTD_H 1

// ksnapshop
#cmakedefine HAVE_X11_EXTENSIONS_SHAPE_H 1
