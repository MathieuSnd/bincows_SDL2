

#ifndef _SDL_config_bincows_h
#define _SDL_config_bincows_h

#include "SDL_platform.h"

/* This is a set of defines to configure the SDL features */

#define SDL_HAS_64BIT_TYPE	1

/* Use LIBC */
#define HAVE_LIBC 1

/* Useful headers */
//#define HAVE_SYS_TYPES_H 1
#define HAVE_STDIO_H 1
#define STDC_HEADERS 1
#define HAVE_STDLIB_H 1
#define HAVE_STDARG_H 1
#define HAVE_MALLOC_H 1
#define HAVE_MEMORY_H 1
#define HAVE_STRING_H 1
// #define HAVE_STRINGS_H 1
// #define HAVE_INTTYPES_H 1
#define HAVE_STDINT_H 1
#define HAVE_CTYPE_H 1
//#define HAVE_MATH_H 1
#define HAVE_SIGNAL_H 1


/* C library functions */
#define HAVE_MALLOC 1
// #define HAVE_CALLOC 1
#define HAVE_REALLOC 1
#define HAVE_FREE 1
#define HAVE_ALLOCA 1
#define HAVE_GETENV 1
#define HAVE_PUTENV 1
#define HAVE_UNSETENV 1
// #define HAVE_QSORT 1
// #define HAVE_ABS 1
// #define HAVE_BCOPY 1
#define HAVE_MEMSET 1
#define HAVE_MEMCPY 1
#define HAVE_MEMMOVE 1
#define HAVE_MEMCMP 1
#define HAVE_STRLEN 1
// #define HAVE_STRLCPY 1
// #define HAVE_STRLCAT 1
#define HAVE_STRDUP 1
// #define HAVE__STRREV 1
// #define HAVE__STRUPR 1
// #define HAVE__STRLWR 1
// #define HAVE_INDEX 1
// #define HAVE_RINDEX 1
#define HAVE_STRCHR 1
#define HAVE_STRRCHR 1
#define HAVE_STRSTR 1
// #define HAVE_ITOA 1
// #define HAVE__LTOA 1
// #define HAVE__UITOA 1
// #define HAVE__ULTOA 1
// #define HAVE_STRTOL 1
// #define HAVE__I64TOA 1
// #define HAVE__UI64TOA 1
// #define HAVE_STRTOLL 1
// #define HAVE_STRTOD 1
// #define HAVE_ATOI 1
// #define HAVE_ATOF 1
#define HAVE_STRCMP 1
#define HAVE_STRNCMP 1
#define HAVE_STRICMP 1
// #define HAVE_STRCASECMP 1
// #define HAVE_SSCANF 1
// #define HAVE_SNPRINTF 1
// #define HAVE_VSNPRINTF 1
// #define HAVE_SETJMP 1
// #define HAVE_CLOCK_GETTIME 1

/* Enable various video drivers */
// #define SDL_VIDEO_DRIVER_DUMMY	1
// #define SDL_VIDEO_DRIVER_BINCOWS2FS	1

/* Enable OpenGL support */
// no

#define SDL_THREAD_PTHREAD	1
#define SDL_THREAD_PTHREAD_RECURSIVE_MUTEX	1   

#define SDL_TIMER_DUMMY  1
#define SDL_FILESYSTEM_DUMMY  1

#define SDL_FILESYSTEM_UNIX 1
#define SDL_LOADSO_DLOPEN   0

#define SDL_HAPTIC_DUMMY 1
#define HAVE_GCC_ATOMICS 1


#endif /* _SDL_config_bincows_h */
