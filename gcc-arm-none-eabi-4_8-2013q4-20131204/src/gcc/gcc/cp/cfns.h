/* C++ code produced by gperf version 3.1 */
/* Command-line: gperf -L C++ -Z libc_name_p cfns.gperf  */
/* Computed positions: -k'1,3-4,6' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gperf@gnu.org>."
#endif

#line 1 "cfns.gperf"

/* Copyright (C) 2000-2013 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free
Software Foundation; either version 3, or (at your option) any later
version.

GCC is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received a copy of the GNU General Public License
along with GCC; see the file COPYING3.  If not see
<http://www.gnu.org/licenses/>.  */
#ifdef __GNUC__
__inline
#endif
static unsigned int hash (const char *, unsigned int);
#ifdef __GNUC__
static __inline
#endif
const char * libc_name_p (const char *, unsigned int);

#define TOTAL_KEYWORDS 156
#define MIN_WORD_LENGTH 3
#define MAX_WORD_LENGTH 10
#define MIN_HASH_VALUE 3
#define MAX_HASH_VALUE 517
/* maximum key range = 515, duplicates = 0 */

class libc_name_p
{
private:
  static inline unsigned int hash (const char *str, size_t len);
public:
  static const char *in_word_set (const char *str, size_t len);
};

inline unsigned int
libc_name_p::hash (const char *str, size_t len)
{
  static unsigned short asso_values[] =
    {
      518, 518, 518, 518, 518, 518, 518, 518, 518, 518,
      518, 518, 518, 518, 518, 518, 518, 518, 518, 518,
      518, 518, 518, 518, 518, 518, 518, 518, 518, 518,
      518, 518, 518, 518, 518, 518, 518, 518, 518, 518,
      518, 518, 518, 518, 518, 518, 518, 518, 518,   5,
      518, 518, 518, 518, 518, 518, 518, 518, 518, 518,
      518, 518, 518, 518, 518, 518, 518, 518, 518, 518,
      518, 518, 518, 518, 518, 518, 518, 518, 518, 518,
      518, 518, 518, 518, 518, 518, 518, 518, 518, 518,
      518, 518, 518, 518, 518, 518, 518,  25, 180,  10,
       90, 100,  10, 210,  10,  65,  50, 518,  60,  70,
       20,  40,   0, 115,   5,   0,  10, 150, 250,   0,
      160,   5,  80, 518, 518, 518, 518, 518, 518, 518,
      518, 518, 518, 518, 518, 518, 518, 518, 518, 518,
      518, 518, 518, 518, 518, 518, 518, 518, 518, 518,
      518, 518, 518, 518, 518, 518, 518, 518, 518, 518,
      518, 518, 518, 518, 518, 518, 518, 518, 518, 518,
      518, 518, 518, 518, 518, 518, 518, 518, 518, 518,
      518, 518, 518, 518, 518, 518, 518, 518, 518, 518,
      518, 518, 518, 518, 518, 518, 518, 518, 518, 518,
      518, 518, 518, 518, 518, 518, 518, 518, 518, 518,
      518, 518, 518, 518, 518, 518, 518, 518, 518, 518,
      518, 518, 518, 518, 518, 518, 518, 518, 518, 518,
      518, 518, 518, 518, 518, 518, 518, 518, 518, 518,
      518, 518, 518, 518, 518, 518, 518, 518, 518, 518,
      518, 518, 518, 518, 518, 518, 518
    };
  unsigned int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[static_cast<unsigned char>(str[5]+1)];
      /*FALLTHROUGH*/
      case 5:
      case 4:
        hval += asso_values[static_cast<unsigned char>(str[3])];
      /*FALLTHROUGH*/
      case 3:
        hval += asso_values[static_cast<unsigned char>(str[2])];
      /*FALLTHROUGH*/
      case 2:
      case 1:
        hval += asso_values[static_cast<unsigned char>(str[0])];
        break;
    }
  return hval;
}

const char *
libc_name_p::in_word_set (const char *str, size_t len)
{
  static const char * wordlist[] =
    {
      "", "", "",
      "pow",
      "", "",
      "wcsstr",
      "wcspbrk",
      "", "", "",
      "strstr",
      "strpbrk",
      "cos",
      "wcsrtombs",
      "",
      "wcschr",
      "", "",
      "sqrt",
      "",
      "strchr",
      "",
      "sin",
      "cosh",
      "",
      "ferror",
      "",
      "abs",
      "towctrans",
      "",
      "wctype",
      "",
      "tan",
      "sinh",
      "", "", "",
      "wcstombs",
      "", "", "",
      "wcrtomb",
      "",
      "tanh",
      "",
      "wcsspn",
      "wcsncmp",
      "", "",
      "srand",
      "strspn",
      "strncmp",
      "swprintf",
      "",
      "wctob",
      "",
      "swscanf",
      "", "", "", "",
      "wctrans",
      "",
      "feof",
      "clock",
      "wctomb",
      "",
      "wcsftime",
      "acos",
      "", "",
      "asctime",
      "strftime",
      "atan",
      "atan2",
      "wcstok",
      "wcsrchr",
      "",
      "atof",
      "",
      "strtok",
      "strrchr",
      "",
      "mbsrtowcs",
      "",
      "wcstol",
      "wcscoll",
      "", "", "",
      "strtol",
      "strcoll",
      "", "",
      "floor",
      "wcscpy",
      "realloc",
      "", "", "",
      "strcpy",
      "iscntrl",
      "exp",
      "", "",
      "wcslen",
      "", "", "", "",
      "strlen",
      "",
      "iswpunct",
      "asin",
      "localeconv",
      "wcstod",
      "isprint",
      "",
      "rand",
      "",
      "strtod",
      "",
      "iswprint",
      "", "", "",
      "tolower",
      "",
      "atol",
      "",
      "wcscmp",
      "wcscspn",
      "",
      "atoi",
      "",
      "strcmp",
      "strcspn",
      "iswalnum",
      "ceil",
      "", "",
      "wcsncpy",
      "",
      "fmod",
      "", "",
      "strncpy",
      "", "",
      "ctime",
      "", "",
      "clearerr",
      "", "",
      "memchr",
      "", "", "", "",
      "mktime",
      "isspace",
      "iswctype",
      "", "",
      "wcscat",
      "wcsxfrm",
      "difftime",
      "setlocale",
      "fwide",
      "strcat",
      "strxfrm",
      "iswdigit",
      "modf",
      "", "",
      "toupper",
      "wmemmove",
      "exit",
      "",
      "mbrlen",
      "islower",
      "",
      "time",
      "", "",
      "wmemset",
      "", "", "", "",
      "mbsinit",
      "",
      "fabs",
      "", "",
      "wmemcmp",
      "", "", "", "", "", "", "", "", "",
      "wcsncat",
      "", "", "", "",
      "strncat",
      "iswalpha",
      "free",
      "fseek",
      "mbtowc",
      "memmove",
      "", "", "", "",
      "isalpha",
      "", "",
      "btowc",
      "calloc",
      "sprintf",
      "", "", "", "",
      "isupper",
      "iswcntrl",
      "",
      "mblen",
      "memcpy",
      "",
      "towlower",
      "", "", "",
      "wmemchr",
      "",
      "labs",
      "", "", "",
      "mbstowcs",
      "", "",
      "sscanf",
      "mbrtowc",
      "iswspace",
      "localtime",
      "", "", "", "", "", "", "", "", "",
      "", "", "",
      "wcstoul",
      "", "", "",
      "memcmp",
      "strtoul",
      "log",
      "",
      "frexp",
      "",
      "isdigit",
      "", "",
      "log10",
      "", "",
      "towupper",
      "iswxdigit",
      "",
      "malloc",
      "", "", "", "", "",
      "wmemcpy",
      "iswlower",
      "", "",
      "memset",
      "", "", "", "",
      "gmtime",
      "",
      "vsprintf",
      "", "",
      "signal",
      "", "",
      "vswprintf",
      "", "",
      "ispunct",
      "", "", "", "",
      "longjmp",
      "", "", "", "", "", "", "",
      "ldexp",
      "getenv",
      "", "", "", "", "", "",
      "isxdigit",
      "", "", "", "",
      "iswupper",
      "", "", "", "",
      "div",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "",
      "ldiv",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "",
      "isgraph",
      "", "", "",
      "setbuf",
      "isalnum",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "",
      "atexit",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "",
      "iswgraph",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "", "",
      "", "", "", "", "", "", "", "",
      "setvbuf"
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE)
        {
          const char *s = wordlist[key];

          if (*str == *s && !strcmp (str + 1, s + 1))
            return s;
        }
    }
  return 0;
}
// Add this at the end of the file, after the class implementation
const char *
libc_name_p(const char *str, unsigned int len)
{
  return libc_name_p::in_word_set(str, len);
}