#pragma once

#pragma region Input Buffer SAL 1 compatibility macros
#pragma endregion Input Buffer SAL 1 compatibility macros
extern "C" {
}
extern "C" {
}
#pragma pack(push,8)
#pragma pack(push,8)
extern "C" {
typedef __w64 unsigned int   uintptr_t;
typedef char *  va_list;
}
#pragma pack(pop)
extern "C" {
typedef __w64 unsigned int   size_t;
typedef size_t rsize_t;
typedef __w64 int            intptr_t;
typedef __w64 int            ptrdiff_t;
typedef unsigned short wint_t;
typedef unsigned short wctype_t;
typedef int errno_t;
typedef __w64 long __time32_t;   
typedef __int64 __time64_t;     
typedef __time64_t time_t;      
 __declspec(dllimport) void __cdecl _invalid_parameter(  const wchar_t *,   const wchar_t *,   const wchar_t *, unsigned int, uintptr_t);
__declspec(dllimport) __declspec(noreturn)
void __cdecl _invoke_watson(  const wchar_t *,   const wchar_t *,   const wchar_t *, unsigned int, uintptr_t);
struct threadlocaleinfostruct;
struct threadmbcinfostruct;
typedef struct threadlocaleinfostruct * pthreadlocinfo;
typedef struct threadmbcinfostruct * pthreadmbcinfo;
struct __lc_time_data;
typedef struct localeinfo_struct
{
    pthreadlocinfo locinfo;
    pthreadmbcinfo mbcinfo;
} _locale_tstruct, *_locale_t;
typedef struct localerefcount {
        char *locale;
        wchar_t *wlocale;
        int *refcount;
        int *wrefcount;
} locrefcount;
typedef struct threadlocaleinfostruct {
        int refcount;
        unsigned int lc_codepage;
        unsigned int lc_collate_cp;
        unsigned int lc_time_cp;
        locrefcount lc_category[6];
        int lc_clike;
        int mb_cur_max;
        int * lconv_intl_refcount;
        int * lconv_num_refcount;
        int * lconv_mon_refcount;
        struct lconv * lconv;
        int * ctype1_refcount;
        unsigned short * ctype1;
        const unsigned short * pctype;
        const unsigned char * pclmap;
        const unsigned char * pcumap;
        struct __lc_time_data * lc_time_curr;
        wchar_t * locale_name[6];
} threadlocinfo;
}
#pragma pack(pop)
#pragma pack(push,8)
		#pragma detect_mismatch("_MSC_VER", "1800")
		#pragma detect_mismatch("_ITERATOR_DEBUG_LEVEL", "2")
			#pragma detect_mismatch("RuntimeLibrary", "MDd_DynamicDebug")
		#line 222 "c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\yvals.h"
#pragma comment(lib, "msvcprt" "d" "")
  #line 404 "c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\yvals.h"
  #line 442 "c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\yvals.h"
  #line 450 "c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\yvals.h"
   #line 468 "c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\yvals.h"
  #line 470 "c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\yvals.h"
   #line 485 "c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\yvals.h"
  #line 486 "c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\yvals.h"
  #line 518 "c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\yvals.h"
  #line 546 "c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\yvals.h"
namespace std {
typedef bool _Bool;
}
typedef __int64 _Longlong;
typedef unsigned __int64 _ULonglong;
typedef unsigned short char16_t;
typedef unsigned int char32_t;
namespace std {
enum _Uninitialized
	{	
	_Noinit
	};
#pragma warning(push)
#pragma warning(disable:4412)
class __declspec(dllimport) _Lockit
	{	
public:
	__thiscall _Lockit();	
	explicit __thiscall _Lockit(int);	
	__thiscall ~_Lockit() throw ();	
  #line 656 "c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\yvals.h"
    static  void __cdecl _Lockit_ctor(int);
    static  void __cdecl _Lockit_dtor(int);
private:
    static  void __cdecl _Lockit_ctor(_Lockit *);
    static  void __cdecl _Lockit_ctor(_Lockit *, int);
    static  void __cdecl _Lockit_dtor(_Lockit *);
public:
	 _Lockit(const _Lockit&) = delete;
	_Lockit&  operator=(const _Lockit&) = delete;
private:
	int _Locktype;
	};
class __declspec(dllimport) _Init_locks
	{	
public:
    __thiscall _Init_locks();
	__thiscall ~_Init_locks() throw ();
  #line 791 "c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\yvals.h"
private:
    static  void __cdecl _Init_locks_ctor(_Init_locks *);
    static  void __cdecl _Init_locks_dtor(_Init_locks *);
	};
#pragma warning(pop)
}
__declspec(dllimport) void __cdecl _Atexit(void (__cdecl *)(void));
typedef int _Mbstatet;
typedef unsigned long _Uint32t;
 #pragma pack(pop)
#pragma pack(push,8)
extern "C" {
typedef int (__cdecl * _onexit_t)(void);
typedef struct _div_t {
        int quot;
        int rem;
} div_t;
typedef struct _ldiv_t {
        long quot;
        long rem;
} ldiv_t;
typedef struct _lldiv_t {
        long long quot;
        long long rem;
} lldiv_t;
#pragma pack(4)
typedef struct {
    unsigned char ld[10];
} _LDOUBLE;
#pragma pack()
typedef struct {
        double x;
} _CRT_DOUBLE;
typedef struct {
    float f;
} _CRT_FLOAT;
typedef struct {
        long double x;
} _LONGDOUBLE;
#pragma pack(4)
typedef struct {
    unsigned char ld12[12];
} _LDBL12;
#pragma pack()
__declspec(dllimport) extern int __mb_cur_max;
__declspec(dllimport) int __cdecl ___mb_cur_max_func(void);
__declspec(dllimport) int __cdecl ___mb_cur_max_l_func(_locale_t);
typedef void (__cdecl *_purecall_handler)(void);
__declspec(dllimport) _purecall_handler __cdecl _set_purecall_handler(  _purecall_handler _Handler);
__declspec(dllimport) _purecall_handler __cdecl _get_purecall_handler(void);
extern "C++"
{
}
typedef void (__cdecl *_invalid_parameter_handler)(const wchar_t *, const wchar_t *, const wchar_t *, unsigned int, uintptr_t);
__declspec(dllimport) _invalid_parameter_handler __cdecl _set_invalid_parameter_handler(  _invalid_parameter_handler _Handler);
__declspec(dllimport) _invalid_parameter_handler __cdecl _get_invalid_parameter_handler(void);
__declspec(dllimport) extern int * __cdecl _errno(void);
errno_t __cdecl _set_errno(  int _Value);
errno_t __cdecl _get_errno(  int * _Value);
__declspec(dllimport) unsigned long * __cdecl __doserrno(void);
errno_t __cdecl _set_doserrno(  unsigned long _Value);
errno_t __cdecl _get_doserrno(  unsigned long * _Value);
__declspec(dllimport) __declspec(deprecated("This function or variable may be unsafe. Consider using " "strerror" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) char ** __cdecl __sys_errlist(void);
__declspec(dllimport) __declspec(deprecated("This function or variable may be unsafe. Consider using " "strerror" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) int * __cdecl __sys_nerr(void);
__declspec(dllimport) int *          __cdecl __p___argc(void);
__declspec(dllimport) char ***       __cdecl __p___argv(void);
__declspec(dllimport) wchar_t ***    __cdecl __p___wargv(void);
__declspec(dllimport) char ***       __cdecl __p__environ(void);
__declspec(dllimport) wchar_t ***    __cdecl __p__wenviron(void);
__declspec(dllimport) char **        __cdecl __p__pgmptr(void);
__declspec(dllimport) wchar_t **     __cdecl __p__wpgmptr(void);
__declspec(dllimport) extern int __argc;          
__declspec(dllimport) extern char ** __argv;      
__declspec(dllimport) extern wchar_t ** __wargv;  
__declspec(dllimport) extern char ** _environ;    
__declspec(dllimport) extern wchar_t ** _wenviron;    
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_get_pgmptr" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) extern char * _pgmptr;      
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_get_wpgmptr" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) extern wchar_t * _wpgmptr;  
errno_t __cdecl _get_pgmptr(  char ** _Value);
errno_t __cdecl _get_wpgmptr(  wchar_t ** _Value);
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_get_fmode" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) extern int _fmode;          
__declspec(dllimport) errno_t __cdecl _set_fmode(  int _Mode);
__declspec(dllimport) errno_t __cdecl _get_fmode(  int * _PMode);
extern "C++"
{
template <typename _CountofType, size_t _SizeOfArray>
char (*__countof_helper( _CountofType (&_Array)[_SizeOfArray]))[_SizeOfArray];
}
__declspec(dllimport) __declspec(noreturn) void __cdecl exit(  int _Code);
__declspec(dllimport) __declspec(noreturn) void __cdecl _exit(  int _Code);
__declspec(dllimport) __declspec(noreturn) void __cdecl abort(void);
__declspec(dllimport) unsigned int __cdecl _set_abort_behavior(  unsigned int _Flags,   unsigned int _Mask);
int       __cdecl abs(  int _X);
long      __cdecl labs(  long _X);
long long __cdecl llabs(  long long _X);
        __int64    __cdecl _abs64(__int64);
        int    __cdecl atexit(void (__cdecl *)(void));
  __declspec(dllimport) double  __cdecl atof(  const char *_String);
  __declspec(dllimport) double  __cdecl _atof_l(  const char *_String,   _locale_t _Locale);
  __declspec(dllimport)  int    __cdecl atoi(  const char *_Str);
  __declspec(dllimport) int    __cdecl _atoi_l(  const char *_Str,   _locale_t _Locale);
  __declspec(dllimport) long   __cdecl atol(  const char *_Str);
  __declspec(dllimport) long   __cdecl _atol_l(  const char *_Str,   _locale_t _Locale);
  __declspec(dllimport) long long __cdecl atoll(  const char *_Str);
  __declspec(dllimport) long long __cdecl _atoll_l(  const char *_Str,   _locale_t _Locale);
  __declspec(dllimport) void * __cdecl bsearch_s(  const void * _Key,   const void * _Base,
          rsize_t _NumOfElements,   rsize_t _SizeOfElements,
          int (__cdecl * _PtFuncCompare)(void *, const void *, const void *), void * _Context);
  __declspec(dllimport) void * __cdecl bsearch(  const void * _Key,   const void * _Base,
          size_t _NumOfElements,   size_t _SizeOfElements,
          int (__cdecl * _PtFuncCompare)(const void *, const void *));
__declspec(dllimport) void __cdecl qsort_s(  void * _Base,
          rsize_t _NumOfElements,   rsize_t _SizeOfElements,
          int (__cdecl * _PtFuncCompare)(void *, const void *, const void *), void *_Context);
__declspec(dllimport) void __cdecl qsort(  void * _Base,
          size_t _NumOfElements,   size_t _SizeOfElements,
          int (__cdecl * _PtFuncCompare)(const void *, const void *));
          unsigned short __cdecl _byteswap_ushort(  unsigned short _Short);
          unsigned long  __cdecl _byteswap_ulong (  unsigned long _Long);
          unsigned __int64 __cdecl _byteswap_uint64(  unsigned __int64 _Int64);
  __declspec(dllimport) div_t  __cdecl div(  int _Numerator,   int _Denominator);
  __declspec(dllimport) __declspec(deprecated("This function or variable may be unsafe. Consider using " "_dupenv_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) char * __cdecl getenv(  const char * _VarName);
 __declspec(dllimport) errno_t __cdecl getenv_s(  size_t * _ReturnSize,   char * _DstBuf,   rsize_t _DstSize,   const char * _VarName);
extern "C++" { template <size_t _Size> inline errno_t __cdecl getenv_s(  size_t * _ReturnSize, char (&_Dest)[_Size],   const char * _VarName) throw() { return getenv_s(_ReturnSize, _Dest, _Size, _VarName); } }
 __declspec(dllimport) errno_t __cdecl _dupenv_s(    char **_PBuffer,   size_t * _PBufferSizeInBytes,   const char * _VarName);
 __declspec(dllimport) errno_t __cdecl _itoa_s(  int _Value,   char * _DstBuf,   size_t _Size,   int _Radix);
extern "C++" { template <size_t _Size> inline errno_t __cdecl _itoa_s(  int _Value, char (&_Dest)[_Size],   int _Radix) throw() { return _itoa_s(_Value, _Dest, _Size, _Radix); } }
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_itoa_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) char * __cdecl _itoa( int _Value,   char *_Dest,  int _Radix);
 __declspec(dllimport) errno_t __cdecl _i64toa_s(  __int64 _Val,   char * _DstBuf,   size_t _Size,   int _Radix);
__declspec(dllimport) __declspec(deprecated("This function or variable may be unsafe. Consider using " "_i64toa_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) char * __cdecl _i64toa(  __int64 _Val,     char * _DstBuf,   int _Radix);
 __declspec(dllimport) errno_t __cdecl _ui64toa_s(  unsigned __int64 _Val,   char * _DstBuf,   size_t _Size,   int _Radix);
__declspec(dllimport) __declspec(deprecated("This function or variable may be unsafe. Consider using " "_ui64toa_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) char * __cdecl _ui64toa(  unsigned __int64 _Val,     char * _DstBuf,   int _Radix);
  __declspec(dllimport) __int64 __cdecl _atoi64(  const char * _String);
  __declspec(dllimport) __int64 __cdecl _atoi64_l(  const char * _String,   _locale_t _Locale);
  __declspec(dllimport) __int64 __cdecl _strtoi64(  const char * _String,     char ** _EndPtr,   int _Radix);
  __declspec(dllimport) __int64 __cdecl _strtoi64_l(  const char * _String,     char ** _EndPtr,   int _Radix,   _locale_t _Locale);
  __declspec(dllimport) unsigned __int64 __cdecl _strtoui64(  const char * _String,     char ** _EndPtr,   int _Radix);
  __declspec(dllimport) unsigned __int64 __cdecl _strtoui64_l(  const char * _String,     char ** _EndPtr,   int  _Radix,   _locale_t _Locale);
  __declspec(dllimport) ldiv_t __cdecl ldiv(  long _Numerator,   long _Denominator);
  __declspec(dllimport) lldiv_t __cdecl lldiv(  long long _Numerator,   long long _Denominator);
extern "C++"
{
    inline long abs(long _X) throw()
    {
        return labs(_X);
    }
    inline long long abs(long long _X) throw()
    {
        return llabs(_X);
    }
    inline ldiv_t div(long _A1, long _A2) throw()
    {
        return ldiv(_A1, _A2);
    }
    inline lldiv_t div(long long _A1, long long _A2) throw()
    {
        return lldiv(_A1, _A2);
    }
}
 __declspec(dllimport) errno_t __cdecl _ltoa_s(  long _Val,   char * _DstBuf,   size_t _Size,   int _Radix);
extern "C++" { template <size_t _Size> inline errno_t __cdecl _ltoa_s(  long _Value, char (&_Dest)[_Size],   int _Radix) throw() { return _ltoa_s(_Value, _Dest, _Size, _Radix); } }
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_ltoa_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) char * __cdecl _ltoa( long _Value,   char *_Dest,  int _Radix);
  __declspec(dllimport) int    __cdecl mblen(    const char * _Ch,   size_t _MaxCount);
  __declspec(dllimport) int    __cdecl _mblen_l(    const char * _Ch,   size_t _MaxCount,   _locale_t _Locale);
  __declspec(dllimport) size_t __cdecl _mbstrlen(  const char * _Str);
  __declspec(dllimport) size_t __cdecl _mbstrlen_l(  const char *_Str,   _locale_t _Locale);
  __declspec(dllimport) size_t __cdecl _mbstrnlen(  const char *_Str,   size_t _MaxCount);
  __declspec(dllimport) size_t __cdecl _mbstrnlen_l(  const char *_Str,   size_t _MaxCount,   _locale_t _Locale);
__declspec(dllimport) int    __cdecl mbtowc(    wchar_t * _DstCh,     const char * _SrcCh,   size_t _SrcSizeInBytes);
__declspec(dllimport) int    __cdecl _mbtowc_l(    wchar_t * _DstCh,     const char * _SrcCh,   size_t _SrcSizeInBytes,   _locale_t _Locale);
 __declspec(dllimport) errno_t __cdecl mbstowcs_s(  size_t * _PtNumOfCharConverted,   wchar_t * _DstBuf,   size_t _SizeInWords,   const char * _SrcBuf,   size_t _MaxCount );
extern "C++" { template <size_t _Size> inline errno_t __cdecl mbstowcs_s(  size_t * _PtNumOfCharConverted,   wchar_t (&_Dest)[_Size],   const char * _Source,   size_t _MaxCount) throw() { return mbstowcs_s(_PtNumOfCharConverted, _Dest, _Size, _Source, _MaxCount); } }
__declspec(deprecated("This function or variable may be unsafe. Consider using " "mbstowcs_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) size_t __cdecl mbstowcs( wchar_t *_Dest,  const char * _Source,  size_t _MaxCount);
 __declspec(dllimport) errno_t __cdecl _mbstowcs_s_l(  size_t * _PtNumOfCharConverted,   wchar_t * _DstBuf,   size_t _SizeInWords,   const char * _SrcBuf,   size_t _MaxCount,   _locale_t _Locale);
extern "C++" { template <size_t _Size> inline errno_t __cdecl _mbstowcs_s_l(  size_t * _PtNumOfCharConverted, wchar_t (&_Dest)[_Size],   const char * _Source,   size_t _MaxCount,   _locale_t _Locale) throw() { return _mbstowcs_s_l(_PtNumOfCharConverted, _Dest, _Size, _Source, _MaxCount, _Locale); } }
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_mbstowcs_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) size_t __cdecl _mbstowcs_l(  wchar_t *_Dest,   const char * _Source,   size_t _MaxCount,   _locale_t _Locale);
  __declspec(dllimport) int    __cdecl rand(void);
 __declspec(dllimport) int    __cdecl _set_error_mode(  int _Mode);
__declspec(dllimport) void   __cdecl srand(  unsigned int _Seed);
  __declspec(dllimport) double __cdecl strtod(  const char * _Str,     char ** _EndPtr);
  __declspec(dllimport) double __cdecl _strtod_l(  const char * _Str,     char ** _EndPtr,   _locale_t _Locale);
  __declspec(dllimport) long   __cdecl strtol(  const char * _Str,     char ** _EndPtr,   int _Radix );
  __declspec(dllimport) long   __cdecl _strtol_l(  const char *_Str,     char **_EndPtr,   int _Radix,   _locale_t _Locale);
  __declspec(dllimport) long long  __cdecl strtoll(  const char * _Str,     char ** _EndPtr,   int _Radix );
  __declspec(dllimport) long long  __cdecl _strtoll_l(  const char * _Str,     char ** _EndPtr,   int _Radix,   _locale_t _Locale );
  __declspec(dllimport) unsigned long __cdecl strtoul(  const char * _Str,     char ** _EndPtr,   int _Radix);
  __declspec(dllimport) unsigned long __cdecl _strtoul_l(const char * _Str,     char **_EndPtr,   int _Radix,   _locale_t _Locale);
  __declspec(dllimport) unsigned long long __cdecl strtoull(  const char * _Str,     char ** _EndPtr,   int _Radix);
  __declspec(dllimport) unsigned long long __cdecl _strtoull_l(  const char * _Str,     char ** _EndPtr,   int _Radix,   _locale_t _Locale);
  __declspec(dllimport) long double __cdecl strtold(  const char * _Str,     char ** _EndPtr);
  __declspec(dllimport) long double __cdecl _strtold_l(  const char * _Str,     char ** _EndPtr,   _locale_t _Locale);
  __declspec(dllimport) float __cdecl strtof(  const char * _Str,     char ** _EndPtr);
  __declspec(dllimport) float __cdecl _strtof_l(  const char * _Str,     char ** _EndPtr,   _locale_t _Locale);
__declspec(dllimport) int __cdecl system(  const char * _Command);
 __declspec(dllimport) errno_t __cdecl _ultoa_s(  unsigned long _Val,   char * _DstBuf,   size_t _Size,   int _Radix);
extern "C++" { template <size_t _Size> inline errno_t __cdecl _ultoa_s(  unsigned long _Value, char (&_Dest)[_Size],   int _Radix) throw() { return _ultoa_s(_Value, _Dest, _Size, _Radix); } }
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_ultoa_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) char * __cdecl _ultoa( unsigned long _Value,   char *_Dest,  int _Radix);
__declspec(dllimport) __declspec(deprecated("This function or variable may be unsafe. Consider using " "wctomb_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) int    __cdecl wctomb(  char * _MbCh,   wchar_t _WCh);
__declspec(dllimport) __declspec(deprecated("This function or variable may be unsafe. Consider using " "_wctomb_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) int    __cdecl _wctomb_l(    char * _MbCh,   wchar_t _WCh,   _locale_t _Locale);
 __declspec(dllimport) errno_t __cdecl wctomb_s(  int * _SizeConverted,   char * _MbCh,   rsize_t _SizeInBytes,   wchar_t _WCh);
 __declspec(dllimport) errno_t __cdecl _wctomb_s_l(  int * _SizeConverted,   char * _MbCh,   size_t _SizeInBytes,   wchar_t _WCh,   _locale_t _Locale);
 __declspec(dllimport) errno_t __cdecl wcstombs_s(  size_t * _PtNumOfCharConverted,   char * _Dst,   size_t _DstSizeInBytes,   const wchar_t * _Src,   size_t _MaxCountInBytes);
extern "C++" { template <size_t _Size> inline errno_t __cdecl wcstombs_s(  size_t * _PtNumOfCharConverted,   char (&_Dest)[_Size],   const wchar_t * _Source,   size_t _MaxCount) throw() { return wcstombs_s(_PtNumOfCharConverted, _Dest, _Size, _Source, _MaxCount); } }
__declspec(deprecated("This function or variable may be unsafe. Consider using " "wcstombs_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) size_t __cdecl wcstombs( char *_Dest,  const wchar_t * _Source,  size_t _MaxCount);
 __declspec(dllimport) errno_t __cdecl _wcstombs_s_l(  size_t * _PtNumOfCharConverted,   char * _Dst,   size_t _DstSizeInBytes,   const wchar_t * _Src,   size_t _MaxCountInBytes,   _locale_t _Locale);
extern "C++" { template <size_t _Size> inline errno_t __cdecl _wcstombs_s_l(  size_t * _PtNumOfCharConverted,   char (&_Dest)[_Size],   const wchar_t * _Source,   size_t _MaxCount,   _locale_t _Locale) throw() { return _wcstombs_s_l(_PtNumOfCharConverted, _Dest, _Size, _Source, _MaxCount, _Locale); } }
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wcstombs_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) size_t __cdecl _wcstombs_l(  char *_Dest,   const wchar_t * _Source,   size_t _MaxCount,   _locale_t _Locale);
      __declspec(dllimport)  __declspec(noalias) __declspec(restrict)    void * __cdecl calloc(   size_t _Count,    size_t _Size);
__declspec(dllimport)                     __declspec(noalias)                                                                             void   __cdecl free(    void * _Memory);
      __declspec(dllimport)  __declspec(noalias) __declspec(restrict)                              void * __cdecl malloc(   size_t _Size);
      __declspec(dllimport) __declspec(noalias) __declspec(restrict)                           void * __cdecl realloc(    void * _Memory,    size_t _NewSize);
      __declspec(dllimport) __declspec(noalias) __declspec(restrict)                       void * __cdecl _recalloc(    void * _Memory,    size_t _Count,    size_t _Size);
__declspec(dllimport)                     __declspec(noalias)                                                                             void   __cdecl _aligned_free(    void * _Memory);
      __declspec(dllimport) __declspec(noalias) __declspec(restrict)                              void * __cdecl _aligned_malloc(   size_t _Size,   size_t _Alignment);
      __declspec(dllimport) __declspec(noalias) __declspec(restrict)                              void * __cdecl _aligned_offset_malloc(   size_t _Size,   size_t _Alignment,   size_t _Offset);
      __declspec(dllimport) __declspec(noalias) __declspec(restrict)                              void * __cdecl _aligned_realloc(    void * _Memory,    size_t _NewSize,   size_t _Alignment);
      __declspec(dllimport) __declspec(noalias) __declspec(restrict)                       void * __cdecl _aligned_recalloc(    void * _Memory,    size_t _Count,    size_t _Size,   size_t _Alignment);
      __declspec(dllimport) __declspec(noalias) __declspec(restrict)                              void * __cdecl _aligned_offset_realloc(    void * _Memory,    size_t _NewSize,   size_t _Alignment,   size_t _Offset);
      __declspec(dllimport) __declspec(noalias) __declspec(restrict)                       void * __cdecl _aligned_offset_recalloc(    void * _Memory,    size_t _Count,    size_t _Size,   size_t _Alignment,   size_t _Offset);
  __declspec(dllimport)                                                  size_t __cdecl _aligned_msize(  void * _Memory,   size_t _Alignment,   size_t _Offset);
 __declspec(dllimport) errno_t __cdecl _itow_s (  int _Val,   wchar_t * _DstBuf,   size_t _SizeInWords,   int _Radix);
extern "C++" { template <size_t _Size> inline errno_t __cdecl _itow_s(  int _Value, wchar_t (&_Dest)[_Size],   int _Radix) throw() { return _itow_s(_Value, _Dest, _Size, _Radix); } }
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_itow_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) wchar_t * __cdecl _itow( int _Value,   wchar_t *_Dest,  int _Radix);
 __declspec(dllimport) errno_t __cdecl _ltow_s (  long _Val,   wchar_t * _DstBuf,   size_t _SizeInWords,   int _Radix);
extern "C++" { template <size_t _Size> inline errno_t __cdecl _ltow_s(  long _Value, wchar_t (&_Dest)[_Size],   int _Radix) throw() { return _ltow_s(_Value, _Dest, _Size, _Radix); } }
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_ltow_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) wchar_t * __cdecl _ltow( long _Value,   wchar_t *_Dest,  int _Radix);
 __declspec(dllimport) errno_t __cdecl _ultow_s (  unsigned long _Val,   wchar_t * _DstBuf,   size_t _SizeInWords,   int _Radix);
extern "C++" { template <size_t _Size> inline errno_t __cdecl _ultow_s(  unsigned long _Value, wchar_t (&_Dest)[_Size],   int _Radix) throw() { return _ultow_s(_Value, _Dest, _Size, _Radix); } }
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_ultow_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) wchar_t * __cdecl _ultow( unsigned long _Value,   wchar_t *_Dest,  int _Radix);
  __declspec(dllimport) double __cdecl wcstod(  const wchar_t * _Str,     wchar_t ** _EndPtr);
  __declspec(dllimport) double __cdecl _wcstod_l(  const wchar_t *_Str,     wchar_t ** _EndPtr,   _locale_t _Locale);
  __declspec(dllimport) long   __cdecl wcstol(  const wchar_t *_Str,     wchar_t ** _EndPtr, int _Radix);
  __declspec(dllimport) long   __cdecl _wcstol_l(  const wchar_t *_Str,     wchar_t **_EndPtr, int _Radix,   _locale_t _Locale);
  __declspec(dllimport) long long  __cdecl wcstoll(  const wchar_t *_Str,     wchar_t **_EndPtr, int _Radix);
  __declspec(dllimport) long long  __cdecl _wcstoll_l(  const wchar_t *_Str,     wchar_t **_EndPtr, int _Radix,   _locale_t _Locale);
  __declspec(dllimport) unsigned long __cdecl wcstoul(  const wchar_t *_Str,     wchar_t ** _EndPtr, int _Radix);
  __declspec(dllimport) unsigned long __cdecl _wcstoul_l(  const wchar_t *_Str,     wchar_t **_EndPtr, int _Radix,   _locale_t _Locale);
  __declspec(dllimport) unsigned long long __cdecl wcstoull(  const wchar_t *_Str,     wchar_t ** _EndPtr, int _Radix);
  __declspec(dllimport) unsigned long long __cdecl _wcstoull_l(  const wchar_t *_Str,     wchar_t ** _EndPtr, int _Radix,   _locale_t _Locale);
  __declspec(dllimport) long double __cdecl wcstold(  const wchar_t * _Str,     wchar_t ** _EndPtr);
  __declspec(dllimport) long double __cdecl _wcstold_l(  const wchar_t * _Str,     wchar_t ** _EndPtr,   _locale_t _Locale);
  __declspec(dllimport) float __cdecl wcstof(  const wchar_t * _Str,     wchar_t ** _EndPtr);
  __declspec(dllimport) float __cdecl _wcstof_l(  const wchar_t * _Str,     wchar_t ** _EndPtr,   _locale_t _Locale);
  __declspec(dllimport) __declspec(deprecated("This function or variable may be unsafe. Consider using " "_wdupenv_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) wchar_t * __cdecl _wgetenv(  const wchar_t * _VarName);
 __declspec(dllimport) errno_t __cdecl _wgetenv_s(  size_t * _ReturnSize,   wchar_t * _DstBuf,   size_t _DstSizeInWords,   const wchar_t * _VarName);
extern "C++" { template <size_t _Size> inline errno_t __cdecl _wgetenv_s(  size_t * _ReturnSize, wchar_t (&_Dest)[_Size],   const wchar_t * _VarName) throw() { return _wgetenv_s(_ReturnSize, _Dest, _Size, _VarName); } }
 __declspec(dllimport) errno_t __cdecl _wdupenv_s(    wchar_t **_Buffer,   size_t *_BufferSizeInWords,   const wchar_t *_VarName);
__declspec(dllimport) int __cdecl _wsystem(  const wchar_t * _Command);
  __declspec(dllimport) double __cdecl _wtof(  const wchar_t *_Str);
  __declspec(dllimport) double __cdecl _wtof_l(  const wchar_t *_Str,   _locale_t _Locale);
  __declspec(dllimport) int __cdecl _wtoi(  const wchar_t *_Str);
  __declspec(dllimport) int __cdecl _wtoi_l(  const wchar_t *_Str,   _locale_t _Locale);
  __declspec(dllimport) long __cdecl _wtol(  const wchar_t *_Str);
  __declspec(dllimport) long __cdecl _wtol_l(  const wchar_t *_Str,   _locale_t _Locale);
  __declspec(dllimport) long long __cdecl _wtoll(  const wchar_t *_Str);
  __declspec(dllimport) long long __cdecl _wtoll_l(  const wchar_t *_Str,   _locale_t _Locale);
 __declspec(dllimport) errno_t __cdecl _i64tow_s(  __int64 _Val,   wchar_t * _DstBuf,   size_t _SizeInWords,   int _Radix);
__declspec(dllimport) __declspec(deprecated("This function or variable may be unsafe. Consider using " "_i64tow_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) wchar_t * __cdecl _i64tow(  __int64 _Val,     wchar_t * _DstBuf,   int _Radix);
 __declspec(dllimport) errno_t __cdecl _ui64tow_s(  unsigned __int64 _Val,   wchar_t * _DstBuf,   size_t _SizeInWords,   int _Radix);
__declspec(dllimport) __declspec(deprecated("This function or variable may be unsafe. Consider using " "_ui64tow_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) wchar_t * __cdecl _ui64tow(  unsigned __int64 _Val,     wchar_t * _DstBuf,   int _Radix);
  __declspec(dllimport) __int64   __cdecl _wtoi64(  const wchar_t *_Str);
  __declspec(dllimport) __int64   __cdecl _wtoi64_l(  const wchar_t *_Str,   _locale_t _Locale);
  __declspec(dllimport) __int64   __cdecl _wcstoi64(  const wchar_t * _Str,     wchar_t ** _EndPtr,   int _Radix);
  __declspec(dllimport) __int64   __cdecl _wcstoi64_l(  const wchar_t * _Str,     wchar_t ** _EndPtr,   int _Radix,   _locale_t _Locale);
  __declspec(dllimport) unsigned __int64  __cdecl _wcstoui64(  const wchar_t * _Str,     wchar_t ** _EndPtr,   int _Radix);
  __declspec(dllimport) unsigned __int64  __cdecl _wcstoui64_l(  const wchar_t *_Str ,     wchar_t ** _EndPtr,   int _Radix,   _locale_t _Locale);
  __declspec(dllimport) char * __cdecl _fullpath(  char * _FullPath,   const char * _Path,   size_t _SizeInBytes);
 __declspec(dllimport) errno_t __cdecl _ecvt_s(  char * _DstBuf,   size_t _Size,   double _Val,   int _NumOfDights,   int * _PtDec,   int * _PtSign);
extern "C++" { template <size_t _Size> inline errno_t __cdecl _ecvt_s(char (&_Dest)[_Size],   double _Value,   int _NumOfDigits,   int * _PtDec,   int * _PtSign) throw() { return _ecvt_s(_Dest, _Size, _Value, _NumOfDigits, _PtDec, _PtSign); } }
  __declspec(dllimport) __declspec(deprecated("This function or variable may be unsafe. Consider using " "_ecvt_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) char * __cdecl _ecvt(  double _Val,   int _NumOfDigits,   int * _PtDec,   int * _PtSign);
 __declspec(dllimport) errno_t __cdecl _fcvt_s(  char * _DstBuf,   size_t _Size,   double _Val,   int _NumOfDec,   int * _PtDec,   int * _PtSign);
extern "C++" { template <size_t _Size> inline errno_t __cdecl _fcvt_s(char (&_Dest)[_Size],   double _Value,   int _NumOfDigits,   int * _PtDec,   int * _PtSign) throw() { return _fcvt_s(_Dest, _Size, _Value, _NumOfDigits, _PtDec, _PtSign); } }
  __declspec(dllimport) __declspec(deprecated("This function or variable may be unsafe. Consider using " "_fcvt_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) char * __cdecl _fcvt(  double _Val,   int _NumOfDec,   int * _PtDec,   int * _PtSign);
__declspec(dllimport) errno_t __cdecl _gcvt_s(  char * _DstBuf,   size_t _Size,   double _Val,   int _NumOfDigits);
extern "C++" { template <size_t _Size> inline errno_t __cdecl _gcvt_s(char (&_Dest)[_Size],   double _Value,   int _NumOfDigits) throw() { return _gcvt_s(_Dest, _Size, _Value, _NumOfDigits); } }
__declspec(dllimport) __declspec(deprecated("This function or variable may be unsafe. Consider using " "_gcvt_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) char * __cdecl _gcvt(  double _Val,   int _NumOfDigits,     char * _DstBuf);
  __declspec(dllimport) int __cdecl _atodbl(  _CRT_DOUBLE * _Result,   char * _Str);
  __declspec(dllimport) int __cdecl _atoldbl(  _LDOUBLE * _Result,   char * _Str);
  __declspec(dllimport) int __cdecl _atoflt(  _CRT_FLOAT * _Result,   const char * _Str);
  __declspec(dllimport) int __cdecl _atodbl_l(  _CRT_DOUBLE * _Result,   char * _Str,   _locale_t _Locale);
  __declspec(dllimport) int __cdecl _atoldbl_l(  _LDOUBLE * _Result,   char * _Str,   _locale_t _Locale);
  __declspec(dllimport) int __cdecl _atoflt_l(  _CRT_FLOAT * _Result,   const char * _Str,   _locale_t _Locale);
          unsigned long __cdecl _lrotl(  unsigned long _Val,   int _Shift);
          unsigned long __cdecl _lrotr(  unsigned long _Val,   int _Shift);
 __declspec(dllimport) errno_t   __cdecl _makepath_s(  char * _PathResult,   size_t _SizeInWords,   const char * _Drive,   const char * _Dir,   const char * _Filename,
          const char * _Ext);
extern "C++" { template <size_t _Size> inline errno_t __cdecl _makepath_s(char (&_Path)[_Size],   const char * _Drive,   const char * _Dir,   const char * _Filename,   const char * _Ext) throw() { return _makepath_s(_Path, _Size, _Drive, _Dir, _Filename, _Ext); } }
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_makepath_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) void __cdecl _makepath(  char *_Path,  const char * _Drive,  const char * _Dir,  const char * _Filename,  const char * _Ext);
        _onexit_t __cdecl _onexit(  _onexit_t _Func);
__declspec(dllimport) void __cdecl perror(  const char * _ErrMsg);
#pragma warning (push)
#pragma warning (disable:6540) 
  __declspec(dllimport) int    __cdecl _putenv(  const char * _EnvString);
 __declspec(dllimport) errno_t __cdecl _putenv_s(  const char * _Name,   const char * _Value);
        unsigned int __cdecl _rotl(  unsigned int _Val,   int _Shift);
        unsigned __int64 __cdecl _rotl64(  unsigned __int64 _Val,   int _Shift);
        unsigned int __cdecl _rotr(  unsigned int _Val,   int _Shift);
        unsigned __int64 __cdecl _rotr64(  unsigned __int64 _Val,   int _Shift);
#pragma warning (pop)
__declspec(dllimport) errno_t __cdecl _searchenv_s(  const char * _Filename,   const char * _EnvVar,   char * _ResultPath,   size_t _SizeInBytes);
extern "C++" { template <size_t _Size> inline errno_t __cdecl _searchenv_s(  const char * _Filename,   const char * _EnvVar, char (&_ResultPath)[_Size]) throw() { return _searchenv_s(_Filename, _EnvVar, _ResultPath, _Size); } }
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_searchenv_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) void __cdecl _searchenv( const char * _Filename,  const char * _EnvVar,   char *_ResultPath);
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_splitpath_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) void   __cdecl _splitpath(  const char * _FullPath,     char * _Drive,     char * _Dir,     char * _Filename,     char * _Ext);
 __declspec(dllimport) errno_t  __cdecl _splitpath_s(  const char * _FullPath,
                  char * _Drive,   size_t _DriveSize,
                  char * _Dir,   size_t _DirSize,
                  char * _Filename,   size_t _FilenameSize,
                  char * _Ext,   size_t _ExtSize);
extern "C++" { template <size_t _DriveSize, size_t _DirSize, size_t _NameSize, size_t _ExtSize> inline errno_t __cdecl _splitpath_s(  const char *_Dest,   char (&_Drive)[_DriveSize],   char (&_Dir)[_DirSize],   char (&_Name)[_NameSize],   char (&_Ext)[_ExtSize]) throw() { return _splitpath_s(_Dest, _Drive, _DriveSize, _Dir, _DirSize, _Name, _NameSize, _Ext, _ExtSize); } }
__declspec(dllimport) void   __cdecl _swab(    char * _Buf1,     char * _Buf2, int _SizeInBytes);
  __declspec(dllimport) wchar_t * __cdecl _wfullpath(  wchar_t * _FullPath,   const wchar_t * _Path,   size_t _SizeInWords);
 __declspec(dllimport) errno_t __cdecl _wmakepath_s(  wchar_t * _PathResult,   size_t _SIZE,   const wchar_t * _Drive,   const wchar_t * _Dir,   const wchar_t * _Filename,
          const wchar_t * _Ext);
extern "C++" { template <size_t _Size> inline errno_t __cdecl _wmakepath_s(wchar_t (&_ResultPath)[_Size],   const wchar_t * _Drive,   const wchar_t * _Dir,   const wchar_t * _Filename,   const wchar_t * _Ext) throw() { return _wmakepath_s(_ResultPath, _Size, _Drive, _Dir, _Filename, _Ext); } }
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wmakepath_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) void __cdecl _wmakepath(  wchar_t *_ResultPath,  const wchar_t * _Drive,  const wchar_t * _Dir,  const wchar_t * _Filename,  const wchar_t * _Ext);
__declspec(dllimport) void __cdecl _wperror(  const wchar_t * _ErrMsg);
  __declspec(dllimport) int    __cdecl _wputenv(  const wchar_t * _EnvString);
 __declspec(dllimport) errno_t __cdecl _wputenv_s(  const wchar_t * _Name,   const wchar_t * _Value);
__declspec(dllimport) errno_t __cdecl _wsearchenv_s(  const wchar_t * _Filename,   const wchar_t * _EnvVar,   wchar_t * _ResultPath,   size_t _SizeInWords);
extern "C++" { template <size_t _Size> inline errno_t __cdecl _wsearchenv_s(  const wchar_t * _Filename,   const wchar_t * _EnvVar, wchar_t (&_ResultPath)[_Size]) throw() { return _wsearchenv_s(_Filename, _EnvVar, _ResultPath, _Size); } }
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wsearchenv_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) void __cdecl _wsearchenv( const wchar_t * _Filename,  const wchar_t * _EnvVar,   wchar_t *_ResultPath);
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wsplitpath_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) void   __cdecl _wsplitpath(  const wchar_t * _FullPath,     wchar_t * _Drive,     wchar_t * _Dir,     wchar_t * _Filename,     wchar_t * _Ext);
__declspec(dllimport) errno_t __cdecl _wsplitpath_s(  const wchar_t * _FullPath,
                  wchar_t * _Drive,   size_t _DriveSize,
                  wchar_t * _Dir,   size_t _DirSize,
                  wchar_t * _Filename,   size_t _FilenameSize,
                  wchar_t * _Ext,   size_t _ExtSize);
extern "C++" { template <size_t _DriveSize, size_t _DirSize, size_t _NameSize, size_t _ExtSize> inline errno_t __cdecl _wsplitpath_s(  const wchar_t *_Path,   wchar_t (&_Drive)[_DriveSize],   wchar_t (&_Dir)[_DirSize],   wchar_t (&_Name)[_NameSize],   wchar_t (&_Ext)[_ExtSize]) throw() { return _wsplitpath_s(_Path, _Drive, _DriveSize, _Dir, _DirSize, _Name, _NameSize, _Ext, _ExtSize); } }
__declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using " "SetErrorMode" " instead. See online help for details.")) __declspec(dllimport) void __cdecl _seterrormode(  int _Mode);
__declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using " "Beep" " instead. See online help for details.")) __declspec(dllimport) void __cdecl _beep(  unsigned _Frequency,   unsigned _Duration);
__declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using " "Sleep" " instead. See online help for details.")) __declspec(dllimport) void __cdecl _sleep(  unsigned long _Duration);
#pragma warning(push)
#pragma warning(disable: 4141) 
  __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_ecvt" ". See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using " "_ecvt_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) char * __cdecl ecvt(  double _Val,   int _NumOfDigits,   int * _PtDec,   int * _PtSign);
  __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_fcvt" ". See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using " "_fcvt_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) char * __cdecl fcvt(  double _Val,   int _NumOfDec,   int * _PtDec,   int * _PtSign);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_gcvt" ". See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using " "_fcvt_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))          __declspec(dllimport) char * __cdecl gcvt(  double _Val,   int _NumOfDigits,     char * _DstBuf);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_itoa" ". See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using " "_itoa_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))          __declspec(dllimport) char * __cdecl itoa(  int _Val,     char * _DstBuf,   int _Radix);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_ltoa" ". See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using " "_ltoa_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))          __declspec(dllimport) char * __cdecl ltoa(  long _Val,     char * _DstBuf,   int _Radix);
  __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_putenv" ". See online help for details.")) __declspec(dllimport) int    __cdecl putenv(  const char * _EnvString);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_swab" ". See online help for details."))                                                                           __declspec(dllimport) void   __cdecl swab(  char * _Buf1,  char * _Buf2,   int _SizeInBytes);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_ultoa" ". See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using " "_ultoa_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))        __declspec(dllimport) char * __cdecl ultoa(  unsigned long _Val,     char * _Dstbuf,   int _Radix);
#pragma warning(pop)
_onexit_t __cdecl onexit(  _onexit_t _Func);
}
#pragma pack(pop)
namespace std {
using :: size_t; using :: div_t; using :: ldiv_t;
using :: abort; using :: abs; using :: atexit;
using :: atof; using :: atoi; using :: atol;
using :: bsearch; using :: calloc; using :: div;
using :: exit; using :: free;
using :: labs; using :: ldiv; using :: malloc;
using :: mblen; using :: mbstowcs; using :: mbtowc;
using :: qsort; using :: rand; using :: realloc;
using :: srand; using :: strtod; using :: strtol;
using :: strtoul;
using :: wcstombs; using :: wctomb;
using :: lldiv_t;
using :: getenv;
using :: system;
using :: atoll; using :: llabs; using :: lldiv;
using :: strtof; using :: strtold;
using :: strtoll; using :: strtoull;
}
 #pragma pack(push,8)
 #pragma warning(push,3)
extern "C" {
void __cdecl _Feraise(int);
typedef union
	{	
	unsigned short _Word[8];
	float _Float;
	double _Double;
	long double _Long_double;
	} _Dconst;
__declspec(dllimport) double __cdecl _Cosh(double, double);
__declspec(dllimport) double __cdecl _Divide(double, double);
__declspec(dllimport) short __cdecl _Dtest(double *);
__declspec(dllimport) double __cdecl _Log(double, int);
__declspec(dllimport) double __cdecl _Recip(double);
__declspec(dllimport) double __cdecl _Sin(double, unsigned int);
__declspec(dllimport) double __cdecl _Sinx(double, unsigned int, int);
__declspec(dllimport) double __cdecl _Sinh(double, double);
__declspec(dllimport) short __cdecl _Exp(double *, double, short);
extern __declspec(dllimport)  _Dconst _Denorm, _Hugeval, _Inf,
	_Nan, _Snan;
__declspec(dllimport) float __cdecl _FCosh(float, float);
__declspec(dllimport) float __cdecl _FDivide(float, float);
__declspec(dllimport) short __cdecl _FDtest(float *);
__declspec(dllimport) float __cdecl _FLog(float, int);
__declspec(dllimport) float __cdecl _FRecip(float);
__declspec(dllimport) float __cdecl _FSin(float, unsigned int);
__declspec(dllimport) float __cdecl _FSinx(float, unsigned int, int);
__declspec(dllimport) float __cdecl _FSinh(float, float);
__declspec(dllimport) short __cdecl _FExp(float *, float, short);
extern __declspec(dllimport)  _Dconst _FDenorm, _FInf, _FNan, _FSnan;
__declspec(dllimport) long double __cdecl _LCosh(long double, long double);
__declspec(dllimport) long double __cdecl _LDivide(long double, long double);
__declspec(dllimport) short __cdecl _LDtest(long double *);
__declspec(dllimport) long double __cdecl _LLog(long double, int);
__declspec(dllimport) long double __cdecl _LRecip(long double);
__declspec(dllimport) long double __cdecl _LSin(long double, unsigned int);
__declspec(dllimport) long double __cdecl _LSinx(long double, unsigned int, int);
__declspec(dllimport) long double __cdecl _LSinh(long double, long double);
__declspec(dllimport) short __cdecl _LExp(long double *, long double, short);
extern __declspec(dllimport)  _Dconst _LDenorm, _LInf, _LNan, _LSnan;
}
 #pragma warning(pop)
 #pragma pack(pop)
extern "C" {
 __declspec(dllimport) unsigned int __cdecl _clearfp(void);
#pragma warning(push)
#pragma warning(disable: 4141)
 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_controlfp_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) unsigned int __cdecl _controlfp(  unsigned int _NewValue,  unsigned int _Mask);
#pragma warning(pop)
 __declspec(dllimport) void __cdecl _set_controlfp(  unsigned int _NewValue,   unsigned int _Mask);
 __declspec(dllimport) errno_t __cdecl _controlfp_s(  unsigned int *_CurrentState,   unsigned int _NewValue,   unsigned int _Mask);
 __declspec(dllimport) unsigned int __cdecl _statusfp(void);
 __declspec(dllimport) void __cdecl _fpreset(void);
 __declspec(dllimport) void __cdecl _statusfp2(  unsigned int *_X86_status,   unsigned int *_SSE2_status);
 __declspec(dllimport) unsigned int __cdecl _control87(  unsigned int _NewValue,  unsigned int _Mask);
 __declspec(dllimport) int __cdecl __control87_2(  unsigned int _NewValue,   unsigned int _Mask,
                                    unsigned int* _X86_cw,   unsigned int* _Sse2_cw);
  __declspec(dllimport) extern int * __cdecl __fpecode(void);
  __declspec(dllimport) double __cdecl _copysign(  double _Number,   double _Sign);
  __declspec(dllimport) double __cdecl _chgsign(  double _X);
  __declspec(dllimport) double __cdecl _scalb(  double _X,   long _Y);
  __declspec(dllimport) double __cdecl _logb(  double _X);
  __declspec(dllimport) double __cdecl _nextafter(  double _X,   double _Y);
  __declspec(dllimport) int    __cdecl _finite(  double _X);
  __declspec(dllimport) int    __cdecl _isnan(  double _X);
  __declspec(dllimport) int    __cdecl _fpclass(  double _X);
 __declspec(dllimport) void __cdecl fpreset(void);
}
#pragma pack(push,8)
extern "C" {
struct _exception {
        int type;       
        char *name;     
        double arg1;    
        double arg2;    
        double retval;  
        } ;
struct _complex {
        double x,y; 
        } ;
typedef float float_t;
typedef double double_t;
__declspec(dllimport) extern double _HUGE;
void __cdecl _fperrraise(  int _Except);
short __declspec(dllimport) __cdecl _dclass(  double _X);
short __declspec(dllimport) __cdecl _ldclass(  long double _X);
short __declspec(dllimport) __cdecl _fdclass(  float _X);
int __declspec(dllimport) __cdecl _dsign(  double _X);
int __declspec(dllimport) __cdecl _ldsign(  long double _X);
int __declspec(dllimport) __cdecl _fdsign(  float _X);
int __declspec(dllimport) __cdecl _dpcomp(  double _X,   double _Y);
int __declspec(dllimport) __cdecl _ldpcomp(  long double _X,   long double _Y);
int __declspec(dllimport) __cdecl _fdpcomp(  float _X,   float _Y);
short __declspec(dllimport) __cdecl _dtest(  double *_Px);
short __declspec(dllimport) __cdecl _ldtest(  long double *_Px);
short __declspec(dllimport) __cdecl _fdtest(  float *_Px);
short __declspec(dllimport) __cdecl _d_int(  double *_Px,   short _Xexp);
short __declspec(dllimport) __cdecl _ld_int(  long double *_Px,   short _Xexp);
short __declspec(dllimport) __cdecl _fd_int(  float *_Px,   short _Xexp);
short __declspec(dllimport) __cdecl _dscale(  double *_Px,   long _Lexp);
short __declspec(dllimport) __cdecl _ldscale(  long double *_Px,   long _Lexp);
short __declspec(dllimport) __cdecl _fdscale(  float *_Px,   long _Lexp);
short __declspec(dllimport)  __cdecl _dunscale(  short *_Pex,   double *_Px);
short __declspec(dllimport) __cdecl _ldunscale(  short *_Pex,   long double *_Px);
short __declspec(dllimport) __cdecl _fdunscale(  short *_Pex,   float *_Px);
short __declspec(dllimport) __cdecl _dexp(  double *_Px,   double _Y,   long _Eoff);
short __declspec(dllimport) __cdecl _ldexp(  long double *_Px,   long double _Y,   long _Eoff);
short __declspec(dllimport) __cdecl _fdexp(  float *_Px,   float _Y,   long _Eoff);
short __declspec(dllimport) __cdecl _dnorm(  unsigned short *_Ps);
short __declspec(dllimport) __cdecl _fdnorm(  unsigned short *_Ps);
double __cdecl _dpoly(  double _X,   const double *_Tab,   int _N);
long double __cdecl _ldpoly(  long double _X,   const long double *_Tab,   int _N);
float __cdecl _fdpoly(  float _X,   const float *_Tab,   int _N);
double __declspec(dllimport) __cdecl _dlog(  double _X,   int _Baseflag);
long double __declspec(dllimport) __cdecl _ldlog(  long double _X,   int _Baseflag);
float __declspec(dllimport) __cdecl _fdlog(  float _X,   int _Baseflag);
double __declspec(dllimport) __cdecl _dsin(  double _X,   unsigned int _Qoff);
long double __declspec(dllimport) __cdecl _ldsin(  long double _X,   unsigned int _Qoff);
float __declspec(dllimport) __cdecl _fdsin(  float _X,   unsigned int _Qoff);
typedef union
{	
    unsigned short _Sh[8];
    double _Val;
} _double_val;
typedef union
{	
    unsigned short _Sh[8];
    float _Val;
} _float_val;
typedef union
{	
    unsigned short _Sh[8];
    long double _Val;
} _ldouble_val;
typedef union
{	
    unsigned short _Word[8];
    float _Float;
    double _Double;
    long double _Long_double;
} _float_const;
extern const _float_const _Denorm_C,  _Inf_C,  _Nan_C,  _Snan_C, _Hugeval_C;
extern const _float_const _FDenorm_C, _FInf_C, _FNan_C, _FSnan_C;
extern const _float_const _LDenorm_C, _LInf_C, _LNan_C, _LSnan_C;
extern const _float_const _Eps_C,  _Rteps_C;
extern const _float_const _FEps_C, _FRteps_C;
extern const _float_const _LEps_C, _LRteps_C;
extern const double _Zero_C, _Xbig_C;
extern const float _FZero_C, _FXbig_C;
extern const long double _LZero_C, _LXbig_C;
extern "C++" {
inline __declspec(nothrow) int fpclassify(float _X)
{
    return (_fdtest(&_X));
}
inline __declspec(nothrow) int fpclassify(double _X)
{
    return (_dtest(&_X));
}
inline __declspec(nothrow) int fpclassify(long double _X)
{
    return (_ldtest(&_X));
}
inline __declspec(nothrow) bool signbit(float _X)
{
    return (_fdsign(_X) != 0);
}
inline __declspec(nothrow) bool signbit(double _X)
{
    return (_dsign(_X) != 0);
}
inline __declspec(nothrow) bool signbit(long double _X)
{
    return (_ldsign(_X) != 0);
}
inline __declspec(nothrow) int _fpcomp(float _X, float _Y)
{
    return (_fdpcomp(_X, _Y));
}
inline __declspec(nothrow) int _fpcomp(double _X, double _Y)
{
    return (_dpcomp(_X, _Y));
}
inline __declspec(nothrow) int _fpcomp(long double _X, long double _Y)
{
    return (_ldpcomp(_X, _Y));
}
template<class _Trc, class _Tre> struct _Combined_type
{	
    typedef float _Type;	
};
template<> struct _Combined_type<float, double>
{	
    typedef double _Type;
};
template<> struct _Combined_type<float, long double>
{	
    typedef long double _Type;
};
template<class _Ty, class _T2> struct _Real_widened
{	
    typedef long double _Type;	
};
template<> struct _Real_widened<float, float>
{	
    typedef float _Type;
};
template<> struct _Real_widened<float, double>
{	
    typedef double _Type;
};
template<> struct _Real_widened<double, float>
{	
    typedef double _Type;
};
template<> struct _Real_widened<double, double>
{	
    typedef double _Type;
};
template<class _Ty> struct _Real_type
{	
    typedef double _Type;	
};
template<> struct _Real_type<float>
{	
    typedef float _Type;
};
template<> struct _Real_type<long double>
{	
    typedef long double _Type;
};
template<class _T1, class _T2> inline __declspec(nothrow) int _fpcomp(_T1 _X, _T2 _Y)
{	
    typedef typename _Combined_type<float,
        typename _Real_widened<
        typename _Real_type<_T1>::_Type,
        typename _Real_type<_T2>::_Type>::_Type>::_Type _Tw;
    return (_fpcomp((_Tw)_X, (_Tw)_Y));
}
template<class _Ty> inline __declspec(nothrow) bool isfinite(_Ty _X)
{
    return (fpclassify(_X) <= 0);
}
template<class _Ty> inline __declspec(nothrow) bool isinf(_Ty _X)
{
    return (fpclassify(_X) == 1);
}
template<class _Ty> inline __declspec(nothrow) bool isnan(_Ty _X)
{
    return (fpclassify(_X) == 2);
}
template<class _Ty> inline __declspec(nothrow) bool isnormal(_Ty _X)
{
    return (fpclassify(_X) == (-1));
}
template<class _Ty1, class _Ty2> inline __declspec(nothrow) bool isgreater(_Ty1 _X, _Ty2 _Y)
{
    return ((_fpcomp(_X, _Y) & 4) != 0);
}
template<class _Ty1, class _Ty2> inline __declspec(nothrow) bool isgreaterequal(_Ty1 _X, _Ty2 _Y)
{
    return ((_fpcomp(_X, _Y) & (2 | 4)) != 0);
}
template<class _Ty1, class _Ty2> inline __declspec(nothrow) bool isless(_Ty1 _X, _Ty2 _Y)
{
    return ((_fpcomp(_X, _Y) & 1) != 0);
}
template<class _Ty1, class _Ty2> inline __declspec(nothrow) bool islessequal(_Ty1 _X, _Ty2 _Y)
{
    return ((_fpcomp(_X, _Y) & (1 | 2)) != 0);
}
template<class _Ty1, class _Ty2> inline __declspec(nothrow) bool islessgreater(_Ty1 _X, _Ty2 _Y)
{
    return ((_fpcomp(_X, _Y) & (1 | 4)) != 0);
}
template<class _Ty1, class _Ty2> inline __declspec(nothrow) bool isunordered(_Ty1 _X, _Ty2 _Y)
{
    return (_fpcomp(_X, _Y) == 0);
}
}  
int       __cdecl abs(  int _X);
long      __cdecl labs(  long _X);
long long __cdecl llabs(  long long _X);
double  __cdecl acos(  double _X);
__declspec(dllimport) double __cdecl acosh(  double _X);
double  __cdecl asin(  double _X);
__declspec(dllimport) double __cdecl asinh(  double _X);
double  __cdecl atan(  double _X);
__declspec(dllimport) double __cdecl atanh(  double _X);
double  __cdecl atan2(  double _Y,   double _X);
__declspec(dllimport) double __cdecl cbrt(  double _X);
__declspec(dllimport) double __cdecl copysign(  double _X,   double _Y);
double  __cdecl cos(  double _X);
double  __cdecl cosh(  double _X);
__declspec(dllimport) double __cdecl erf(  double _X);
__declspec(dllimport) double __cdecl erfc(  double _X);
double  __cdecl exp(  double _X);
__declspec(dllimport) double __cdecl exp2(  double _X);
__declspec(dllimport) double __cdecl expm1(  double _X);
 double  __cdecl fabs(  double _X);
__declspec(dllimport) double __cdecl fdim(  double _X,   double _Y);
__declspec(dllimport) double __cdecl fma(  double _X,   double _Y,   double _Z);
__declspec(dllimport) double __cdecl fmax(  double _X,   double _Y);
__declspec(dllimport) double __cdecl fmin(  double _X,   double _Y);
double  __cdecl fmod(  double _X,   double _Y);
__declspec(dllimport) int __cdecl ilogb(  double _X);
__declspec(dllimport) double __cdecl lgamma(  double _X);
__declspec(dllimport) long long __cdecl llrint(  double _X);
__declspec(dllimport) long long __cdecl llround(  double _X);
double  __cdecl log(  double _X);
double  __cdecl log10(  double _X);
__declspec(dllimport) double __cdecl log1p(  double _X);
__declspec(dllimport) double __cdecl log2(  double _X);
__declspec(dllimport) double __cdecl logb(  double _X);
__declspec(dllimport) long __cdecl lrint(  double _X);
__declspec(dllimport) long __cdecl lround(  double _X);
__declspec(dllimport) double __cdecl nan(  const char *);
__declspec(dllimport) double __cdecl nearbyint(  double _X);
__declspec(dllimport) double __cdecl nextafter(  double _X,   double _Y);
__declspec(dllimport) double __cdecl nexttoward(  double _X,   long double _Y);
double  __cdecl pow(  double _X,   double _Y);
__declspec(dllimport) double __cdecl remainder(  double _X,   double _Y);
__declspec(dllimport) double __cdecl remquo(  double _X,   double _Y,   int *_Z);
__declspec(dllimport) double __cdecl rint(  double _X);
__declspec(dllimport) double __cdecl round(  double _X);
__declspec(dllimport) double __cdecl scalbln(  double _X,   long _Y);
__declspec(dllimport) double __cdecl scalbn(  double _X,   int _Y);
double  __cdecl sin(  double _X);
double  __cdecl sinh(  double _X);
  double  __cdecl sqrt(  double _X);
double  __cdecl tan(  double _X);
double  __cdecl tanh(  double _X);
__declspec(dllimport) double __cdecl tgamma(  double _X);
__declspec(dllimport) double __cdecl trunc(  double _X);
  __declspec(dllimport) double  __cdecl atof(  const char *_String);
  __declspec(dllimport) double  __cdecl _atof_l(  const char *_String,   _locale_t _Locale);
__declspec(dllimport) double  __cdecl _cabs(  struct _complex _Complex_value);
__declspec(dllimport) double  __cdecl ceil(  double _X);
  __declspec(dllimport) double __cdecl _chgsign (  double _X);
  __declspec(dllimport) double __cdecl _copysign (  double _Number,   double _Sign);
__declspec(dllimport) double  __cdecl floor(  double _X);
__declspec(dllimport) double  __cdecl frexp(  double _X,   int * _Y);
__declspec(dllimport) double  __cdecl _hypot(  double _X,   double _Y);
__declspec(dllimport) double  __cdecl _j0(  double _X );
__declspec(dllimport) double  __cdecl _j1(  double _X );
__declspec(dllimport) double  __cdecl _jn(int _X,   double _Y);
__declspec(dllimport) double  __cdecl ldexp(  double _X,   int _Y);
int     __cdecl _matherr(  struct _exception * _Except);
__declspec(dllimport) double  __cdecl modf(  double _X,   double * _Y);
__declspec(dllimport) double  __cdecl _y0(  double _X);
__declspec(dllimport) double  __cdecl _y1(  double _X);
__declspec(dllimport) double  __cdecl _yn(  int _X,   double _Y);
__inline double __cdecl hypot(  double _X,   double _Y)
{
    return _hypot(_X, _Y);
}
__declspec(dllimport) float __cdecl acoshf(  float _X);
__declspec(dllimport) float __cdecl asinhf(  float _X);
__declspec(dllimport) float __cdecl atanhf(  float _X);
__declspec(dllimport) float __cdecl cbrtf(  float _X);
__declspec(dllimport) float  __cdecl _chgsignf(  float _X);
__declspec(dllimport) float __cdecl copysignf(  float _X,   float _Y);
__declspec(dllimport) float  __cdecl _copysignf(  float _Number,   float _Sign);
__declspec(dllimport) float __cdecl erff(  float _X);
__declspec(dllimport) float __cdecl erfcf(  float _X);
__declspec(dllimport) float __cdecl expm1f(  float _X);
__declspec(dllimport) float __cdecl exp2f(  float _X);
__declspec(dllimport) float __cdecl fdimf(  float _X,   float _Y);
__declspec(dllimport) float __cdecl fmaf(  float _X,   float _Y,   float _Z);
__declspec(dllimport) float __cdecl fmaxf(  float _X,   float _Y);
__declspec(dllimport) float __cdecl fminf(  float _X,   float _Y);
__declspec(dllimport) float  __cdecl _hypotf(  float _X,   float _Y);
__declspec(dllimport) int __cdecl ilogbf(  float _X);
__declspec(dllimport) float __cdecl lgammaf(  float _X);
__declspec(dllimport) long long __cdecl llrintf(  float _X);
__declspec(dllimport) long long __cdecl llroundf(  float _X);
__declspec(dllimport) float __cdecl log1pf(  float _X);
__declspec(dllimport) float __cdecl log2f(  float _X);
__declspec(dllimport) float __cdecl logbf(  float _X);
__declspec(dllimport) long __cdecl lrintf(  float _X);
__declspec(dllimport) long __cdecl lroundf(  float _X);
__declspec(dllimport) float __cdecl nanf(  const char *);
__declspec(dllimport) float __cdecl nearbyintf(  float _X);
__declspec(dllimport) float __cdecl nextafterf(  float _X,   float _Y);
__declspec(dllimport) float __cdecl nexttowardf(  float _X,   long double _Y);
__declspec(dllimport) float __cdecl remainderf(  float _X,   float _Y);
__declspec(dllimport) float __cdecl remquof(  float _X,   float _Y,   int *_Z);
__declspec(dllimport) float __cdecl rintf(  float _X);
__declspec(dllimport) float __cdecl roundf(  float _X);
__declspec(dllimport) float __cdecl scalblnf(  float _X,   long _Y);
__declspec(dllimport) float __cdecl scalbnf(  float _X,   int _Y);
__declspec(dllimport) float __cdecl tgammaf(  float _X);
__declspec(dllimport) float __cdecl truncf(  float _X);
__declspec(dllimport) int  __cdecl _set_SSE2_enable(  int _Flag);
__inline float  __cdecl acosf(  float _X)
{
    return (float)acos(_X);
}
__inline float  __cdecl asinf(  float _X)
{
    return (float)asin(_X);
}
__inline float  __cdecl atan2f(  float _Y,   float _X)
{
    return (float)atan2(_Y, _X);
}
__inline float  __cdecl atanf(  float _X)
{
    return (float)atan(_X);
}
__inline float  __cdecl ceilf(  float _X)
{
    return (float)ceil(_X);
}
__inline float  __cdecl cosf(  float _X)
{
    return (float)cos(_X);
}
__inline float  __cdecl coshf(  float _X)
{
    return (float)cosh(_X);
}
__inline float  __cdecl expf(  float _X)
{
    return (float)exp(_X);
}
__inline float __cdecl fabsf(  float _X)
{
    return (float)fabs(_X);
}
__inline float __cdecl floorf(  float _X)
{
    return (float)floor(_X);
}
__inline float __cdecl fmodf(  float _X,   float _Y)
{
    return (float)fmod(_X, _Y);
}
__inline float __cdecl frexpf(  float _X,   int *_Y)
{
    return (float)frexp(_X, _Y);
}
__inline float __cdecl hypotf(  float _X,   float _Y)
{
    return _hypotf(_X, _Y);
}
__inline float __cdecl ldexpf(  float _X,   int _Y)
{
    return (float)ldexp(_X, _Y);
}
__inline float __cdecl log10f(  float _X)
{
    return (float)log10(_X);
}
__inline float __cdecl logf(  float _X)
{
    return (float)log(_X);
}
__inline float __cdecl modff(  float _X,   float *_Y)
{
    double _F, _I;
    _F = modf(_X, &_I);
    *_Y = (float)_I;
    return (float)_F;
}
__inline float __cdecl powf(  float _X,   float _Y)
{
    return (float)pow(_X, _Y);
}
__inline float __cdecl sinf(  float _X)
{
    return (float)sin(_X);
}
__inline float __cdecl sinhf(  float _X)
{
    return (float)sinh(_X);
}
__inline float __cdecl sqrtf(  float _X)
{
    return (float)sqrt(_X);
}
__inline float __cdecl tanf(  float _X)
{
    return (float)tan(_X);
}
__inline float __cdecl tanhf(  float _X)
{
    return (float)tanh(_X);
}
__declspec(dllimport) long double __cdecl acoshl(  long double _X);
__inline long double __cdecl acosl(  long double _X)
{
    return acos((double)_X);
}
__declspec(dllimport) long double __cdecl asinhl(  long double _X);
__inline long double __cdecl asinl(  long double _X)
{
    return asin((double)_X);
}
__inline long double __cdecl atan2l(  long double _Y,   long double _X)
{
    return atan2((double)_Y, (double)_X);
}
__declspec(dllimport) long double __cdecl atanhl(  long double _X);
__inline long double __cdecl atanl(  long double _X)
{
    return atan((double)_X);
}
__declspec(dllimport) long double __cdecl cbrtl(  long double _X);
__inline long double __cdecl ceill(  long double _X)
{
    return ceil((double)_X);
}
__inline long double __cdecl _chgsignl(  long double _X)
{
    return _chgsign((double)_X);
}
__declspec(dllimport) long double __cdecl copysignl(  long double _X,   long double _Y);
__inline long double __cdecl _copysignl(  long double _X,   long double _Y)
{
    return _copysign((double)_X, (double)_Y);
}
__inline long double __cdecl coshl(  long double _X)
{
    return cosh((double)_X);
}
__inline long double __cdecl cosl(  long double _X)
{
    return cos((double)_X);
}
__declspec(dllimport) long double __cdecl erfl(  long double _X);
__declspec(dllimport) long double __cdecl erfcl(  long double _X);
__inline long double __cdecl expl(  long double _X)
{
    return exp((double)_X);
}
__declspec(dllimport) long double __cdecl exp2l(  long double _X);
__declspec(dllimport) long double __cdecl expm1l(  long double _X);
__inline long double __cdecl fabsl(  long double _X)
{
    return fabs((double)_X);
}
__declspec(dllimport) long double __cdecl fdiml(  long double _X,   long double _Y);
__inline long double __cdecl floorl(  long double _X)
{
    return floor((double)_X);
}
__declspec(dllimport) long double __cdecl fmal(  long double _X,   long double _Y,   long double _Z);
__declspec(dllimport) long double __cdecl fmaxl(  long double _X,   long double _Y);
__declspec(dllimport) long double __cdecl fminl(  long double _X,   long double _Y);
__inline long double __cdecl fmodl(  long double _X,   long double _Y)
{
    return fmod((double)_X, (double)_Y);
}
__inline long double __cdecl frexpl(  long double _X,   int *_Y)
{
    return frexp((double)_X, _Y);
}
__declspec(dllimport) int __cdecl ilogbl(  long double _X);
__inline long double __cdecl _hypotl(  long double _X,   long double _Y)
{
    return _hypot((double)_X, (double)_Y);
}
__inline long double __cdecl hypotl(  long double _X,   long double _Y)
{
    return _hypot((double)_X, (double)_Y);
}
__inline long double __cdecl ldexpl(  long double _X,   int _Y)
{
    return ldexp((double)_X, _Y);
}
__declspec(dllimport) long double __cdecl lgammal(  long double _X);
__declspec(dllimport) long long __cdecl llrintl(  long double _X);
__declspec(dllimport) long long __cdecl llroundl(  long double _X);
__inline long double __cdecl logl(  long double _X)
{
    return log((double)_X);
}
__inline long double __cdecl log10l(  long double _X)
{
    return log10((double)_X);
}
__declspec(dllimport) long double __cdecl log1pl(  long double _X);
__declspec(dllimport) long double __cdecl log2l(  long double _X);
__declspec(dllimport) long double __cdecl logbl(  long double _X);
__declspec(dllimport) long __cdecl lrintl(  long double _X);
__declspec(dllimport) long __cdecl lroundl(  long double _X);
__inline long double __cdecl modfl(  long double _X,   long double *_Y)
{
    double _F, _I;
    _F = modf((double)_X, &_I);
    *_Y = _I;
    return _F;
}
__declspec(dllimport) long double __cdecl nanl(  const char *);
__declspec(dllimport) long double __cdecl nearbyintl(  long double _X);
__declspec(dllimport) long double __cdecl nextafterl(  long double _X,   long double _Y);
__declspec(dllimport) long double __cdecl nexttowardl(  long double _X,   long double _Y);
__inline long double __cdecl powl(  long double _X,   long double _Y)
{
    return pow((double)_X, (double)_Y);
}
__declspec(dllimport) long double __cdecl remainderl(  long double _X,   long double _Y);
__declspec(dllimport) long double __cdecl remquol(  long double _X,   long double _Y,   int *_Z);
__declspec(dllimport) long double __cdecl rintl(  long double _X);
__declspec(dllimport) long double __cdecl roundl(  long double _X);
__declspec(dllimport) long double __cdecl scalblnl(  long double _X,   long _Y);
__declspec(dllimport) long double __cdecl scalbnl(  long double _X,   int _Y);
__inline long double __cdecl sinhl(  long double _X)
{
    return sinh((double)_X);
}
__inline long double __cdecl sinl(  long double _X)
{
    return sin((double)_X);
}
__inline long double __cdecl sqrtl(  long double _X)
{
    return sqrt((double)_X);
}
__inline long double __cdecl tanhl(  long double _X)
{
    return tanh((double)_X);
}
__inline long double __cdecl tanl(  long double _X)
{
    return tan((double)_X);
}
__declspec(dllimport) long double __cdecl tgammal(  long double _X);
__declspec(dllimport) long double __cdecl truncl(  long double _X);
__declspec(dllimport) extern double HUGE;
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_j0" ". See online help for details.")) __declspec(dllimport) double  __cdecl j0(  double _X);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_j1" ". See online help for details.")) __declspec(dllimport) double  __cdecl j1(  double _X);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_jn" ". See online help for details.")) __declspec(dllimport) double  __cdecl jn(  int _X,   double _Y);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_y0" ". See online help for details.")) __declspec(dllimport) double  __cdecl y0(  double _X);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_y1" ". See online help for details.")) __declspec(dllimport) double  __cdecl y1(  double _X);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_yn" ". See online help for details.")) __declspec(dllimport) double  __cdecl yn(  int _X,   double _Y);
}
extern "C++" {
template<class _Ty> inline
        _Ty _Pow_int(_Ty _X, int _Y) throw()
        {unsigned int _N;
        if (_Y >= 0)
                _N = (unsigned int)_Y;
        else
                _N = (unsigned int)(-_Y);
        for (_Ty _Z = _Ty(1); ; _X *= _X)
                {if ((_N & 1) != 0)
                        _Z *= _X;
                if ((_N >>= 1) == 0)
                        return (_Y < 0 ? _Ty(1) / _Z : _Z); }}
inline double __cdecl abs(  double _X) throw()
        {return (fabs(_X)); }
inline double __cdecl pow(  double _X,   int _Y) throw()
        {return (_Pow_int(_X, _Y)); }
inline float __cdecl abs(  float _X) throw()
        {return (fabsf(_X)); }
inline float __cdecl acos(  float _X) throw()
        {return (acosf(_X)); }
inline float __cdecl acosh(  float _X) throw()
        {return (acoshf(_X)); }
inline float __cdecl asin(  float _X) throw()
        {return (asinf(_X)); }
inline float __cdecl asinh(  float _X) throw()
        {return (asinhf(_X)); }
inline float __cdecl atan(  float _X) throw()
        {return (atanf(_X)); }
inline float __cdecl atanh(  float _X) throw()
        {return (atanhf(_X)); }
inline float __cdecl atan2(  float _Y,   float _X) throw()
        {return (atan2f(_Y, _X)); }
inline float __cdecl cbrt(  float _X) throw()
        {return (cbrtf(_X)); }
inline float __cdecl ceil(  float _X) throw()
        {return (ceilf(_X)); }
inline float __cdecl copysign(  float _X,   float _Y) throw()
        {return (copysignf(_X, _Y)); }
inline float __cdecl cos(  float _X) throw()
        {return (cosf(_X)); }
inline float __cdecl cosh(  float _X) throw()
        {return (coshf(_X)); }
inline float __cdecl erf(  float _X) throw()
        {return (erff(_X)); }
inline float __cdecl erfc(  float _X) throw()
        {return (erfcf(_X)); }
inline float __cdecl exp(  float _X) throw()
        {return (expf(_X)); }
inline float __cdecl exp2(  float _X) throw()
        {return (exp2f(_X)); }
inline float __cdecl expm1(  float _X) throw()
        {return (expm1f(_X)); }
inline float __cdecl fabs(  float _X) throw()
        {return (fabsf(_X)); }
inline float __cdecl fdim(  float _X,   float _Y) throw()
        {return (fdimf(_X, _Y)); }
inline float __cdecl floor(  float _X) throw()
        {return (floorf(_X)); }
inline float __cdecl fma(  float _X,   float _Y,   float _Z) throw()
        {return (fmaf(_X, _Y, _Z)); }
inline float __cdecl fmax(  float _X,   float _Y) throw()
        {return (fmaxf(_X, _Y)); }
inline float __cdecl fmin(  float _X,   float _Y) throw()
        {return (fminf(_X, _Y)); }
inline float __cdecl fmod(  float _X,   float _Y) throw()
        {return (fmodf(_X, _Y)); }
inline float __cdecl frexp(  float _X,   int * _Y) throw()
        {return (frexpf(_X, _Y)); }
inline float __cdecl hypot(  float _X,   float _Y) throw()
        {return (hypotf(_X, _Y)); }
inline int __cdecl ilogb(  float _X) throw()
        {return (ilogbf(_X)); }
inline float __cdecl ldexp(  float _X,   int _Y) throw()
        {return (ldexpf(_X, _Y)); }
inline float __cdecl lgamma(  float _X) throw()
        {return (lgammaf(_X)); }
inline long long __cdecl llrint(  float _X) throw()
        {return (llrintf(_X)); }
inline long long __cdecl llround(  float _X) throw()
        {return (llroundf(_X)); }
inline float __cdecl log(  float _X) throw()
        {return (logf(_X)); }
inline float __cdecl log10(  float _X) throw()
        {return (log10f(_X)); }
inline float __cdecl log1p(  float _X) throw()
        {return (log1pf(_X)); }
inline float __cdecl log2(  float _X) throw()
        {return (log2f(_X)); }
inline float __cdecl logb(  float _X) throw()
        {return (logbf(_X)); }
inline long __cdecl lrint(  float _X) throw()
        {return (lrintf(_X)); }
inline long __cdecl lround(  float _X) throw()
        {return (lroundf(_X)); }
inline float __cdecl modf(  float _X,   float * _Y) throw()
        {return (modff(_X, _Y)); }
inline float __cdecl nearbyint(  float _X) throw()
        {return (nearbyintf(_X)); }
inline float __cdecl nextafter(  float _X,   float _Y) throw()
        {return (nextafterf(_X, _Y)); }
inline float __cdecl nexttoward(  float _X,   long double _Y) throw()
        {return (nexttowardf(_X, _Y)); }
inline float __cdecl pow(  float _X,   float _Y) throw()
        {return (powf(_X, _Y)); }
inline float __cdecl pow(  float _X,   int _Y) throw()
        {return (_Pow_int(_X, _Y)); }
inline float __cdecl remainder(  float _X,   float _Y) throw()
        {return (remainderf(_X, _Y)); }
inline float __cdecl remquo(  float _X,   float _Y,   int *_Z) throw()
        {return (remquof(_X, _Y, _Z)); }
inline float __cdecl rint(  float _X) throw()
        {return (rintf(_X)); }
inline float __cdecl round(  float _X) throw()
        {return (roundf(_X)); }
inline float __cdecl scalbln(  float _X,   long _Y) throw()
        {return (scalblnf(_X, _Y)); }
inline float __cdecl scalbn(  float _X,   int _Y) throw()
        {return (scalbnf(_X, _Y)); }
inline float __cdecl sin(  float _X) throw()
        {return (sinf(_X)); }
inline float __cdecl sinh(  float _X) throw()
        {return (sinhf(_X)); }
inline float __cdecl sqrt(  float _X) throw()
        {return (sqrtf(_X)); }
inline float __cdecl tan(  float _X) throw()
        {return (tanf(_X)); }
inline float __cdecl tanh(  float _X) throw()
        {return (tanhf(_X)); }
inline float __cdecl tgamma(  float _X) throw()
        {return (tgammaf(_X)); }
inline float __cdecl trunc(  float _X) throw()
        {return (truncf(_X)); }
inline long double __cdecl abs(  long double _X) throw()
        {return (fabsl(_X)); }
inline long double __cdecl acos(  long double _X) throw()
        {return (acosl(_X)); }
inline long double __cdecl acosh(  long double _X) throw()
        {return (acoshl(_X)); }
inline long double __cdecl asin(  long double _X) throw()
        {return (asinl(_X)); }
inline long double __cdecl asinh(  long double _X) throw()
        {return (asinhl(_X)); }
inline long double __cdecl atan(  long double _X) throw()
        {return (atanl(_X)); }
inline long double __cdecl atanh(  long double _X) throw()
        {return (atanhl(_X)); }
inline long double __cdecl atan2(  long double _Y,   long double _X) throw()
        {return (atan2l(_Y, _X)); }
inline long double __cdecl cbrt(  long double _X) throw()
        {return (cbrtl(_X)); }
inline long double __cdecl ceil(  long double _X) throw()
        {return (ceill(_X)); }
inline long double __cdecl copysign(  long double _X,   long double _Y) throw()
        {return (copysignl(_X, _Y)); }
inline long double __cdecl cos(  long double _X) throw()
        {return (cosl(_X)); }
inline long double __cdecl cosh(  long double _X) throw()
        {return (coshl(_X)); }
inline long double __cdecl erf(  long double _X) throw()
        {return (erfl(_X)); }
inline long double __cdecl erfc(  long double _X) throw()
        {return (erfcl(_X)); }
inline long double __cdecl exp(  long double _X) throw()
        {return (expl(_X)); }
inline long double __cdecl exp2(  long double _X) throw()
        {return (exp2l(_X)); }
inline long double __cdecl expm1(  long double _X) throw()
        {return (expm1l(_X)); }
inline long double __cdecl fabs(  long double _X) throw()
        {return (fabsl(_X)); }
inline long double __cdecl fdim(  long double _X,   long double _Y) throw()
        {return (fdiml(_X, _Y)); }
inline long double __cdecl floor(  long double _X) throw()
        {return (floorl(_X)); }
inline long double __cdecl fma(  long double _X,   long double _Y,   long double _Z) throw()
        {return (fmal(_X, _Y, _Z)); }
inline long double __cdecl fmax(  long double _X,   long double _Y) throw()
        {return (fmaxl(_X, _Y)); }
inline long double __cdecl fmin(  long double _X,   long double _Y) throw()
        {return (fminl(_X, _Y)); }
inline long double __cdecl fmod(  long double _X,   long double _Y) throw()
        {return (fmodl(_X, _Y)); }
inline long double __cdecl frexp(  long double _X,   int * _Y) throw()
        {return (frexpl(_X, _Y)); }
inline long double __cdecl hypot(  long double _X,   long double _Y) throw()
        {return (hypotl(_X, _Y)); }
inline int __cdecl ilogb(  long double _X) throw()
        {return (ilogbl(_X)); }
inline long double __cdecl ldexp(  long double _X,   int _Y) throw()
        {return (ldexpl(_X, _Y)); }
inline long double __cdecl lgamma(  long double _X) throw()
        {return (lgammal(_X)); }
inline long long __cdecl llrint(  long double _X) throw()
        {return (llrintl(_X)); }
inline long long __cdecl llround(  long double _X) throw()
        {return (llroundl(_X)); }
inline long double __cdecl log(  long double _X) throw()
        {return (logl(_X)); }
inline long double __cdecl log10(  long double _X) throw()
        {return (log10l(_X)); }
inline long double __cdecl log1p(  long double _X) throw()
        {return (log1pl(_X)); }
inline long double __cdecl log2(  long double _X) throw()
        {return (log2l(_X)); }
inline long double __cdecl logb(  long double _X) throw()
        {return (logbl(_X)); }
inline long  __cdecl lrint(  long double _X) throw()
        {return (lrintl(_X)); }
inline long  __cdecl lround(  long double _X) throw()
        {return (lroundl(_X)); }
inline long double __cdecl modf(  long double _X,   long double * _Y) throw()
        {return (modfl(_X, _Y)); }
inline long double __cdecl nearbyint(  long double _X) throw()
        {return (nearbyintl(_X)); }
inline long double __cdecl nextafter(  long double _X,   long double _Y) throw()
        {return (nextafterl(_X, _Y)); }
inline long double __cdecl nexttoward(  long double _X,   long double _Y) throw()
        {return (nexttowardl(_X, _Y)); }
inline long double __cdecl pow(  long double _X,   long double _Y) throw()
        {return (powl(_X, _Y)); }
inline long double __cdecl pow(  long double _X,   int _Y) throw()
        {return (_Pow_int(_X, _Y)); }
inline long double __cdecl remainder(  long double _X,   long double _Y) throw()
        {return (remainderl(_X, _Y)); }
inline long double __cdecl remquo(  long double _X,   long double _Y,   int *_Z) throw()
        {return (remquol(_X, _Y, _Z)); }
inline long double __cdecl rint(  long double _X) throw()
        {return (rintl(_X)); }
inline long double __cdecl round(  long double _X) throw()
        {return (roundl(_X)); }
inline long double __cdecl scalbln(  long double _X,   long _Y) throw()
        {return (scalblnl(_X, _Y)); }
inline long double __cdecl scalbn(  long double _X,   int _Y) throw()
        {return (scalbnl(_X, _Y)); }
inline long double __cdecl sin(  long double _X) throw()
        {return (sinl(_X)); }
inline long double __cdecl sinh(  long double _X) throw()
        {return (sinhl(_X)); }
inline long double __cdecl sqrt(  long double _X) throw()
        {return (sqrtl(_X)); }
inline long double __cdecl tan(  long double _X) throw()
        {return (tanl(_X)); }
inline long double __cdecl tanh(  long double _X) throw()
        {return (tanhl(_X)); }
inline long double __cdecl tgamma(  long double _X) throw()
        {return (tgammal(_X)); }
inline long double __cdecl trunc(  long double _X) throw()
        {return (truncl(_X)); }
}
#pragma pack(pop)
 #pragma pack(push,8)
 #pragma warning(push,3)
namespace std {
template<class _T1,
	class _Ret>
	struct unary_function;
template<class _T1,
	class _T2,
	class _Ret>
	struct binary_function;
struct _Nil
	{	
	};
static _Nil _Nil_obj;
template<class _Ty,
	_Ty _Val>
	struct integral_constant
	{	
	static const _Ty value = _Val;
	typedef _Ty value_type;
	typedef integral_constant<_Ty, _Val> type;
	operator value_type() const
		{	
		return (value);
		}
	};
typedef integral_constant<bool, true> true_type;
typedef integral_constant<bool, false> false_type;
template<bool>
	struct _Cat_base
		: false_type
	{	
	};
template<>
	struct _Cat_base<true>
		: true_type
	{	
	};
template<bool _Test,
	class _Ty = void>
	struct enable_if
	{	
	};
template<class _Ty>
	struct enable_if<true, _Ty>
	{	
	typedef _Ty type;
	};
template<bool _Test,
	class _Ty1,
	class _Ty2>
	struct conditional
	{	
	typedef _Ty2 type;
	};
template<class _Ty1,
	class _Ty2>
	struct conditional<true, _Ty1, _Ty2>
	{	
	typedef _Ty1 type;
	};
template<class _Ty1, class _Ty2>
	struct is_same
		: false_type
	{	
	};
template<class _Ty1>
	struct is_same<_Ty1, _Ty1>
		: true_type
	{	
	};
template<class _Ty>
	struct remove_const
	{	
	typedef _Ty type;
	};
template<class _Ty>
	struct remove_const<const _Ty>
	{	
	typedef _Ty type;
	};
template<class _Ty>
	struct remove_const<const _Ty[]>
	{	
	typedef _Ty type[];
	};
template<class _Ty, unsigned int _Nx>
	struct remove_const<const _Ty[_Nx]>
	{	
	typedef _Ty type[_Nx];
	};
template<class _Ty>
	struct remove_volatile
	{	
	typedef _Ty type;
	};
template<class _Ty>
	struct remove_volatile<volatile _Ty>
	{	
	typedef _Ty type;
	};
template<class _Ty>
	struct remove_volatile<volatile _Ty[]>
	{	
	typedef _Ty type[];
	};
template<class _Ty, unsigned int _Nx>
	struct remove_volatile<volatile _Ty[_Nx]>
	{	
	typedef _Ty type[_Nx];
	};
template<class _Ty>
	struct remove_cv
	{	
	typedef typename remove_const<typename remove_volatile<_Ty>::type>::type
		type;
	};
template<class _Ty>
	struct _Is_integral
		: false_type
	{	
	};
template<>
	struct _Is_integral<bool>
		: true_type
	{	
	};
template<>
	struct _Is_integral<char>
		: true_type
	{	
	};
template<>
	struct _Is_integral<unsigned char>
		: true_type
	{	
	};
template<>
	struct _Is_integral<signed char>
		: true_type
	{	
	};
template<>
	struct _Is_integral<wchar_t>
		: true_type
	{	
	};
template<>
	struct _Is_integral<unsigned short>
		: true_type
	{	
	};
template<>
	struct _Is_integral<signed short>
		: true_type
	{	
	};
template<>
	struct _Is_integral<unsigned int>
		: true_type
	{	
	};
template<>
	struct _Is_integral<signed int>
		: true_type
	{	
	};
template<>
	struct _Is_integral<unsigned long>
		: true_type
	{	
	};
template<>
	struct _Is_integral<signed long>
		: true_type
	{	
	};
template<>
	struct _Is_integral<__int64>
		: true_type
	{	
	};
template<>
	struct _Is_integral<unsigned __int64>
		: true_type
	{	
	};
template<class _Ty>
	struct is_integral
		: _Is_integral<typename remove_cv<_Ty>::type>
	{	
	};
template<class _Ty>
	struct _Is_floating_point
		: false_type
	{	
	};
template<>
	struct _Is_floating_point<float>
		: true_type
	{	
	};
template<>
	struct _Is_floating_point<double>
		: true_type
	{	
	};
template<>
	struct _Is_floating_point<long double>
		: true_type
	{	
	};
template<class _Ty>
	struct is_floating_point
		: _Is_floating_point<typename remove_cv<_Ty>::type>
	{	
	};
template<class _Ty>
	struct _Is_numeric
		: _Cat_base<is_integral<_Ty>::value
			|| is_floating_point<_Ty>::value>
	{	
	};
template<class _Ty>
	struct remove_reference
	{	
	typedef _Ty type;
	};
template<class _Ty>
	struct remove_reference<_Ty&>
	{	
	typedef _Ty type;
	};
template<class _Ty>
	struct remove_reference<_Ty&&>
	{	
	typedef _Ty type;
	};
template<class _Tgt,
	class _Src>
	struct _Copy_cv
	{	
	typedef typename remove_reference<_Tgt>::type _Tgtx;
	typedef _Tgtx& type;
	};
template<class _Tgt,
	class _Src>
	struct _Copy_cv<_Tgt, const _Src>
	{	
	typedef typename remove_reference<_Tgt>::type _Tgtx;
	typedef const _Tgtx& type;
	};
template<class _Tgt,
	class _Src>
	struct _Copy_cv<_Tgt, volatile _Src>
	{	
	typedef typename remove_reference<_Tgt>::type _Tgtx;
	typedef volatile _Tgtx& type;
	};
template<class _Tgt,
	class _Src>
	struct _Copy_cv<_Tgt, const volatile _Src>
	{	
	typedef typename remove_reference<_Tgt>::type _Tgtx;
	typedef const volatile _Tgtx& type;
	};
template<class _Tgt,
	class _Src>
	struct _Copy_cv<_Tgt, _Src&>
	{	
	typedef typename _Copy_cv<_Tgt, _Src>::type type;
	};
struct _Wrap_int
	{	
	_Wrap_int(int)
		{	
		}
	};
template<class _Ty>
	struct _Identity
	{	
	typedef _Ty type;
	};
template<class _Ty>
	struct _Has_result_type
		{ template<class _Uty> static auto _Fn(int, _Identity<typename _Uty::result_type> * = 0, _Identity<typename _Uty::result_type> * = 0, _Identity<typename _Uty::result_type> * = 0) -> true_type; template<class _Uty> static auto _Fn(_Wrap_int) -> false_type; typedef decltype(_Fn<_Ty>(0)) type; };
}
 #pragma warning(pop)
 #pragma pack(pop)
 #pragma pack(push,8)
 #pragma warning(push,3)
namespace std {
template<class _Ty>
	struct _Promote_to_float
	{	
	typedef typename conditional<is_integral<_Ty>::value,
		double, _Ty>::type type;
	};
template<class _Ty1,
	class _Ty2>
	struct _Common_float_type
	{	
	typedef typename _Promote_to_float<_Ty1>::type _Ty1f;
	typedef typename _Promote_to_float<_Ty2>::type _Ty2f;
	typedef typename conditional<is_same<_Ty1f, long double>::value
		|| is_same<_Ty2f, long double>::value, long double,
		typename conditional<is_same<_Ty1f, double>::value
			|| is_same<_Ty2f, double>::value, double,
			float>::type>::type type;
	};
}
extern "C" double __cdecl pow(  double,   double);
float __cdecl  pow(  float,   float) throw ();
long double __cdecl  pow(  long double,   long double) throw ();
template<class _Ty1,
	class _Ty2> inline
	typename ::std:: enable_if< ::std:: _Is_numeric<_Ty1>::value
		&& ::std:: _Is_numeric<_Ty2>::value,
		typename ::std:: _Common_float_type<_Ty1, _Ty2>::type>::type
	pow(const _Ty1 _Left, const _Ty2 _Right)
	{	
	typedef typename ::std:: _Common_float_type<_Ty1, _Ty2>::type type;
	return (:: pow(type(_Left), type(_Right)));
	}
extern "C"  double __cdecl acos(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type acos(_Ty _Left) { return (:: acos((double)_Left)); }
extern "C"  double __cdecl asin(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type asin(_Ty _Left) { return (:: asin((double)_Left)); }
extern "C"  double __cdecl atan(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type atan(_Ty _Left) { return (:: atan((double)_Left)); }
extern "C"  double __cdecl atan2(  double,   double); template<class _Ty1, class _Ty2> inline typename ::std:: enable_if< ::std:: _Is_numeric<_Ty1>::value && ::std:: _Is_numeric<_Ty2>::value, typename ::std:: _Common_float_type<_Ty1, _Ty2>::type>::type atan2(_Ty1 _Left, _Ty2 _Right) { typedef typename ::std:: _Common_float_type<_Ty1, _Ty2>::type type; return (:: atan2((type)_Left, (type)_Right)); }
extern "C" __declspec(dllimport) double __cdecl ceil(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type ceil(_Ty _Left) { return (:: ceil((double)_Left)); }
extern "C"  double __cdecl cos(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type cos(_Ty _Left) { return (:: cos((double)_Left)); }
extern "C"  double __cdecl cosh(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type cosh(_Ty _Left) { return (:: cosh((double)_Left)); }
extern "C"  double __cdecl exp(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type exp(_Ty _Left) { return (:: exp((double)_Left)); }
extern "C" __declspec(dllimport) double __cdecl floor(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type floor(_Ty _Left) { return (:: floor((double)_Left)); }
extern "C"  double __cdecl fmod(  double,   double); template<class _Ty1, class _Ty2> inline typename ::std:: enable_if< ::std:: _Is_numeric<_Ty1>::value && ::std:: _Is_numeric<_Ty2>::value, typename ::std:: _Common_float_type<_Ty1, _Ty2>::type>::type fmod(_Ty1 _Left, _Ty2 _Right) { typedef typename ::std:: _Common_float_type<_Ty1, _Ty2>::type type; return (:: fmod((type)_Left, (type)_Right)); }
extern "C" __declspec(dllimport) double __cdecl frexp(  double,   int *); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type frexp(_Ty _Left,   int * _Arg2) { return (:: frexp((double)_Left, _Arg2)); }
extern "C" __declspec(dllimport) double __cdecl ldexp(  double,   int); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type ldexp(_Ty _Left,   int _Arg2) { return (:: ldexp((double)_Left, _Arg2)); }
extern "C"  double __cdecl log(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type log(_Ty _Left) { return (:: log((double)_Left)); }
extern "C"  double __cdecl log10(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type log10(_Ty _Left) { return (:: log10((double)_Left)); }
extern "C"  double __cdecl sin(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type sin(_Ty _Left) { return (:: sin((double)_Left)); }
extern "C"  double __cdecl sinh(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type sinh(_Ty _Left) { return (:: sinh((double)_Left)); }
extern "C"  double __cdecl sqrt(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type sqrt(_Ty _Left) { return (:: sqrt((double)_Left)); }
extern "C"  double __cdecl tan(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type tan(_Ty _Left) { return (:: tan((double)_Left)); }
extern "C"  double __cdecl tanh(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type tanh(_Ty _Left) { return (:: tanh((double)_Left)); }
inline float _Fma(float _Left, float _Middle, float _Right)
	{
	return (:: fmaf(_Left, _Middle, _Right));
	}
inline double _Fma(double _Left, double _Middle, double _Right)
	{
	return (:: fma(_Left, _Middle, _Right));
	}
inline long double _Fma(long double _Left, long double _Middle, long double _Right)
	{
	return (:: fmal(_Left, _Middle, _Right));
	}
template<class _Ty1,
	class _Ty2,
	class _Ty3> inline
	typename ::std:: _Common_float_type<_Ty1,
		typename ::std:: _Common_float_type<_Ty2, _Ty3>::type>::type
	fma(_Ty1 _Left, _Ty2 _Middle, _Ty3 _Right)
	{	
	typedef typename ::std:: _Common_float_type<_Ty1,
		typename ::std:: _Common_float_type<_Ty2, _Ty3>::type>::type type;
	return (_Fma((type)_Left, (type)_Middle, (type)_Right));
	}
inline float _Remquo(float _Left, float _Right, int *_Pquo)
	{
	return (:: remquof(_Left, _Right, _Pquo));
	}
inline double _Remquo(double _Left, double _Right, int *_Pquo)
	{
	return (:: remquo(_Left, _Right, _Pquo));
	}
inline long double _Remquo(long double _Left, long double _Right, int *_Pquo)
	{
	return (:: remquol(_Left, _Right, _Pquo));
	}
template<class _Ty1,
	class _Ty2> inline
	typename ::std:: _Common_float_type<_Ty1, _Ty2>::type
	remquo(_Ty1 _Left, _Ty2 _Right, int *_Pquo)
	{	
	typedef typename ::std:: _Common_float_type<_Ty1, _Ty2>::type type;
	return (_Remquo((type)_Left, (type)_Right, _Pquo));
	}
extern "C" __declspec(dllimport) double __cdecl acosh(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type acosh(_Ty _Left) { return (:: acosh((double)_Left)); }
extern "C" __declspec(dllimport) double __cdecl asinh(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type asinh(_Ty _Left) { return (:: asinh((double)_Left)); }
extern "C" __declspec(dllimport) double __cdecl atanh(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type atanh(_Ty _Left) { return (:: atanh((double)_Left)); }
extern "C" __declspec(dllimport) double __cdecl cbrt(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type cbrt(_Ty _Left) { return (:: cbrt((double)_Left)); }
extern "C" __declspec(dllimport) double __cdecl copysign(  double,   double); template<class _Ty1, class _Ty2> inline typename ::std:: enable_if< ::std:: _Is_numeric<_Ty1>::value && ::std:: _Is_numeric<_Ty2>::value, typename ::std:: _Common_float_type<_Ty1, _Ty2>::type>::type copysign(_Ty1 _Left, _Ty2 _Right) { typedef typename ::std:: _Common_float_type<_Ty1, _Ty2>::type type; return (:: copysign((type)_Left, (type)_Right)); }
extern "C" __declspec(dllimport) double __cdecl erf(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type erf(_Ty _Left) { return (:: erf((double)_Left)); }
extern "C" __declspec(dllimport) double __cdecl erfc(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type erfc(_Ty _Left) { return (:: erfc((double)_Left)); }
extern "C" __declspec(dllimport) double __cdecl expm1(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type expm1(_Ty _Left) { return (:: expm1((double)_Left)); }
extern "C" __declspec(dllimport) double __cdecl exp2(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type exp2(_Ty _Left) { return (:: exp2((double)_Left)); }
extern "C" __declspec(dllimport) double __cdecl fdim(  double,   double); template<class _Ty1, class _Ty2> inline typename ::std:: enable_if< ::std:: _Is_numeric<_Ty1>::value && ::std:: _Is_numeric<_Ty2>::value, typename ::std:: _Common_float_type<_Ty1, _Ty2>::type>::type fdim(_Ty1 _Left, _Ty2 _Right) { typedef typename ::std:: _Common_float_type<_Ty1, _Ty2>::type type; return (:: fdim((type)_Left, (type)_Right)); }
extern "C" __declspec(dllimport) double __cdecl fmax(  double,   double); template<class _Ty1, class _Ty2> inline typename ::std:: enable_if< ::std:: _Is_numeric<_Ty1>::value && ::std:: _Is_numeric<_Ty2>::value, typename ::std:: _Common_float_type<_Ty1, _Ty2>::type>::type fmax(_Ty1 _Left, _Ty2 _Right) { typedef typename ::std:: _Common_float_type<_Ty1, _Ty2>::type type; return (:: fmax((type)_Left, (type)_Right)); }
extern "C" __declspec(dllimport) double __cdecl fmin(  double,   double); template<class _Ty1, class _Ty2> inline typename ::std:: enable_if< ::std:: _Is_numeric<_Ty1>::value && ::std:: _Is_numeric<_Ty2>::value, typename ::std:: _Common_float_type<_Ty1, _Ty2>::type>::type fmin(_Ty1 _Left, _Ty2 _Right) { typedef typename ::std:: _Common_float_type<_Ty1, _Ty2>::type type; return (:: fmin((type)_Left, (type)_Right)); }
extern "C"  double __cdecl hypot(  double,   double); template<class _Ty1, class _Ty2> inline typename ::std:: enable_if< ::std:: _Is_numeric<_Ty1>::value && ::std:: _Is_numeric<_Ty2>::value, typename ::std:: _Common_float_type<_Ty1, _Ty2>::type>::type hypot(_Ty1 _Left, _Ty2 _Right) { typedef typename ::std:: _Common_float_type<_Ty1, _Ty2>::type type; return (:: hypot((type)_Left, (type)_Right)); }
extern "C" __declspec(dllimport) int __cdecl ilogb(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, int>::type ilogb(_Ty _Left) { return (:: ilogb((double)_Left)); }
extern "C" __declspec(dllimport) double __cdecl lgamma(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type lgamma(_Ty _Left) { return (:: lgamma((double)_Left)); }
extern "C" __declspec(dllimport) long long __cdecl llrint(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, long long>::type llrint(_Ty _Left) { return (:: llrint((double)_Left)); }
extern "C" __declspec(dllimport) long long __cdecl llround(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, long long>::type llround(_Ty _Left) { return (:: llround((double)_Left)); }
extern "C" __declspec(dllimport) double __cdecl log1p(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type log1p(_Ty _Left) { return (:: log1p((double)_Left)); }
extern "C" __declspec(dllimport) double __cdecl log2(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type log2(_Ty _Left) { return (:: log2((double)_Left)); }
extern "C" __declspec(dllimport) double __cdecl logb(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type logb(_Ty _Left) { return (:: logb((double)_Left)); }
extern "C" __declspec(dllimport) long __cdecl lrint(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, long>::type lrint(_Ty _Left) { return (:: lrint((double)_Left)); }
extern "C" __declspec(dllimport) long __cdecl lround(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, long>::type lround(_Ty _Left) { return (:: lround((double)_Left)); }
extern "C" __declspec(dllimport) double __cdecl nearbyint(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type nearbyint(_Ty _Left) { return (:: nearbyint((double)_Left)); }
extern "C" __declspec(dllimport) double __cdecl nextafter(  double,   double); template<class _Ty1, class _Ty2> inline typename ::std:: enable_if< ::std:: _Is_numeric<_Ty1>::value && ::std:: _Is_numeric<_Ty2>::value, typename ::std:: _Common_float_type<_Ty1, _Ty2>::type>::type nextafter(_Ty1 _Left, _Ty2 _Right) { typedef typename ::std:: _Common_float_type<_Ty1, _Ty2>::type type; return (:: nextafter((type)_Left, (type)_Right)); }
extern "C" __declspec(dllimport) double __cdecl nexttoward(  double,   long double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type nexttoward(_Ty _Left,   long double _Arg2) { return (:: nexttoward((double)_Left, _Arg2)); }
extern "C" __declspec(dllimport) double __cdecl remainder(  double,   double); template<class _Ty1, class _Ty2> inline typename ::std:: enable_if< ::std:: _Is_numeric<_Ty1>::value && ::std:: _Is_numeric<_Ty2>::value, typename ::std:: _Common_float_type<_Ty1, _Ty2>::type>::type remainder(_Ty1 _Left, _Ty2 _Right) { typedef typename ::std:: _Common_float_type<_Ty1, _Ty2>::type type; return (:: remainder((type)_Left, (type)_Right)); }
extern "C" __declspec(dllimport) double __cdecl rint(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type rint(_Ty _Left) { return (:: rint((double)_Left)); }
extern "C" __declspec(dllimport) double __cdecl round(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type round(_Ty _Left) { return (:: round((double)_Left)); }
extern "C" __declspec(dllimport) double __cdecl scalbln(  double,   long); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type scalbln(_Ty _Left,   long _Arg2) { return (:: scalbln((double)_Left, _Arg2)); }
extern "C" __declspec(dllimport) double __cdecl scalbn(  double,   int); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type scalbn(_Ty _Left,   int _Arg2) { return (:: scalbn((double)_Left, _Arg2)); }
extern "C" __declspec(dllimport) double __cdecl tgamma(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type tgamma(_Ty _Left) { return (:: tgamma((double)_Left)); }
extern "C" __declspec(dllimport) double __cdecl trunc(  double); template<class _Ty> inline typename ::std:: enable_if< ::std:: is_integral<_Ty>::value, double>::type trunc(_Ty _Left) { return (:: trunc((double)_Left)); }
 #pragma warning(pop)
 #pragma pack(pop)
namespace std {
using :: abs; using :: acos; using :: asin;
using :: atan; using :: atan2; using :: ceil;
using :: cos; using :: cosh; using :: exp;
using :: fabs; using :: floor; using :: fmod;
using :: frexp; using :: ldexp; using :: log;
using :: log10; using :: modf; using :: pow;
using :: sin; using :: sinh; using :: sqrt;
using :: tan; using :: tanh;
using :: acosf; using :: asinf;
using :: atanf; using :: atan2f; using :: ceilf;
using :: cosf; using :: coshf; using :: expf;
using :: fabsf; using :: floorf; using :: fmodf;
using :: frexpf; using :: ldexpf; using :: logf;
using :: log10f; using :: modff; using :: powf;
using :: sinf; using :: sinhf; using :: sqrtf;
using :: tanf; using :: tanhf;
using :: acosl; using :: asinl;
using :: atanl; using :: atan2l; using :: ceill;
using :: cosl; using :: coshl; using :: expl;
using :: fabsl; using :: floorl; using :: fmodl;
using :: frexpl; using :: ldexpl; using :: logl;
using :: log10l; using :: modfl; using :: powl;
using :: sinl; using :: sinhl; using :: sqrtl;
using :: tanl; using :: tanhl;
using :: float_t; using :: double_t;
using :: acosh; using :: asinh; using :: atanh;
using :: cbrt; using :: erf; using :: erfc;
using :: expm1; using :: exp2;
using :: hypot; using :: ilogb; using :: lgamma;
using :: log1p; using :: log2; using :: logb;
using :: llrint; using :: lrint; using :: nearbyint;
using :: rint; using :: llround; using :: lround;
using :: fdim; using :: fma; using :: fmax; using :: fmin;
using :: round; using :: trunc;
using :: remainder; using :: remquo;
using :: copysign; using :: nan; using :: nextafter;
using :: scalbn; using :: scalbln;
using :: nexttoward; using :: tgamma;
using :: acoshf; using :: asinhf; using :: atanhf;
using :: cbrtf; using :: erff; using :: erfcf;
using :: expm1f; using :: exp2f;
using :: hypotf; using :: ilogbf; using :: lgammaf;
using :: log1pf; using :: log2f; using :: logbf;
using :: llrintf; using :: lrintf; using :: nearbyintf;
using :: rintf; using :: llroundf; using :: lroundf;
using :: fdimf; using :: fmaf; using :: fmaxf; using :: fminf;
using :: roundf; using :: truncf;
using :: remainderf; using :: remquof;
using :: copysignf; using :: nanf;
using :: nextafterf; using :: scalbnf; using :: scalblnf;
using :: nexttowardf; using :: tgammaf;
using :: acoshl; using :: asinhl; using :: atanhl;
using :: cbrtl; using :: erfl; using :: erfcl;
using :: expm1l; using :: exp2l;
using :: hypotl; using :: ilogbl; using :: lgammal;
using :: log1pl; using :: log2l; using :: logbl;
using :: llrintl; using :: lrintl; using :: nearbyintl;
using :: rintl; using :: llroundl; using :: lroundl;
using :: fdiml; using :: fmal; using :: fmaxl; using :: fminl;
using :: roundl; using :: truncl;
using :: remainderl; using :: remquol;
using :: copysignl; using :: nanl;
using :: nextafterl; using :: scalbnl; using :: scalblnl;
using :: nexttowardl; using :: tgammal;
using :: fpclassify; using :: signbit;
using :: isfinite; using :: isinf;
using :: isnan; using :: isnormal;
using :: isgreater; using :: isgreaterequal;
using :: isless; using :: islessequal;
using :: islessgreater; using :: isunordered;
}
#pragma pack(push,8)
extern "C" {
struct _iobuf {
        char *_ptr;
        int   _cnt;
        char *_base;
        int   _flag;
        int   _file;
        int   _charbuf;
        int   _bufsiz;
        char *_tmpfname;
        };
typedef struct _iobuf FILE;
__declspec(dllimport) FILE * __cdecl __iob_func(void);
typedef unsigned long _fsize_t; 
struct _wfinddata32_t {
        unsigned    attrib;
        __time32_t  time_create;    
        __time32_t  time_access;    
        __time32_t  time_write;
        _fsize_t    size;
        wchar_t     name[260];
};
struct _wfinddata32i64_t {
        unsigned    attrib;
        __time32_t  time_create;    
        __time32_t  time_access;    
        __time32_t  time_write;
        __int64     size;
        wchar_t     name[260];
};
struct _wfinddata64i32_t {
        unsigned    attrib;
        __time64_t  time_create;    
        __time64_t  time_access;    
        __time64_t  time_write;
        _fsize_t    size;
        wchar_t     name[260];
};
struct _wfinddata64_t {
        unsigned    attrib;
        __time64_t  time_create;    
        __time64_t  time_access;    
        __time64_t  time_write;
        __int64     size;
        wchar_t     name[260];
};
__declspec(dllimport) const unsigned short * __cdecl __pctype_func(void);
__declspec(dllimport) extern const unsigned short *_pctype;
__declspec(dllimport) extern const unsigned short _wctype[];
__declspec(dllimport) const wctype_t * __cdecl __pwctype_func(void);
__declspec(dllimport) extern const wctype_t *_pwctype;
  __declspec(dllimport) int __cdecl iswalpha(  wint_t _C);
  __declspec(dllimport) int __cdecl _iswalpha_l(  wint_t _C,   _locale_t _Locale);
  __declspec(dllimport) int __cdecl iswupper(  wint_t _C);
  __declspec(dllimport) int __cdecl _iswupper_l(  wint_t _C,   _locale_t _Locale);
  __declspec(dllimport) int __cdecl iswlower(  wint_t _C);
  __declspec(dllimport) int __cdecl _iswlower_l(  wint_t _C,   _locale_t _Locale);
  __declspec(dllimport) int __cdecl iswdigit(  wint_t _C);
  __declspec(dllimport) int __cdecl _iswdigit_l(  wint_t _C,   _locale_t _Locale);
  __declspec(dllimport) int __cdecl iswxdigit(  wint_t _C);
  __declspec(dllimport) int __cdecl _iswxdigit_l(  wint_t _C,   _locale_t _Locale);
  __declspec(dllimport) int __cdecl iswspace(  wint_t _C);
  __declspec(dllimport) int __cdecl _iswspace_l(  wint_t _C,   _locale_t _Locale);
  __declspec(dllimport) int __cdecl iswpunct(  wint_t _C);
  __declspec(dllimport) int __cdecl _iswpunct_l(  wint_t _C,   _locale_t _Locale);
  __declspec(dllimport) int __cdecl iswblank(  wint_t _C);
  __declspec(dllimport) int __cdecl _iswblank_l(  wint_t _C,   _locale_t _Locale);
  __declspec(dllimport) int __cdecl iswalnum(  wint_t _C);
  __declspec(dllimport) int __cdecl _iswalnum_l(  wint_t _C,   _locale_t _Locale);
  __declspec(dllimport) int __cdecl iswprint(  wint_t _C);
  __declspec(dllimport) int __cdecl _iswprint_l(  wint_t _C,   _locale_t _Locale);
  __declspec(dllimport) int __cdecl iswgraph(  wint_t _C);
  __declspec(dllimport) int __cdecl _iswgraph_l(  wint_t _C,   _locale_t _Locale);
  __declspec(dllimport) int __cdecl iswcntrl(  wint_t _C);
  __declspec(dllimport) int __cdecl _iswcntrl_l(  wint_t _C,   _locale_t _Locale);
  __declspec(dllimport) int __cdecl iswascii(  wint_t _C);
  __declspec(dllimport) int __cdecl isleadbyte(  int _C);
  __declspec(dllimport) int __cdecl _isleadbyte_l(  int _C,   _locale_t _Locale);
  __declspec(dllimport) wint_t __cdecl towupper(  wint_t _C);
  __declspec(dllimport) wint_t __cdecl _towupper_l(  wint_t _C,   _locale_t _Locale);
  __declspec(dllimport) wint_t __cdecl towlower(  wint_t _C);
  __declspec(dllimport) wint_t __cdecl _towlower_l(  wint_t _C,   _locale_t _Locale);
  __declspec(dllimport) int __cdecl iswctype(  wint_t _C,   wctype_t _Type);
  __declspec(dllimport) int __cdecl _iswctype_l(  wint_t _C,   wctype_t _Type,   _locale_t _Locale);
  __declspec(dllimport) int __cdecl __iswcsymf(  wint_t _C);
  __declspec(dllimport) int __cdecl _iswcsymf_l(  wint_t _C,   _locale_t _Locale);
  __declspec(dllimport) int __cdecl __iswcsym(  wint_t _C);
  __declspec(dllimport) int __cdecl _iswcsym_l(  wint_t _C,   _locale_t _Locale);
__declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using " "iswctype" " instead. See online help for details.")) __declspec(dllimport) int __cdecl is_wctype(  wint_t _C,   wctype_t _Type);
    __declspec(dllimport) wchar_t * __cdecl _wgetcwd(  wchar_t * _DstBuf,   int _SizeInWords);
    __declspec(dllimport) wchar_t * __cdecl _wgetdcwd(  int _Drive,   wchar_t * _DstBuf,   int _SizeInWords);
  __declspec(dllimport) int __cdecl _wchdir(  const wchar_t * _Path);
  __declspec(dllimport) int __cdecl _wmkdir(  const wchar_t * _Path);
  __declspec(dllimport) int __cdecl _wrmdir(  const wchar_t * _Path);
  __declspec(dllimport) int __cdecl _waccess(  const wchar_t * _Filename,   int _AccessMode);
 __declspec(dllimport) errno_t __cdecl _waccess_s(  const wchar_t * _Filename,   int _AccessMode);
  __declspec(dllimport) int __cdecl _wchmod(  const wchar_t * _Filename,   int _Mode);
  __declspec(deprecated("This function or variable may be unsafe. Consider using " "_wsopen_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) int __cdecl _wcreat(  const wchar_t * _Filename,   int _PermissionMode);
  __declspec(dllimport) intptr_t __cdecl _wfindfirst32(  const wchar_t * _Filename,   struct _wfinddata32_t * _FindData);
  __declspec(dllimport) int __cdecl _wfindnext32(  intptr_t _FindHandle,   struct _wfinddata32_t * _FindData);
__declspec(dllimport) int __cdecl _wunlink(  const wchar_t * _Filename);
  __declspec(dllimport) int __cdecl _wrename(  const wchar_t * _OldFilename,   const wchar_t * _NewFilename);
__declspec(dllimport) errno_t __cdecl _wmktemp_s(  wchar_t * _TemplateName,   size_t _SizeInWords);
extern "C++" { template <size_t _Size> inline errno_t __cdecl _wmktemp_s(wchar_t (&_TemplateName)[_Size]) throw() { return _wmktemp_s(_TemplateName, _Size); } }
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wmktemp_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) wchar_t * __cdecl _wmktemp( wchar_t *_TemplateName);
  __declspec(dllimport) intptr_t __cdecl _wfindfirst32i64(  const wchar_t * _Filename,   struct _wfinddata32i64_t * _FindData);
  __declspec(dllimport) intptr_t __cdecl _wfindfirst64i32(  const wchar_t * _Filename,   struct _wfinddata64i32_t * _FindData);
  __declspec(dllimport) intptr_t __cdecl _wfindfirst64(  const wchar_t * _Filename,   struct _wfinddata64_t * _FindData);
  __declspec(dllimport) int __cdecl _wfindnext32i64(  intptr_t _FindHandle,   struct _wfinddata32i64_t * _FindData);
  __declspec(dllimport) int __cdecl _wfindnext64i32(  intptr_t _FindHandle,   struct _wfinddata64i32_t * _FindData);
  __declspec(dllimport) int __cdecl _wfindnext64(  intptr_t _FindHandle,   struct _wfinddata64_t * _FindData);
 __declspec(dllimport) errno_t __cdecl _wsopen_s(  int * _FileHandle,   const wchar_t * _Filename,   int _OpenFlag,   int _ShareFlag,   int _PermissionFlag);
extern "C++" __declspec(deprecated("This function or variable may be unsafe. Consider using " "_wsopen_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) int __cdecl _wopen(  const wchar_t * _Filename,   int _OpenFlag,   int _PermissionMode = 0);
extern "C++" __declspec(deprecated("This function or variable may be unsafe. Consider using " "_wsopen_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) int __cdecl _wsopen(  const wchar_t * _Filename,   int _OpenFlag,   int _ShareFlag, int _PermissionMode = 0);
 __declspec(dllimport) wchar_t * __cdecl _wsetlocale(  int _Category,   const wchar_t * _Locale);
 __declspec(dllimport) _locale_t __cdecl _wcreate_locale(  int _Category,   const wchar_t * _Locale);
__declspec(dllimport) intptr_t __cdecl _wexecl(  const wchar_t * _Filename,   const wchar_t * _ArgList, ...);
__declspec(dllimport) intptr_t __cdecl _wexecle(  const wchar_t * _Filename,   const wchar_t * _ArgList, ...);
__declspec(dllimport) intptr_t __cdecl _wexeclp(  const wchar_t * _Filename,   const wchar_t * _ArgList, ...);
__declspec(dllimport) intptr_t __cdecl _wexeclpe(  const wchar_t * _Filename,   const wchar_t * _ArgList, ...);
__declspec(dllimport) intptr_t __cdecl _wexecv(  const wchar_t * _Filename,   const wchar_t * const * _ArgList);
__declspec(dllimport) intptr_t __cdecl _wexecve(  const wchar_t * _Filename,   const wchar_t * const * _ArgList,
          const wchar_t * const * _Env);
__declspec(dllimport) intptr_t __cdecl _wexecvp(  const wchar_t * _Filename,   const wchar_t * const * _ArgList);
__declspec(dllimport) intptr_t __cdecl _wexecvpe(  const wchar_t * _Filename,   const wchar_t * const * _ArgList,
          const wchar_t * const * _Env);
__declspec(dllimport) intptr_t __cdecl _wspawnl(  int _Mode,   const wchar_t * _Filename,   const wchar_t * _ArgList, ...);
__declspec(dllimport) intptr_t __cdecl _wspawnle(  int _Mode,   const wchar_t * _Filename,   const wchar_t * _ArgList, ...);
__declspec(dllimport) intptr_t __cdecl _wspawnlp(  int _Mode,   const wchar_t * _Filename,   const wchar_t * _ArgList, ...);
__declspec(dllimport) intptr_t __cdecl _wspawnlpe(  int _Mode,   const wchar_t * _Filename,   const wchar_t * _ArgList, ...);
__declspec(dllimport) intptr_t __cdecl _wspawnv(  int _Mode,   const wchar_t * _Filename,   const wchar_t * const * _ArgList);
__declspec(dllimport) intptr_t __cdecl _wspawnve(  int _Mode,   const wchar_t * _Filename,   const wchar_t * const * _ArgList,
          const wchar_t * const * _Env);
__declspec(dllimport) intptr_t __cdecl _wspawnvp(  int _Mode,   const wchar_t * _Filename,   const wchar_t * const * _ArgList);
__declspec(dllimport) intptr_t __cdecl _wspawnvpe(  int _Mode,   const wchar_t * _Filename,   const wchar_t * const * _ArgList,
          const wchar_t * const * _Env);
typedef unsigned short _ino_t;      
typedef unsigned short ino_t;
typedef unsigned int _dev_t;        
typedef unsigned int dev_t;
typedef long _off_t;                
typedef long off_t;
struct _stat32 {
        _dev_t     st_dev;
        _ino_t     st_ino;
        unsigned short st_mode;
        short      st_nlink;
        short      st_uid;
        short      st_gid;
        _dev_t     st_rdev;
        _off_t     st_size;
        __time32_t st_atime;
        __time32_t st_mtime;
        __time32_t st_ctime;
        };
struct stat {
        _dev_t     st_dev;
        _ino_t     st_ino;
        unsigned short st_mode;
        short      st_nlink;
        short      st_uid;
        short      st_gid;
        _dev_t     st_rdev;
        _off_t     st_size;
        time_t st_atime;
        time_t st_mtime;
        time_t st_ctime;
        };
struct _stat32i64 {
        _dev_t     st_dev;
        _ino_t     st_ino;
        unsigned short st_mode;
        short      st_nlink;
        short      st_uid;
        short      st_gid;
        _dev_t     st_rdev;
        __int64    st_size;
        __time32_t st_atime;
        __time32_t st_mtime;
        __time32_t st_ctime;
        };
struct _stat64i32 {
        _dev_t     st_dev;
        _ino_t     st_ino;
        unsigned short st_mode;
        short      st_nlink;
        short      st_uid;
        short      st_gid;
        _dev_t     st_rdev;
        _off_t     st_size;
        __time64_t st_atime;
        __time64_t st_mtime;
        __time64_t st_ctime;
        };
struct _stat64 {
        _dev_t     st_dev;
        _ino_t     st_ino;
        unsigned short st_mode;
        short      st_nlink;
        short      st_uid;
        short      st_gid;
        _dev_t     st_rdev;
        __int64    st_size;
        __time64_t st_atime;
        __time64_t st_mtime;
        __time64_t st_ctime;
        };
__declspec(dllimport) int __cdecl _wstat32(  const wchar_t * _Name,   struct _stat32 * _Stat);
__declspec(dllimport) int __cdecl _wstat32i64(  const wchar_t * _Name,   struct _stat32i64 * _Stat);
__declspec(dllimport) int __cdecl _wstat64i32(  const wchar_t * _Name,   struct _stat64i32 * _Stat);
__declspec(dllimport) int __cdecl _wstat64(  const wchar_t * _Name,   struct _stat64 * _Stat);
 __declspec(dllimport) errno_t __cdecl _cgetws_s(  wchar_t * _Buffer, size_t _SizeInWords,   size_t * _SizeRead);
extern "C++" { template <size_t _Size> inline errno_t __cdecl _cgetws_s(  wchar_t (&_Buffer)[_Size], size_t * _SizeRead) throw() { return _cgetws_s(_Buffer, _Size, _SizeRead); } }
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_cgetws_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) wchar_t * __cdecl _cgetws(  wchar_t *_Buffer);
  __declspec(dllimport) wint_t __cdecl _getwch(void);
  __declspec(dllimport) wint_t __cdecl _getwche(void);
  __declspec(dllimport) wint_t __cdecl _putwch(wchar_t _WCh);
  __declspec(dllimport) wint_t __cdecl _ungetwch(wint_t _WCh);
 __declspec(dllimport) int __cdecl _cputws(  const wchar_t * _String);
 __declspec(dllimport) int __cdecl _cwprintf(    const wchar_t * _Format, ...);
 __declspec(dllimport) int __cdecl _cwprintf_s(    const wchar_t * _Format, ...);
 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_cwscanf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) int __cdecl _cwscanf(    const wchar_t * _Format, ...);
 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_cwscanf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) int __cdecl _cwscanf_l(    const wchar_t * _Format,   _locale_t _Locale, ...);
 __declspec(dllimport) int __cdecl _cwscanf_s(    const wchar_t * _Format, ...);
 __declspec(dllimport) int __cdecl _cwscanf_s_l(    const wchar_t * _Format,   _locale_t _Locale, ...);
 __declspec(dllimport) int __cdecl _vcwprintf(    const wchar_t *_Format, va_list _ArgList);
 __declspec(dllimport) int __cdecl _vcwprintf_s(    const wchar_t *_Format, va_list _ArgList);
 __declspec(dllimport) int __cdecl _cwprintf_p(    const wchar_t * _Format, ...);
 __declspec(dllimport) int __cdecl _vcwprintf_p(    const wchar_t*  _Format, va_list _ArgList);
__declspec(dllimport) int __cdecl _cwprintf_l(    const wchar_t * _Format,   _locale_t _Locale, ...);
__declspec(dllimport) int __cdecl _cwprintf_s_l(    const wchar_t * _Format,   _locale_t _Locale, ...);
__declspec(dllimport) int __cdecl _vcwprintf_l(    const wchar_t *_Format,   _locale_t _Locale, va_list _ArgList);
__declspec(dllimport) int __cdecl _vcwprintf_s_l(    const wchar_t * _Format,   _locale_t _Locale, va_list _ArgList);
__declspec(dllimport) int __cdecl _cwprintf_p_l(    const wchar_t * _Format,   _locale_t _Locale, ...);
__declspec(dllimport) int __cdecl _vcwprintf_p_l(    const wchar_t * _Format,   _locale_t _Locale, va_list _ArgList);
 wint_t __cdecl _putwch_nolock(wchar_t _WCh);
  wint_t __cdecl _getwch_nolock(void);
  wint_t __cdecl _getwche_nolock(void);
 wint_t __cdecl _ungetwch_nolock(wint_t _WCh);
  __declspec(dllimport) FILE * __cdecl _wfsopen(  const wchar_t * _Filename,   const wchar_t * _Mode,   int _ShFlag);
 __declspec(dllimport) wint_t __cdecl fgetwc(  FILE * _File);
 __declspec(dllimport) wint_t __cdecl _fgetwchar(void);
 __declspec(dllimport) wint_t __cdecl fputwc(  wchar_t _Ch,   FILE * _File);
 __declspec(dllimport) wint_t __cdecl _fputwchar(  wchar_t _Ch);
  __declspec(dllimport) wint_t __cdecl getwc(  FILE * _File);
  __declspec(dllimport) wint_t __cdecl getwchar(void);
 __declspec(dllimport) wint_t __cdecl putwc(  wchar_t _Ch,   FILE * _File);
 __declspec(dllimport) wint_t __cdecl putwchar(  wchar_t _Ch);
 __declspec(dllimport) wint_t __cdecl ungetwc(  wint_t _Ch,   FILE * _File);
 __declspec(dllimport) wchar_t * __cdecl fgetws(  wchar_t * _Dst,   int _SizeInWords,   FILE * _File);
 __declspec(dllimport) int __cdecl fputws(  const wchar_t * _Str,   FILE * _File);
 __declspec(dllimport) wchar_t * __cdecl _getws_s(  wchar_t * _Str,   size_t _SizeInWords);
extern "C++" { template <size_t _Size> inline wchar_t * __cdecl _getws_s(  wchar_t (&_String)[_Size]) throw() { return _getws_s(_String, _Size); } }
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_getws_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) wchar_t * __cdecl _getws(  wchar_t *_String);
 __declspec(dllimport) int __cdecl _putws(  const wchar_t * _Str);
 __declspec(dllimport) int __cdecl fwprintf(  FILE * _File,     const wchar_t * _Format, ...);
 __declspec(dllimport) int __cdecl fwprintf_s(  FILE * _File,     const wchar_t * _Format, ...);
 __declspec(dllimport) int __cdecl wprintf(    const wchar_t * _Format, ...);
 __declspec(dllimport) int __cdecl wprintf_s(    const wchar_t * _Format, ...);
  __declspec(dllimport) int __cdecl _scwprintf(    const wchar_t * _Format, ...);
 __declspec(dllimport) int __cdecl vfwprintf(  FILE * _File,     const wchar_t * _Format, va_list _ArgList);
 __declspec(dllimport) int __cdecl vfwscanf(  FILE * _File,     const wchar_t * _Format, va_list _ArgList);
 __declspec(dllimport) int __cdecl vfwprintf_s(  FILE * _File,     const wchar_t * _Format, va_list _ArgList);
 __declspec(dllimport) int __cdecl vfwscanf_s(  FILE * _File,     const wchar_t * _Format, va_list _ArgList);
 __declspec(dllimport) int __cdecl vwprintf(    const wchar_t * _Format, va_list _ArgList);
 __declspec(dllimport) int __cdecl vwscanf(    const wchar_t * _Format, va_list _ArgList);
 __declspec(dllimport) int __cdecl vwprintf_s(    const wchar_t * _Format, va_list _ArgList);
 __declspec(dllimport) int __cdecl vwscanf_s(    const wchar_t * _Format, va_list _ArgList);
__declspec(dllimport) int __cdecl swprintf_s(  wchar_t * _Dst,   size_t _SizeInWords,     const wchar_t * _Format, ...);
extern "C++" { __pragma(warning(push)); __pragma(warning(disable: 4793)); template <size_t _Size> inline int __cdecl swprintf_s(  wchar_t (&_Dest)[_Size],     const wchar_t * _Format, ...) throw() { va_list _ArgList; ( _ArgList = (va_list)( &reinterpret_cast<const char &>(_Format) ) + ( (sizeof(_Format) + sizeof(int) - 1) & ~(sizeof(int) - 1) ) ); return vswprintf_s(_Dest, _Size, _Format, _ArgList); } __pragma(warning(pop)); }
__declspec(dllimport) int __cdecl vswprintf_s(  wchar_t * _Dst,   size_t _SizeInWords,     const wchar_t * _Format, va_list _ArgList);
 __declspec(dllimport) int __cdecl vswscanf_s(const wchar_t * _Dst,     const wchar_t * _Format, va_list _ArgList);
extern "C++" { template <size_t _Size> inline int __cdecl vswprintf_s(  wchar_t (&_Dest)[_Size],     const wchar_t * _Format, va_list _Args) throw() { return vswprintf_s(_Dest, _Size, _Format, _Args); } }
extern "C++" { template <size_t _Size> inline int __cdecl vswscanf_s(  wchar_t (&_Dest)[_Size],     const wchar_t * _Format, va_list _Args) throw() { return vswscanf_s(_Dest, _Size, _Format, _Args); } }
 __declspec(dllimport) int __cdecl vswscanf(const wchar_t * _srcBuf,     const wchar_t * _Format, va_list _ArgList);
 __declspec(dllimport) int __cdecl _swprintf_c(  wchar_t * _DstBuf,   size_t _SizeInWords,     const wchar_t * _Format, ...);
 __declspec(dllimport) int __cdecl _vswprintf_c(  wchar_t * _DstBuf,   size_t _SizeInWords,     const wchar_t * _Format, va_list _ArgList);
 __declspec(dllimport) int __cdecl _snwprintf_s(  wchar_t * _DstBuf,   size_t _DstSizeInWords,   size_t _MaxCount,     const wchar_t * _Format, ...);
extern "C++" { __pragma(warning(push)); __pragma(warning(disable: 4793)); template <size_t _Size> inline int __cdecl _snwprintf_s(  wchar_t (&_Dest)[_Size],   size_t _Count,     const wchar_t * _Format, ...) throw() { va_list _ArgList; ( _ArgList = (va_list)( &reinterpret_cast<const char &>(_Format) ) + ( (sizeof(_Format) + sizeof(int) - 1) & ~(sizeof(int) - 1) ) ); return _vsnwprintf_s(_Dest, _Size, _Count, _Format, _ArgList); } __pragma(warning(pop)); }
 __declspec(dllimport) int __cdecl _vsnwprintf_s(  wchar_t * _DstBuf,   size_t _DstSizeInWords,   size_t _MaxCount,     const wchar_t * _Format, va_list _ArgList);
extern "C++" { template <size_t _Size> inline int __cdecl _vsnwprintf_s(  wchar_t (&_Dest)[_Size],   size_t _Count,     const wchar_t * _Format, va_list _Args) throw() { return _vsnwprintf_s(_Dest, _Size, _Count, _Format, _Args); } }
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_snwprintf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) int __cdecl _snwprintf(    wchar_t *_Dest,   size_t _Count,     const wchar_t * _Format, ...); __declspec(deprecated("This function or variable may be unsafe. Consider using " "_vsnwprintf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) int __cdecl _vsnwprintf(    wchar_t *_Dest,   size_t _Count,     const wchar_t * _Format, va_list _Args);
 __declspec(dllimport) int __cdecl _fwprintf_p(  FILE * _File,     const wchar_t * _Format, ...);
 __declspec(dllimport) int __cdecl _wprintf_p(    const wchar_t * _Format, ...);
 __declspec(dllimport) int __cdecl _vfwprintf_p(  FILE * _File,     const wchar_t * _Format, va_list _ArgList);
 __declspec(dllimport) int __cdecl _vwprintf_p(    const wchar_t * _Format, va_list _ArgList);
 __declspec(dllimport) int __cdecl _swprintf_p(  wchar_t * _DstBuf,   size_t _MaxCount,     const wchar_t * _Format, ...);
 __declspec(dllimport) int __cdecl _vswprintf_p(  wchar_t * _DstBuf,   size_t _MaxCount,     const wchar_t * _Format, va_list _ArgList);
  __declspec(dllimport) int __cdecl _scwprintf_p(    const wchar_t * _Format, ...);
  __declspec(dllimport) int __cdecl _vscwprintf_p(    const wchar_t * _Format, va_list _ArgList);
 __declspec(dllimport) int __cdecl _wprintf_l(    const wchar_t * _Format,   _locale_t _Locale, ...);
 __declspec(dllimport) int __cdecl _wprintf_p_l(    const wchar_t * _Format,   _locale_t _Locale, ...);
 __declspec(dllimport) int __cdecl _wprintf_s_l(    const wchar_t * _Format,   _locale_t _Locale, ...);
 __declspec(dllimport) int __cdecl _vwprintf_l(    const wchar_t * _Format,   _locale_t _Locale, va_list _ArgList);
 __declspec(dllimport) int __cdecl _vwprintf_p_l(    const wchar_t * _Format,   _locale_t _Locale, va_list _ArgList);
 __declspec(dllimport) int __cdecl _vwprintf_s_l(    const wchar_t * _Format,   _locale_t _Locale, va_list _ArgList);
 __declspec(dllimport) int __cdecl _fwprintf_l(  FILE * _File,     const wchar_t * _Format,   _locale_t _Locale, ...);
 __declspec(dllimport) int __cdecl _fwprintf_p_l(  FILE * _File,     const wchar_t * _Format,   _locale_t _Locale, ...);
 __declspec(dllimport) int __cdecl _fwprintf_s_l(  FILE * _File,     const wchar_t * _Format,   _locale_t _Locale, ...);
 __declspec(dllimport) int __cdecl _vfwprintf_l(  FILE * _File,     const wchar_t * _Format,   _locale_t _Locale, va_list _ArgList);
 __declspec(dllimport) int __cdecl _vfwprintf_p_l(  FILE * _File,     const wchar_t * _Format,   _locale_t _Locale, va_list _ArgList);
 __declspec(dllimport) int __cdecl _vfwprintf_s_l(  FILE * _File,     const wchar_t * _Format,   _locale_t _Locale, va_list _ArgList);
 __declspec(dllimport) int __cdecl _swprintf_c_l(  wchar_t * _DstBuf,   size_t _MaxCount,     const wchar_t * _Format,   _locale_t _Locale, ...);
 __declspec(dllimport) int __cdecl _swprintf_p_l(  wchar_t * _DstBuf,   size_t _MaxCount,     const wchar_t * _Format,   _locale_t _Locale, ...);
 __declspec(dllimport) int __cdecl _swprintf_s_l(  wchar_t * _DstBuf,   size_t _DstSize,     const wchar_t * _Format,   _locale_t _Locale, ...);
 __declspec(dllimport) int __cdecl _vswprintf_c_l(  wchar_t * _DstBuf,   size_t _MaxCount,     const wchar_t * _Format,   _locale_t _Locale, va_list _ArgList);
 __declspec(dllimport) int __cdecl _vswprintf_p_l(  wchar_t * _DstBuf,   size_t _MaxCount,     const wchar_t * _Format,   _locale_t _Locale, va_list _ArgList);
 __declspec(dllimport) int __cdecl _vswprintf_s_l(  wchar_t * _DstBuf,   size_t _DstSize,     const wchar_t * _Format,   _locale_t _Locale, va_list _ArgList);
  __declspec(dllimport) int __cdecl _scwprintf_l(    const wchar_t * _Format,   _locale_t _Locale, ...);
  __declspec(dllimport) int __cdecl _scwprintf_p_l(    const wchar_t * _Format,   _locale_t _Locale, ...);
  __declspec(dllimport) int __cdecl _vscwprintf_p_l(    const wchar_t * _Format,   _locale_t _Locale, va_list _ArgList);
 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_snwprintf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) int __cdecl _snwprintf_l(  wchar_t * _DstBuf,   size_t _MaxCount,     const wchar_t * _Format,   _locale_t _Locale, ...);
 __declspec(dllimport) int __cdecl _snwprintf_s_l(  wchar_t * _DstBuf,   size_t _DstSize,   size_t _MaxCount,     const wchar_t * _Format,   _locale_t _Locale, ...);
 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_vsnwprintf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) int __cdecl _vsnwprintf_l(  wchar_t * _DstBuf,   size_t _MaxCount,     const wchar_t * _Format,   _locale_t _Locale, va_list _ArgList);
 __declspec(dllimport) int __cdecl _vsnwprintf_s_l(  wchar_t * _DstBuf,   size_t _DstSize,   size_t _MaxCount,     const wchar_t * _Format,   _locale_t _Locale, va_list _ArgList);
#pragma warning(push)
#pragma warning(disable:4141 4996)
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_swprintf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(deprecated("swprintf has been changed to conform with the ISO C standard, adding an extra character count parameter. To use traditional Microsoft swprintf, set _CRT_NON_CONFORMING_SWPRINTFS.")) __declspec(dllimport) int __cdecl _swprintf(    wchar_t *_Dest,     const wchar_t * _Format, ...); __declspec(deprecated("This function or variable may be unsafe. Consider using " "vswprintf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(deprecated("swprintf has been changed to conform with the ISO C standard, adding an extra character count parameter. To use traditional Microsoft swprintf, set _CRT_NON_CONFORMING_SWPRINTFS.")) __declspec(dllimport) int __cdecl _vswprintf(    wchar_t *_Dest,     const wchar_t * _Format, va_list _Args);
__declspec(deprecated("This function or variable may be unsafe. Consider using " "__swprintf_l_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(deprecated("swprintf has been changed to conform with the ISO C standard, adding an extra character count parameter. To use traditional Microsoft swprintf, set _CRT_NON_CONFORMING_SWPRINTFS.")) __declspec(dllimport) int __cdecl __swprintf_l(  wchar_t *_Dest,     const wchar_t * _Format, _locale_t _Plocinfo, ...); __declspec(deprecated("This function or variable may be unsafe. Consider using " "_vswprintf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(deprecated("swprintf has been changed to conform with the ISO C standard, adding an extra character count parameter. To use traditional Microsoft swprintf, set _CRT_NON_CONFORMING_SWPRINTFS.")) __declspec(dllimport) int __cdecl __vswprintf_l(  wchar_t *_Dest,     const wchar_t * _Format, _locale_t _Plocinfo, va_list _Args);
#pragma warning(pop)
#pragma warning( push )
#pragma warning( disable : 4793 4412 )
static __inline int swprintf(  wchar_t * _String, size_t _Count,     const wchar_t * _Format, ...)
{
    va_list _Arglist;
    int _Ret;
    ( _Arglist = (va_list)( &reinterpret_cast<const char &>(_Format) ) + ( (sizeof(_Format) + sizeof(int) - 1) & ~(sizeof(int) - 1) ) );
    _Ret = _vswprintf_c_l(_String, _Count, _Format, 0, _Arglist);
    ( _Arglist = (va_list)0 );
    return _Ret;
}
#pragma warning( pop )
#pragma warning( push )
#pragma warning( disable : 4412 )
static __inline int __cdecl vswprintf(  wchar_t * _String, size_t _Count,     const wchar_t * _Format, va_list _Ap)
{
    return _vswprintf_c_l(_String, _Count, _Format, 0, _Ap);
}
#pragma warning( pop )
#pragma warning( push )
#pragma warning( disable : 4793 4412 )
static __inline int _swprintf_l(  wchar_t * _String, size_t _Count,     const wchar_t * _Format, _locale_t _Plocinfo, ...)
{
    va_list _Arglist;
    int _Ret;
    ( _Arglist = (va_list)( &reinterpret_cast<const char &>(_Plocinfo) ) + ( (sizeof(_Plocinfo) + sizeof(int) - 1) & ~(sizeof(int) - 1) ) );
    _Ret = _vswprintf_c_l(_String, _Count, _Format, _Plocinfo, _Arglist);
    ( _Arglist = (va_list)0 );
    return _Ret;
}
#pragma warning( pop )
#pragma warning( push )
#pragma warning( disable : 4412 )
static __inline int __cdecl _vswprintf_l(  wchar_t * _String, size_t _Count,     const wchar_t * _Format, _locale_t _Plocinfo, va_list _Ap)
{
    return _vswprintf_c_l(_String, _Count, _Format, _Plocinfo, _Ap);
}
#pragma warning( pop )
#pragma warning( push )
#pragma warning( disable : 4996 )
#pragma warning( push )
#pragma warning( disable : 4793 4141 )
extern "C++" __declspec(deprecated("swprintf has been changed to conform with the ISO C standard, adding an extra character count parameter. To use traditional Microsoft swprintf, set _CRT_NON_CONFORMING_SWPRINTFS.")) __declspec(deprecated("This function or variable may be unsafe. Consider using " "swprintf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __inline int swprintf(    wchar_t * _String,     const wchar_t * _Format, ...)
{
    va_list _Arglist;
    ( _Arglist = (va_list)( &reinterpret_cast<const char &>(_Format) ) + ( (sizeof(_Format) + sizeof(int) - 1) & ~(sizeof(int) - 1) ) );
    int _Ret = _vswprintf(_String, _Format, _Arglist);
    ( _Arglist = (va_list)0 );
    return _Ret;
}
#pragma warning( pop )
#pragma warning( push )
#pragma warning( disable : 4141 )
extern "C++" __declspec(deprecated("swprintf has been changed to conform with the ISO C standard, adding an extra character count parameter. To use traditional Microsoft swprintf, set _CRT_NON_CONFORMING_SWPRINTFS.")) __declspec(deprecated("This function or variable may be unsafe. Consider using " "vswprintf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __inline int __cdecl vswprintf(    wchar_t * _String,     const wchar_t * _Format, va_list _Ap)
{
    return _vswprintf(_String, _Format, _Ap);
}
#pragma warning( pop )
#pragma warning( push )
#pragma warning( disable : 4793 4141 )
extern "C++" __declspec(deprecated("swprintf has been changed to conform with the ISO C standard, adding an extra character count parameter. To use traditional Microsoft swprintf, set _CRT_NON_CONFORMING_SWPRINTFS.")) __declspec(deprecated("This function or variable may be unsafe. Consider using " "_swprintf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __inline int _swprintf_l(    wchar_t * _String,     const wchar_t * _Format, _locale_t _Plocinfo, ...)
{
    va_list _Arglist;
    ( _Arglist = (va_list)( &reinterpret_cast<const char &>(_Plocinfo) ) + ( (sizeof(_Plocinfo) + sizeof(int) - 1) & ~(sizeof(int) - 1) ) );
    int _Ret = __vswprintf_l(_String, _Format, _Plocinfo, _Arglist);
    ( _Arglist = (va_list)0 );
    return _Ret;
}
#pragma warning( pop )
#pragma warning( push )
#pragma warning( disable : 4141 )
extern "C++" __declspec(deprecated("swprintf has been changed to conform with the ISO C standard, adding an extra character count parameter. To use traditional Microsoft swprintf, set _CRT_NON_CONFORMING_SWPRINTFS.")) __declspec(deprecated("This function or variable may be unsafe. Consider using " "_vswprintf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __inline int __cdecl _vswprintf_l(    wchar_t * _String,     const wchar_t * _Format, _locale_t _Plocinfo, va_list _Ap)
{
    return __vswprintf_l(_String, _Format, _Plocinfo, _Ap);
}
#pragma warning( pop )
#pragma warning( pop )
  __declspec(dllimport) wchar_t * __cdecl _wtempnam(  const wchar_t * _Directory,   const wchar_t * _FilePrefix);
  __declspec(dllimport) int __cdecl _vscwprintf(    const wchar_t * _Format, va_list _ArgList);
  __declspec(dllimport) int __cdecl _vscwprintf_l(    const wchar_t * _Format,   _locale_t _Locale, va_list _ArgList);
  __declspec(deprecated("This function or variable may be unsafe. Consider using " "fwscanf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) int __cdecl fwscanf(  FILE * _File,     const wchar_t * _Format, ...);
 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_fwscanf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) int __cdecl _fwscanf_l(  FILE * _File,     const wchar_t * _Format,   _locale_t _Locale, ...);
 __declspec(dllimport) int __cdecl fwscanf_s(  FILE * _File,     const wchar_t * _Format, ...);
 __declspec(dllimport) int __cdecl _fwscanf_s_l(  FILE * _File,     const wchar_t * _Format,   _locale_t _Locale, ...);
  __declspec(deprecated("This function or variable may be unsafe. Consider using " "swscanf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) int __cdecl swscanf(  const wchar_t * _Src,     const wchar_t * _Format, ...);
 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_swscanf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) int __cdecl _swscanf_l(  const wchar_t * _Src,     const wchar_t * _Format,   _locale_t _Locale, ...);
 __declspec(dllimport) int __cdecl swscanf_s(  const wchar_t *_Src,     const wchar_t * _Format, ...);
 __declspec(dllimport) int __cdecl _swscanf_s_l(  const wchar_t * _Src,     const wchar_t * _Format,   _locale_t _Locale, ...);
 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_snwscanf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) int __cdecl _snwscanf(    const wchar_t * _Src,   size_t _MaxCount,     const wchar_t * _Format, ...);
 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_snwscanf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) int __cdecl _snwscanf_l(    const wchar_t * _Src,   size_t _MaxCount,     const wchar_t * _Format,   _locale_t _Locale, ...);
 __declspec(dllimport) int __cdecl _snwscanf_s(    const wchar_t * _Src,   size_t _MaxCount,     const wchar_t * _Format, ...);
 __declspec(dllimport) int __cdecl _snwscanf_s_l(    const wchar_t * _Src,   size_t _MaxCount,     const wchar_t * _Format,   _locale_t _Locale, ...);
  __declspec(deprecated("This function or variable may be unsafe. Consider using " "wscanf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) int __cdecl wscanf(    const wchar_t * _Format, ...);
 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_wscanf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) int __cdecl _wscanf_l(    const wchar_t * _Format,   _locale_t _Locale, ...);
 __declspec(dllimport) int __cdecl wscanf_s(    const wchar_t * _Format, ...);
 __declspec(dllimport) int __cdecl _wscanf_s_l(    const wchar_t * _Format,   _locale_t _Locale, ...);
  __declspec(dllimport) FILE * __cdecl _wfdopen(  int _FileHandle ,   const wchar_t * _Mode);
  __declspec(deprecated("This function or variable may be unsafe. Consider using " "_wfopen_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) FILE * __cdecl _wfopen(  const wchar_t * _Filename,   const wchar_t * _Mode);
 __declspec(dllimport) errno_t __cdecl _wfopen_s(  FILE ** _File,   const wchar_t * _Filename,   const wchar_t * _Mode);
  __declspec(deprecated("This function or variable may be unsafe. Consider using " "_wfreopen_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) FILE * __cdecl _wfreopen(  const wchar_t * _Filename,   const wchar_t * _Mode,   FILE * _OldFile);
 __declspec(dllimport) errno_t __cdecl _wfreopen_s(  FILE ** _File,   const wchar_t * _Filename,   const wchar_t * _Mode,   FILE * _OldFile);
  __declspec(dllimport) FILE * __cdecl _wpopen(  const wchar_t *_Command,   const wchar_t * _Mode);
__declspec(dllimport) int __cdecl _wremove(  const wchar_t * _Filename);
 __declspec(dllimport) errno_t __cdecl _wtmpnam_s(  wchar_t * _DstBuf,   size_t _SizeInWords);
extern "C++" { template <size_t _Size> inline errno_t __cdecl _wtmpnam_s(  wchar_t (&_Buffer)[_Size]) throw() { return _wtmpnam_s(_Buffer, _Size); } }
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wtmpnam_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) wchar_t * __cdecl _wtmpnam(  wchar_t *_Buffer);
 __declspec(dllimport) wint_t __cdecl _fgetwc_nolock(  FILE * _File);
 __declspec(dllimport) wint_t __cdecl _fputwc_nolock(  wchar_t _Ch,   FILE * _File);
 __declspec(dllimport) wint_t __cdecl _ungetwc_nolock(  wint_t _Ch,   FILE * _File);
  inline wint_t __cdecl getwchar(void)
        {return (fgetwc((&__iob_func()[0]))); }   
 inline wint_t __cdecl putwchar(  wchar_t _C)
        {return (fputwc(_C, (&__iob_func()[1]))); }       
  __declspec(dllimport) wchar_t * __cdecl _wcsdup(  const wchar_t * _Str);
 __declspec(dllimport) errno_t __cdecl wcscat_s(  wchar_t * _Dst,   rsize_t _DstSize, const wchar_t * _Src);
extern "C++" { template <size_t _Size> inline errno_t __cdecl wcscat_s(wchar_t (&_Dest)[_Size],   const wchar_t * _Source) throw() { return wcscat_s(_Dest, _Size, _Source); } }
__declspec(deprecated("This function or variable may be unsafe. Consider using " "wcscat_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) wchar_t * __cdecl wcscat( wchar_t *_Dest,  const wchar_t * _Source);
  __declspec(dllimport) const wchar_t * __cdecl wcschr(  const wchar_t * _Str, wchar_t _Ch);
  __declspec(dllimport) int __cdecl wcscmp(  const wchar_t * _Str1,   const wchar_t * _Str2);
 __declspec(dllimport) errno_t __cdecl wcscpy_s(  wchar_t * _Dst,   rsize_t _DstSize,   const wchar_t * _Src);
extern "C++" { template <size_t _Size> inline errno_t __cdecl wcscpy_s(  wchar_t (&_Dest)[_Size],   const wchar_t * _Source) throw() { return wcscpy_s(_Dest, _Size, _Source); } }
__declspec(deprecated("This function or variable may be unsafe. Consider using " "wcscpy_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) wchar_t * __cdecl wcscpy( wchar_t *_Dest,  const wchar_t * _Source);
  __declspec(dllimport) size_t __cdecl wcscspn(  const wchar_t * _Str,   const wchar_t * _Control);
  __declspec(dllimport) size_t __cdecl wcslen(  const wchar_t * _Str);
  __declspec(dllimport)
size_t __cdecl wcsnlen(  const wchar_t * _Src,   size_t _MaxCount);
  static __inline
size_t __cdecl wcsnlen_s(  const wchar_t * _Src,   size_t _MaxCount)
{
    return (_Src == 0) ? 0 : wcsnlen(_Src, _MaxCount);
}
 __declspec(dllimport) errno_t __cdecl wcsncat_s(  wchar_t * _Dst,   rsize_t _DstSize,   const wchar_t * _Src,   rsize_t _MaxCount);
extern "C++" { template <size_t _Size> inline errno_t __cdecl wcsncat_s(  wchar_t (&_Dest)[_Size],   const wchar_t * _Source,   size_t _Count) throw() { return wcsncat_s(_Dest, _Size, _Source, _Count); } }
#pragma warning(push)
#pragma warning(disable:6059)
__declspec(deprecated("This function or variable may be unsafe. Consider using " "wcsncat_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) wchar_t * __cdecl wcsncat(  wchar_t *_Dest,   const wchar_t * _Source,   size_t _Count);
#pragma warning(pop)
  __declspec(dllimport) int __cdecl wcsncmp(  const wchar_t * _Str1,   const wchar_t * _Str2,   size_t _MaxCount);
 __declspec(dllimport) errno_t __cdecl wcsncpy_s(  wchar_t * _Dst,   rsize_t _DstSize,   const wchar_t * _Src,   rsize_t _MaxCount);
extern "C++" { template <size_t _Size> inline errno_t __cdecl wcsncpy_s(wchar_t (&_Dest)[_Size],   const wchar_t * _Source,   size_t _Count) throw() { return wcsncpy_s(_Dest, _Size, _Source, _Count); } }
__declspec(deprecated("This function or variable may be unsafe. Consider using " "wcsncpy_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) wchar_t * __cdecl wcsncpy(    wchar_t *_Dest,   const wchar_t * _Source,   size_t _Count);
  __declspec(dllimport) const wchar_t * __cdecl wcspbrk(  const wchar_t * _Str,   const wchar_t * _Control);
  __declspec(dllimport) const wchar_t * __cdecl wcsrchr(  const wchar_t * _Str,   wchar_t _Ch);
  __declspec(dllimport) size_t __cdecl wcsspn(  const wchar_t * _Str,   const wchar_t * _Control);
    __declspec(dllimport) const wchar_t * __cdecl wcsstr(  const wchar_t * _Str,   const wchar_t * _SubStr);
  __declspec(deprecated("This function or variable may be unsafe. Consider using " "wcstok_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) wchar_t * __cdecl wcstok(  wchar_t * _Str,   const wchar_t * _Delim);
  __declspec(dllimport) wchar_t * __cdecl wcstok_s(  wchar_t * _Str,   const wchar_t * _Delim,     wchar_t ** _Context);
  __declspec(deprecated("This function or variable may be unsafe. Consider using " "_wcserror_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) wchar_t * __cdecl _wcserror(  int _ErrNum);
 __declspec(dllimport) errno_t __cdecl _wcserror_s(  wchar_t * _Buf,   size_t _SizeInWords,   int _ErrNum);
extern "C++" { template <size_t _Size> inline errno_t __cdecl _wcserror_s(wchar_t (&_Buffer)[_Size],   int _Error) throw() { return _wcserror_s(_Buffer, _Size, _Error); } }
  __declspec(deprecated("This function or variable may be unsafe. Consider using " "__wcserror_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) wchar_t * __cdecl __wcserror(  const wchar_t * _Str);
 __declspec(dllimport) errno_t __cdecl __wcserror_s(  wchar_t * _Buffer,   size_t _SizeInWords,   const wchar_t * _ErrMsg);
extern "C++" { template <size_t _Size> inline errno_t __cdecl __wcserror_s(wchar_t (&_Buffer)[_Size],   const wchar_t * _ErrorMessage) throw() { return __wcserror_s(_Buffer, _Size, _ErrorMessage); } }
  __declspec(dllimport) int __cdecl _wcsicmp(  const wchar_t * _Str1,   const wchar_t * _Str2);
  __declspec(dllimport) int __cdecl _wcsicmp_l(  const wchar_t * _Str1,   const wchar_t * _Str2,   _locale_t _Locale);
  __declspec(dllimport) int __cdecl _wcsnicmp(  const wchar_t * _Str1,   const wchar_t * _Str2,   size_t _MaxCount);
  __declspec(dllimport) int __cdecl _wcsnicmp_l(  const wchar_t * _Str1,   const wchar_t * _Str2,   size_t _MaxCount,   _locale_t _Locale);
 __declspec(dllimport) errno_t __cdecl _wcsnset_s(  wchar_t * _Dst,   size_t _DstSizeInWords, wchar_t _Val,   size_t _MaxCount);
extern "C++" { template <size_t _Size> inline errno_t __cdecl _wcsnset_s(  wchar_t (&_Dst)[_Size], wchar_t _Val,   size_t _MaxCount) throw() { return _wcsnset_s(_Dst, _Size, _Val, _MaxCount); } }
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wcsnset_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) wchar_t * __cdecl _wcsnset(  wchar_t *_Str, wchar_t _Val,   size_t _MaxCount);
__declspec(dllimport) wchar_t * __cdecl _wcsrev(  wchar_t * _Str);
 __declspec(dllimport) errno_t __cdecl _wcsset_s(  wchar_t * _Str,   size_t _SizeInWords, wchar_t _Val);
extern "C++" { template <size_t _Size> inline errno_t __cdecl _wcsset_s(  wchar_t (&_Str)[_Size], wchar_t _Val) throw() { return _wcsset_s(_Str, _Size, _Val); } }
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wcsset_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) wchar_t * __cdecl _wcsset(  wchar_t *_Str, wchar_t _Val);
 __declspec(dllimport) errno_t __cdecl _wcslwr_s(  wchar_t * _Str,   size_t _SizeInWords);
extern "C++" { template <size_t _Size> inline errno_t __cdecl _wcslwr_s(wchar_t (&_String)[_Size]) throw() { return _wcslwr_s(_String, _Size); } }
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wcslwr_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) wchar_t * __cdecl _wcslwr( wchar_t *_String);
 __declspec(dllimport) errno_t __cdecl _wcslwr_s_l(  wchar_t * _Str,   size_t _SizeInWords,   _locale_t _Locale);
extern "C++" { template <size_t _Size> inline errno_t __cdecl _wcslwr_s_l(wchar_t (&_String)[_Size],   _locale_t _Locale) throw() { return _wcslwr_s_l(_String, _Size, _Locale); } }
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wcslwr_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) wchar_t * __cdecl _wcslwr_l(  wchar_t *_String,   _locale_t _Locale);
 __declspec(dllimport) errno_t __cdecl _wcsupr_s(  wchar_t * _Str,   size_t _Size);
extern "C++" { template <size_t _Size> inline errno_t __cdecl _wcsupr_s(wchar_t (&_String)[_Size]) throw() { return _wcsupr_s(_String, _Size); } }
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wcsupr_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) wchar_t * __cdecl _wcsupr( wchar_t *_String);
 __declspec(dllimport) errno_t __cdecl _wcsupr_s_l(  wchar_t * _Str,   size_t _Size,   _locale_t _Locale);
extern "C++" { template <size_t _Size> inline errno_t __cdecl _wcsupr_s_l(  wchar_t (&_String)[_Size],   _locale_t _Locale) throw() { return _wcsupr_s_l(_String, _Size, _Locale); } }
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wcsupr_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) wchar_t * __cdecl _wcsupr_l(  wchar_t *_String,   _locale_t _Locale);
 __declspec(dllimport) size_t __cdecl wcsxfrm(    wchar_t * _Dst,   const wchar_t * _Src,   size_t _MaxCount);
 __declspec(dllimport) size_t __cdecl _wcsxfrm_l(    wchar_t * _Dst,   const wchar_t *_Src,   size_t _MaxCount,   _locale_t _Locale);
  __declspec(dllimport) int __cdecl wcscoll(  const wchar_t * _Str1,   const wchar_t * _Str2);
  __declspec(dllimport) int __cdecl _wcscoll_l(  const wchar_t * _Str1,   const wchar_t * _Str2,   _locale_t _Locale);
  __declspec(dllimport) int __cdecl _wcsicoll(  const wchar_t * _Str1,   const wchar_t * _Str2);
  __declspec(dllimport) int __cdecl _wcsicoll_l(  const wchar_t * _Str1,   const wchar_t *_Str2,   _locale_t _Locale);
  __declspec(dllimport) int __cdecl _wcsncoll(  const wchar_t * _Str1,   const wchar_t * _Str2,   size_t _MaxCount);
  __declspec(dllimport) int __cdecl _wcsncoll_l(  const wchar_t * _Str1,   const wchar_t * _Str2,   size_t _MaxCount,   _locale_t _Locale);
  __declspec(dllimport) int __cdecl _wcsnicoll(  const wchar_t * _Str1,   const wchar_t * _Str2,   size_t _MaxCount);
  __declspec(dllimport) int __cdecl _wcsnicoll_l(  const wchar_t * _Str1,   const wchar_t * _Str2,   size_t _MaxCount,   _locale_t _Locale);
extern "C++" {
  inline wchar_t * __cdecl wcschr(  wchar_t *_Str, wchar_t _Ch)
        {return ((wchar_t *)wcschr((const wchar_t *)_Str, _Ch)); }
  inline wchar_t * __cdecl wcspbrk(  wchar_t *_Str,   const wchar_t *_Control)
        {return ((wchar_t *)wcspbrk((const wchar_t *)_Str, _Control)); }
  inline wchar_t * __cdecl wcsrchr(  wchar_t *_Str,   wchar_t _Ch)
        {return ((wchar_t *)wcsrchr((const wchar_t *)_Str, _Ch)); }
    inline wchar_t * __cdecl wcsstr(  wchar_t *_Str,   const wchar_t *_SubStr)
        {return ((wchar_t *)wcsstr((const wchar_t *)_Str, _SubStr)); }
}
  __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_wcsdup" ". See online help for details.")) __declspec(dllimport) wchar_t * __cdecl wcsdup(  const wchar_t * _Str);
  __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_wcsicmp" ". See online help for details.")) __declspec(dllimport) int __cdecl wcsicmp(  const wchar_t * _Str1,   const wchar_t * _Str2);
  __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_wcsnicmp" ". See online help for details.")) __declspec(dllimport) int __cdecl wcsnicmp(  const wchar_t * _Str1,   const wchar_t * _Str2,   size_t _MaxCount);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_wcsnset" ". See online help for details.")) __declspec(dllimport) wchar_t * __cdecl wcsnset(  wchar_t * _Str,   wchar_t _Val,   size_t _MaxCount);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_wcsrev" ". See online help for details.")) __declspec(dllimport) wchar_t * __cdecl wcsrev(  wchar_t * _Str);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_wcsset" ". See online help for details.")) __declspec(dllimport) wchar_t * __cdecl wcsset(  wchar_t * _Str, wchar_t _Val);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_wcslwr" ". See online help for details.")) __declspec(dllimport) wchar_t * __cdecl wcslwr(  wchar_t * _Str);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_wcsupr" ". See online help for details.")) __declspec(dllimport) wchar_t * __cdecl wcsupr(  wchar_t * _Str);
  __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_wcsicoll" ". See online help for details.")) __declspec(dllimport) int __cdecl wcsicoll(  const wchar_t * _Str1,   const wchar_t * _Str2);
struct tm {
        int tm_sec;     
        int tm_min;     
        int tm_hour;    
        int tm_mday;    
        int tm_mon;     
        int tm_year;    
        int tm_wday;    
        int tm_yday;    
        int tm_isdst;   
        };
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wasctime_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) wchar_t * __cdecl _wasctime(  const struct tm * _Tm);
__declspec(dllimport) errno_t __cdecl _wasctime_s(    wchar_t *_Buf,   size_t _SizeInWords,   const struct tm * _Tm);
extern "C++" { template <size_t _Size> inline errno_t __cdecl _wasctime_s(  wchar_t (&_Buffer)[_Size],   const struct tm * _Time) throw() { return _wasctime_s(_Buffer, _Size, _Time); } }
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wctime32_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) wchar_t * __cdecl _wctime32(  const __time32_t *_Time);
__declspec(dllimport) errno_t __cdecl _wctime32_s(    wchar_t* _Buf,   size_t _SizeInWords,   const __time32_t * _Time);
extern "C++" { template <size_t _Size> inline errno_t __cdecl _wctime32_s(  wchar_t (&_Buffer)[_Size],   const __time32_t * _Time) throw() { return _wctime32_s(_Buffer, _Size, _Time); } }
__declspec(dllimport) size_t __cdecl wcsftime(  wchar_t * _Buf,   size_t _SizeInWords,     const wchar_t * _Format,    const struct tm * _Tm);
__declspec(dllimport) size_t __cdecl _wcsftime_l(  wchar_t * _Buf,   size_t _SizeInWords,     const wchar_t *_Format,   const struct tm *_Tm,   _locale_t _Locale);
__declspec(dllimport) errno_t __cdecl _wstrdate_s(    wchar_t * _Buf,   size_t _SizeInWords);
extern "C++" { template <size_t _Size> inline errno_t __cdecl _wstrdate_s(  wchar_t (&_Buffer)[_Size]) throw() { return _wstrdate_s(_Buffer, _Size); } }
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wstrdate_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) wchar_t * __cdecl _wstrdate( wchar_t *_Buffer);
__declspec(dllimport) errno_t __cdecl _wstrtime_s(    wchar_t * _Buf,   size_t _SizeInWords);
extern "C++" { template <size_t _Size> inline errno_t __cdecl _wstrtime_s(  wchar_t (&_Buffer)[_Size]) throw() { return _wstrtime_s(_Buffer, _Size); } }
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wstrtime_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) wchar_t * __cdecl _wstrtime( wchar_t *_Buffer);
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_wctime64_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) wchar_t * __cdecl _wctime64(  const __time64_t * _Time);
__declspec(dllimport) errno_t __cdecl _wctime64_s(    wchar_t* _Buf,   size_t _SizeInWords,   const __time64_t *_Time);
extern "C++" { template <size_t _Size> inline errno_t __cdecl _wctime64_s(  wchar_t (&_Buffer)[_Size],   const __time64_t * _Time) throw() { return _wctime64_s(_Buffer, _Size, _Time); } }
#pragma warning(push)
#pragma warning(disable:4996)
static __inline wchar_t * __cdecl _wctime(const time_t * _Time)
{
#pragma warning( push )
#pragma warning( disable : 4996 )
    return _wctime64(_Time);
#pragma warning( pop )
}
static __inline errno_t __cdecl _wctime_s(      wchar_t *_Buffer, size_t _SizeInWords, const time_t * _Time)
{
    return _wctime64_s(_Buffer, _SizeInWords, _Time);
}
#pragma warning(pop)
typedef int mbstate_t;
typedef wchar_t _Wint_t;
__declspec(dllimport) wint_t __cdecl btowc(int);
__declspec(dllimport) size_t __cdecl mbrlen(    const char * _Ch,   size_t _SizeInBytes,
                                mbstate_t * _State);
__declspec(dllimport) size_t __cdecl mbrtowc(    wchar_t * _DstCh,     const char * _SrcCh,
                                 size_t _SizeInBytes,   mbstate_t * _State);
__declspec(dllimport) errno_t __cdecl mbsrtowcs_s(  size_t* _Retval,   wchar_t * _Dst,   size_t _Size,     const char ** _PSrc,   size_t _N,   mbstate_t * _State);
extern "C++" { template <size_t _Size> inline errno_t __cdecl mbsrtowcs_s(  size_t * _Retval,   wchar_t (&_Dest)[_Size],     const char ** _PSource,   size_t _Count,   mbstate_t * _State) throw() { return mbsrtowcs_s(_Retval, _Dest, _Size, _PSource, _Count, _State); } }
__declspec(deprecated("This function or variable may be unsafe. Consider using " "mbsrtowcs_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) size_t __cdecl mbsrtowcs(  wchar_t *_Dest,  const char ** _PSrc,  size_t _Count,  mbstate_t * _State);
__declspec(dllimport) errno_t __cdecl wcrtomb_s(  size_t * _Retval,   char * _Dst,
          size_t _SizeInBytes,   wchar_t _Ch,   mbstate_t * _State);
extern "C++" { template <size_t _Size> inline errno_t __cdecl wcrtomb_s(  size_t * _Retval,   char (&_Dest)[_Size],   wchar_t _Source,   mbstate_t * _State) throw() { return wcrtomb_s(_Retval, _Dest, _Size, _Source, _State); } }
__declspec(deprecated("This function or variable may be unsafe. Consider using " "wcrtomb_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) size_t __cdecl wcrtomb(  char *_Dest,  wchar_t _Source,  mbstate_t * _State);
__declspec(dllimport) errno_t __cdecl wcsrtombs_s(  size_t * _Retval,   char * _Dst,
          size_t _SizeInBytes,     const wchar_t ** _Src,   size_t _Size,   mbstate_t * _State);
extern "C++" { template <size_t _Size> inline errno_t __cdecl wcsrtombs_s(  size_t * _Retval,   char (&_Dest)[_Size],     const wchar_t ** _PSrc,   size_t _Count,   mbstate_t * _State) throw() { return wcsrtombs_s(_Retval, _Dest, _Size, _PSrc, _Count, _State); } }
__declspec(deprecated("This function or variable may be unsafe. Consider using " "wcsrtombs_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) size_t __cdecl wcsrtombs(  char *_Dest,  const wchar_t ** _PSource,  size_t _Count,  mbstate_t * _State);
__declspec(dllimport) int __cdecl wctob(  wint_t _WCh);
__declspec(dllimport)  void *  __cdecl memmove(  void * _Dst,   const void * _Src,   size_t _Size);
void *  __cdecl memcpy(  void * _Dst,   const void * _Src,   size_t _Size);
__declspec(dllimport) errno_t __cdecl memcpy_s(  void * _Dst,   rsize_t _DstSize,   const void * _Src,   rsize_t _MaxCount);
__declspec(dllimport) errno_t __cdecl memmove_s(  void * _Dst,   rsize_t _DstSize,   const void * _Src,   rsize_t _MaxCount);
__inline int __cdecl fwide(  FILE * _F, int _M)
        {(void)_F; return (_M); }
__inline int __cdecl mbsinit(  const mbstate_t *_P)
        {return (_P == 0 || *_P == 0); }
__inline const wchar_t * __cdecl wmemchr(  const wchar_t *_S,   wchar_t _C,   size_t _N)
        {for (; 0 < _N; ++_S, --_N)
                if (*_S == _C)
                        return (const wchar_t *)(_S);
        return (0); }
__inline int __cdecl wmemcmp(  const wchar_t *_S1,   const wchar_t *_S2,   size_t _N)
        {for (; 0 < _N; ++_S1, ++_S2, --_N)
                if (*_S1 != *_S2)
                        return (*_S1 < *_S2 ? -1 : +1);
        return (0); }
__inline  wchar_t * __cdecl wmemcpy(  wchar_t *_S1,   const wchar_t *_S2,   size_t _N)
        {
#pragma warning( push )
#pragma warning( disable : 4996 6386 )
            return (wchar_t *)memcpy(_S1, _S2, _N*sizeof(wchar_t));
#pragma warning( pop )
        }
__inline  wchar_t * __cdecl wmemmove(  wchar_t *_S1,   const wchar_t *_S2,   size_t _N)
        {
#pragma warning( push )
#pragma warning( disable : 4996 6386 )
#pragma warning( disable : 6387)
            return (wchar_t *)memmove(_S1, _S2, _N*sizeof(wchar_t));
#pragma warning( pop )
        }
errno_t __cdecl wmemcpy_s(  wchar_t *_S1,   rsize_t _N1,   const wchar_t *_S2, rsize_t _N);
errno_t __cdecl wmemmove_s(  wchar_t *_S1,   rsize_t _N1,   const wchar_t *_S2,   rsize_t _N);
__inline wchar_t * __cdecl wmemset(  wchar_t *_S,   wchar_t _C,   size_t _N)
        {
            wchar_t *_Su = _S;
            for (; 0 < _N; ++_Su, --_N)
            {
                *_Su = _C;
            }
            return (_S);
        }
extern "C++" {
inline wchar_t * __cdecl wmemchr(  wchar_t *_S,   wchar_t _C,   size_t _N)
        { return (wchar_t *)wmemchr((const wchar_t *)_S, _C, _N); }
}
}       
#pragma pack(pop)
typedef mbstate_t _Mbstatet;
namespace std {
using :: _Mbstatet;
using :: mbstate_t; using :: size_t; using :: tm; using :: wint_t;
using :: btowc; using :: fgetwc; using :: fgetws; using :: fputwc;
using :: fputws; using :: fwide; using :: fwprintf;
using :: fwscanf; using :: getwc; using :: getwchar;
using :: mbrlen; using :: mbrtowc; using :: mbsrtowcs;
using :: mbsinit; using :: putwc; using :: putwchar;
using :: swprintf; using :: swscanf; using :: ungetwc;
using :: vfwprintf; using :: vswprintf; using :: vwprintf;
using :: wcrtomb; using :: wprintf; using :: wscanf;
using :: wcsrtombs; using :: wcstol; using :: wcscat;
using :: wcschr; using :: wcscmp; using :: wcscoll;
using :: wcscpy; using :: wcscspn; using :: wcslen;
using :: wcsncat; using :: wcsncmp; using :: wcsncpy;
using :: wcspbrk; using :: wcsrchr; using :: wcsspn;
using :: wcstod; using :: wcstoul; using :: wcsstr;
using :: wcstok; using :: wcsxfrm; using :: wctob;
using :: wmemchr; using :: wmemcmp; using :: wmemcpy;
using :: wmemmove; using :: wmemset; using :: wcsftime;
using :: vfwscanf; using :: vswscanf; using :: vwscanf;
using :: wcstof; using :: wcstold;
using :: wcstoll; using :: wcstoull;
}
extern "C" {
namespace std { typedef decltype(__nullptr) nullptr_t; }
using ::std::nullptr_t;
__declspec(dllimport) extern unsigned long  __cdecl __threadid(void);
__declspec(dllimport) extern uintptr_t __cdecl __threadhandle(void);
}
namespace std {
using :: ptrdiff_t; using :: size_t;
}
namespace std {
typedef double max_align_t;	
}
 #pragma pack(push,8)
 #pragma warning(push,3)
namespace std {
template<class _Elem>
	class initializer_list
	{	
public:
	typedef _Elem value_type;
	typedef const _Elem& reference;
	typedef const _Elem& const_reference;
	typedef size_t size_type;
	typedef const _Elem* iterator;
	typedef const _Elem* const_iterator;
	initializer_list() throw ()
		: _First(0), _Last(0)
		{	
		}
	initializer_list(const _Elem *_First_arg,
		const _Elem *_Last_arg) throw ()
		: _First(_First_arg), _Last(_Last_arg)
		{	
		}
	const _Elem *begin() const throw ()
		{	
		return (_First);
		}
	const _Elem *end() const throw ()
		{	
		return (_Last);
		}
	size_t size() const throw ()
		{	
		return ((size_t)(_Last - _First));
		}
private:
	const _Elem *_First;
	const _Elem *_Last;
	};
template<class _Elem> inline
	const _Elem *begin(initializer_list<_Elem> _Ilist) throw ()
	{	
	return (_Ilist.begin());
	}
template<class _Elem> inline
	const _Elem *end(initializer_list<_Elem> _Ilist) throw ()
	{	
	return (_Ilist.end());
	}
}
 #pragma warning(pop)
 #pragma pack(pop)
 #pragma pack(push,8)
 #pragma warning(push,3)
namespace std {
  #line 58 "c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xstddef"
template<class _Ty> inline
	_Ty *addressof(_Ty& _Val) throw ()
	{	
	return (reinterpret_cast<_Ty *>(
		(&const_cast<char&>(
		reinterpret_cast<const volatile char&>(_Val)))));
	}
template<bool,
	class _Ty1,
	class _Ty2>
	struct _If
	{	
	typedef _Ty2 type;
	};
template<class _Ty1,
	class _Ty2>
	struct _If<true, _Ty1, _Ty2>
	{	
	typedef _Ty1 type;
	};
template<class _Ty>
	struct _Always_false
	{	
	static const bool value = false;
	};
template<class _Arg,
	class _Result>
	struct unary_function
	{	
	typedef _Arg argument_type;
	typedef _Result result_type;
	};
template<class _Arg1,
	class _Arg2,
	class _Result>
	struct binary_function
	{	
	typedef _Arg1 first_argument_type;
	typedef _Arg2 second_argument_type;
	typedef _Result result_type;
	};
template<class _Ty = void>
	struct plus
		: public binary_function<_Ty, _Ty, _Ty>
	{	
	_Ty operator()(const _Ty& _Left, const _Ty& _Right) const
		{	
		return (_Left + _Right);
		}
	};
template<class _Ty = void>
	struct minus
		: public binary_function<_Ty, _Ty, _Ty>
	{	
	_Ty operator()(const _Ty& _Left, const _Ty& _Right) const
		{	
		return (_Left - _Right);
		}
	};
template<class _Ty = void>
	struct multiplies
		: public binary_function<_Ty, _Ty, _Ty>
	{	
	_Ty operator()(const _Ty& _Left, const _Ty& _Right) const
		{	
		return (_Left * _Right);
		}
	};
template<class _Ty = void>
	struct equal_to
		: public binary_function<_Ty, _Ty, bool>
	{	
	bool operator()(const _Ty& _Left, const _Ty& _Right) const
		{	
		return (_Left == _Right);
		}
	};
template<class _Ty = void>
	struct less
		: public binary_function<_Ty, _Ty, bool>
	{	
	bool operator()(const _Ty& _Left, const _Ty& _Right) const
		{	
		return (_Left < _Right);
		}
	};
template<>
	struct plus<void>
	{	
	template<class _Ty1,
		class _Ty2>
		auto operator()(_Ty1&& _Left, _Ty2&& _Right) const
		-> decltype(static_cast<_Ty1&&>(_Left)
			+ static_cast<_Ty2&&>(_Right))
		{	
		return (static_cast<_Ty1&&>(_Left)
			+ static_cast<_Ty2&&>(_Right));
		}
	};
template<>
	struct minus<void>
	{	
	template<class _Ty1,
		class _Ty2>
		auto operator()(_Ty1&& _Left, _Ty2&& _Right) const
		-> decltype(static_cast<_Ty1&&>(_Left)
			- static_cast<_Ty2&&>(_Right))
		{	
		return (static_cast<_Ty1&&>(_Left)
			- static_cast<_Ty2&&>(_Right));
		}
	};
template<>
	struct multiplies<void>
	{	
	template<class _Ty1,
		class _Ty2>
		auto operator()(_Ty1&& _Left, _Ty2&& _Right) const
		-> decltype(static_cast<_Ty1&&>(_Left)
			* static_cast<_Ty2&&>(_Right))
		{	
		return (static_cast<_Ty1&&>(_Left)
			* static_cast<_Ty2&&>(_Right));
		}
	};
template<>
	struct equal_to<void>
	{	
	template<class _Ty1,
		class _Ty2>
		auto operator()(_Ty1&& _Left, _Ty2&& _Right) const
		-> decltype(static_cast<_Ty1&&>(_Left)
			== static_cast<_Ty2&&>(_Right))
		{	
		return (static_cast<_Ty1&&>(_Left)
			== static_cast<_Ty2&&>(_Right));
		}
	};
template<>
	struct less<void>
	{	
	template<class _Ty1,
		class _Ty2>
		auto operator()(_Ty1&& _Left, _Ty2&& _Right) const
		-> decltype(static_cast<_Ty1&&>(_Left)
			< static_cast<_Ty2&&>(_Right))
		{	
		return (static_cast<_Ty1&&>(_Left)
			< static_cast<_Ty2&&>(_Right));
		}
	};
}
namespace std {
inline size_t _Hash_seq(const unsigned char *_First, size_t _Count)
	{	
	static_assert(sizeof(size_t) == 4, "This code is for 32-bit size_t.");
	const size_t _FNV_offset_basis = 2166136261U;
	const size_t _FNV_prime = 16777619U;
	size_t _Val = _FNV_offset_basis;
	for (size_t _Next = 0; _Next < _Count; ++_Next)
		{	
		_Val ^= (size_t)_First[_Next];
		_Val *= _FNV_prime;
		}
	static_assert(sizeof(size_t) == 4, "This code is for 32-bit size_t.");
	return (_Val);
	}
template<class _Kty>
	struct _Bitwise_hash
		: public unary_function<_Kty, size_t>
	{	
	size_t operator()(const _Kty& _Keyval) const
		{	
		return (_Hash_seq((const unsigned char *)&_Keyval, sizeof (_Kty)));
		}
	};
template<class _Kty>
	struct hash
		: public _Bitwise_hash<_Kty>
	{	
	static const bool _Value = __is_enum(_Kty);
	static_assert(_Value,
		"The C++ Standard doesn't provide a hash for this type.");
	};
template<>
	struct hash<bool>
		: public _Bitwise_hash<bool>
	{	
	};
template<>
	struct hash<char>
		: public _Bitwise_hash<char>
	{	
	};
template<>
	struct hash<signed char>
		: public _Bitwise_hash<signed char>
	{	
	};
template<>
	struct hash<unsigned char>
		: public _Bitwise_hash<unsigned char>
	{	
	};
template<>
	struct hash<wchar_t>
		: public _Bitwise_hash<wchar_t>
	{	
	};
template<>
	struct hash<short>
		: public _Bitwise_hash<short>
	{	
	};
template<>
	struct hash<unsigned short>
		: public _Bitwise_hash<unsigned short>
	{	
	};
template<>
	struct hash<int>
		: public _Bitwise_hash<int>
	{	
	};
template<>
	struct hash<unsigned int>
		: public _Bitwise_hash<unsigned int>
	{	
	};
template<>
	struct hash<long>
		: public _Bitwise_hash<long>
	{	
	};
template<>
	struct hash<unsigned long>
		: public _Bitwise_hash<unsigned long>
	{	
	};
template<>
	struct hash<long long>
		: public _Bitwise_hash<long long>
	{	
	};
template<>
	struct hash<unsigned long long>
		: public _Bitwise_hash<unsigned long long>
	{	
	};
template<>
	struct hash<float>
		: public _Bitwise_hash<float>
	{	
	typedef float _Kty;
	typedef _Bitwise_hash<_Kty> _Mybase;
	size_t operator()(const _Kty& _Keyval) const
		{	
		return (_Mybase::operator()(
			_Keyval == 0 ? 0 : _Keyval)); 
		}
	};
template<>
	struct hash<double>
		: public _Bitwise_hash<double>
	{	
	typedef double _Kty;
	typedef _Bitwise_hash<_Kty> _Mybase;
	size_t operator()(const _Kty& _Keyval) const
		{	
		return (_Mybase::operator()(
			_Keyval == 0 ? 0 : _Keyval)); 
		}
	};
template<>
	struct hash<long double>
		: public _Bitwise_hash<long double>
	{	
	typedef long double _Kty;
	typedef _Bitwise_hash<_Kty> _Mybase;
	size_t operator()(const _Kty& _Keyval) const
		{	
		return (_Mybase::operator()(
			_Keyval == 0 ? 0 : _Keyval)); 
		}
	};
template<class _Ty>
	struct hash<_Ty *>
		: public _Bitwise_hash<_Ty *>
	{	
	};
}
namespace std {
namespace tr1 {	
using ::std:: hash;
}	
}
  #line 521 "c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xstddef"
 #pragma warning(pop)
 #pragma pack(pop)
 #pragma pack(push,8)
 #pragma warning(push,3)
namespace std {
typedef enum
	{	
	denorm_indeterminate = -1,
	denorm_absent = 0,
	denorm_present = 1}
		float_denorm_style;
typedef enum
	{	
	round_indeterminate = -1,
	round_toward_zero = 0,
	round_to_nearest = 1,
	round_toward_infinity = 2,
	round_toward_neg_infinity = 3}
		float_round_style;
struct _Num_base
	{	
	static const float_denorm_style has_denorm = (float_denorm_style)(denorm_absent);
	static const bool has_denorm_loss = (bool)(false);
	static const bool has_infinity = (bool)(false);
	static const bool has_quiet_NaN = (bool)(false);
	static const bool has_signaling_NaN = (bool)(false);
	static const bool is_bounded = (bool)(false);
	static const bool is_exact = (bool)(false);
	static const bool is_iec559 = (bool)(false);
	static const bool is_integer = (bool)(false);
	static const bool is_modulo = (bool)(false);
	static const bool is_signed = (bool)(false);
	static const bool is_specialized = (bool)(false);
	static const bool tinyness_before = (bool)(false);
	static const bool traps = (bool)(false);
	static const float_round_style round_style = (float_round_style)(round_toward_zero);
	static const int digits = (int)(0);
	static const int digits10 = (int)(0);
	static const int max_digits10 = (int)(0);
	static const int max_exponent = (int)(0);
	static const int max_exponent10 = (int)(0);
	static const int min_exponent = (int)(0);
	static const int min_exponent10 = (int)(0);
	static const int radix = (int)(0);
	};
template<class _Ty>
	class numeric_limits
		: public _Num_base
	{	
public:
	static _Ty (min)() throw ()
		{	
		return (_Ty(0));
		}
	static _Ty (max)() throw ()
		{	
		return (_Ty(0));
		}
	static _Ty lowest() throw ()
		{	
		return ((min)());
		}
	static _Ty epsilon() throw ()
		{	
		return (_Ty(0));
		}
	static _Ty round_error() throw ()
		{	
		return (_Ty(0));
		}
	static _Ty denorm_min() throw ()
		{	
		return (_Ty(0));
		}
	static _Ty infinity() throw ()
		{	
		return (_Ty(0));
		}
	static _Ty quiet_NaN() throw ()
		{	
		return (_Ty(0));
		}
	static _Ty signaling_NaN() throw ()
		{	
		return (_Ty(0));
		}
	};
template<class _Ty>
	class numeric_limits<const _Ty>
		: public numeric_limits<_Ty>
	{	
	};
template<class _Ty>
	class numeric_limits<volatile _Ty>
		: public numeric_limits<_Ty>
	{	
	};
template<class _Ty>
	class numeric_limits<const volatile _Ty>
		: public numeric_limits<_Ty>
	{	
	};
struct _Num_int_base
	: public _Num_base
	{	
	static const bool is_bounded = (bool)(true);
	static const bool is_exact = (bool)(true);
	static const bool is_integer = (bool)(true);
	static const bool is_modulo = (bool)(true);
	static const bool is_specialized = (bool)(true);
	static const int radix = (int)(2);
	};
struct _Num_float_base
	: public _Num_base
	{	
	static const float_denorm_style has_denorm = (float_denorm_style)(denorm_present);
	static const bool has_denorm_loss = (bool)(true);
	static const bool has_infinity = (bool)(true);
	static const bool has_quiet_NaN = (bool)(true);
	static const bool has_signaling_NaN = (bool)(true);
	static const bool is_bounded = (bool)(true);
	static const bool is_exact = (bool)(false);
	static const bool is_iec559 = (bool)(true);
	static const bool is_integer = (bool)(false);
	static const bool is_modulo = (bool)(false);
	static const bool is_signed = (bool)(true);
	static const bool is_specialized = (bool)(true);
	static const bool tinyness_before = (bool)(true);
	static const bool traps = (bool)(false);
	static const float_round_style round_style = (float_round_style)(round_to_nearest);
	static const int radix = (int)(2);
	};
template<> class numeric_limits<char>
	: public _Num_int_base
	{	
public:
	typedef char _Ty;
	static _Ty (min)() throw ()
		{	
		return ((-128));
		}
	static _Ty (max)() throw ()
		{	
		return (127);
		}
	static _Ty lowest() throw ()
		{	
		return ((min)());
		}
	static _Ty epsilon() throw ()
		{	
		return (0);
		}
	static _Ty round_error() throw ()
		{	
		return (0);
		}
	static _Ty denorm_min() throw ()
		{	
		return (0);
		}
	static _Ty infinity() throw ()
		{	
		return (0);
		}
	static _Ty quiet_NaN() throw ()
		{	
		return (0);
		}
	static _Ty signaling_NaN() throw ()
		{	
		return (0);
		}
	static const bool is_signed = (bool)((-128) != 0);
	static const int digits = (int)(8 - ((-128) != 0 ? 1 : 0));
	static const int digits10 = (int)((8 - ((-128) != 0 ? 1 : 0)) * 301L / 1000);
	};
template<> class numeric_limits<wchar_t>
	: public _Num_int_base
	{	
public:
	typedef wchar_t _Ty;
	static _Ty (min)() throw ()
		{	
		return ((_Ty)0x0000);
		}
	static _Ty (max)() throw ()
		{	
		return ((_Ty)0xffff);
		}
	static _Ty lowest() throw ()
		{	
		return ((min)());
		}
	static _Ty epsilon() throw ()
		{	
		return (0);
		}
	static _Ty round_error() throw ()
		{	
		return (0);
		}
	static _Ty denorm_min() throw ()
		{	
		return (0);
		}
	static _Ty infinity() throw ()
		{	
		return (0);
		}
	static _Ty quiet_NaN() throw ()
		{	
		return (0);
		}
	static _Ty signaling_NaN() throw ()
		{	
		return (0);
		}
	static const bool is_signed = (bool)(0x0000 != 0);
	static const int digits = (int)(8 * sizeof (wchar_t) - (0x0000 != 0 ? 1 : 0));
	static const int digits10 = (int)((8 * sizeof (wchar_t) - (0x0000 != 0 ? 1 : 0)) * 301L / 1000);
	};
template<> class numeric_limits<_Bool>
	: public _Num_int_base
	{	
public:
	typedef bool _Ty;
	static _Ty (min)() throw ()
		{	
		return (false);
		}
	static _Ty (max)() throw ()
		{	
		return (true);
		}
	static _Ty lowest() throw ()
		{	
		return ((min)());
		}
	static _Ty epsilon() throw ()
		{	
		return (0);
		}
	static _Ty round_error() throw ()
		{	
		return (0);
		}
	static _Ty denorm_min() throw ()
		{	
		return (0);
		}
	static _Ty infinity() throw ()
		{	
		return (0);
		}
	static _Ty quiet_NaN() throw ()
		{	
		return (0);
		}
	static _Ty signaling_NaN() throw ()
		{	
		return (0);
		}
	static const bool is_modulo = (bool)(false);
	static const bool is_signed = (bool)(false);
	static const int digits = (int)(1);
	static const int digits10 = (int)(0);
	};
template<> class numeric_limits<signed char>
	: public _Num_int_base
	{	
public:
	typedef signed char _Ty;
	static _Ty (min)() throw ()
		{	
		return ((-128));
		}
	static _Ty (max)() throw ()
		{	
		return (127);
		}
	static _Ty lowest() throw ()
		{	
		return ((min)());
		}
	static _Ty epsilon() throw ()
		{	
		return (0);
		}
	static _Ty round_error() throw ()
		{	
		return (0);
		}
	static _Ty denorm_min() throw ()
		{	
		return (0);
		}
	static _Ty infinity() throw ()
		{	
		return (0);
		}
	static _Ty quiet_NaN() throw ()
		{	
		return (0);
		}
	static _Ty signaling_NaN() throw ()
		{	
		return (0);
		}
	static const bool is_signed = (bool)(true);
	static const int digits = (int)(8 - 1);
	static const int digits10 = (int)((8 - 1) * 301L / 1000);
	};
template<> class numeric_limits<unsigned char>
	: public _Num_int_base
	{	
public:
	typedef unsigned char _Ty;
	static _Ty (min)() throw ()
		{	
		return (0);
		}
	static _Ty (max)() throw ()
		{	
		return (0xff);
		}
	static _Ty lowest() throw ()
		{	
		return ((min)());
		}
	static _Ty epsilon() throw ()
		{	
		return (0);
		}
	static _Ty round_error() throw ()
		{	
		return (0);
		}
	static _Ty denorm_min() throw ()
		{	
		return (0);
		}
	static _Ty infinity() throw ()
		{	
		return (0);
		}
	static _Ty quiet_NaN() throw ()
		{	
		return (0);
		}
	static _Ty signaling_NaN() throw ()
		{	
		return (0);
		}
	static const bool is_signed = (bool)(false);
	static const int digits = (int)(8);
	static const int digits10 = (int)(8 * 301L / 1000);
	};
template<> class numeric_limits<short>
	: public _Num_int_base
	{	
public:
	typedef short _Ty;
	static _Ty (min)() throw ()
		{	
		return ((-32768));
		}
	static _Ty (max)() throw ()
		{	
		return (32767);
		}
	static _Ty lowest() throw ()
		{	
		return ((min)());
		}
	static _Ty epsilon() throw ()
		{	
		return (0);
		}
	static _Ty round_error() throw ()
		{	
		return (0);
		}
	static _Ty denorm_min() throw ()
		{	
		return (0);
		}
	static _Ty infinity() throw ()
		{	
		return (0);
		}
	static _Ty quiet_NaN() throw ()
		{	
		return (0);
		}
	static _Ty signaling_NaN() throw ()
		{	
		return (0);
		}
	static const bool is_signed = (bool)(true);
	static const int digits = (int)(8 * sizeof (short) - 1);
	static const int digits10 = (int)((8 * sizeof (short) - 1) * 301L / 1000);
	};
template<> class numeric_limits<unsigned short>
	: public _Num_int_base
	{	
public:
	typedef unsigned short _Ty;
	static _Ty (min)() throw ()
		{	
		return (0);
		}
	static _Ty (max)() throw ()
		{	
		return (0xffff);
		}
	static _Ty lowest() throw ()
		{	
		return ((min)());
		}
	static _Ty epsilon() throw ()
		{	
		return (0);
		}
	static _Ty round_error() throw ()
		{	
		return (0);
		}
	static _Ty denorm_min() throw ()
		{	
		return (0);
		}
	static _Ty infinity() throw ()
		{	
		return (0);
		}
	static _Ty quiet_NaN() throw ()
		{	
		return (0);
		}
	static _Ty signaling_NaN() throw ()
		{	
		return (0);
		}
	static const bool is_signed = (bool)(false);
	static const int digits = (int)(8 * sizeof (unsigned short));
	static const int digits10 = (int)(8 * sizeof (unsigned short) * 301L / 1000);
	};
template<> class numeric_limits<int>
	: public _Num_int_base
	{	
public:
	typedef int _Ty;
	static _Ty (min)() throw ()
		{	
		return ((-2147483647 - 1));
		}
	static _Ty (max)() throw ()
		{	
		return (2147483647);
		}
	static _Ty lowest() throw ()
		{	
		return ((min)());
		}
	static _Ty epsilon() throw ()
		{	
		return (0);
		}
	static _Ty round_error() throw ()
		{	
		return (0);
		}
	static _Ty denorm_min() throw ()
		{	
		return (0);
		}
	static _Ty infinity() throw ()
		{	
		return (0);
		}
	static _Ty quiet_NaN() throw ()
		{	
		return (0);
		}
	static _Ty signaling_NaN() throw ()
		{	
		return (0);
		}
	static const bool is_signed = (bool)(true);
	static const int digits = (int)(8 * sizeof (int) - 1);
	static const int digits10 = (int)((8 * sizeof (int) - 1) * 301L / 1000);
	};
template<> class numeric_limits<unsigned int>
	: public _Num_int_base
	{	
public:
	typedef unsigned int _Ty;
	static _Ty (min)() throw ()
		{	
		return (0);
		}
	static _Ty (max)() throw ()
		{	
		return (0xffffffff);
		}
	static _Ty lowest() throw ()
		{	
		return ((min)());
		}
	static _Ty epsilon() throw ()
		{	
		return (0);
		}
	static _Ty round_error() throw ()
		{	
		return (0);
		}
	static _Ty denorm_min() throw ()
		{	
		return (0);
		}
	static _Ty infinity() throw ()
		{	
		return (0);
		}
	static _Ty quiet_NaN() throw ()
		{	
		return (0);
		}
	static _Ty signaling_NaN() throw ()
		{	
		return (0);
		}
	static const bool is_signed = (bool)(false);
	static const int digits = (int)(8 * sizeof (unsigned int));
	static const int digits10 = (int)(8 * sizeof (unsigned int) * 301L / 1000);
	};
template<> class numeric_limits<long>
	: public _Num_int_base
	{	
public:
	typedef long _Ty;
	static _Ty (min)() throw ()
		{	
		return ((-2147483647L - 1));
		}
	static _Ty (max)() throw ()
		{	
		return (2147483647L);
		}
	static _Ty lowest() throw ()
		{	
		return ((min)());
		}
	static _Ty epsilon() throw ()
		{	
		return (0);
		}
	static _Ty round_error() throw ()
		{	
		return (0);
		}
	static _Ty denorm_min() throw ()
		{	
		return (0);
		}
	static _Ty infinity() throw ()
		{	
		return (0);
		}
	static _Ty quiet_NaN() throw ()
		{	
		return (0);
		}
	static _Ty signaling_NaN() throw ()
		{	
		return (0);
		}
	static const bool is_signed = (bool)(true);
	static const int digits = (int)(8 * sizeof (long) - 1);
	static const int digits10 = (int)((8 * sizeof (long) - 1) * 301L / 1000);
	};
template<> class numeric_limits<unsigned long>
	: public _Num_int_base
	{	
public:
	typedef unsigned long _Ty;
	static _Ty (min)() throw ()
		{	
		return (0);
		}
	static _Ty (max)() throw ()
		{	
		return (0xffffffffUL);
		}
	static _Ty lowest() throw ()
		{	
		return ((min)());
		}
	static _Ty epsilon() throw ()
		{	
		return (0);
		}
	static _Ty round_error() throw ()
		{	
		return (0);
		}
	static _Ty denorm_min() throw ()
		{	
		return (0);
		}
	static _Ty infinity() throw ()
		{	
		return (0);
		}
	static _Ty quiet_NaN() throw ()
		{	
		return (0);
		}
	static _Ty signaling_NaN() throw ()
		{	
		return (0);
		}
	static const bool is_signed = (bool)(false);
	static const int digits = (int)(8 * sizeof (unsigned long));
	static const int digits10 = (int)(8 * sizeof (unsigned long) * 301L / 1000);
	};
template<> class numeric_limits<__int64>
	: public _Num_int_base
	{	
public:
	typedef __int64 _Ty;
	static _Ty (min)() throw ()
		{	
		return (-0x7fffffffffffffff - 1);
		}
	static _Ty (max)() throw ()
		{	
		return (0x7fffffffffffffff);
		}
	static _Ty lowest() throw ()
		{	
		return ((min)());
		}
	static _Ty epsilon() throw ()
		{	
		return (0);
		}
	static _Ty round_error() throw ()
		{	
		return (0);
		}
	static _Ty denorm_min() throw ()
		{	
		return (0);
		}
	static _Ty infinity() throw ()
		{	
		return (0);
		}
	static _Ty quiet_NaN() throw ()
		{	
		return (0);
		}
	static _Ty signaling_NaN() throw ()
		{	
		return (0);
		}
	static const bool is_signed = (bool)(true);
	static const int digits = (int)(8 * sizeof (__int64) - 1);
	static const int digits10 = (int)((8 * sizeof (__int64) - 1) * 301L / 1000);
	};
template<> class numeric_limits<unsigned __int64>
	: public _Num_int_base
	{	
public:
	typedef unsigned __int64 _Ty;
	static _Ty (min)() throw ()
		{	
		return (0);
		}
	static _Ty (max)() throw ()
		{	
		return (0xffffffffffffffff);
		}
	static _Ty lowest() throw ()
		{	
		return ((min)());
		}
	static _Ty epsilon() throw ()
		{	
		return (0);
		}
	static _Ty round_error() throw ()
		{	
		return (0);
		}
	static _Ty denorm_min() throw ()
		{	
		return (0);
		}
	static _Ty infinity() throw ()
		{	
		return (0);
		}
	static _Ty quiet_NaN() throw ()
		{	
		return (0);
		}
	static _Ty signaling_NaN() throw ()
		{	
		return (0);
		}
	static const bool is_signed = (bool)(false);
	static const int digits = (int)(8 * sizeof (unsigned __int64));
	static const int digits10 = (int)(8 * sizeof (unsigned __int64) * 301L / 1000);
	};
template<> class numeric_limits<float>
	: public _Num_float_base
	{	
public:
	typedef float _Ty;
	static _Ty (min)() throw ()
		{	
		return (1.175494351e-38F);
		}
	static _Ty (max)() throw ()
		{	
		return (3.402823466e+38F);
		}
	static _Ty lowest() throw ()
		{	
		return (-(max)());
		}
	static _Ty epsilon() throw ()
		{	
		return (1.192092896e-07F);
		}
	static _Ty round_error() throw ()
		{	
		return (0.5);
		}
	static _Ty denorm_min() throw ()
		{	
		return (:: _FDenorm._Float);
		}
	static _Ty infinity() throw ()
		{	
		return (:: _FInf._Float);
		}
	static _Ty quiet_NaN() throw ()
		{	
		return (:: _FNan._Float);
		}
	static _Ty signaling_NaN() throw ()
		{	
		return (:: _FSnan._Float);
		}
	static const int digits = (int)(24);
	static const int digits10 = (int)(6);
	static const int max_digits10 = (int)(2 + 24 * 301L / 1000);
	static const int max_exponent = (int)((int)128);
	static const int max_exponent10 = (int)((int)38);
	static const int min_exponent = (int)((int)(-125));
	static const int min_exponent10 = (int)((int)(-37));
	};
template<> class numeric_limits<double>
	: public _Num_float_base
	{	
public:
	typedef double _Ty;
	static _Ty (min)() throw ()
		{	
		return (2.2250738585072014e-308);
		}
	static _Ty (max)() throw ()
		{	
		return (1.7976931348623158e+308);
		}
	static _Ty lowest() throw ()
		{	
		return (-(max)());
		}
	static _Ty epsilon() throw ()
		{	
		return (2.2204460492503131e-016);
		}
	static _Ty round_error() throw ()
		{	
		return (0.5);
		}
	static _Ty denorm_min() throw ()
		{	
		return (:: _Denorm._Double);
		}
	static _Ty infinity() throw ()
		{	
		return (:: _Inf._Double);
		}
	static _Ty quiet_NaN() throw ()
		{	
		return (:: _Nan._Double);
		}
	static _Ty signaling_NaN() throw ()
		{	
		return (:: _Snan._Double);
		}
	static const int digits = (int)(53);
	static const int digits10 = (int)(15);
	static const int max_digits10 = (int)(2 + 53 * 301L / 1000);
	static const int max_exponent = (int)((int)1024);
	static const int max_exponent10 = (int)((int)308);
	static const int min_exponent = (int)((int)(-1021));
	static const int min_exponent10 = (int)((int)(-307));
	};
template<> class numeric_limits<long double>
	: public _Num_float_base
	{	
public:
	typedef long double _Ty;
	static _Ty (min)() throw ()
		{	
		return (2.2250738585072014e-308);
		}
	static _Ty (max)() throw ()
		{	
		return (1.7976931348623158e+308);
		}
	static _Ty lowest() throw ()
		{	
		return (-(max)());
		}
	static _Ty epsilon() throw ()
		{	
		return (2.2204460492503131e-016);
		}
	static _Ty round_error() throw ()
		{	
		return (0.5);
		}
	static _Ty denorm_min() throw ()
		{	
		return (:: _LDenorm._Long_double);
		}
	static _Ty infinity() throw ()
		{	
		return (:: _LInf._Long_double);
		}
	static _Ty quiet_NaN() throw ()
		{	
		return (:: _LNan._Long_double);
		}
	static _Ty signaling_NaN() throw ()
		{	
		return (:: _LSnan._Long_double);
		}
	static const int digits = (int)(53);
	static const int digits10 = (int)(15);
	static const int max_digits10 = (int)(2 + 53 * 301L / 1000);
	static const int max_exponent = (int)((int)1024);
	static const int max_exponent10 = (int)((int)308);
	static const int min_exponent = (int)((int)(-1021));
	static const int min_exponent10 = (int)((int)(-307));
	};
}
 #pragma warning(pop)
 #pragma pack(pop)
 #pragma pack(push,8)
 #pragma warning(push,3)
namespace std {
}
#pragma pack(push,8)
typedef void (__cdecl *terminate_function)();
typedef void (__cdecl *terminate_handler)();
typedef void (__cdecl *unexpected_function)();
typedef void (__cdecl *unexpected_handler)();
struct _EXCEPTION_POINTERS;
typedef void (__cdecl *_se_translator_function)(unsigned int, struct _EXCEPTION_POINTERS*);
__declspec(dllimport) __declspec(noreturn) void __cdecl terminate(void);
__declspec(dllimport) __declspec(noreturn) void __cdecl unexpected(void);
__declspec(dllimport) int __cdecl _is_exception_typeof(  const type_info &_Type,   struct _EXCEPTION_POINTERS * _ExceptionPtr);
__declspec(dllimport) terminate_function __cdecl set_terminate(  terminate_function _NewPtFunc);
extern "C" __declspec(dllimport) terminate_function __cdecl _get_terminate(void);
__declspec(dllimport) unexpected_function __cdecl set_unexpected(  unexpected_function _NewPtFunc);
extern "C" __declspec(dllimport) unexpected_function __cdecl _get_unexpected(void);
__declspec(dllimport) _se_translator_function __cdecl _set_se_translator(  _se_translator_function _NewPtFunc);
__declspec(dllimport) bool __cdecl __uncaught_exception();
#pragma pack(pop)
#pragma pack(push,8)
extern "C" {
typedef struct _heapinfo {
        int * _pentry;
        size_t _size;
        int _useflag;
        } _HEAPINFO;
__declspec(dllimport) int     __cdecl _resetstkoflw (void);
__declspec(dllimport) unsigned long __cdecl _set_malloc_crt_max_wait(  unsigned long _NewValue);
      __declspec(dllimport) void *  __cdecl _expand(  void * _Memory,   size_t _NewSize);
  __declspec(dllimport) size_t  __cdecl _msize(  void * _Memory);
    void *          __cdecl _alloca(  size_t _Size);
__declspec(dllimport)  int     __cdecl _heapwalk(  _HEAPINFO * _EntryInfo);
__declspec(dllimport) intptr_t __cdecl _get_heap_handle(void);
  __declspec(dllimport) int     __cdecl _heapadd(  void * _Memory,   size_t _Size);
  __declspec(dllimport) int     __cdecl _heapchk(void);
  __declspec(dllimport) int     __cdecl _heapmin(void);
__declspec(dllimport) int     __cdecl _heapset(  unsigned int _Fill);
__declspec(dllimport) size_t  __cdecl _heapused(size_t * _Used, size_t * _Commit);
typedef char __static_assert_t[ (sizeof(unsigned int) <= 8) ];
#pragma warning(push)
#pragma warning(disable:6540)
__inline void *_MarkAllocaS(   void *_Ptr, unsigned int _Marker)
{
    if (_Ptr)
    {
        *((unsigned int*)_Ptr) = _Marker;
        _Ptr = (char*)_Ptr + 8;
    }
    return _Ptr;
}
__inline int _MallocaIsSizeInRange(size_t size)
{
    return size + 8 > size;
}
#pragma warning(pop)
__pragma(warning(push))
__pragma(warning(disable: 6014))
__declspec(noalias) __inline void __cdecl _freea(    void * _Memory)
{
    unsigned int _Marker;
    if (_Memory)
    {
        _Memory = (char*)_Memory - 8;
        _Marker = *(unsigned int *)_Memory;
        if (_Marker == 0xDDDD)
        {
            free(_Memory);
        }
    }
}
__pragma(warning(pop))
}
#pragma pack(pop)
extern "C" {
__declspec(dllimport) void *  __cdecl _memccpy(   void * _Dst,   const void * _Src,   int _Val,   size_t _MaxCount);
  __declspec(dllimport) const void *  __cdecl memchr(   const void * _Buf ,   int _Val,   size_t _MaxCount);
  __declspec(dllimport) int     __cdecl _memicmp(  const void * _Buf1,   const void * _Buf2,   size_t _Size);
  __declspec(dllimport) int     __cdecl _memicmp_l(  const void * _Buf1,   const void * _Buf2,   size_t _Size,   _locale_t _Locale);
  int     __cdecl memcmp(  const void * _Buf1,   const void * _Buf2,   size_t _Size);
void *  __cdecl memcpy(  void * _Dst,   const void * _Src,   size_t _Size);
__declspec(dllimport) errno_t  __cdecl memcpy_s(  void * _Dst,   rsize_t _DstSize,   const void * _Src,   rsize_t _MaxCount);
        void *  __cdecl memset(  void * _Dst,   int _Val,   size_t _Size);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_memccpy" ". See online help for details.")) __declspec(dllimport) void * __cdecl memccpy(  void * _Dst,   const void * _Src,   int _Val,   size_t _Size);
  __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_memicmp" ". See online help for details.")) __declspec(dllimport) int __cdecl memicmp(  const void * _Buf1,   const void * _Buf2,   size_t _Size);
 __declspec(dllimport) errno_t __cdecl _strset_s(  char * _Dst,   size_t _DstSize,   int _Value);
extern "C++" { template <size_t _Size> inline errno_t __cdecl _strset_s(  char (&_Dest)[_Size],   int _Value) throw() { return _strset_s(_Dest, _Size, _Value); } }
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_strset_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  char * __cdecl _strset( char *_Dest,  int _Value);
 __declspec(dllimport) errno_t __cdecl strcpy_s(  char * _Dst,   rsize_t _SizeInBytes,   const char * _Src);
extern "C++" { template <size_t _Size> inline errno_t __cdecl strcpy_s(  char (&_Dest)[_Size],   const char * _Source) throw() { return strcpy_s(_Dest, _Size, _Source); } }
__declspec(deprecated("This function or variable may be unsafe. Consider using " "strcpy_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  char * __cdecl strcpy( char *_Dest,  const char * _Source);
 __declspec(dllimport) errno_t __cdecl strcat_s(  char * _Dst,   rsize_t _SizeInBytes,   const char * _Src);
extern "C++" { template <size_t _Size> inline errno_t __cdecl strcat_s(char (&_Dest)[_Size],   const char * _Source) throw() { return strcat_s(_Dest, _Size, _Source); } }
__declspec(deprecated("This function or variable may be unsafe. Consider using " "strcat_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details."))  char * __cdecl strcat( char *_Dest,  const char * _Source);
  int     __cdecl strcmp(  const char * _Str1,   const char * _Str2);
  size_t  __cdecl strlen(  const char * _Str);
  __declspec(dllimport)
size_t  __cdecl strnlen(  const char * _Str,   size_t _MaxCount);
  static __inline
size_t  __cdecl strnlen_s(  const char * _Str,   size_t _MaxCount)
{
    return (_Str==0) ? 0 : strnlen(_Str, _MaxCount);
}
 __declspec(dllimport) errno_t __cdecl memmove_s(  void * _Dst,   rsize_t _DstSize,   const void * _Src,   rsize_t _MaxCount);
__declspec(dllimport)  void *  __cdecl memmove(  void * _Dst,   const void * _Src,   size_t _Size);
  __declspec(dllimport) char *  __cdecl _strdup(  const char * _Src);
  __declspec(dllimport) const char *  __cdecl strchr(  const char * _Str,   int _Val);
  __declspec(dllimport) int     __cdecl _stricmp(   const char * _Str1,    const char * _Str2);
  __declspec(dllimport) int     __cdecl _strcmpi(   const char * _Str1,    const char * _Str2);
  __declspec(dllimport) int     __cdecl _stricmp_l(   const char * _Str1,    const char * _Str2,   _locale_t _Locale);
  __declspec(dllimport) int     __cdecl strcoll(   const char * _Str1,    const  char * _Str2);
  __declspec(dllimport) int     __cdecl _strcoll_l(   const char * _Str1,    const char * _Str2,   _locale_t _Locale);
  __declspec(dllimport) int     __cdecl _stricoll(   const char * _Str1,    const char * _Str2);
  __declspec(dllimport) int     __cdecl _stricoll_l(   const char * _Str1,    const char * _Str2,   _locale_t _Locale);
  __declspec(dllimport) int     __cdecl _strncoll  (  const char * _Str1,   const char * _Str2,   size_t _MaxCount);
  __declspec(dllimport) int     __cdecl _strncoll_l(  const char * _Str1,   const char * _Str2,   size_t _MaxCount,   _locale_t _Locale);
  __declspec(dllimport) int     __cdecl _strnicoll (  const char * _Str1,   const char * _Str2,   size_t _MaxCount);
  __declspec(dllimport) int     __cdecl _strnicoll_l(  const char * _Str1,   const char * _Str2,   size_t _MaxCount,   _locale_t _Locale);
  __declspec(dllimport) size_t  __cdecl strcspn(   const char * _Str,    const char * _Control);
  __declspec(deprecated("This function or variable may be unsafe. Consider using " "_strerror_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) char *  __cdecl _strerror(  const char * _ErrMsg);
 __declspec(dllimport) errno_t __cdecl _strerror_s(  char * _Buf,   size_t _SizeInBytes,   const char * _ErrMsg);
extern "C++" { template <size_t _Size> inline errno_t __cdecl _strerror_s(char (&_Buffer)[_Size],   const char * _ErrorMessage) throw() { return _strerror_s(_Buffer, _Size, _ErrorMessage); } }
  __declspec(deprecated("This function or variable may be unsafe. Consider using " "strerror_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) char *  __cdecl strerror(  int);
 __declspec(dllimport) errno_t __cdecl strerror_s(  char * _Buf,   size_t _SizeInBytes,   int _ErrNum);
extern "C++" { template <size_t _Size> inline errno_t __cdecl strerror_s(char (&_Buffer)[_Size],   int _ErrorMessage) throw() { return strerror_s(_Buffer, _Size, _ErrorMessage); } }
 __declspec(dllimport) errno_t __cdecl _strlwr_s(  char * _Str,   size_t _Size);
extern "C++" { template <size_t _Size> inline errno_t __cdecl _strlwr_s(  char (&_String)[_Size]) throw() { return _strlwr_s(_String, _Size); } }
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_strlwr_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) char * __cdecl _strlwr( char *_String);
 __declspec(dllimport) errno_t __cdecl _strlwr_s_l(  char * _Str,   size_t _Size,   _locale_t _Locale);
extern "C++" { template <size_t _Size> inline errno_t __cdecl _strlwr_s_l(  char (&_String)[_Size],   _locale_t _Locale) throw() { return _strlwr_s_l(_String, _Size, _Locale); } }
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_strlwr_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) char * __cdecl _strlwr_l(  char *_String,   _locale_t _Locale);
 __declspec(dllimport) errno_t __cdecl strncat_s(  char * _Dst,   rsize_t _SizeInBytes,   const char * _Src,   rsize_t _MaxCount);
extern "C++" { template <size_t _Size> inline errno_t __cdecl strncat_s(  char (&_Dest)[_Size],   const char * _Source,   size_t _Count) throw() { return strncat_s(_Dest, _Size, _Source, _Count); } }
#pragma warning(push)
#pragma warning(disable:6059)
__declspec(deprecated("This function or variable may be unsafe. Consider using " "strncat_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) char * __cdecl strncat(  char *_Dest,   const char * _Source,   size_t _Count);
#pragma warning(pop)
  __declspec(dllimport) int     __cdecl strncmp(  const char * _Str1,   const char * _Str2,   size_t _MaxCount);
  __declspec(dllimport) int     __cdecl _strnicmp(  const char * _Str1,   const char * _Str2,   size_t _MaxCount);
  __declspec(dllimport) int     __cdecl _strnicmp_l(  const char * _Str1,   const char * _Str2,   size_t _MaxCount,   _locale_t _Locale);
 __declspec(dllimport) errno_t __cdecl strncpy_s(  char * _Dst,   rsize_t _SizeInBytes,   const char * _Src,   rsize_t _MaxCount);
extern "C++" { template <size_t _Size> inline errno_t __cdecl strncpy_s(char (&_Dest)[_Size],   const char * _Source,   size_t _Count) throw() { return strncpy_s(_Dest, _Size, _Source, _Count); } }
__declspec(deprecated("This function or variable may be unsafe. Consider using " "strncpy_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) char * __cdecl strncpy(    char *_Dest,   const char * _Source,   size_t _Count);
 __declspec(dllimport) errno_t __cdecl _strnset_s(  char * _Str,   size_t _SizeInBytes,   int _Val,   size_t _MaxCount);
extern "C++" { template <size_t _Size> inline errno_t __cdecl _strnset_s(  char (&_Dest)[_Size],   int _Val,   size_t _Count) throw() { return _strnset_s(_Dest, _Size, _Val, _Count); } }
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_strnset_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) char * __cdecl _strnset(  char *_Dest,   int _Val,   size_t _Count);
  __declspec(dllimport) const char *  __cdecl strpbrk(  const char * _Str,   const char * _Control);
  __declspec(dllimport) const char *  __cdecl strrchr(  const char * _Str,   int _Ch);
__declspec(dllimport) char *  __cdecl _strrev(  char * _Str);
  __declspec(dllimport) size_t  __cdecl strspn(  const char * _Str,   const char * _Control);
    __declspec(dllimport) const char *  __cdecl strstr(  const char * _Str,   const char * _SubStr);
  __declspec(deprecated("This function or variable may be unsafe. Consider using " "strtok_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) char *  __cdecl strtok(  char * _Str,   const char * _Delim);
  __declspec(dllimport) char *  __cdecl strtok_s(  char * _Str,   const char * _Delim,     char ** _Context);
 __declspec(dllimport) errno_t __cdecl _strupr_s(  char * _Str,   size_t _Size);
extern "C++" { template <size_t _Size> inline errno_t __cdecl _strupr_s(  char (&_String)[_Size]) throw() { return _strupr_s(_String, _Size); } }
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_strupr_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) char * __cdecl _strupr( char *_String);
 __declspec(dllimport) errno_t __cdecl _strupr_s_l(  char * _Str,   size_t _Size, _locale_t _Locale);
extern "C++" { template <size_t _Size> inline errno_t __cdecl _strupr_s_l(  char (&_String)[_Size], _locale_t _Locale) throw() { return _strupr_s_l(_String, _Size, _Locale); } }
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_strupr_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) char * __cdecl _strupr_l(  char *_String,   _locale_t _Locale);
 __declspec(dllimport) size_t  __cdecl strxfrm (    char * _Dst,   const char * _Src,   size_t _MaxCount);
 __declspec(dllimport) size_t  __cdecl _strxfrm_l(    char * _Dst,   const char * _Src,   size_t _MaxCount,   _locale_t _Locale);
extern "C++" {
  inline char * __cdecl strchr(  char * _Str,   int _Ch)
        { return (char*)strchr((const char*)_Str, _Ch); }
  inline char * __cdecl strpbrk(  char * _Str,   const char * _Control)
        { return (char*)strpbrk((const char*)_Str, _Control); }
  inline char * __cdecl strrchr(  char * _Str,   int _Ch)
        { return (char*)strrchr((const char*)_Str, _Ch); }
    inline char * __cdecl strstr(  char * _Str,   const char * _SubStr)
        { return (char*)strstr((const char*)_Str, _SubStr); }
  inline void * __cdecl memchr(  void * _Pv,   int _C,   size_t _N)
        { return (void*)memchr((const void*)_Pv, _C, _N); }
}
  __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_strdup" ". See online help for details.")) __declspec(dllimport) char * __cdecl strdup(  const char * _Src);
  __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_strcmpi" ". See online help for details.")) __declspec(dllimport) int __cdecl strcmpi(  const char * _Str1,   const char * _Str2);
  __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_stricmp" ". See online help for details.")) __declspec(dllimport) int __cdecl stricmp(  const char * _Str1,   const char * _Str2);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_strlwr" ". See online help for details.")) __declspec(dllimport) char * __cdecl strlwr(  char * _Str);
  __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_strnicmp" ". See online help for details.")) __declspec(dllimport) int __cdecl strnicmp(  const char * _Str1,   const char * _Str,   size_t _MaxCount);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_strnset" ". See online help for details.")) __declspec(dllimport) char * __cdecl strnset(  char * _Str,   int _Val,   size_t _MaxCount);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_strrev" ". See online help for details.")) __declspec(dllimport) char * __cdecl strrev(  char * _Str);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_strset" ". See online help for details."))         char * __cdecl strset(  char * _Str,   int _Val);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_strupr" ". See online help for details.")) __declspec(dllimport) char * __cdecl strupr(  char * _Str);
}
 namespace std {
class __declspec(dllimport) exception
	{   
public:
	  exception();
	 explicit  exception(const char * const &);
	  exception(const char * const &, int);
	  exception(const exception&);
	 exception&  operator=(const exception&);
	 virtual  ~exception() throw ();
	 virtual const char *  what() const;
private:
	 void  _Copy_str(const char *);
	 void  _Tidy();
	const char * _Mywhat;
	bool _Mydofree;
	};
using ::set_terminate; using ::terminate_handler; using ::terminate; using ::set_unexpected; using ::unexpected_handler; using ::unexpected;
typedef void (__cdecl *_Prhand)(const exception&);
__declspec(dllimport) bool __cdecl uncaught_exception();
inline terminate_handler __cdecl get_terminate()
	{	
	return (_get_terminate());
	}
inline unexpected_handler __cdecl get_unexpected()
	{	
	return (_get_unexpected());
	}
}
namespace std {
class bad_exception : public exception
	{	
public:
	 bad_exception(const char *_Message = "bad exception")
		throw ()
		: exception(_Message)
		{	
		}
	virtual  ~bad_exception() throw ()
		{	
		}
	};
class bad_alloc : public exception
	{	
public:
	 bad_alloc() throw ()
		: exception("bad allocation", 1)
		{	
		}
	virtual  ~bad_alloc() throw ()
		{	
		}
private:
	friend class bad_array_new_length;
	 bad_alloc(const char *_Message) throw ()
		: exception(_Message, 1)
		{	
		}
	};
class bad_array_new_length
	: public bad_alloc
	{	
public:
	bad_array_new_length() throw ()
		: bad_alloc("bad array new length")
		{	
		}
	};
}
__declspec(dllimport) void __cdecl __ExceptionPtrCreate(  void* );
__declspec(dllimport) void __cdecl __ExceptionPtrDestroy(  void* );
__declspec(dllimport) void __cdecl __ExceptionPtrCopy(  void*,   const void* );
__declspec(dllimport) void __cdecl __ExceptionPtrAssign(  void*,   const void* );
__declspec(dllimport) bool __cdecl __ExceptionPtrCompare(  const void*,   const void*);
__declspec(dllimport) bool __cdecl __ExceptionPtrToBool(  const void*);
__declspec(dllimport) void __cdecl __ExceptionPtrSwap(  void*,   void*);
__declspec(dllimport) void __cdecl __ExceptionPtrCurrentException(  void*);
__declspec(dllimport) void __cdecl __ExceptionPtrRethrow(  const void*);
__declspec(dllimport) void __cdecl __ExceptionPtrCopyException(  void*,   const void*,   const void*);
namespace std {
class exception_ptr
	{
public:
	exception_ptr()
		{
		__ExceptionPtrCreate(this);
		}
	exception_ptr(nullptr_t)
		{
		__ExceptionPtrCreate(this);
		}
	~exception_ptr() throw ()
		{
		__ExceptionPtrDestroy(this);
		}
	exception_ptr(const exception_ptr& _Rhs)
		{
		__ExceptionPtrCopy(this, &_Rhs);
		}
	exception_ptr& operator=(const exception_ptr& _Rhs)
		{
		__ExceptionPtrAssign(this, &_Rhs);
		return *this;
		}
	exception_ptr& operator=(nullptr_t)
		{
		exception_ptr _Ptr;
		__ExceptionPtrAssign(this, &_Ptr);
		return *this;
		}
	typedef exception_ptr _Myt;
	explicit operator bool() const throw ()
		{
		return __ExceptionPtrToBool(this);
		}
	void _RethrowException() const
		{
		__ExceptionPtrRethrow(this);
		}
	static exception_ptr _Current_exception()
		{
		exception_ptr _Retval;
		__ExceptionPtrCurrentException(&_Retval);
		return _Retval;
		}
	static exception_ptr _Copy_exception(  void* _Except,   const void* _Ptr)
		{
		exception_ptr _Retval = 0;
		if (!_Ptr)
			{
			return _Retval;
			}
		__ExceptionPtrCopyException(&_Retval, _Except, _Ptr);
		return _Retval;
		}
private:
	void* _Data1;
	void* _Data2;
	};
inline void swap(exception_ptr& _Lhs, exception_ptr& _Rhs)
	{
	__ExceptionPtrSwap(&_Lhs, &_Rhs);
	}
inline bool operator==(const exception_ptr& _Lhs, const exception_ptr& _Rhs)
	{
	return __ExceptionPtrCompare(&_Lhs, &_Rhs);
	}
inline bool operator==(nullptr_t, const exception_ptr& _Rhs)
	{
	return !_Rhs;
	}
inline bool operator==(const exception_ptr& _Lhs, nullptr_t)
	{
	return !_Lhs;
	}
inline bool operator!=(const exception_ptr& _Lhs, const exception_ptr& _Rhs)
	{
	return !(_Lhs == _Rhs);
	}
inline bool operator!=(nullptr_t _Lhs, const exception_ptr& _Rhs)
	{
	return !(_Lhs == _Rhs);
	}
inline bool operator!=(const exception_ptr& _Lhs, nullptr_t _Rhs)
	{
	return !(_Lhs == _Rhs);
	}
inline exception_ptr current_exception()
	{
	return exception_ptr::_Current_exception();
	}
inline void rethrow_exception(  exception_ptr _P)
	{
	_P._RethrowException();
	}
template <class _E> void *__GetExceptionInfo(_E);
template<class _E> exception_ptr make_exception_ptr(_E _Except)
	{
	return exception_ptr::_Copy_exception(::std:: addressof(_Except), __GetExceptionInfo(_Except));
	}
}
 #pragma warning(pop)
 #pragma pack(pop)
 #pragma pack(push,8)
 #pragma warning(push,3)
namespace std {
typedef void (__cdecl * new_handler) ();
struct nothrow_t
	{	
	};
extern const nothrow_t nothrow;	
__declspec(dllimport) new_handler __cdecl set_new_handler(  new_handler)
	throw ();	
__declspec(dllimport) new_handler __cdecl get_new_handler()
	throw ();	
}
void __cdecl operator delete(void *) throw ();
#pragma warning (suppress: 4985)
    void *__cdecl operator new(size_t _Size) throw (...);
inline void *__cdecl operator new(size_t, void *_Where) throw ()
	{	
	return (_Where);
	}
inline void __cdecl operator delete(void *, void *) throw ()
	{	
	}
inline void *__cdecl operator new[](size_t, void *_Where) throw ()
	{	
	return (_Where);
	}
inline void __cdecl operator delete[](void *, void *) throw ()
	{	
	}
void __cdecl operator delete[](void *) throw ();	
    void *__cdecl operator new[](size_t _Size)
	throw (...);	
    void *__cdecl operator new(size_t _Size, const ::std:: nothrow_t&)
	throw ();
    void *__cdecl operator new[](size_t _Size, const ::std:: nothrow_t&)
	throw ();	
void __cdecl operator delete(void *, const ::std:: nothrow_t&)
	throw ();	
void __cdecl operator delete[](void *, const ::std:: nothrow_t&)
	throw ();	
using ::std:: new_handler;
 #pragma warning(pop)
 #pragma pack(pop)
#pragma pack(push,8)
extern "C" {
__declspec(dllimport) FILE * __cdecl __iob_func(void);
typedef __int64 fpos_t;
  __declspec(dllimport) int __cdecl _filbuf(  FILE * _File );
 __declspec(dllimport) int __cdecl _flsbuf(  int _Ch,   FILE * _File);
  __declspec(dllimport) FILE * __cdecl _fsopen(  const char * _Filename,   const char * _Mode,   int _ShFlag);
__declspec(dllimport) void __cdecl clearerr(  FILE * _File);
 __declspec(dllimport) errno_t __cdecl clearerr_s(  FILE * _File );
 __declspec(dllimport) int __cdecl fclose(  FILE * _File);
 __declspec(dllimport) int __cdecl _fcloseall(void);
  __declspec(dllimport) FILE * __cdecl _fdopen(  int _FileHandle,   const char * _Mode);
  __declspec(dllimport) int __cdecl feof(  FILE * _File);
  __declspec(dllimport) int __cdecl ferror(  FILE * _File);
 __declspec(dllimport) int __cdecl fflush(  FILE * _File);
 __declspec(dllimport) int __cdecl fgetc(  FILE * _File);
 __declspec(dllimport) int __cdecl _fgetchar(void);
 __declspec(dllimport) int __cdecl fgetpos(  FILE * _File ,   fpos_t * _Pos);
 __declspec(dllimport) char * __cdecl fgets(  char * _Buf,   int _MaxCount,   FILE * _File);
  __declspec(dllimport) int __cdecl _fileno(  FILE * _File);
  __declspec(dllimport) char * __cdecl _tempnam(  const char * _DirName,   const char * _FilePrefix);
 __declspec(dllimport) int __cdecl _flushall(void);
  __declspec(deprecated("This function or variable may be unsafe. Consider using " "fopen_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) FILE * __cdecl fopen(  const char * _Filename,   const char * _Mode);
 __declspec(dllimport) errno_t __cdecl fopen_s(  FILE ** _File,   const char * _Filename,   const char * _Mode);
 __declspec(dllimport) int __cdecl fprintf(  FILE * _File,     const char * _Format, ...);
 __declspec(dllimport) int __cdecl fprintf_s(  FILE * _File,     const char * _Format, ...);
 __declspec(dllimport) int __cdecl fputc(  int _Ch,   FILE * _File);
 __declspec(dllimport) int __cdecl _fputchar(  int _Ch);
 __declspec(dllimport) int __cdecl fputs(  const char * _Str,   FILE * _File);
 __declspec(dllimport) size_t __cdecl fread(  void * _DstBuf,   size_t _ElementSize,   size_t _Count,   FILE * _File);
 __declspec(dllimport) size_t __cdecl fread_s(  void * _DstBuf,   size_t _DstSize,   size_t _ElementSize,   size_t _Count,   FILE * _File);
  __declspec(deprecated("This function or variable may be unsafe. Consider using " "freopen_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) FILE * __cdecl freopen(  const char * _Filename,   const char * _Mode,   FILE * _File);
 __declspec(dllimport) errno_t __cdecl freopen_s(  FILE ** _File,   const char * _Filename,   const char * _Mode,   FILE * _OldFile);
  __declspec(deprecated("This function or variable may be unsafe. Consider using " "fscanf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) int __cdecl fscanf(  FILE * _File,     const char * _Format, ...);
 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_fscanf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) int __cdecl _fscanf_l(  FILE * _File,     const char * _Format,   _locale_t _Locale, ...);
#pragma warning(push)
#pragma warning(disable:6530)
 __declspec(dllimport) int __cdecl fscanf_s(  FILE * _File,     const char * _Format, ...);
 __declspec(dllimport) int __cdecl _fscanf_s_l(  FILE * _File,     const char * _Format,   _locale_t _Locale, ...);
#pragma warning(pop)
 __declspec(dllimport) int __cdecl fsetpos(  FILE * _File,   const fpos_t * _Pos);
 __declspec(dllimport) int __cdecl fseek(  FILE * _File,   long _Offset,   int _Origin);
  __declspec(dllimport) long __cdecl ftell(  FILE * _File);
 __declspec(dllimport) int __cdecl _fseeki64(  FILE * _File,   __int64 _Offset,   int _Origin);
  __declspec(dllimport) __int64 __cdecl _ftelli64(  FILE * _File);
 __declspec(dllimport) size_t __cdecl fwrite(  const void * _Str,   size_t _Size,   size_t _Count,   FILE * _File);
  __declspec(dllimport) int __cdecl getc(  FILE * _File);
  __declspec(dllimport) int __cdecl getchar(void);
  __declspec(dllimport) int __cdecl _getmaxstdio(void);
__declspec(dllimport) char * __cdecl gets_s(  char * _Buf,   rsize_t _Size);
extern "C++" { template <size_t _Size> inline char * __cdecl gets_s(char (&_Buffer)[_Size]) throw() { return gets_s(_Buffer, _Size); } }
__declspec(deprecated("This function or variable may be unsafe. Consider using " "gets_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) char * __cdecl gets(  char *_Buffer);
  int __cdecl _getw(  FILE * _File);
 __declspec(dllimport) int __cdecl _pclose(  FILE * _File);
  __declspec(dllimport) FILE * __cdecl _popen(  const char * _Command,   const char * _Mode);
 __declspec(dllimport) int __cdecl printf(    const char * _Format, ...);
 __declspec(dllimport) int __cdecl printf_s(    const char * _Format, ...);
 __declspec(dllimport) int __cdecl putc(  int _Ch,   FILE * _File);
 __declspec(dllimport) int __cdecl putchar(  int _Ch);
 __declspec(dllimport) int __cdecl puts(  const char * _Str);
 __declspec(dllimport) int __cdecl _putw(  int _Word,   FILE * _File);
__declspec(dllimport) int __cdecl remove(  const char * _Filename);
  __declspec(dllimport) int __cdecl rename(  const char * _OldFilename,   const char * _NewFilename);
__declspec(dllimport) int __cdecl _unlink(  const char * _Filename);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_unlink" ". See online help for details.")) __declspec(dllimport) int __cdecl unlink(  const char * _Filename);
__declspec(dllimport) void __cdecl rewind(  FILE * _File);
 __declspec(dllimport) int __cdecl _rmtmp(void);
  __declspec(deprecated("This function or variable may be unsafe. Consider using " "scanf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) int __cdecl scanf(    const char * _Format, ...);
 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_scanf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) int __cdecl _scanf_l(    const char * _Format,   _locale_t _Locale, ...);
#pragma warning(push)
#pragma warning(disable:6530)
 __declspec(dllimport) int __cdecl scanf_s(    const char * _Format, ...);
 __declspec(dllimport) int __cdecl _scanf_s_l(    const char * _Format,   _locale_t _Locale, ...);
#pragma warning(pop)
__declspec(deprecated("This function or variable may be unsafe. Consider using " "setvbuf" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) void __cdecl setbuf(  FILE * _File,     char * _Buffer);
 __declspec(dllimport) int __cdecl _setmaxstdio(  int _Max);
 __declspec(dllimport) unsigned int __cdecl _set_output_format(  unsigned int _Format);
 __declspec(dllimport) unsigned int __cdecl _get_output_format(void);
 __declspec(dllimport) int __cdecl setvbuf(  FILE * _File,   char * _Buf,   int _Mode,   size_t _Size);
 __declspec(dllimport) int __cdecl _snprintf_s(  char * _DstBuf,   size_t _SizeInBytes,   size_t _MaxCount,     const char * _Format, ...);
extern "C++" { __pragma(warning(push)); __pragma(warning(disable: 4793)); template <size_t _Size> inline int __cdecl _snprintf_s(  char (&_Dest)[_Size],   size_t _MaxCount,     const char * _Format, ...) throw() { va_list _ArgList; ( _ArgList = (va_list)( &reinterpret_cast<const char &>(_Format) ) + ( (sizeof(_Format) + sizeof(int) - 1) & ~(sizeof(int) - 1) ) ); return _vsnprintf_s(_Dest, _Size, _MaxCount, _Format, _ArgList); } __pragma(warning(pop)); }
 __declspec(dllimport) int __cdecl sprintf_s(  char * _DstBuf,   size_t _SizeInBytes,     const char * _Format, ...);
extern "C++" { __pragma(warning(push)); __pragma(warning(disable: 4793)); template <size_t _Size> inline int __cdecl sprintf_s(  char (&_Dest)[_Size],     const char * _Format, ...) throw() { va_list _ArgList; ( _ArgList = (va_list)( &reinterpret_cast<const char &>(_Format) ) + ( (sizeof(_Format) + sizeof(int) - 1) & ~(sizeof(int) - 1) ) ); return vsprintf_s(_Dest, _Size, _Format, _ArgList); } __pragma(warning(pop)); }
  __declspec(dllimport) int __cdecl _scprintf(    const char * _Format, ...);
  __declspec(deprecated("This function or variable may be unsafe. Consider using " "sscanf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) int __cdecl sscanf(  const char * _Src,     const char * _Format, ...);
 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_sscanf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) int __cdecl _sscanf_l(  const char * _Src,     const char * _Format,   _locale_t _Locale, ...);
#pragma warning(push)
#pragma warning(disable:6530)
 __declspec(dllimport) int __cdecl sscanf_s(  const char * _Src,     const char * _Format, ...);
 __declspec(dllimport) int __cdecl _sscanf_s_l(  const char * _Src,     const char * _Format,   _locale_t _Locale, ...);
 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_snscanf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) int __cdecl _snscanf(    const char * _Src,   size_t _MaxCount,     const char * _Format, ...);
 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_snscanf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) int __cdecl _snscanf_l(    const char * _Src,   size_t _MaxCount,     const char * _Format,   _locale_t _Locale, ...);
 __declspec(dllimport) int __cdecl _snscanf_s(    const char * _Src,   size_t _MaxCount,     const char * _Format, ...);
 __declspec(dllimport) int __cdecl _snscanf_s_l(    const char * _Src,   size_t _MaxCount,     const char * _Format,   _locale_t _Locale, ...);
#pragma warning(pop)
  __declspec(deprecated("This function or variable may be unsafe. Consider using " "tmpfile_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) FILE * __cdecl tmpfile(void);
 __declspec(dllimport) errno_t __cdecl tmpfile_s(    FILE ** _File);
 __declspec(dllimport) errno_t __cdecl tmpnam_s(  char * _Buf,   rsize_t _Size);
extern "C++" { template <size_t _Size> inline errno_t __cdecl tmpnam_s(  char (&_Buf)[_Size]) throw() { return tmpnam_s(_Buf, _Size); } }
__declspec(deprecated("This function or variable may be unsafe. Consider using " "tmpnam_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) char * __cdecl tmpnam(  char *_Buffer);
 __declspec(dllimport) int __cdecl ungetc(  int _Ch,   FILE * _File);
 __declspec(dllimport) int __cdecl vfprintf(  FILE * _File,     const char * _Format, va_list _ArgList);
 __declspec(dllimport) int __cdecl vfscanf(  FILE * _File,     const char * _Format, va_list _ArgList);
 __declspec(dllimport) int __cdecl vfprintf_s(  FILE * _File,     const char * _Format, va_list _ArgList);
 __declspec(dllimport) int __cdecl vfscanf_s(  FILE * _File,     const char * _Format, va_list _ArgList);
 __declspec(dllimport) int __cdecl vprintf(    const char * _Format, va_list _ArgList);
 __declspec(dllimport) int __cdecl vscanf(    const char * _Format, va_list _ArgList);
 __declspec(dllimport) int __cdecl vprintf_s(    const char * _Format, va_list _ArgList);
 __declspec(dllimport) int __cdecl vscanf_s(    const char * _Format, va_list _ArgList);
 __declspec(deprecated("This function or variable may be unsafe. Consider using " "vsnprintf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) int __cdecl vsnprintf(  char * _DstBuf,   size_t _MaxCount,     const char * _Format, va_list _ArgList);
 __declspec(dllimport) int __cdecl vsnprintf_s(  char * _DstBuf,   size_t _DstSize,   size_t _MaxCount,     const char * _Format, va_list _ArgList);
extern "C++" { template <size_t _Size> inline int __cdecl vsnprintf_s(  char (&_Dest)[_Size],   size_t _MaxCount,     const char * _Format, va_list _Args) throw() { return vsnprintf_s(_Dest, _Size, _MaxCount, _Format, _Args); } }
 __declspec(dllimport) int __cdecl _vsnprintf_s(  char * _DstBuf,   size_t _SizeInBytes,   size_t _MaxCount,     const char * _Format, va_list _ArgList);
extern "C++" { template <size_t _Size> inline int __cdecl _vsnprintf_s(  char (&_Dest)[_Size],   size_t _MaxCount,     const char * _Format, va_list _Args) throw() { return _vsnprintf_s(_Dest, _Size, _MaxCount, _Format, _Args); } }
#pragma warning(push)
#pragma warning(disable:4793)
__declspec(deprecated("This function or variable may be unsafe. Consider using " "_snprintf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) int __cdecl _snprintf(    char *_Dest,   size_t _Count,     const char * _Format, ...); __declspec(deprecated("This function or variable may be unsafe. Consider using " "_vsnprintf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) int __cdecl _vsnprintf(    char *_Dest,   size_t _Count,     const char * _Format, va_list _Args);
#pragma warning(pop)
__declspec(dllimport) int __cdecl vsprintf_s(  char * _DstBuf,   size_t _SizeInBytes,     const char * _Format, va_list _ArgList);
extern "C++" { template <size_t _Size> inline int __cdecl vsprintf_s(  char (&_Dest)[_Size],     const char * _Format, va_list _Args) throw() { return vsprintf_s(_Dest, _Size, _Format, _Args); } }
 __declspec(dllimport) int __cdecl vsscanf_s(const char * _Src,     const char * _Format, va_list _ArgList);
extern "C++" { template <size_t _Size> inline int __cdecl vsscanf_s(  const char (&_Src)[_Size],     const char * _Format, va_list _Args) throw() { return vsscanf_s(_Src, _Size, _Format, _Args); } }
#pragma warning(push)
#pragma warning(disable:4793)
__declspec(deprecated("This function or variable may be unsafe. Consider using " "sprintf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) int __cdecl sprintf(  char *_Dest,  const char * _Format, ...); __declspec(deprecated("This function or variable may be unsafe. Consider using " "vsprintf_s" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) int __cdecl vsprintf(  char *_Dest,  const char * _Format, va_list _Args);
 __declspec(dllimport) int __cdecl vsscanf(const char * _srcBuf,     const char * _Format, va_list _ArgList);
#pragma warning(pop)
  __declspec(dllimport) int __cdecl _vscprintf(    const char * _Format, va_list _ArgList);
 __declspec(dllimport) int __cdecl _snprintf_c(  char * _DstBuf,   size_t _MaxCount,     const char * _Format, ...);
 __declspec(dllimport) int __cdecl _vsnprintf_c(  char *_DstBuf,   size_t _MaxCount,     const char * _Format, va_list _ArgList);
 __declspec(dllimport) int __cdecl _fprintf_p(  FILE * _File,     const char * _Format, ...);
 __declspec(dllimport) int __cdecl _printf_p(    const char * _Format, ...);
 __declspec(dllimport) int __cdecl _sprintf_p(  char * _Dst,   size_t _MaxCount,     const char * _Format, ...);
 __declspec(dllimport) int __cdecl _vfprintf_p(  FILE * _File,     const char * _Format, va_list _ArgList);
 __declspec(dllimport) int __cdecl _vprintf_p(    const char * _Format, va_list _ArgList);
 __declspec(dllimport) int __cdecl _vsprintf_p(  char * _Dst,   size_t _MaxCount,     const char * _Format, va_list _ArgList);
  __declspec(dllimport) int __cdecl _scprintf_p(    const char * _Format, ...);
  __declspec(dllimport) int __cdecl _vscprintf_p(    const char * _Format, va_list _ArgList);
__declspec(dllimport) int __cdecl _set_printf_count_output(  int _Value);
__declspec(dllimport) int __cdecl _get_printf_count_output(void);
 __declspec(dllimport) int __cdecl _printf_l(    const char * _Format,   _locale_t _Locale, ...);
 __declspec(dllimport) int __cdecl _printf_p_l(    const char * _Format,   _locale_t _Locale, ...);
 __declspec(dllimport) int __cdecl _printf_s_l(    const char * _Format,   _locale_t _Locale, ...);
 __declspec(dllimport) int __cdecl _vprintf_l(    const char * _Format,   _locale_t _Locale, va_list _ArgList);
 __declspec(dllimport) int __cdecl _vprintf_p_l(    const char * _Format,   _locale_t _Locale, va_list _ArgList);
 __declspec(dllimport) int __cdecl _vprintf_s_l(    const char * _Format,   _locale_t _Locale, va_list _ArgList);
 __declspec(dllimport) int __cdecl _fprintf_l(  FILE * _File,     const char * _Format,   _locale_t _Locale, ...);
 __declspec(dllimport) int __cdecl _fprintf_p_l(  FILE * _File,     const char * _Format,   _locale_t _Locale, ...);
 __declspec(dllimport) int __cdecl _fprintf_s_l(  FILE * _File,     const char * _Format,   _locale_t _Locale, ...);
 __declspec(dllimport) int __cdecl _vfprintf_l(  FILE * _File,   const char * _Format,   _locale_t _Locale, va_list _ArgList);
 __declspec(dllimport) int __cdecl _vfprintf_p_l(  FILE * _File,   const char * _Format,   _locale_t _Locale, va_list _ArgList);
 __declspec(dllimport) int __cdecl _vfprintf_s_l(  FILE * _File,   const char * _Format,   _locale_t _Locale, va_list _ArgList);
 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_sprintf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) int __cdecl _sprintf_l(    char * _DstBuf,     const char * _Format,   _locale_t _Locale, ...);
 __declspec(dllimport) int __cdecl _sprintf_p_l(  char * _DstBuf,   size_t _MaxCount,     const char * _Format,   _locale_t _Locale, ...);
 __declspec(dllimport) int __cdecl _sprintf_s_l(  char * _DstBuf,   size_t _DstSize,     const char * _Format,   _locale_t _Locale, ...);
 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_vsprintf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) int __cdecl _vsprintf_l(    char * _DstBuf,   const char * _Format,   _locale_t, va_list _ArgList);
 __declspec(dllimport) int __cdecl _vsprintf_p_l(  char * _DstBuf,   size_t _MaxCount,     const char* _Format,   _locale_t _Locale,  va_list _ArgList);
 __declspec(dllimport) int __cdecl _vsprintf_s_l(  char * _DstBuf,   size_t _DstSize,     const char * _Format,   _locale_t _Locale, va_list _ArgList);
 __declspec(dllimport) int __cdecl _scprintf_l(    const char * _Format,   _locale_t _Locale, ...);
 __declspec(dllimport) int __cdecl _scprintf_p_l(    const char * _Format,   _locale_t _Locale, ...);
 __declspec(dllimport) int __cdecl _vscprintf_l(    const char * _Format,   _locale_t _Locale, va_list _ArgList);
 __declspec(dllimport) int __cdecl _vscprintf_p_l(    const char * _Format,   _locale_t _Locale, va_list _ArgList);
 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_snprintf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) int __cdecl _snprintf_l(  char * _DstBuf,   size_t _MaxCount,     const char * _Format,   _locale_t _Locale, ...);
 __declspec(dllimport) int __cdecl _snprintf_c_l(  char * _DstBuf,   size_t _MaxCount,     const char * _Format,   _locale_t _Locale, ...);
 __declspec(dllimport) int __cdecl _snprintf_s_l(  char * _DstBuf,   size_t _DstSize,   size_t _MaxCount,     const char * _Format,   _locale_t _Locale, ...);
 __declspec(deprecated("This function or variable may be unsafe. Consider using " "_vsnprintf_s_l" " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")) __declspec(dllimport) int __cdecl _vsnprintf_l(  char * _DstBuf,   size_t _MaxCount,     const char * _Format,   _locale_t _Locale, va_list _ArgList);
 __declspec(dllimport) int __cdecl _vsnprintf_c_l(  char * _DstBuf,   size_t _MaxCount, const char *,   _locale_t _Locale, va_list _ArgList);
 __declspec(dllimport) int __cdecl _vsnprintf_s_l(  char * _DstBuf,   size_t _DstSize,   size_t _MaxCount,     const char* _Format,  _locale_t _Locale, va_list _ArgList);
__declspec(dllimport) void __cdecl _lock_file(  FILE * _File);
__declspec(dllimport) void __cdecl _unlock_file(  FILE * _File);
 __declspec(dllimport) int __cdecl _fclose_nolock(  FILE * _File);
 __declspec(dllimport) int __cdecl _fflush_nolock(  FILE * _File);
 __declspec(dllimport) size_t __cdecl _fread_nolock(  void * _DstBuf,   size_t _ElementSize,   size_t _Count,   FILE * _File);
 __declspec(dllimport) size_t __cdecl _fread_nolock_s(  void * _DstBuf,   size_t _DstSize,   size_t _ElementSize,   size_t _Count,   FILE * _File);
 __declspec(dllimport) int __cdecl _fseek_nolock(  FILE * _File,   long _Offset,   int _Origin);
  __declspec(dllimport) long __cdecl _ftell_nolock(  FILE * _File);
 __declspec(dllimport) int __cdecl _fseeki64_nolock(  FILE * _File,   __int64 _Offset,   int _Origin);
  __declspec(dllimport) __int64 __cdecl _ftelli64_nolock(  FILE * _File);
 __declspec(dllimport) size_t __cdecl _fwrite_nolock(  const void * _DstBuf,   size_t _Size,   size_t _Count,   FILE * _File);
 __declspec(dllimport) int __cdecl _ungetc_nolock(  int _Ch,   FILE * _File);
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_tempnam" ". See online help for details.")) __declspec(dllimport) char * __cdecl tempnam(  const char * _Directory,   const char * _FilePrefix);
 __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_fcloseall" ". See online help for details.")) __declspec(dllimport) int __cdecl fcloseall(void);
  __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_fdopen" ". See online help for details.")) __declspec(dllimport) FILE * __cdecl fdopen(  int _FileHandle,   const char * _Format);
 __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_fgetchar" ". See online help for details.")) __declspec(dllimport) int __cdecl fgetchar(void);
  __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_fileno" ". See online help for details.")) __declspec(dllimport) int __cdecl fileno(  FILE * _File);
 __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_flushall" ". See online help for details.")) __declspec(dllimport) int __cdecl flushall(void);
 __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_fputchar" ". See online help for details.")) __declspec(dllimport) int __cdecl fputchar(  int _Ch);
  __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_getw" ". See online help for details.")) __declspec(dllimport) int __cdecl getw(  FILE * _File);
 __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_putw" ". See online help for details.")) __declspec(dllimport) int __cdecl putw(  int _Ch,   FILE * _File);
  __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " "_rmtmp" ". See online help for details.")) __declspec(dllimport) int __cdecl rmtmp(void);
}
#pragma pack(pop)
typedef FILE _iobuf;
namespace std {
using :: _iobuf; using :: _Mbstatet;
using :: size_t; using :: fpos_t; using :: FILE;
using :: clearerr; using :: fclose; using :: feof;
using :: ferror; using :: fflush; using :: fgetc;
using :: fgetpos; using :: fgets; using :: fopen;
using :: fprintf; using :: fputc; using :: fputs;
using :: fread; using :: freopen; using :: fscanf;
using :: fseek; using :: fsetpos; using :: ftell;
using :: fwrite; using :: getc; using :: getchar;
using :: gets; using :: perror;
using :: putc; using :: putchar;
using :: printf; using :: puts; using :: remove;
using :: rename; using :: rewind; using :: scanf;
using :: setbuf; using :: setvbuf; using :: sprintf;
using :: sscanf; using :: tmpfile; using :: tmpnam;
using :: ungetc; using :: vfprintf; using :: vprintf;
using :: vsprintf;
 using :: vsnprintf;
using :: vfscanf; using :: vscanf; using :: vsscanf;
}
namespace std {
using :: size_t; using :: memchr; using :: memcmp;
using :: memcpy; using :: memmove; using :: memset;
using :: strcat; using :: strchr; using :: strcmp;
using :: strcoll; using :: strcpy; using :: strcspn;
using :: strerror; using :: strlen; using :: strncat;
using :: strncmp; using :: strncpy; using :: strpbrk;
using :: strrchr; using :: strspn; using :: strstr;
using :: strtok; using :: strxfrm;
}
#pragma pack(push,8)
extern "C" {
typedef void *_HFILE; 
typedef int (__cdecl * _CRT_REPORT_HOOK)(int, char *, int *);
typedef int (__cdecl * _CRT_REPORT_HOOKW)(int, wchar_t *, int *);
typedef int (__cdecl * _CRT_ALLOC_HOOK)(int, void *, size_t, int, long, const unsigned char *, int);
typedef void (__cdecl * _CRT_DUMP_CLIENT)(void *, size_t);
struct _CrtMemBlockHeader;
typedef struct _CrtMemState
{
        struct _CrtMemBlockHeader * pBlockHeader;
        size_t lCounts[5];
        size_t lSizes[5];
        size_t lHighWaterCount;
        size_t lTotalCount;
} _CrtMemState;
__declspec(dllimport) extern long _crtAssertBusy;
__declspec(dllimport) _CRT_REPORT_HOOK __cdecl _CrtGetReportHook(
    void
    );
__declspec(dllimport) _CRT_REPORT_HOOK __cdecl _CrtSetReportHook(
      _CRT_REPORT_HOOK _PFnNewHook
        );
__declspec(dllimport) int __cdecl _CrtSetReportHook2(
          int _Mode,
          _CRT_REPORT_HOOK _PFnNewHook
        );
__declspec(dllimport) int __cdecl _CrtSetReportHookW2(
          int _Mode,
          _CRT_REPORT_HOOKW _PFnNewHook
        );
__declspec(dllimport) int __cdecl _CrtSetReportMode(
          int _ReportType,
          int _ReportMode
        );
__declspec(dllimport) _HFILE __cdecl _CrtSetReportFile(
          int _ReportType,
          _HFILE _ReportFile
        );
__declspec(dllimport) int __cdecl _CrtDbgReport(
          int _ReportType,
          const char * _Filename,
          int _Linenumber,
          const char * _ModuleName,
          const char * _Format,
        ...);
__declspec(dllimport) size_t __cdecl _CrtSetDebugFillThreshold(
          size_t _NewDebugFillThreshold
        );
__declspec(dllimport) int __cdecl _CrtDbgReportW(
          int _ReportType,
          const wchar_t * _Filename,
          int _LineNumber,
          const wchar_t * _ModuleName,
          const wchar_t * _Format,
        ...);
__declspec(dllimport) extern long _crtBreakAlloc;      
__declspec(dllimport) long __cdecl _CrtSetBreakAlloc(
          long _BreakAlloc
        );
      __declspec(dllimport) void * __cdecl _malloc_dbg(
          size_t _Size,
          int _BlockType,
          const char * _Filename,
          int _LineNumber
        );
      __declspec(dllimport) void * __cdecl _calloc_dbg(
          size_t _Count,
          size_t _Size,
          int _BlockType,
          const char * _Filename,
          int _LineNumber
        );
      __declspec(dllimport) void * __cdecl _realloc_dbg(
            void * _Memory,
          size_t _NewSize,
          int _BlockType,
          const char * _Filename,
          int _LineNumber
        );
      __declspec(dllimport) void * __cdecl _recalloc_dbg
(
            void * _Memory,
          size_t _NumOfElements,
          size_t _SizeOfElements,
          int _BlockType,
          const char * _Filename,
          int _LineNumber
);
      __declspec(dllimport) void * __cdecl _expand_dbg(
          void * _Memory,
          size_t _NewSize,
          int _BlockType,
          const char * _Filename,
          int _LineNumber
        );
__declspec(dllimport) void __cdecl _free_dbg(
            void * _Memory,
          int _BlockType
        );
__declspec(dllimport) size_t __cdecl _msize_dbg (
          void * _Memory,
          int _BlockType
        );
__declspec(dllimport) size_t __cdecl _aligned_msize_dbg (
          void * _Memory,
          size_t _Alignment,
          size_t _Offset
        );
      __declspec(dllimport) void * __cdecl _aligned_malloc_dbg(
          size_t _Size,
          size_t _Alignment,
          const char * _Filename,
          int _LineNumber
        );
      __declspec(dllimport) void * __cdecl _aligned_realloc_dbg(
            void * _Memory,
          size_t _NewSize,
          size_t _Alignment,
          const char * _Filename,
          int _LineNumber
        );
      __declspec(dllimport) void * __cdecl _aligned_recalloc_dbg
(
            void * _Memory,
          size_t _NumOfElements,
          size_t _SizeOfElements,
          size_t _Alignment,
          const char * _Filename,
          int _LineNumber
);
      __declspec(dllimport) void * __cdecl _aligned_offset_malloc_dbg(
          size_t _Size,
          size_t _Alignment,
          size_t _Offset,
          const char * _Filename,
          int _LineNumber
        );
      __declspec(dllimport) void * __cdecl _aligned_offset_realloc_dbg(
            void * _Memory,
          size_t _NewSize,
          size_t _Alignment,
          size_t _Offset,
          const char * _Filename,
          int _LineNumber
        );
      __declspec(dllimport) void * __cdecl _aligned_offset_recalloc_dbg
(
            void * _Memory,
          size_t _NumOfElements,
          size_t _SizeOfElements,
          size_t _Alignment,
          size_t _Offset,
          const char * _Filename,
          int _LineNumber
);
__declspec(dllimport) void __cdecl _aligned_free_dbg(
            void * _Memory
        );
    __declspec(dllimport) char * __cdecl _strdup_dbg(
          const char * _Str,
          int _BlockType,
          const char * _Filename,
          int _LineNumber
        );
    __declspec(dllimport) wchar_t * __cdecl _wcsdup_dbg(
          const wchar_t * _Str,
          int _BlockType,
          const char * _Filename,
          int _LineNumber
        );
    __declspec(dllimport) char * __cdecl _tempnam_dbg(
          const char * _DirName,
          const char * _FilePrefix,
          int _BlockType,
          const char * _Filename,
          int _LineNumber
        );
    __declspec(dllimport) wchar_t * __cdecl _wtempnam_dbg(
          const wchar_t * _DirName,
          const wchar_t * _FilePrefix,
          int _BlockType,
          const char * _Filename,
          int _LineNumber
        );
    __declspec(dllimport) char * __cdecl _fullpath_dbg(
          char * _FullPath,
          const char * _Path,
          size_t _SizeInBytes,
          int _BlockType,
          const char * _Filename,
          int _LineNumber
        );
    __declspec(dllimport) wchar_t * __cdecl _wfullpath_dbg(
          wchar_t * _FullPath,
          const wchar_t * _Path,
          size_t _SizeInWords,
          int _BlockType,
          const char * _Filename,
          int _LineNumber
        );
    __declspec(dllimport) char * __cdecl _getcwd_dbg(
          char * _DstBuf,
          int _SizeInBytes,
          int _BlockType,
          const char * _Filename,
          int _LineNumber
        );
    __declspec(dllimport) wchar_t * __cdecl _wgetcwd_dbg(
          wchar_t * _DstBuf,
          int _SizeInWords,
          int _BlockType,
          const char * _Filename,
          int _LineNumber
        );
    __declspec(dllimport) char * __cdecl _getdcwd_dbg(
          int _Drive,
          char * _DstBuf,
          int _SizeInBytes,
          int _BlockType,
          const char * _Filename,
          int _LineNumber
        );
    __declspec(dllimport) wchar_t * __cdecl _wgetdcwd_dbg(
          int _Drive,
          wchar_t * _DstBuf,
          int _SizeInWords,
          int _BlockType,
          const char * _Filename,
          int _LineNumber
        );
    char * __cdecl _getdcwd_lk_dbg(
          int _Drive,
          char * _DstBuf,
          int _SizeInBytes,
          int _BlockType,
          const char * _Filename,
          int _LineNumber
        );
    wchar_t * __cdecl _wgetdcwd_lk_dbg(
          int _Drive,
          wchar_t * _DstBuf,
          int _SizeInWords,
          int _BlockType,
          const char * _Filename,
          int _LineNumber
        );
 __declspec(dllimport) errno_t __cdecl _dupenv_s_dbg(
            char ** _PBuffer,
          size_t * _PBufferSizeInBytes,
          const char * _VarName,
          int _BlockType,
          const char * _Filename,
          int _LineNumber
        );
 __declspec(dllimport) errno_t __cdecl _wdupenv_s_dbg(
            wchar_t ** _PBuffer,
          size_t * _PBufferSizeInWords,
          const wchar_t * _VarName,
          int _BlockType,
          const char * _Filename,
          int _LineNumber
        );
__declspec(dllimport) _CRT_ALLOC_HOOK __cdecl _CrtGetAllocHook
(
    void
);
__declspec(dllimport) _CRT_ALLOC_HOOK __cdecl _CrtSetAllocHook
(
      _CRT_ALLOC_HOOK _PfnNewHook
);
__declspec(dllimport) extern int _crtDbgFlag;
__declspec(dllimport) int __cdecl _CrtCheckMemory(
        void
        );
__declspec(dllimport) int __cdecl _CrtSetDbgFlag(
          int _NewFlag
        );
__declspec(dllimport) void __cdecl _CrtDoForAllClientObjects(
          void (__cdecl *_PFn)(void *, void *),
        void * _Context
        );
  __declspec(dllimport) int __cdecl _CrtIsValidPointer(
          const void * _Ptr,
          unsigned int _Bytes,
          int _ReadWrite
        );
  __declspec(dllimport) int __cdecl _CrtIsValidHeapPointer(
          const void * _HeapPtr
        );
__declspec(dllimport) int __cdecl _CrtIsMemoryBlock(
          const void * _Memory,
          unsigned int _Bytes,
          long * _RequestNumber,
          char ** _Filename,
          int * _LineNumber
        );
  __declspec(dllimport) int __cdecl _CrtReportBlockType(
          const void * _Memory
        );
__declspec(dllimport) _CRT_DUMP_CLIENT __cdecl _CrtGetDumpClient
(
    void
);
__declspec(dllimport) _CRT_DUMP_CLIENT __cdecl _CrtSetDumpClient
(
      _CRT_DUMP_CLIENT _PFnNewDump
);
__declspec(dllimport)  void __cdecl _CrtMemCheckpoint(
          _CrtMemState * _State
        );
__declspec(dllimport)  int __cdecl _CrtMemDifference(
          _CrtMemState * _State,
          const _CrtMemState * _OldState,
          const _CrtMemState * _NewState
        );
__declspec(dllimport) void __cdecl _CrtMemDumpAllObjectsSince(
          const _CrtMemState * _State
        );
__declspec(dllimport) void __cdecl _CrtMemDumpStatistics(
          const _CrtMemState * _State
        );
__declspec(dllimport) int __cdecl _CrtDumpMemoryLeaks(
        void
        );
__declspec(dllimport) int __cdecl _CrtSetCheckCount(
          int _CheckCount
        );
__declspec(dllimport) int __cdecl _CrtGetCheckCount(
        void
        );
}
extern "C++" {
#pragma warning(suppress: 4985)
    void * __cdecl operator new[](size_t _Size);
    void * __cdecl operator new(
        size_t _Size,
        int,
        const char *,
        int
        );
#pragma warning(suppress: 4985)
    void * __cdecl operator new[](
        size_t _Size,
        int,
        const char *,
        int
        );
void __cdecl operator delete[](void *);
void __cdecl operator delete(void * _P, int, const char *, int);
void __cdecl operator delete[](void * _P, int, const char *, int);
}
#pragma pack(pop)
 #pragma pack(push,8)
 #pragma warning(push,3)
namespace std {
typedef _Longlong streamoff;
typedef _Longlong streamsize;
extern __declspec(dllimport)  const streamoff _BADOFF;
  #line 33 "c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\iosfwd"
template<class _Statetype>
	class fpos
	{	
	typedef fpos<_Statetype> _Myt;
public:
	 fpos(streamoff _Off = 0)
		: _Myoff(_Off), _Fpos(0), _Mystate()
		{	
		}
	 fpos(_Statetype _State, fpos_t _Fileposition)
		: _Myoff(0), _Fpos(_Fileposition), _Mystate(_State)
		{	
		}
	_Statetype  state() const
		{	
		return (_Mystate);
		}
	void  state(_Statetype _State)
		{	
		_Mystate = _State;
		}
	fpos_t  seekpos() const
		{	
		return (_Fpos);
		}
	 operator streamoff() const
		{	
		return ((streamoff)(_Myoff + ((long long)(_Fpos))));
		}
	streamoff  operator-(const _Myt& _Right) const
		{	
		return ((streamoff)*this - (streamoff)_Right);
		}
	_Myt&  operator+=(streamoff _Off)
		{	
		_Myoff += _Off;
		return (*this);
		}
	_Myt&  operator-=(streamoff _Off)
		{	
		_Myoff -= _Off;
		return (*this);
		}
	_Myt  operator+(streamoff _Off) const
		{	
		_Myt _Tmp = *this;
		return (_Tmp += _Off);
		}
	_Myt  operator-(streamoff _Off) const
		{	
		_Myt _Tmp = *this;
		return (_Tmp -= _Off);
		}
	bool  operator==(const _Myt& _Right) const
		{	
		return ((streamoff)*this == (streamoff)_Right);
		}
	bool  operator==(streamoff _Right) const
		{	
		return ((streamoff)*this == _Right);
		}
	bool  operator!=(const _Myt& _Right) const
		{	
		return (!(*this == _Right));
		}
private:
	streamoff _Myoff;	
	fpos_t _Fpos;	
	_Statetype _Mystate;	
	};
typedef fpos<_Mbstatet> streampos;
typedef streampos wstreampos;
template<class _Elem,
	class _Int_type>
	struct _Char_traits
	{	
	typedef _Elem char_type;
	typedef _Int_type int_type;
	typedef streampos pos_type;
	typedef streamoff off_type;
	typedef _Mbstatet state_type;
	static int __cdecl compare(
		  const _Elem *_First1,
		  const _Elem *_First2, size_t _Count)
		{	
		for (; 0 < _Count; --_Count, ++_First1, ++_First2)
			if (!eq(*_First1, *_First2))
				return (lt(*_First1, *_First2) ? -1 : +1);
		return (0);
		}
	static size_t __cdecl length(  const _Elem *_First)
		{	
		size_t _Count;
		for (_Count = 0; !eq(*_First, _Elem()); ++_First)
			++_Count;
		return (_Count);
		}
	static _Elem *__cdecl copy(
		  _Elem *_First1,
		  const _Elem *_First2, size_t _Count)
		{	
		_Elem *_Next = _First1;
		for (; 0 < _Count; --_Count, ++_Next, ++_First2)
			assign(*_Next, *_First2);
		return (_First1);
		}
	static _Elem *__cdecl _Copy_s(
		  _Elem *_First1, size_t _Dest_size,
		  const _Elem *_First2, size_t _Count)
		{	
		{ if (!(_Count <= _Dest_size)) { (void) ((!!(("_Count <= _Dest_size" && 0))) || (1 != _CrtDbgReportW(2, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\iosfwd", 173, 0, L"%s", L"\"_Count <= _Dest_size\" && 0")) || (__debugbreak(), 0)); ::_invalid_parameter(L"_Count <= _Dest_size", __LPREFIX( __FUNCTION__), L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\iosfwd", 173, 0); return (0); } };
		return (copy(_First1, _First2, _Count));
		}
	static const _Elem *__cdecl find(
		  const _Elem *_First,
		size_t _Count, const _Elem& _Ch)
		{	
		for (; 0 < _Count; --_Count, ++_First)
			if (eq(*_First, _Ch))
				return (_First);
		return (0);
		}
	static _Elem *__cdecl move(
		  _Elem *_First1,
		  const _Elem *_First2, size_t _Count)
		{	
		_Elem *_Next = _First1;
		if (_First2 < _Next && _Next < _First2 + _Count)
			for (_Next += _Count, _First2 += _Count; 0 < _Count; --_Count)
				assign(*--_Next, *--_First2);
		else
			for (; 0 < _Count; --_Count, ++_Next, ++_First2)
				assign(*_Next, *_First2);
		return (_First1);
		}
	static _Elem *__cdecl assign(
		  _Elem *_First,
		size_t _Count, _Elem _Ch)
		{	
		_Elem *_Next = _First;
		for (; 0 < _Count; --_Count, ++_Next)
			assign(*_Next, _Ch);
		return (_First);
		}
	static void __cdecl assign(_Elem& _Left, const _Elem& _Right) throw ()
		{	
		_Left = _Right;
		}
	static bool __cdecl eq(const _Elem& _Left,
		const _Elem& _Right) throw ()
		{	
		return (_Left == _Right);
		}
	static bool __cdecl lt(const _Elem& _Left,
		const _Elem& _Right) throw ()
		{	
		return (_Left < _Right);
		}
	static _Elem __cdecl to_char_type(
		const int_type& _Meta) throw ()
		{	
		return ((_Elem)_Meta);
		}
	static int_type __cdecl to_int_type(
		const _Elem& _Ch) throw ()
		{	
		return ((int_type)_Ch);
		}
	static bool __cdecl eq_int_type(const int_type& _Left,
		const int_type& _Right) throw ()
		{	
		return (_Left == _Right);
		}
	static int_type __cdecl not_eof(
		const int_type& _Meta) throw ()
		{	
		return (_Meta != eof() ? (int_type)_Meta : (int_type)!eof());
		}
	static int_type __cdecl eof() throw ()
		{	
		return ((int_type)(-1));
		}
	};
template<class _Elem>
	struct char_traits
		: public _Char_traits<_Elem, long>
	{	
	};
template<>
	struct char_traits<wchar_t>
	{	
	typedef wchar_t _Elem;
	typedef _Elem char_type;	
	typedef wint_t int_type;
	typedef streampos pos_type;
	typedef streamoff off_type;
	typedef _Mbstatet state_type;
	static int __cdecl compare(const _Elem *_First1, const _Elem *_First2,
		size_t _Count)
		{	
		return (_Count == 0 ? 0
			: :: wmemcmp(_First1, _First2, _Count));
		}
	static size_t __cdecl length(const _Elem *_First)
		{	
		return (*_First == 0 ? 0
			: :: wcslen(_First));
		}
	static _Elem *__cdecl copy(_Elem *_First1, const _Elem *_First2,
		size_t _Count)
		{	
		return (_Count == 0 ? _First1
			: (_Elem *):: wmemcpy(_First1, _First2, _Count));
		}
	static _Elem *__cdecl _Copy_s(
		  _Elem *_First1, size_t _Size_in_words,
		  const _Elem *_First2, size_t _Count)
		{	
		if (0 < _Count)
			::wmemcpy_s((_First1), (_Size_in_words), (_First2), (_Count));
		return (_First1);
		}
	static const _Elem *__cdecl find(const _Elem *_First, size_t _Count,
		const _Elem& _Ch)
		{	
		return (_Count == 0 ? (const _Elem *)0
			: (const _Elem *):: wmemchr(_First, _Ch, _Count));
		}
	static _Elem *__cdecl move(_Elem *_First1, const _Elem *_First2,
		size_t _Count)
		{	
		return (_Count == 0 ? _First1
			: (_Elem *):: wmemmove(_First1, _First2, _Count));
		}
	static _Elem *__cdecl assign(_Elem *_First, size_t _Count,
		_Elem _Ch)
		{	
		return ((_Elem *):: wmemset(_First, _Ch, _Count));
		}
	static void __cdecl assign(_Elem& _Left, const _Elem& _Right) throw ()
		{	
		_Left = _Right;
		}
	static bool __cdecl eq(const _Elem& _Left,
		const _Elem& _Right) throw ()
		{	
		return (_Left == _Right);
		}
	static bool __cdecl lt(const _Elem& _Left,
		const _Elem& _Right) throw ()
		{	
		return (_Left < _Right);
		}
	static _Elem __cdecl to_char_type(
		const int_type& _Meta) throw ()
		{	
		return (_Meta);
		}
	static int_type __cdecl to_int_type(
		const _Elem& _Ch) throw ()
		{	
		return (_Ch);
		}
	static bool __cdecl eq_int_type(const int_type& _Left,
		const int_type& _Right) throw ()
		{	
		return (_Left == _Right);
		}
	static int_type __cdecl not_eof(
		const int_type& _Meta) throw ()
		{	
		return (_Meta != eof() ? _Meta : !eof());
		}
	static int_type __cdecl eof() throw ()
		{	
		return ((wint_t)(0xFFFF));
		}
	};
template<>
	struct char_traits<unsigned short>
	{	
	typedef unsigned short _Elem;
	typedef _Elem char_type;	
	typedef wint_t int_type;
	typedef streampos pos_type;
	typedef streamoff off_type;
	typedef _Mbstatet state_type;
	static int __cdecl compare(const _Elem *_First1, const _Elem *_First2,
		size_t _Count)
		{	
		return (_Count == 0 ? 0
			: :: wmemcmp((const wchar_t *)_First1,
				(const wchar_t *)_First2, _Count));
		}
	static size_t __cdecl length(const _Elem *_First)
		{	
		return (*_First == 0 ? 0
			: :: wcslen((const wchar_t *)_First));
		}
	static _Elem *__cdecl copy(_Elem *_First1, const _Elem *_First2,
		size_t _Count)
		{	
		return (_Count == 0 ? _First1
			: (_Elem *):: wmemcpy((wchar_t *)_First1,
				(const wchar_t *)_First2, _Count));
		}
	static _Elem *__cdecl _Copy_s(
		  _Elem *_First1, size_t _Size_in_words,
		  const _Elem *_First2, size_t _Count)
		{	
		if (0 < _Count)
			::wmemcpy_s(((wchar_t *)_First1), (_Size_in_words), ((const wchar_t *)_First2), (_Count));
		return (_First1);
		}
	static const _Elem *__cdecl find(const _Elem *_First, size_t _Count,
		const _Elem& _Ch)
		{	
		return (_Count == 0 ? (const _Elem *)0
			: (const _Elem *):: wmemchr((const wchar_t *)_First,
				_Ch, _Count));
		}
	static _Elem *__cdecl move(_Elem *_First1, const _Elem *_First2,
		size_t _Count)
		{	
		return (_Count == 0 ? _First1
			: (_Elem *):: wmemmove((wchar_t *)_First1,
				(const wchar_t *)_First2, _Count));
		}
	static _Elem *__cdecl assign(_Elem *_First, size_t _Count,
		_Elem _Ch)
		{	
		return ((_Elem *):: wmemset((wchar_t *)_First, _Ch, _Count));
		}
	static void __cdecl assign(_Elem& _Left, const _Elem& _Right) throw ()
		{	
		_Left = _Right;
		}
	static bool __cdecl eq(const _Elem& _Left,
		const _Elem& _Right) throw ()
		{	
		return (_Left == _Right);
		}
	static bool __cdecl lt(const _Elem& _Left,
		const _Elem& _Right) throw ()
		{	
		return (_Left < _Right);
		}
	static _Elem __cdecl to_char_type(const int_type& _Meta) throw ()
		{	
		return (_Meta);
		}
	static int_type __cdecl to_int_type(const _Elem& _Ch) throw ()
		{	
		return (_Ch);
		}
	static bool __cdecl eq_int_type(const int_type& _Left,
		const int_type& _Right) throw ()
		{	
		return (_Left == _Right);
		}
	static int_type __cdecl not_eof(const int_type& _Meta) throw ()
		{	
		return (_Meta != eof() ? _Meta : !eof());
		}
	static int_type __cdecl eof() throw ()
		{	
		return ((wint_t)(0xFFFF));
		}
	};
template<> struct char_traits<char>
	{	
	typedef char _Elem;
	typedef _Elem char_type;
	typedef int int_type;
	typedef streampos pos_type;
	typedef streamoff off_type;
	typedef _Mbstatet state_type;
	static int __cdecl compare(const _Elem *_First1, const _Elem *_First2,
		size_t _Count)
		{	
		return (_Count == 0 ? 0
			: :: memcmp(_First1, _First2, _Count));
		}
	static size_t __cdecl length(const _Elem *_First)
		{	
		return (*_First == 0 ? 0
			: :: strlen(_First));
		}
	static _Elem *__cdecl copy(_Elem *_First1, const _Elem *_First2,
		size_t _Count)
		{	
		return (_Count == 0 ? _First1
			: (_Elem *):: memcpy(_First1, _First2, _Count));
		}
	static _Elem *__cdecl _Copy_s(
		  _Elem *_First1, size_t _Size_in_bytes,
		  const _Elem *_First2, size_t _Count)
		{	
		if (0 < _Count)
			::memcpy_s((_First1), (_Size_in_bytes), (_First2), (_Count));
		return (_First1);
		}
	static const _Elem *__cdecl find(const _Elem *_First, size_t _Count,
		const _Elem& _Ch)
		{	
		return (_Count == 0 ? (const _Elem *)0
			: (const _Elem *):: memchr(_First, _Ch, _Count));
		}
	static _Elem *__cdecl move(_Elem *_First1, const _Elem *_First2,
		size_t _Count)
		{	
		return (_Count == 0 ? _First1
			: (_Elem *):: memmove(_First1, _First2, _Count));
		}
	static _Elem *__cdecl assign(_Elem *_First, size_t _Count,
		_Elem _Ch)
		{	
		return ((_Elem *):: memset(_First, _Ch, _Count));
		}
	static void __cdecl assign(_Elem& _Left, const _Elem& _Right) throw ()
		{	
		_Left = _Right;
		}
	static bool __cdecl eq(const _Elem& _Left,
		const _Elem& _Right) throw ()
		{	
		return (_Left == _Right);
		}
	static bool __cdecl lt(const _Elem& _Left,
		const _Elem& _Right) throw ()
		{	
		return ((unsigned char)_Left < (unsigned char)_Right);
		}
	static _Elem __cdecl to_char_type(
		const int_type& _Meta) throw ()
		{	
		return ((_Elem)_Meta);
		}
	static int_type __cdecl to_int_type(
		const _Elem& _Ch) throw ()
		{	
		return ((unsigned char)_Ch);
		}
	static bool __cdecl eq_int_type(const int_type& _Left,
		const int_type& _Right) throw ()
		{	
		return (_Left == _Right);
		}
	static int_type __cdecl not_eof(
		const int_type& _Meta) throw ()
		{	
		return (_Meta != eof() ? _Meta : !eof());
		}
	static int_type __cdecl eof() throw ()
		{	
		return ((-1));
		}
	};
template<class _Ty>
	class allocator;
class ios_base;
template<class _Elem,
	class _Traits = char_traits<_Elem> >
	class basic_ios;
template<class _Elem,
	class _Traits = char_traits<_Elem> >
	class istreambuf_iterator;
template<class _Elem,
	class _Traits = char_traits<_Elem> >
	class ostreambuf_iterator;
template<class _Elem,
	class _Traits = char_traits<_Elem> >
	class basic_streambuf;
template<class _Elem,
	class _Traits = char_traits<_Elem> >
	class basic_istream;
template<class _Elem,
	class _Traits = char_traits<_Elem> >
	class basic_ostream;
template<class _Elem,
	class _Traits = char_traits<_Elem> >
	class basic_iostream;
template<class _Elem,
	class _Traits = char_traits<_Elem>,
	class _Alloc = allocator<_Elem> >
	class basic_stringbuf;
template<class _Elem,
	class _Traits = char_traits<_Elem>,
	class _Alloc = allocator<_Elem> >
	class basic_istringstream;
template<class _Elem,
	class _Traits = char_traits<_Elem>,
	class _Alloc = allocator<_Elem> >
	class basic_ostringstream;
template<class _Elem,
	class _Traits = char_traits<_Elem>,
	class _Alloc = allocator<_Elem> >
	class basic_stringstream;
template<class _Elem,
	class _Traits = char_traits<_Elem> >
	class basic_filebuf;
template<class _Elem,
	class _Traits = char_traits<_Elem> >
	class basic_ifstream;
template<class _Elem,
	class _Traits = char_traits<_Elem> >
	class basic_ofstream;
template<class _Elem,
	class _Traits = char_traits<_Elem> >
	class basic_fstream;
template<class _Elem,
	class _InIt >
	class num_get;
template<class _Elem,
	class _OutIt >
	class num_put;
template<class _Elem>
	class collate;
typedef basic_ios<char, char_traits<char> > ios;
typedef basic_streambuf<char, char_traits<char> > streambuf;
typedef basic_istream<char, char_traits<char> > istream;
typedef basic_ostream<char, char_traits<char> > ostream;
typedef basic_iostream<char, char_traits<char> > iostream;
typedef basic_stringbuf<char, char_traits<char>,
	allocator<char> > stringbuf;
typedef basic_istringstream<char, char_traits<char>,
	allocator<char> > istringstream;
typedef basic_ostringstream<char, char_traits<char>,
	allocator<char> > ostringstream;
typedef basic_stringstream<char, char_traits<char>,
	allocator<char> > stringstream;
typedef basic_filebuf<char, char_traits<char> > filebuf;
typedef basic_ifstream<char, char_traits<char> > ifstream;
typedef basic_ofstream<char, char_traits<char> > ofstream;
typedef basic_fstream<char, char_traits<char> > fstream;
typedef basic_ios<wchar_t, char_traits<wchar_t> > wios;
typedef basic_streambuf<wchar_t, char_traits<wchar_t> >
	wstreambuf;
typedef basic_istream<wchar_t, char_traits<wchar_t> > wistream;
typedef basic_ostream<wchar_t, char_traits<wchar_t> > wostream;
typedef basic_iostream<wchar_t, char_traits<wchar_t> > wiostream;
typedef basic_stringbuf<wchar_t, char_traits<wchar_t>,
	allocator<wchar_t> > wstringbuf;
typedef basic_istringstream<wchar_t, char_traits<wchar_t>,
	allocator<wchar_t> > wistringstream;
typedef basic_ostringstream<wchar_t, char_traits<wchar_t>,
	allocator<wchar_t> > wostringstream;
typedef basic_stringstream<wchar_t, char_traits<wchar_t>,
	allocator<wchar_t> > wstringstream;
typedef basic_filebuf<wchar_t, char_traits<wchar_t> > wfilebuf;
typedef basic_ifstream<wchar_t, char_traits<wchar_t> > wifstream;
typedef basic_ofstream<wchar_t, char_traits<wchar_t> > wofstream;
typedef basic_fstream<wchar_t, char_traits<wchar_t> > wfstream;
typedef num_get<char, istreambuf_iterator<char, char_traits<char> > >
	numget;
typedef num_get<wchar_t, istreambuf_iterator<wchar_t, char_traits<wchar_t> > >
	wnumget;
typedef num_put<char, ostreambuf_iterator<char, char_traits<char> > >
	numput;
typedef num_put<wchar_t, ostreambuf_iterator<wchar_t, char_traits<wchar_t> > >
	wnumput;
typedef collate<char> ncollate;
typedef collate<wchar_t> wcollate;
}
 #pragma warning(pop)
 #pragma pack(pop)
 #pragma pack(push,8)
 #pragma warning(push,3)
 #pragma warning(disable: 4180 4296)
namespace std {
template<class _Ty>
	struct _Ptr_traits
	{	
	};
template<class _Ty>
	struct _Ptr_traits<_Ty *>
	{	
	static const bool _Is_const = false;
	static const bool _Is_volatile = false;
	};
template<class _Ty>
	struct _Ptr_traits<const _Ty *>
	{	
	static const bool _Is_const = true;
	static const bool _Is_volatile = false;
	};
template<class _Ty>
	struct _Ptr_traits<volatile _Ty *>
	{	
	static const bool _Is_const = false;
	static const bool _Is_volatile = true;
	};
template<class _Ty>
	struct _Ptr_traits<const volatile _Ty *>
	{	
	static const bool _Is_const = true;
	static const bool _Is_volatile = true;
	};
template<class _Ty>
	struct _Is_funptr
		: false_type
	{	
	};
template<class _Ty>
	struct _Is_memfunptr
		: false_type
	{	
	};
template<class _Ret, class... _Types> struct _Is_funptr<_Ret (__cdecl *)(_Types...)> : true_type { }; template<class _Ret, class... _Types> struct _Is_funptr<_Ret (__stdcall *)(_Types...)> : true_type { }; template<class _Ret, class... _Types> struct _Is_funptr<_Ret (__fastcall *)(_Types...)> : true_type { };
template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__thiscall _Arg0::*)(_Types...) > : true_type { }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__cdecl _Arg0::*)(_Types...) > : true_type { }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__stdcall _Arg0::*)(_Types...) > : true_type { }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__fastcall _Arg0::*)(_Types...) > : true_type { }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__thiscall _Arg0::*)(_Types...) const> : true_type { }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__cdecl _Arg0::*)(_Types...) const> : true_type { }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__stdcall _Arg0::*)(_Types...) const> : true_type { }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__fastcall _Arg0::*)(_Types...) const> : true_type { }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__thiscall _Arg0::*)(_Types...) volatile> : true_type { }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__cdecl _Arg0::*)(_Types...) volatile> : true_type { }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__stdcall _Arg0::*)(_Types...) volatile> : true_type { }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__fastcall _Arg0::*)(_Types...) volatile> : true_type { }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__thiscall _Arg0::*)(_Types...) const volatile> : true_type { }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__cdecl _Arg0::*)(_Types...) const volatile> : true_type { }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__stdcall _Arg0::*)(_Types...) const volatile> : true_type { }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (__fastcall _Arg0::*)(_Types...) const volatile> : true_type { };
template<class _Ret,
	class... _Types>
	struct _Is_funptr<_Ret (*)(_Types..., ...)>
		: true_type
	{	
	};
template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (_Arg0::*)(_Types..., ...) > : true_type { }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (_Arg0::*)(_Types..., ...) const> : true_type { }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (_Arg0::*)(_Types..., ...) volatile> : true_type { }; template<class _Ret, class _Arg0, class... _Types> struct _Is_memfunptr<_Ret (_Arg0::*)(_Types..., ...) const volatile> : true_type { };
template<class _Ty>
	struct add_const
	{	
	typedef const _Ty type;
	};
template<class _Ty>
	struct add_volatile
	{	
	typedef volatile _Ty type;
	};
template<class _Ty>
	struct add_cv
	{	
	typedef const volatile _Ty type;
	};
template<class _Ty>
	struct add_reference
	{	
	typedef _Ty& type;
	};
template<> struct add_reference< void> { typedef  void type; }; template<> struct add_reference<const void> { typedef const void type; }; template<> struct add_reference<volatile void> { typedef volatile void type; }; template<> struct add_reference<const volatile void> { typedef const volatile void type; };
template<class _Ty>
	struct add_lvalue_reference
	{	
	typedef typename add_reference<_Ty>::type type;
	};
template<class _Ty>
	struct add_rvalue_reference
	{	
	typedef _Ty&& type;
	};
template<> struct add_rvalue_reference< void> { typedef  void type; }; template<> struct add_rvalue_reference<const void> { typedef const void type; }; template<> struct add_rvalue_reference<volatile void> { typedef volatile void type; }; template<> struct add_rvalue_reference<const volatile void> { typedef const volatile void type; };
template<class _Ty>
	typename add_rvalue_reference<_Ty>::type
		declval() throw ();
template<class _Ty>
	struct remove_extent
	{	
	typedef _Ty type;
	};
template<class _Ty, unsigned int _Ix>
	struct remove_extent<_Ty[_Ix]>
	{	
	typedef _Ty type;
	};
template<class _Ty>
	struct remove_extent<_Ty[]>
	{	
	typedef _Ty type;
	};
template<class _Ty>
	struct remove_all_extents
	{	
	typedef _Ty type;
	};
template<class _Ty, unsigned int _Ix>
	struct remove_all_extents<_Ty[_Ix]>
	{	
	typedef typename remove_all_extents<_Ty>::type type;
	};
template<class _Ty>
	struct remove_all_extents<_Ty[]>
	{	
	typedef typename remove_all_extents<_Ty>::type type;
	};
template<class _Ty>
	struct remove_pointer
	{	
	typedef _Ty type;
	};
template<class _Ty> struct remove_pointer<_Ty *> { typedef _Ty type; }; template<class _Ty> struct remove_pointer<_Ty *const> { typedef _Ty type; }; template<class _Ty> struct remove_pointer<_Ty *volatile> { typedef _Ty type; }; template<class _Ty> struct remove_pointer<_Ty *const volatile> { typedef _Ty type; };
template<class _Ty>
	struct add_pointer
	{	
	typedef typename remove_reference<_Ty>::type *type;
	};
template<class _Ty>
	struct _Is_void
		: false_type
	{	
	};
template<>
	struct _Is_void<void>
		: true_type
	{	
	};
template<class _Ty>
	struct is_void
		: _Is_void<typename remove_cv<_Ty>::type>
	{	
	};
template<class _Ty>
	struct is_array
		: false_type
	{	
	};
template<class _Ty, size_t _Nx>
	struct is_array<_Ty[_Nx]>
		: true_type
	{	
	};
template<class _Ty>
	struct is_array<_Ty[]>
		: true_type
	{	
	};
template<class _Ty>
	struct is_lvalue_reference
		: false_type
	{	
	};
template<class _Ty>
	struct is_lvalue_reference<_Ty&>
		: true_type
	{	
	};
template<class _Ty>
	struct is_rvalue_reference
		: false_type
	{	
	};
template<class _Ty>
	struct is_rvalue_reference<_Ty&&>
		: true_type
	{	
	};
template<class _Ty>
	struct is_reference
		: _Cat_base<is_lvalue_reference<_Ty>::value
		|| is_rvalue_reference<_Ty>::value>
	{	
	};
template<class _Ty>
	struct _Is_member_object_pointer
		: false_type
	{	
	};
template<class _Ty1, class _Ty2>
	struct _Is_member_object_pointer<_Ty1 _Ty2::*>
		: _Cat_base<!_Is_memfunptr<_Ty1 _Ty2::*>::value>
	{	
	};
template<class _Ty>
	struct is_member_object_pointer
		: _Is_member_object_pointer<typename remove_cv<_Ty>::type>
	{	
	};
template<class _Ty>
	struct is_member_function_pointer
		: _Cat_base<_Is_memfunptr<typename remove_cv<_Ty>::type>::value>
	{	
	};
template<class _Ty>
	struct _Is_pointer
		: false_type
	{	
	};
template<class _Ty>
	struct _Is_pointer<_Ty *>
		: _Cat_base<!is_member_object_pointer<_Ty *>::value
		&& !is_member_function_pointer<_Ty *>::value>
	{	
	};
template<class _Ty>
	struct is_pointer
		: _Is_pointer<typename remove_cv<_Ty>::type>
	{	
	};
template<class _Ty>
	struct _Is_nullptr_t
		: _Cat_base<is_same<typename remove_cv<_Ty>::type, nullptr_t>::value>
	{	
	};
template<class _Ty>
	struct is_union : _Cat_base<__is_union(_Ty)>
	{	
	};
template<class _Ty>
	struct is_class : _Cat_base<__is_class(_Ty)>
	{	
	};
template<class _Ty>
	struct is_function
		: _Cat_base<_Is_funptr<typename remove_cv<_Ty>::type *>::value>
	{	
	};
template<class _Ty>
	struct is_function<_Ty&>
		: false_type
	{	
	};
template<class _Ty>
	struct is_function<_Ty&&>
		: false_type
	{	
	};
template<class _Ty>
	struct is_arithmetic
		: _Cat_base<is_integral<_Ty>::value
		|| is_floating_point<_Ty>::value>
	{	
	};
template<class _Ty>
	struct is_fundamental
		: _Cat_base<is_arithmetic<_Ty>::value
		|| is_void<_Ty>::value
		|| _Is_nullptr_t<_Ty>::value>
	{	
	};
template<class _Ty>
	struct is_object
		: _Cat_base<!is_function<_Ty>::value
		&& !is_reference<_Ty>::value
		&& !is_void<_Ty>::value>
	{	
	};
template<class _From, class _To>
	struct is_convertible
		: _Cat_base<__is_convertible_to(_From, _To)>
	{	
	};
template<class _Ty>
	struct is_enum
		: _Cat_base<__is_enum(_Ty)>
	{	
	};
template<class _Ty>
	struct is_compound
		: _Cat_base<!is_fundamental<_Ty>::value>
	{	
	};
template<class _Ty>
	struct is_member_pointer
		: _Cat_base<is_member_object_pointer<_Ty>::value
		|| is_member_function_pointer<_Ty>::value>
	{	
	};
template<class _Ty>
	struct is_scalar
		: _Cat_base<is_arithmetic<_Ty>::value
		|| is_enum<_Ty>::value
		|| is_pointer<_Ty>::value
		|| is_member_pointer<_Ty>::value
		|| _Is_nullptr_t<_Ty>::value>
	{	
	};
template<class _Ty>
	struct is_const
		: _Cat_base<_Ptr_traits<_Ty *>::_Is_const
		&& !is_function<_Ty>::value>
	{	
	};
template<class _Ty, unsigned int _Nx>
	struct is_const<_Ty[_Nx]>
		: false_type
	{	
	};
template<class _Ty, unsigned int _Nx>
	struct is_const<const _Ty[_Nx]>
		: true_type
	{	
	};
template<class _Ty>
	struct is_const<_Ty&>
		: false_type
	{	
	};
template<class _Ty>
	struct is_const<_Ty&&>
		: false_type
	{	
	};
template<class _Ty>
	struct is_volatile
		: _Cat_base<_Ptr_traits<_Ty *>::_Is_volatile
		&& !is_function<_Ty>::value>
	{	
	};
template<class _Ty>
	struct is_volatile<_Ty&>
		: false_type
	{	
	};
template<class _Ty>
	struct is_volatile<_Ty&&>
		: false_type
	{	
	};
template<class _Ty>
	struct is_pod : _Cat_base<__is_pod(_Ty)>
	{	
	};
template<class _Ty>
	struct is_empty : _Cat_base<__is_empty(_Ty)>
	{	
	};
template<class _Ty>
	struct is_polymorphic : _Cat_base<__is_polymorphic(_Ty)>
	{	
	};
template<class _Ty>
	struct is_abstract : _Cat_base<__is_abstract(_Ty)>
	{	
	};
template<class _Ty>
	struct is_standard_layout : _Cat_base<__is_standard_layout(_Ty)>
	{	
	};
template<class _Ty>
	struct is_literal_type : _Cat_base<__is_literal_type(_Ty)>
	{	
	};
template<class _Ty>
	struct is_trivial : _Cat_base<__is_trivial(_Ty)>
	{	
	};
template<class _Ty>
	struct has_virtual_destructor
		: _Cat_base<__has_virtual_destructor(_Ty)>
	{	
	};
template<class _Ty,
	class... _Args>
	struct is_constructible
		: _Cat_base<__is_constructible(_Ty, _Args...)>
	{	
	};
template<class _Ty>
	struct is_copy_constructible
		: is_constructible<
			_Ty,
			typename add_lvalue_reference<
				typename add_const<_Ty>::type
			>::type
		>::type
	{	
	};
template<class _Ty>
	struct has_copy_constructor
		: is_copy_constructible<_Ty>::type
	{	
	};
template<class _Ty>
	struct is_default_constructible
		: is_constructible<_Ty>::type
	{	
	};
template<class _Ty>
	struct has_default_constructor
		: is_default_constructible<_Ty>::type
	{	
	};
template<class _Ty>
	struct is_move_constructible
		: is_constructible<
			_Ty,
			typename add_rvalue_reference<_Ty>::type
		>::type
	{	
	};
template<class _Ty>
	struct has_move_constructor
		: is_move_constructible<_Ty>::type
	{	
	};
template<class _To,
	class _From>
	struct _Is_assignable
	{	
	template<class _Dest,
		class _Src>
		static auto _Fn(int)
			-> decltype((::std:: declval<_Dest>() = ::std:: declval<_Src>()),
				true_type());
	template<class _Dest,
		class _Src>
		static auto _Fn(_Wrap_int)
			-> false_type;
	typedef decltype(_Fn<_To, _From>(0)) type;
	};
template<class _To,
	class _From>
	struct is_assignable
		: _Is_assignable<_To, _From>::type
	{	
	};
template<class _Ty>
	struct is_copy_assignable
		: is_assignable<
			typename add_lvalue_reference<_Ty>::type,
			typename add_lvalue_reference<
				typename add_const<_Ty>::type
			>::type
		>::type
	{	
	};
template<class _Ty>
	struct has_copy_assign
		: is_copy_assignable<_Ty>::type
	{	
	};
template<class _Ty>
	struct is_move_assignable
		: is_assignable<
			typename add_lvalue_reference<_Ty>::type,
			typename add_rvalue_reference<_Ty>::type
		>::type
	{	
	};
template<class _Ty>
	struct has_move_assign
		: is_move_assignable<_Ty>::type
	{	
	};
template<class _Ty>
	struct is_destructible
		: _Cat_base<__is_destructible(_Ty)>
	{	
	};
template<class _Ty,
	class... _Args>
	struct is_trivially_constructible
		: _Cat_base<__is_trivially_constructible(_Ty, _Args...)>
	{	
	};
template<class _Ty>
	struct is_trivially_copy_constructible
		: is_trivially_constructible<
			_Ty,
			typename add_lvalue_reference<
				typename add_const<_Ty>::type
			>::type
		>::type
	{	
	};
template<class _Ty>
	struct is_trivially_copyable
		: is_trivially_copy_constructible<_Ty>::type
	{	
	};
template<class _Ty>
	struct has_trivial_copy_constructor
		: is_trivially_copy_constructible<_Ty>::type
	{	
	};
template<class _Ty>
	struct is_trivially_default_constructible
		: is_trivially_constructible<_Ty>::type
	{	
	};
template<class _Ty>
	struct has_trivial_default_constructor
		: is_trivially_default_constructible<_Ty>::type
	{	
	};
template<class _Ty>
	struct is_trivially_move_constructible
		: is_trivially_constructible<
			_Ty,
			typename add_rvalue_reference<_Ty>::type
		>::type
	{	
	};
template<class _Ty>
	struct has_trivial_move_constructor
		: is_trivially_move_constructible<_Ty>::type
	{	
	};
template<class _To,
	class _From>
	struct is_trivially_assignable
		: _Cat_base<__is_trivially_assignable(_To, _From)>
	{	
	};
template<class _Ty>
	struct is_trivially_copy_assignable
		: is_trivially_assignable<
			typename add_lvalue_reference<_Ty>::type,
			typename add_lvalue_reference<
				typename add_const<_Ty>::type
			>::type
		>::type
	{	
	};
template<class _Ty>
	struct has_trivial_copy_assign
		: is_trivially_copy_assignable<_Ty>::type
	{	
	};
template<class _Ty>
	struct is_trivially_move_assignable
		: is_trivially_assignable<
			typename add_lvalue_reference<_Ty>::type,
			typename add_rvalue_reference<_Ty>::type
		>::type
	{	
	};
template<class _Ty>
	struct has_trivial_move_assign
		: is_trivially_move_assignable<_Ty>::type
	{	
	};
template<class _Ty>
	struct is_trivially_destructible
		: _Cat_base<__has_trivial_destructor(_Ty)>
	{	
	};
template<class _Ty,
	class... _Args>
	struct is_nothrow_constructible
		: _Cat_base<__is_nothrow_constructible(_Ty, _Args...)>
	{	
	};
template<class _Ty>
	struct is_nothrow_copy_constructible
		: is_nothrow_constructible<
			_Ty,
			typename add_lvalue_reference<
				typename add_const<_Ty>::type
			>::type
		>::type
	{	
	};
template<class _Ty>
	struct has_nothrow_copy_constructor
		: is_nothrow_copy_constructible<_Ty>::type
	{	
	};
template<class _Ty>
	struct is_nothrow_default_constructible
		: is_nothrow_constructible<_Ty>::type
	{	
	};
template<class _Ty>
	struct has_nothrow_default_constructor
		: is_nothrow_default_constructible<_Ty>::type
	{	
	};
template<class _Ty>
	struct is_nothrow_move_constructible
		: is_nothrow_constructible<
			_Ty,
			typename add_rvalue_reference<_Ty>::type
		>::type
	{	
	};
template<class _Ty>
	struct has_nothrow_move_constructor
		: is_nothrow_move_constructible<_Ty>::type
	{	
	};
template<class _To,
	class _From>
	struct is_nothrow_assignable
		: _Cat_base<__is_nothrow_assignable(_To, _From)>
	{	
	};
template<class _Ty>
	struct is_nothrow_copy_assignable
		: is_nothrow_assignable<
			typename add_lvalue_reference<_Ty>::type,
			typename add_lvalue_reference<
				typename add_const<_Ty>::type
			>::type
		>::type
	{	
	};
template<class _Ty>
	struct has_nothrow_copy_assign
		: is_nothrow_copy_assignable<_Ty>::type
	{	
	};
template<class _Ty>
	struct is_nothrow_move_assignable
		: is_nothrow_assignable<
			typename add_lvalue_reference<_Ty>::type,
			typename add_rvalue_reference<_Ty>::type
		>::type
	{	
	};
template<class _Ty>
	struct has_nothrow_move_assign
		: is_nothrow_move_assignable<_Ty>::type
	{	
	};
template<class _Ty>
	struct is_nothrow_destructible
		: _Cat_base<__is_nothrow_destructible(_Ty)>
	{	
	};
template<class _Ty>
	struct has_trivial_constructor
		: is_trivially_default_constructible<_Ty>::type
	{	
	};
template<class _Ty>
	struct has_trivial_copy
		: is_trivially_copy_constructible<_Ty>::type
	{	
	};
template<class _Ty>
	struct has_trivial_assign
		: is_trivially_copy_assignable<_Ty>::type
	{	
	};
template<class _Ty>
	struct has_trivial_destructor
		: is_trivially_destructible<_Ty>::type
	{	
	};
template<class _Ty>
	struct has_nothrow_constructor
		: is_nothrow_default_constructible<_Ty>::type
	{	
	};
template<class _Ty>
	struct has_nothrow_copy
		: is_nothrow_copy_constructible<_Ty>::type
	{	
	};
template<class _Ty>
	struct has_nothrow_assign
		: is_nothrow_copy_assignable<_Ty>::type
	{	
	};
template<class _Ty>
	struct _Has_signed_vals
		: _Cat_base<(typename remove_cv<_Ty>::type)(-1)
		< (typename remove_cv<_Ty>::type)(0)>
	{	
	};
template<class _Ty>
	struct is_signed
		: _Cat_base<is_floating_point<_Ty>::value || (is_integral<_Ty>::value
		&& _Has_signed_vals<
			typename _If<is_integral<_Ty>::value, _Ty, int>::type>::value)>
	{	
	};
template<class _Ty>
	struct is_unsigned
		: _Cat_base<is_integral<_Ty>::value
		&& !_Has_signed_vals<
			typename _If<is_integral<_Ty>::value, _Ty, int>::type>::value>
	{	
	};
template<class _Ty>
	struct _Change_sign
	{	
	static_assert(
		((is_integral<_Ty>::value || is_enum<_Ty>::value)
			&& !is_same<_Ty, bool>::value),
		"make_signed<T>/make_unsigned<T> require that T shall be a (possibly "
		"cv-qualified) integral type or enumeration but not a bool type.");
	typedef
		typename _If<is_same<_Ty, signed char>::value
			|| is_same<_Ty, unsigned char     >::value, signed char,
		typename _If<is_same<_Ty, short       >::value
			|| is_same<_Ty, unsigned short    >::value, short,
		typename _If<is_same<_Ty, int         >::value
			|| is_same<_Ty, unsigned int      >::value, int,
		typename _If<is_same<_Ty, long        >::value
			|| is_same<_Ty, unsigned long     >::value, long,
		typename _If<is_same<_Ty, long long   >::value
			|| is_same<_Ty, unsigned long long>::value, long long,
		typename _If<sizeof (_Ty) == sizeof (signed char), signed char,
		typename _If<sizeof (_Ty) == sizeof (short      ), short,
		typename _If<sizeof (_Ty) == sizeof (int        ), int,
		typename _If<sizeof (_Ty) == sizeof (long       ), long,
			long long
		>::type>::type>::type>::type>::type>::type>::type>::type>::type
			_Signed;
	typedef
		typename _If<is_same<_Signed, signed char>::value, unsigned char,
		typename _If<is_same<_Signed, short      >::value, unsigned short,
		typename _If<is_same<_Signed, int        >::value, unsigned int,
		typename _If<is_same<_Signed, long       >::value, unsigned long,
			unsigned long long
		>::type>::type>::type>::type
			_Unsigned;
	};
template<class _Ty>
	struct _Change_sign<const _Ty>
	{	
	typedef const typename _Change_sign<_Ty>::_Signed _Signed;
	typedef const typename _Change_sign<_Ty>::_Unsigned _Unsigned;
	};
template<class _Ty>
	struct _Change_sign<volatile _Ty>
	{	
	typedef volatile typename _Change_sign<_Ty>::_Signed _Signed;
	typedef volatile typename _Change_sign<_Ty>::_Unsigned _Unsigned;
	};
template<class _Ty>
	struct _Change_sign<const volatile _Ty>
	{	
	typedef const volatile typename _Change_sign<_Ty>::_Signed _Signed;
	typedef const volatile typename _Change_sign<_Ty>::_Unsigned _Unsigned;
	};
template<class _Ty>
	struct make_signed
	{	
	typedef typename _Change_sign<_Ty>::_Signed type;
	};
template<class _Ty>
	struct make_unsigned
	{	
	typedef typename _Change_sign<_Ty>::_Unsigned type;
	};
template<class _Ty>
	struct _Get_align
	{	
	_Ty _Elt0;
	char _Elt1;
	_Ty _Elt2;
	_Get_align();	
	~_Get_align();	
	};
template<class _Ty>
	struct alignment_of
		: integral_constant<size_t, (sizeof (_Get_align<typename remove_reference<_Ty>::type>) - 2 * sizeof (typename remove_reference<_Ty>::type))>
	{	
	};
template<class _Ty,
	size_t _Len>
	union _Align_type
	{	
	_Ty _Val;
	char _Pad[_Len];
	};
template<size_t _Len,
	size_t _Align,
	class _Ty,
	bool _Ok>
	struct _Aligned;
template<size_t _Len,
	size_t _Align,
	class _Ty>
	struct _Aligned<_Len, _Align, _Ty, true>
	{	
	typedef _Align_type<_Ty, _Len> type;
	};
template<size_t _Len,
	size_t _Align>
	struct _Aligned<_Len, _Align, double, false>
	{	
	typedef _Align_type<max_align_t, _Len> type;
	};
template<size_t _Len,
	size_t _Align>
	struct _Aligned<_Len, _Align, int, false>
	{	
	typedef typename _Aligned<_Len, _Align, double, _Align <= alignment_of<double>::value>::type type;
	};
template<size_t _Len,
	size_t _Align>
	struct _Aligned<_Len, _Align, short, false>
	{	
	typedef typename _Aligned<_Len, _Align, int, _Align <= alignment_of<int>::value>::type type;
	};
template<size_t _Len,
	size_t _Align>
	struct _Aligned<_Len, _Align, char, false>
	{	
	typedef typename _Aligned<_Len, _Align, short, _Align <= alignment_of<short>::value>::type type;
	};
template<size_t _Len,
	size_t _Align = alignment_of<max_align_t>::value>
	struct aligned_storage
	{	
	typedef typename _Aligned<_Len, _Align, char, _Align <= alignment_of<char>::value>::type type;
	};
template<size_t... _Vals>
	struct _Maximum;
template<>
	struct _Maximum<>
	{	
	static const size_t value = 0;
	};
template<size_t _Val>
	struct _Maximum<_Val>
	{	
	static const size_t value = _Val;
	};
template<size_t _First,
	size_t _Second,
	size_t... _Rest>
	struct _Maximum<_First, _Second, _Rest...>
		: _Maximum<(_First < _Second ? _Second : _First), _Rest...>
	{	
	};
template<size_t _Len,
	class... _Types>
	struct aligned_union
	{	
	static const size_t _Max_len = _Maximum<
		_Len, sizeof(_Types)...>::value;	
	static const size_t alignment_value = _Maximum<
		alignment_of<_Types>::value...>::value;
	typedef typename aligned_storage<_Max_len, alignment_value>::type type;
	};
template<class _Ty>
	struct underlying_type
	{	
	typedef __underlying_type(_Ty) type;
	};
template<class _Ty>
	struct rank
		: integral_constant<size_t, 0>
	{	
	};
template<class _Ty, unsigned int _Ix>
	struct rank<_Ty[_Ix]>
		: integral_constant<size_t, rank<_Ty>::value + 1>
	{	
	};
template<class _Ty>
	struct rank<_Ty[]>
		: integral_constant<size_t, rank<_Ty>::value + 1>
	{	
	};
template<class _Ty, unsigned int _Nx>
	struct _Extent
		: integral_constant<size_t, 0>
	{	
	};
template<class _Ty, unsigned int _Ix>
	struct _Extent<_Ty[_Ix], 0>
		: integral_constant<size_t, _Ix>
	{	
	};
template<class _Ty, unsigned int _Nx, unsigned int _Ix>
	struct _Extent<_Ty[_Ix], _Nx>
		: _Extent<_Ty, _Nx - 1>
	{	
	};
template<class _Ty, unsigned int _Nx>
	struct _Extent<_Ty[], _Nx>
		: _Extent<_Ty, _Nx - 1>
	{	
	};
template<class _Ty, unsigned int _Nx = 0>
	struct extent
		: _Extent<_Ty, _Nx>
	{	
	};
template<class _Base, class _Der>
	struct is_base_of : _Cat_base<__is_base_of(_Base, _Der)>
	{	
	};
template<class _Ty>
	struct decay
	{	
	typedef typename remove_reference<_Ty>::type _Ty1;
	typedef typename _If<is_array<_Ty1>::value,
		typename remove_extent<_Ty1>::type *,
		typename _If<is_function<_Ty1>::value,
			typename add_pointer<_Ty1>::type,
			typename remove_cv<_Ty1>::type>::type>::type type;
	};
namespace tr1 {	
using ::std:: add_const;
using ::std:: add_cv;
using ::std:: add_pointer;
using ::std:: add_reference;	
using ::std:: add_volatile;
using ::std:: aligned_storage;
using ::std:: alignment_of;
using ::std:: conditional;
using ::std:: decay;
using ::std:: enable_if;
using ::std:: extent;
using ::std:: false_type;
using ::std:: has_nothrow_assign;	
using ::std:: has_nothrow_constructor;	
using ::std:: has_nothrow_copy;	
using ::std:: has_trivial_assign;
using ::std:: has_trivial_constructor;	
using ::std:: has_trivial_copy;	
using ::std:: has_trivial_destructor;	
using ::std:: has_virtual_destructor;
using ::std:: integral_constant;
using ::std:: is_abstract;
using ::std:: is_arithmetic;
using ::std:: is_array;
using ::std:: is_base_of;
using ::std:: is_class;
using ::std:: is_compound;
using ::std:: is_const;
using ::std:: is_convertible;
using ::std:: is_empty;
using ::std:: is_enum;
using ::std:: is_floating_point;
using ::std:: is_function;
using ::std:: is_fundamental;
using ::std:: is_integral;
using ::std:: is_member_function_pointer;
using ::std:: is_member_object_pointer;
using ::std:: is_member_pointer;
using ::std:: is_object;
using ::std:: is_pod;
using ::std:: is_pointer;
using ::std:: is_polymorphic;
using ::std:: is_reference;
using ::std:: is_same;
using ::std:: is_scalar;
using ::std:: is_signed;
using ::std:: is_union;
using ::std:: is_unsigned;
using ::std:: is_void;
using ::std:: is_volatile;
using ::std:: make_signed;
using ::std:: make_unsigned;
using ::std:: rank;
using ::std:: remove_all_extents;
using ::std:: remove_const;
using ::std:: remove_cv;
using ::std:: remove_extent;
using ::std:: remove_pointer;
using ::std:: remove_reference;
using ::std:: remove_volatile;
using ::std:: true_type;
	}	
template<class... _Ty>
	struct common_type;
template<class _Ty>
	struct common_type<_Ty>
	{	
	typedef typename decay<_Ty>::type type;
	};
template<class _Ty0,
	class _Ty1>
	struct common_type<_Ty0, _Ty1>
	{	
	typedef typename decay<
		decltype(_Always_false<_Ty0>::value
			? ::std:: declval<_Ty0>()
			: ::std:: declval<_Ty1>())
	>::type type;
	};
template<class _Ty0,
	class _Ty1,
	class... _Ty>
	struct common_type<_Ty0, _Ty1, _Ty...>
	{	
	typedef typename common_type<
		typename common_type<_Ty0, _Ty1>::type, _Ty...
	>::type type;
	};
template<size_t... _Indexes>
	struct _Arg_idx
	{	
	};
template<class _Ty>
	class reference_wrapper;
template<class _Ty>
	struct _Unrefwrap_helper
	{	
	typedef _Ty type;
	};
template<class _Ty>
	struct _Unrefwrap_helper<reference_wrapper<_Ty> >
	{	
	typedef _Ty& type;
	};
template<class _Ty>
	struct _Unrefwrap
	{	
	typedef typename decay<_Ty>::type _Ty1;
	typedef typename _Unrefwrap_helper<_Ty1>::type type;
	};
template<class _Ty>
	struct identity
	{	
	typedef _Ty type;
	const _Ty& operator()(const _Ty& _Left) const
		{	
		return (_Left);
		}
	};
template<class _Ty> inline
	_Ty&& forward(typename remove_reference<_Ty>::type& _Arg)
	{	
	return (static_cast<_Ty&&>(_Arg));
	}
template<class _Ty> inline
	_Ty&& forward(typename remove_reference<_Ty>::type&& _Arg) throw ()
	{	
	static_assert(!is_lvalue_reference<_Ty>::value, "bad forward call");
	return (static_cast<_Ty&&>(_Arg));
	}
template<class _Ty> inline
	typename remove_reference<_Ty>::type&&
		move(_Ty&& _Arg) throw ()
	{	
	return ((typename remove_reference<_Ty>::type&&)_Arg);
	}
template<class _Ty> inline
	typename remove_reference<_Ty>::type&&
		_Move(_Ty&& _Arg) throw ()
	{	
	return ((typename remove_reference<_Ty>::type&&)_Arg);
	}
template<class _Ty> inline
	typename _If<!has_nothrow_move_constructor<_Ty>::value
		&& has_copy_constructor<_Ty>::value,
			const _Ty&, _Ty&&>::type
	move_if_noexcept(_Ty& _Arg) throw ()
	{	
	return (::std:: move(_Arg));
	}
template<class _Ty> inline
	typename decay<_Ty>::type _Decay_copy(_Ty&& _Arg)
	{	
	return (::std:: forward<_Ty>(_Arg));
	}
}
 #pragma pack(push,8)
 #pragma warning(push,3)
 #pragma warning(disable: 4180)
namespace std {
template<class _Ty>
	class reference_wrapper;
template<class _Ret,
	class... _Types>
	struct _Fun_class_base
	{	
	};
template<class _Ret,
	class _Farg0>
	struct _Fun_class_base<_Ret, _Farg0>
		: public unary_function<_Farg0, _Ret>
	{	
	};
template<class _Ret,
	class _Farg0,
	class _Farg1>
	struct _Fun_class_base<_Ret, _Farg0, _Farg1>
		: public binary_function<_Farg0, _Farg1, _Ret>
	{	
	};
template<class _Ret,
	class _Farg0,
	class _Farg1,
	class... _Types>
	struct _Fun_class_base<_Ret, _Farg0, _Farg1, _Types...>
	{	
	};
template<class _Fty,
	class... _Args>
	struct _Result_of
	{	
	typedef decltype(
		::std:: declval<_Fty>()(::std:: declval<_Args>()...)) type;
	};
template<class _Ret, class _Ty, class... _Mfargs, class _Obj, class... _Args> struct _Result_of<_Ret (__thiscall _Ty::* )(_Mfargs...) , _Obj, _Args...> { typedef _Ret type; }; template<class _Ret, class _Ty, class... _Mfargs, class _Obj, class... _Args> struct _Result_of<_Ret (__cdecl _Ty::* )(_Mfargs...) , _Obj, _Args...> { typedef _Ret type; }; template<class _Ret, class _Ty, class... _Mfargs, class _Obj, class... _Args> struct _Result_of<_Ret (__stdcall _Ty::* )(_Mfargs...) , _Obj, _Args...> { typedef _Ret type; }; template<class _Ret, class _Ty, class... _Mfargs, class _Obj, class... _Args> struct _Result_of<_Ret (__fastcall _Ty::* )(_Mfargs...) , _Obj, _Args...> { typedef _Ret type; }; template<class _Ret, class _Ty, class... _Mfargs, class _Obj, class... _Args> struct _Result_of<_Ret (__thiscall _Ty::* )(_Mfargs...) const, _Obj, _Args...> { typedef _Ret type; }; template<class _Ret, class _Ty, class... _Mfargs, class _Obj, class... _Args> struct _Result_of<_Ret (__cdecl _Ty::* )(_Mfargs...) const, _Obj, _Args...> { typedef _Ret type; }; template<class _Ret, class _Ty, class... _Mfargs, class _Obj, class... _Args> struct _Result_of<_Ret (__stdcall _Ty::* )(_Mfargs...) const, _Obj, _Args...> { typedef _Ret type; }; template<class _Ret, class _Ty, class... _Mfargs, class _Obj, class... _Args> struct _Result_of<_Ret (__fastcall _Ty::* )(_Mfargs...) const, _Obj, _Args...> { typedef _Ret type; }; template<class _Ret, class _Ty, class... _Mfargs, class _Obj, class... _Args> struct _Result_of<_Ret (__thiscall _Ty::* )(_Mfargs...) volatile, _Obj, _Args...> { typedef _Ret type; }; template<class _Ret, class _Ty, class... _Mfargs, class _Obj, class... _Args> struct _Result_of<_Ret (__cdecl _Ty::* )(_Mfargs...) volatile, _Obj, _Args...> { typedef _Ret type; }; template<class _Ret, class _Ty, class... _Mfargs, class _Obj, class... _Args> struct _Result_of<_Ret (__stdcall _Ty::* )(_Mfargs...) volatile, _Obj, _Args...> { typedef _Ret type; }; template<class _Ret, class _Ty, class... _Mfargs, class _Obj, class... _Args> struct _Result_of<_Ret (__fastcall _Ty::* )(_Mfargs...) volatile, _Obj, _Args...> { typedef _Ret type; }; template<class _Ret, class _Ty, class... _Mfargs, class _Obj, class... _Args> struct _Result_of<_Ret (__thiscall _Ty::* )(_Mfargs...) const volatile, _Obj, _Args...> { typedef _Ret type; }; template<class _Ret, class _Ty, class... _Mfargs, class _Obj, class... _Args> struct _Result_of<_Ret (__cdecl _Ty::* )(_Mfargs...) const volatile, _Obj, _Args...> { typedef _Ret type; }; template<class _Ret, class _Ty, class... _Mfargs, class _Obj, class... _Args> struct _Result_of<_Ret (__stdcall _Ty::* )(_Mfargs...) const volatile, _Obj, _Args...> { typedef _Ret type; }; template<class _Ret, class _Ty, class... _Mfargs, class _Obj, class... _Args> struct _Result_of<_Ret (__fastcall _Ty::* )(_Mfargs...) const volatile, _Obj, _Args...> { typedef _Ret type; }; template<class _Ret, class _Ty, class... _Mfargs, class _Obj, class... _Args> struct _Result_of<_Ret (__thiscall _Ty::* const)(_Mfargs...) , _Obj, _Args...> { typedef _Ret type; }; template<class _Ret, class _Ty, class... _Mfargs, class _Obj, class... _Args> struct _Result_of<_Ret (__cdecl _Ty::* const)(_Mfargs...) , _Obj, _Args...> { typedef _Ret type; }; template<class _Ret, class _Ty, class... _Mfargs, class _Obj, class... _Args> struct _Result_of<_Ret (__stdcall _Ty::* const)(_Mfargs...) , _Obj, _Args...> { typedef _Ret type; }; template<class _Ret, class _Ty, class... _Mfargs, class _Obj, class... _Args> struct _Result_of<_Ret (__fastcall _Ty::* const)(_Mfargs...) , _Obj, _Args...> { typedef _Ret type; }; template<class _Ret, class _Ty, class... _Mfargs, class _Obj, class... _Args> struct _Result_of<_Ret (__thiscall _Ty::* const)(_Mfargs...) const, _Obj, _Args...> { typedef _Ret type; }; template<class _Ret, class _Ty, class... _Mfargs, class _Obj, class... _Args> struct _Result_of<_Ret (__cdecl _Ty::* const)(_Mfargs...) const, _Obj, _Args...> { typedef _Ret type; }; template<class _Ret, class _Ty, class... _Mfargs, class _Obj, class... _Args> struct _Result_of<_Ret (__stdcall _Ty::* const)(_Mfargs...) const, _Obj, _Args...> { typedef _Ret type; }; template<class _Ret, class _Ty, class... _Mfargs, class _Obj, class... _Args> struct _Result_of<_Ret (__fastcall _Ty::* const)(_Mfargs...) const, _Obj, _Args...> { typedef _Ret type; }; template<class _Ret, class _Ty, class... _Mfargs, class _Obj, class... _Args> struct _Result_of<_Ret (__thiscall _Ty::* const)(_Mfargs...) volatile, _Obj, _Args...> { typedef _Ret type; }; template<class _Ret, class _Ty, class... _Mfargs, class _Obj, class... _Args> struct _Result_of<_Ret (__cdecl _Ty::* const)(_Mfargs...) volatile, _Obj, _Args...> { typedef _Ret type; }; template<class _Ret, class _Ty, class... _Mfargs, class _Obj, class... _Args> struct _Result_of<_Ret (__stdcall _Ty::* const)(_Mfargs...) volatile, _Obj, _Args...> { typedef _Ret type; }; template<class _Ret, class _Ty, class... _Mfargs, class _Obj, class... _Args> struct _Result_of<_Ret (__fastcall _Ty::* const)(_Mfargs...) volatile, _Obj, _Args...> { typedef _Ret type; }; template<class _Ret, class _Ty, class... _Mfargs, class _Obj, class... _Args> struct _Result_of<_Ret (__thiscall _Ty::* const)(_Mfargs...) const volatile, _Obj, _Args...> { typedef _Ret type; }; template<class _Ret, class _Ty, class... _Mfargs, class _Obj, class... _Args> struct _Result_of<_Ret (__cdecl _Ty::* const)(_Mfargs...) const volatile, _Obj, _Args...> { typedef _Ret type; }; template<class _Ret, class _Ty, class... _Mfargs, class _Obj, class... _Args> struct _Result_of<_Ret (__stdcall _Ty::* const)(_Mfargs...) const volatile, _Obj, _Args...> { typedef _Ret type; }; template<class _Ret, class _Ty, class... _Mfargs, class _Obj, class... _Args> struct _Result_of<_Ret (__fastcall _Ty::* const)(_Mfargs...) const volatile, _Obj, _Args...> { typedef _Ret type; };
template<class _Ret,
	class _Ty,
	class _Obj,
	class... _Args>
	struct _Result_of<_Ret _Ty::*, _Obj, _Args...>
	{	
	typedef typename _Copy_cv<_Ret,
		typename remove_pointer<
			typename remove_reference<_Obj>::type>::type>::type type;
	};
template<class _Ret,
	class _Ty,
	class _Obj,
	class... _Args>
	struct _Result_of<_Ret _Ty::*const, _Obj, _Args...>
	{	
	typedef typename _Copy_cv<_Ret,
		typename remove_pointer<
			typename remove_reference<_Obj>::type>::type>::type const type;
	};
template<class _Fty>
	struct result_of;	
template<class _Fty, class... _Args> struct result_of<_Fty __cdecl (_Args...)> { typedef typename _Result_of<_Fty, _Args...>::type type; }; template<class _Fty, class... _Args> struct result_of<reference_wrapper<_Fty> __cdecl (_Args...)> { typedef typename _Result_of<_Fty, _Args...>::type type; }; template<class _Fty, class... _Args> struct result_of<_Fty __stdcall (_Args...)> { typedef typename _Result_of<_Fty, _Args...>::type type; }; template<class _Fty, class... _Args> struct result_of<reference_wrapper<_Fty> __stdcall (_Args...)> { typedef typename _Result_of<_Fty, _Args...>::type type; }; template<class _Fty, class... _Args> struct result_of<_Fty __fastcall (_Args...)> { typedef typename _Result_of<_Fty, _Args...>::type type; }; template<class _Fty, class... _Args> struct result_of<reference_wrapper<_Fty> __fastcall (_Args...)> { typedef typename _Result_of<_Fty, _Args...>::type type; };
template<class _Ret,
	class _Arg0>
	struct _Pmd_caller
	{	
	template<class _Pmd,
		class _Farg0>
		static _Ret& _Call_pmd(_Pmd _Pm, _Farg0&& _Fx0, true_type)
		{	
		return ((_Ret&)(_Fx0.*_Pm));
		}
	template<class _Pmd,
		class _Farg0>
		static _Ret& _Call_pmd(_Pmd _Pm, _Farg0&& _Fx0, false_type)
		{	
		return ((_Ret&)((*_Fx0).*_Pm));
		}
	template<class _Pmd,
		class _Farg0>
		static _Ret& _Apply_pmd(_Pmd _Pm, _Farg0&& _Fx0)
		{	
		typedef typename remove_cv<
			typename remove_reference<_Arg0>::type>::type _Arg0_bare;
		typedef typename remove_cv<
			typename remove_reference<_Farg0>::type>::type _Farg0_bare;
		typedef _Cat_base<is_same<_Arg0_bare, _Farg0_bare>::value
			|| (is_base_of<_Arg0_bare, _Farg0_bare>::value
				&& is_same<typename add_reference<_Farg0_bare>::type,
					_Farg0>::value)> _Is_obj;
		return (_Call_pmd<_Pmd, _Farg0>(_Pm,
			::std:: forward<_Farg0>(_Fx0), _Is_obj()));
		}
	};
template<class _Ty,
	bool _Indirect>
	struct _Callable_base;
template<class _Ty>
	struct _Callable_base<_Ty, false>
	{	
	enum {_EEN_INDIRECT = 0};	
	typedef _Ty _MyTy;
	typedef const _Ty& _MyCnstTy;
	_Callable_base(const _Ty& _Val)
		: _Object(_Val)
		{	
		}
	const _Ty& _Get() const
		{	
		return (_Object);
		}
	_Ty& _Get()
		{	
		return (_Object);
		}
	void _Reset(_Ty& _Val)
		{	
		static_assert(_Always_false<_Ty>::value,
			"can't assign to reference_wrapper<T&>");
		}
private:
	_Callable_base& operator=(const _Callable_base&);
	_Ty _Object;
};
template<class _Ty>
	struct _Callable_base<_Ty, true>
	{	
	enum {_EEN_INDIRECT = 1};	
	typedef _Ty _MyTy;
	typedef _Ty& _MyCnstTy;
	_Callable_base(_Ty& _Val)
		: _Ptr(::std:: addressof(_Val))
		{	
		}
	_MyCnstTy _Get() const
		{	
		return (*_Ptr);
		}
	_Ty& _Get()
		{	
		return (*_Ptr);
		}
	void _Reset(_Ty& _Val)
		{	
		_Ptr = ::std:: addressof(_Val);
		}
private:
	_Ty *_Ptr;
};
template<class _Ty,
	class _Memty,
	bool _Indirect = false>
	struct _Callable_pmd
		: _Callable_base<_Ty, _Indirect>
	{	
	_Callable_pmd(const _Callable_pmd& _Right)
		: _Callable_base<_Ty, _Indirect>(_Right._Get())
		{	
		}
	_Callable_pmd(_Ty& _Val)
		: _Callable_base<_Ty, _Indirect>(_Val)
		{	
		}
	template<class _Ret,
		class _Arg0>
		_Ret& _ApplyX(_Arg0&& _A0) const
		{	
		return (_Pmd_caller<_Ret, _Memty>::
			_Apply_pmd(this->_Get(), ::std:: forward<_Arg0>(_A0)));
		}
	};
template<class _Ty,
	bool _Indirect = false>
	struct _Callable_obj
		: _Callable_base<_Ty, _Indirect>
	{	
	typedef _Callable_base<_Ty, _Indirect> _Mybase;
	template<class _Ty2>
		_Callable_obj(_Ty2&& _Val)
		: _Mybase(::std:: forward<_Ty2>(_Val))
		{	
		}
	template<class _Ret,
		class... _Types>
		_Ret _ApplyX(_Types&&... _Args) const
		{ 
		return (this->_Get()(::std:: forward<_Types>(_Args)...));
		}
	template<class _Ret,
		class... _Types>
		_Ret _ApplyX(_Types&&... _Args)
		{ 
		return (this->_Get()(::std:: forward<_Types>(_Args)...));
		}
	};
template<class _Ret,
	class _Arg0>
	struct _Pmf_caller
	{	
	template<class _Pmf,
		class _Farg0,
		class... _Ftypes>
		static _Ret _Call_pmf(_Pmf _Pm, _Farg0&& _Fx0, true_type,
			_Ftypes&&... _Fargs)
		{	
		typedef typename _Copy_cv<_Arg0, _Farg0>::type
			_Funobj_cv;
		return (((_Funobj_cv)_Fx0.*_Pm)(::std:: forward<_Ftypes>(_Fargs)...));
		}
	template<class _Pmf,
		class _Farg0,
		class... _Ftypes>
		static _Ret _Call_pmf(_Pmf _Pm, _Farg0&& _Fx0, false_type,
			_Ftypes&&... _Fargs)
		{	
		return (((*_Fx0).*_Pm)(::std:: forward<_Ftypes>(_Fargs)...));
		}
	template<class _Pmf,
		class _Farg0,
		class... _Ftypes>
		static _Ret _Apply_pmf(_Pmf _Pm, _Farg0&& _Fx0,
			_Ftypes&&... _Fargs)
		{	
		typedef typename remove_reference<_Arg0>::type _Arg0_bare0;
		typedef typename remove_cv<_Arg0_bare0>::type _Arg0_bare;
		typedef typename remove_reference<_Farg0>::type _Farg0_bare;
		typedef _Cat_base<is_same<_Arg0_bare, _Farg0_bare>::value
			|| (is_base_of<_Arg0_bare, _Farg0_bare>::value
				&& is_same<typename add_reference<_Farg0_bare>::type,
					_Farg0>::value)> _Is_obj;
		return (_Call_pmf<_Pmf, _Farg0&&, _Ftypes&&...>(_Pm,
			::std:: forward<_Farg0>(_Fx0), _Is_obj(),
				::std:: forward<_Ftypes>(_Fargs)...));
		}
	};
template<class _Ty,
	class _Memty,
	bool _Indirect = false>
	struct _Callable_pmf
		: _Callable_base<_Ty, _Indirect>
	{	
	_Callable_pmf(const _Callable_pmf& _Right)
		: _Callable_base<_Ty, _Indirect>(_Right._Get())
		{	
		}
	_Callable_pmf(_Ty& _Val)
		: _Callable_base<_Ty, _Indirect>(_Val)
		{	
		}
	template<class _Ret,
		class... _Types>
		_Ret _ApplyX(_Types&&... _Args) const
		{ 
		return (_Pmf_caller<_Ret, _Memty>::
			_Apply_pmf(this->_Get(), ::std:: forward<_Types>(_Args)...));
		}
	};
template<class _Ty,
	bool _Indirect = false>
	struct _Callable_fun
		: _Callable_base<_Ty, _Indirect>
	{	
	_Callable_fun(const _Callable_fun& _Right)
		: _Callable_base<_Ty, _Indirect>(_Right._Get())
		{	
		}
	_Callable_fun(_Ty& _Val)
		: _Callable_base<_Ty, _Indirect>(_Val)
		{	
		}
	template<class _Ret,
		class... _Types>
		_Ret _ApplyX(_Types&&... _Args) const
		{ 
		return (this->_Get()(::std:: forward<_Types>(_Args)...));
		}
	};
template<class _Callable>
	struct _Call_wrapper_base
	{	
	typedef typename _Callable::_MyTy _MyTy;
	typedef typename _Callable::_MyCnstTy _MyCnstTy;
	_Call_wrapper_base(_MyTy& _Val)
		: _Callee(_Val)
		{	
		}
	void _Reset(_MyTy& _Val)
		{	
		_Callee._Reset(_Val);
		}
	_MyCnstTy _Get() const
		{	
		return (_Callee._Get());
		}
	_MyCnstTy _Get()
		{	
		return (_Callee._Get());
		}
	_Callable _Callee;
	};
template<class _Callable,
	bool _Is_abstract = false>
	struct _Call_wrapper
	: _Call_wrapper_base<_Callable>
	{	
	typedef _Call_wrapper_base<_Callable> _Mybase;
	_Call_wrapper(typename _Call_wrapper_base<_Callable>::_MyTy& _Val)
		: _Call_wrapper_base<_Callable>(_Val)
		{	
		}
	template<class... _Types>
		typename result_of<
			typename _Callable::_MyTy(_Types...)>::type
			operator()(_Types&&... _Args) const
		{ 
		typedef typename result_of<
			typename _Callable::_MyTy(_Types...)>::type _Ret;
		return (this->_Callee.template _ApplyX<_Ret>(
			::std:: forward<_Types>(_Args)...));
		}
	};
template<class _Callable>
	struct _Call_wrapper<_Callable, true>
	: _Call_wrapper_base<_Callable>
	{	
	typedef _Call_wrapper_base<_Callable> _Mybase;
	_Call_wrapper(typename _Call_wrapper_base<_Callable>::_MyTy& _Val)
		: _Call_wrapper_base<_Callable>(_Val)
		{	
		}
	};
template<class _Ty>
	struct _Has_result_and_arg_type
		{ template<class _Uty> static auto _Fn(int, _Identity<typename _Uty::argument_type> * = 0, _Identity<typename _Uty::result_type> * = 0, _Identity<typename _Uty::result_type> * = 0) -> true_type; template<class _Uty> static auto _Fn(_Wrap_int) -> false_type; typedef decltype(_Fn<_Ty>(0)) type; };
template<class _Ty>
	struct _Has_result_and_2arg_type
		{ template<class _Uty> static auto _Fn(int, _Identity<typename _Uty::first_argument_type> * = 0, _Identity<typename _Uty::second_argument_type> * = 0, _Identity<typename _Uty::result_type> * = 0) -> true_type; template<class _Uty> static auto _Fn(_Wrap_int) -> false_type; typedef decltype(_Fn<_Ty>(0)) type; };
template<class _Ty,
	bool>
	struct _Refwrap_result0
	{	
	typedef typename _Ty::result_type result_type;
	};
template<class _Ty>
	struct _Refwrap_result0<_Ty, false>
	{	
	};
template<class _Ty,
	bool>
	struct _Refwrap_result1_helper
		: _Refwrap_result0<_Ty, _Has_result_type<_Ty>::type::value>
	{	
	};
template<class _Ty>
	struct _Refwrap_result1_helper<_Ty, true>
		: unary_function<typename _Ty::argument_type,
			typename _Ty::result_type>
	{	
	};
template<class _Ty,
	bool>
	struct _Refwrap_result1
		: _Refwrap_result0<_Ty, _Has_result_type<_Ty>::type::value>
	{	
	};
template<class _Ty>
	struct _Refwrap_result1<_Ty, true>
		: _Refwrap_result1_helper<_Ty,
			is_base_of<unary_function<
				typename _Ty::argument_type,
				typename _Ty::result_type>, _Ty>::value>
	{	
	};
template<class _Ty,
	bool>
	struct _Refwrap_result2_helper
		: _Refwrap_result1<_Ty, _Has_result_and_arg_type<_Ty>::type::value>
	{	
	};
template<class _Ty>
	struct _Refwrap_result2_helper<_Ty, true>
		: binary_function<typename _Ty::first_argument_type,
			typename _Ty::second_argument_type,
			typename _Ty::result_type>,
		_Refwrap_result1<_Ty, _Has_result_and_arg_type<_Ty>::type::value>
	{	
	};
template<class _Ty,
	bool>
	struct _Refwrap_result2
		: _Refwrap_result1<_Ty, _Has_result_and_arg_type<_Ty>::type::value>
	{	
	};
template<class _Ty>
	struct _Refwrap_result2<_Ty, true>
		: _Refwrap_result2_helper<_Ty,
			is_base_of<binary_function<
				typename _Ty::first_argument_type,
				typename _Ty::second_argument_type,
				typename _Ty::result_type>, _Ty>::value>
	{	
	};
template<class _Ty>
	struct _Refwrap_impl
		: _Call_wrapper<_Callable_obj<_Ty, true>,
			is_abstract<_Ty>::value>,
			_Refwrap_result2<_Ty, _Has_result_and_2arg_type<_Ty>::type::value>
	{	
	_Refwrap_impl(_Ty& _Val)
		: _Call_wrapper<_Callable_obj<_Ty, true>,
			is_abstract<_Ty>::value>(_Val)
		{	
		}
	};
template<class _Rx,
	class _Arg0>
	struct _Refwrap_impl<_Rx _Arg0::*>
		: _Call_wrapper<_Callable_pmd<_Rx _Arg0::*, _Arg0, false> >
	{	
	typedef _Rx _Arg0::* _Fty;
	typedef _Rx result_type;
	_Refwrap_impl(_Fty& _Val)
		: _Call_wrapper<_Callable_pmd<_Fty, _Arg0, false> >(_Val)
		{	
		}
	};
template<class _Rx,
	class _Arg0>
	struct _Refwrap_impl<_Rx _Arg0::*const>
		: _Call_wrapper<_Callable_pmd<_Rx _Arg0::*const, _Arg0, false> >
	{	
	typedef _Rx _Arg0::*const _Fty;
	typedef _Rx result_type;
	_Refwrap_impl(_Fty& _Val)
		: _Call_wrapper<_Callable_pmd<_Fty, _Arg0, false> >(_Val)
		{	
		}
	};
template<class _Rx, class... _Types> struct _Refwrap_impl<_Rx __cdecl (_Types...)> : _Call_wrapper<_Callable_fun< _Rx(__cdecl *)(_Types...), false> >, _Fun_class_base<_Rx, _Types...> { typedef _Rx(__cdecl *_Fty)(_Types...); typedef _Rx result_type; _Refwrap_impl(_Fty _Val) : _Call_wrapper<_Callable_fun<_Fty, false> >(_Val) { } }; template<class _Rx, class... _Types> struct _Refwrap_impl<_Rx __stdcall (_Types...)> : _Call_wrapper<_Callable_fun< _Rx(__stdcall *)(_Types...), false> >, _Fun_class_base<_Rx, _Types...> { typedef _Rx(__stdcall *_Fty)(_Types...); typedef _Rx result_type; _Refwrap_impl(_Fty _Val) : _Call_wrapper<_Callable_fun<_Fty, false> >(_Val) { } }; template<class _Rx, class... _Types> struct _Refwrap_impl<_Rx __fastcall (_Types...)> : _Call_wrapper<_Callable_fun< _Rx(__fastcall *)(_Types...), false> >, _Fun_class_base<_Rx, _Types...> { typedef _Rx(__fastcall *_Fty)(_Types...); typedef _Rx result_type; _Refwrap_impl(_Fty _Val) : _Call_wrapper<_Callable_fun<_Fty, false> >(_Val) { } };
template<class _Rx, class... _Types> struct _Refwrap_impl<_Rx(__cdecl *)(_Types...)> : _Call_wrapper<_Callable_fun< _Rx(__cdecl *)(_Types...), true> >, _Fun_class_base<_Rx, _Types...> { typedef _Rx(__cdecl * _Fty)(_Types...); typedef _Rx result_type; _Refwrap_impl(_Fty& _Val) : _Call_wrapper<_Callable_fun<_Fty, true> >(_Val) { } }; template<class _Rx, class... _Types> struct _Refwrap_impl<_Rx(__stdcall *)(_Types...)> : _Call_wrapper<_Callable_fun< _Rx(__stdcall *)(_Types...), true> >, _Fun_class_base<_Rx, _Types...> { typedef _Rx(__stdcall * _Fty)(_Types...); typedef _Rx result_type; _Refwrap_impl(_Fty& _Val) : _Call_wrapper<_Callable_fun<_Fty, true> >(_Val) { } }; template<class _Rx, class... _Types> struct _Refwrap_impl<_Rx(__fastcall *)(_Types...)> : _Call_wrapper<_Callable_fun< _Rx(__fastcall *)(_Types...), true> >, _Fun_class_base<_Rx, _Types...> { typedef _Rx(__fastcall * _Fty)(_Types...); typedef _Rx result_type; _Refwrap_impl(_Fty& _Val) : _Call_wrapper<_Callable_fun<_Fty, true> >(_Val) { } }; template<class _Rx, class... _Types> struct _Refwrap_impl<_Rx(__cdecl *const)(_Types...)> : _Call_wrapper<_Callable_fun< _Rx(__cdecl *const)(_Types...), true> >, _Fun_class_base<_Rx, _Types...> { typedef _Rx(__cdecl *const _Fty)(_Types...); typedef _Rx result_type; _Refwrap_impl(_Fty& _Val) : _Call_wrapper<_Callable_fun<_Fty, true> >(_Val) { } }; template<class _Rx, class... _Types> struct _Refwrap_impl<_Rx(__stdcall *const)(_Types...)> : _Call_wrapper<_Callable_fun< _Rx(__stdcall *const)(_Types...), true> >, _Fun_class_base<_Rx, _Types...> { typedef _Rx(__stdcall *const _Fty)(_Types...); typedef _Rx result_type; _Refwrap_impl(_Fty& _Val) : _Call_wrapper<_Callable_fun<_Fty, true> >(_Val) { } }; template<class _Rx, class... _Types> struct _Refwrap_impl<_Rx(__fastcall *const)(_Types...)> : _Call_wrapper<_Callable_fun< _Rx(__fastcall *const)(_Types...), true> >, _Fun_class_base<_Rx, _Types...> { typedef _Rx(__fastcall *const _Fty)(_Types...); typedef _Rx result_type; _Refwrap_impl(_Fty& _Val) : _Call_wrapper<_Callable_fun<_Fty, true> >(_Val) { } };
template<class _Rx, class _Arg0, class... _Types> struct _Refwrap_impl<_Rx(__thiscall _Arg0::* )(_Types...) > : _Call_wrapper<_Callable_pmf< _Rx(__thiscall _Arg0::* )(_Types...) , _Arg0, true> >, _Fun_class_base<_Rx,  _Arg0 *, _Types...> { typedef _Rx(__thiscall _Arg0::*  _Fty)(_Types...) ; typedef _Rx result_type; _Refwrap_impl(_Fty& _Val) : _Call_wrapper<_Callable_pmf<_Fty, _Arg0, true> >(_Val) { } }; template<class _Rx, class _Arg0, class... _Types> struct _Refwrap_impl<_Rx(__cdecl _Arg0::* )(_Types...) > : _Call_wrapper<_Callable_pmf< _Rx(__cdecl _Arg0::* )(_Types...) , _Arg0, true> >, _Fun_class_base<_Rx,  _Arg0 *, _Types...> { typedef _Rx(__cdecl _Arg0::*  _Fty)(_Types...) ; typedef _Rx result_type; _Refwrap_impl(_Fty& _Val) : _Call_wrapper<_Callable_pmf<_Fty, _Arg0, true> >(_Val) { } }; template<class _Rx, class _Arg0, class... _Types> struct _Refwrap_impl<_Rx(__stdcall _Arg0::* )(_Types...) > : _Call_wrapper<_Callable_pmf< _Rx(__stdcall _Arg0::* )(_Types...) , _Arg0, true> >, _Fun_class_base<_Rx,  _Arg0 *, _Types...> { typedef _Rx(__stdcall _Arg0::*  _Fty)(_Types...) ; typedef _Rx result_type; _Refwrap_impl(_Fty& _Val) : _Call_wrapper<_Callable_pmf<_Fty, _Arg0, true> >(_Val) { } }; template<class _Rx, class _Arg0, class... _Types> struct _Refwrap_impl<_Rx(__fastcall _Arg0::* )(_Types...) > : _Call_wrapper<_Callable_pmf< _Rx(__fastcall _Arg0::* )(_Types...) , _Arg0, true> >, _Fun_class_base<_Rx,  _Arg0 *, _Types...> { typedef _Rx(__fastcall _Arg0::*  _Fty)(_Types...) ; typedef _Rx result_type; _Refwrap_impl(_Fty& _Val) : _Call_wrapper<_Callable_pmf<_Fty, _Arg0, true> >(_Val) { } }; template<class _Rx, class _Arg0, class... _Types> struct _Refwrap_impl<_Rx(__thiscall _Arg0::* )(_Types...) const> : _Call_wrapper<_Callable_pmf< _Rx(__thiscall _Arg0::* )(_Types...) const, _Arg0, true> >, _Fun_class_base<_Rx, const _Arg0 *, _Types...> { typedef _Rx(__thiscall _Arg0::*  _Fty)(_Types...) const; typedef _Rx result_type; _Refwrap_impl(_Fty& _Val) : _Call_wrapper<_Callable_pmf<_Fty, _Arg0, true> >(_Val) { } }; template<class _Rx, class _Arg0, class... _Types> struct _Refwrap_impl<_Rx(__cdecl _Arg0::* )(_Types...) const> : _Call_wrapper<_Callable_pmf< _Rx(__cdecl _Arg0::* )(_Types...) const, _Arg0, true> >, _Fun_class_base<_Rx, const _Arg0 *, _Types...> { typedef _Rx(__cdecl _Arg0::*  _Fty)(_Types...) const; typedef _Rx result_type; _Refwrap_impl(_Fty& _Val) : _Call_wrapper<_Callable_pmf<_Fty, _Arg0, true> >(_Val) { } }; template<class _Rx, class _Arg0, class... _Types> struct _Refwrap_impl<_Rx(__stdcall _Arg0::* )(_Types...) const> : _Call_wrapper<_Callable_pmf< _Rx(__stdcall _Arg0::* )(_Types...) const, _Arg0, true> >, _Fun_class_base<_Rx, const _Arg0 *, _Types...> { typedef _Rx(__stdcall _Arg0::*  _Fty)(_Types...) const; typedef _Rx result_type; _Refwrap_impl(_Fty& _Val) : _Call_wrapper<_Callable_pmf<_Fty, _Arg0, true> >(_Val) { } }; template<class _Rx, class _Arg0, class... _Types> struct _Refwrap_impl<_Rx(__fastcall _Arg0::* )(_Types...) const> : _Call_wrapper<_Callable_pmf< _Rx(__fastcall _Arg0::* )(_Types...) const, _Arg0, true> >, _Fun_class_base<_Rx, const _Arg0 *, _Types...> { typedef _Rx(__fastcall _Arg0::*  _Fty)(_Types...) const; typedef _Rx result_type; _Refwrap_impl(_Fty& _Val) : _Call_wrapper<_Callable_pmf<_Fty, _Arg0, true> >(_Val) { } }; template<class _Rx, class _Arg0, class... _Types> struct _Refwrap_impl<_Rx(__thiscall _Arg0::* )(_Types...) volatile> : _Call_wrapper<_Callable_pmf< _Rx(__thiscall _Arg0::* )(_Types...) volatile, _Arg0, true> >, _Fun_class_base<_Rx, volatile _Arg0 *, _Types...> { typedef _Rx(__thiscall _Arg0::*  _Fty)(_Types...) volatile; typedef _Rx result_type; _Refwrap_impl(_Fty& _Val) : _Call_wrapper<_Callable_pmf<_Fty, _Arg0, true> >(_Val) { } }; template<class _Rx, class _Arg0, class... _Types> struct _Refwrap_impl<_Rx(__cdecl _Arg0::* )(_Types...) volatile> : _Call_wrapper<_Callable_pmf< _Rx(__cdecl _Arg0::* )(_Types...) volatile, _Arg0, true> >, _Fun_class_base<_Rx, volatile _Arg0 *, _Types...> { typedef _Rx(__cdecl _Arg0::*  _Fty)(_Types...) volatile; typedef _Rx result_type; _Refwrap_impl(_Fty& _Val) : _Call_wrapper<_Callable_pmf<_Fty, _Arg0, true> >(_Val) { } }; template<class _Rx, class _Arg0, class... _Types> struct _Refwrap_impl<_Rx(__stdcall _Arg0::* )(_Types...) volatile> : _Call_wrapper<_Callable_pmf< _Rx(__stdcall _Arg0::* )(_Types...) volatile, _Arg0, true> >, _Fun_class_base<_Rx, volatile _Arg0 *, _Types...> { typedef _Rx(__stdcall _Arg0::*  _Fty)(_Types...) volatile; typedef _Rx result_type; _Refwrap_impl(_Fty& _Val) : _Call_wrapper<_Callable_pmf<_Fty, _Arg0, true> >(_Val) { } }; template<class _Rx, class _Arg0, class... _Types> struct _Refwrap_impl<_Rx(__fastcall _Arg0::* )(_Types...) volatile> : _Call_wrapper<_Callable_pmf< _Rx(__fastcall _Arg0::* )(_Types...) volatile, _Arg0, true> >, _Fun_class_base<_Rx, volatile _Arg0 *, _Types...> { typedef _Rx(__fastcall _Arg0::*  _Fty)(_Types...) volatile; typedef _Rx result_type; _Refwrap_impl(_Fty& _Val) : _Call_wrapper<_Callable_pmf<_Fty, _Arg0, true> >(_Val) { } }; template<class _Rx, class _Arg0, class... _Types> struct _Refwrap_impl<_Rx(__thiscall _Arg0::* )(_Types...) const volatile> : _Call_wrapper<_Callable_pmf< _Rx(__thiscall _Arg0::* )(_Types...) const volatile, _Arg0, true> >, _Fun_class_base<_Rx, const volatile _Arg0 *, _Types...> { typedef _Rx(__thiscall _Arg0::*  _Fty)(_Types...) const volatile; typedef _Rx result_type; _Refwrap_impl(_Fty& _Val) : _Call_wrapper<_Callable_pmf<_Fty, _Arg0, true> >(_Val) { } }; template<class _Rx, class _Arg0, class... _Types> struct _Refwrap_impl<_Rx(__cdecl _Arg0::* )(_Types...) const volatile> : _Call_wrapper<_Callable_pmf< _Rx(__cdecl _Arg0::* )(_Types...) const volatile, _Arg0, true> >, _Fun_class_base<_Rx, const volatile _Arg0 *, _Types...> { typedef _Rx(__cdecl _Arg0::*  _Fty)(_Types...) const volatile; typedef _Rx result_type; _Refwrap_impl(_Fty& _Val) : _Call_wrapper<_Callable_pmf<_Fty, _Arg0, true> >(_Val) { } }; template<class _Rx, class _Arg0, class... _Types> struct _Refwrap_impl<_Rx(__stdcall _Arg0::* )(_Types...) const volatile> : _Call_wrapper<_Callable_pmf< _Rx(__stdcall _Arg0::* )(_Types...) const volatile, _Arg0, true> >, _Fun_class_base<_Rx, const volatile _Arg0 *, _Types...> { typedef _Rx(__stdcall _Arg0::*  _Fty)(_Types...) const volatile; typedef _Rx result_type; _Refwrap_impl(_Fty& _Val) : _Call_wrapper<_Callable_pmf<_Fty, _Arg0, true> >(_Val) { } }; template<class _Rx, class _Arg0, class... _Types> struct _Refwrap_impl<_Rx(__fastcall _Arg0::* )(_Types...) const volatile> : _Call_wrapper<_Callable_pmf< _Rx(__fastcall _Arg0::* )(_Types...) const volatile, _Arg0, true> >, _Fun_class_base<_Rx, const volatile _Arg0 *, _Types...> { typedef _Rx(__fastcall _Arg0::*  _Fty)(_Types...) const volatile; typedef _Rx result_type; _Refwrap_impl(_Fty& _Val) : _Call_wrapper<_Callable_pmf<_Fty, _Arg0, true> >(_Val) { } }; template<class _Rx, class _Arg0, class... _Types> struct _Refwrap_impl<_Rx(__thiscall _Arg0::* const)(_Types...) > : _Call_wrapper<_Callable_pmf< _Rx(__thiscall _Arg0::* const)(_Types...) , _Arg0, true> >, _Fun_class_base<_Rx,  _Arg0 *, _Types...> { typedef _Rx(__thiscall _Arg0::* const _Fty)(_Types...) ; typedef _Rx result_type; _Refwrap_impl(_Fty& _Val) : _Call_wrapper<_Callable_pmf<_Fty, _Arg0, true> >(_Val) { } }; template<class _Rx, class _Arg0, class... _Types> struct _Refwrap_impl<_Rx(__cdecl _Arg0::* const)(_Types...) > : _Call_wrapper<_Callable_pmf< _Rx(__cdecl _Arg0::* const)(_Types...) , _Arg0, true> >, _Fun_class_base<_Rx,  _Arg0 *, _Types...> { typedef _Rx(__cdecl _Arg0::* const _Fty)(_Types...) ; typedef _Rx result_type; _Refwrap_impl(_Fty& _Val) : _Call_wrapper<_Callable_pmf<_Fty, _Arg0, true> >(_Val) { } }; template<class _Rx, class _Arg0, class... _Types> struct _Refwrap_impl<_Rx(__stdcall _Arg0::* const)(_Types...) > : _Call_wrapper<_Callable_pmf< _Rx(__stdcall _Arg0::* const)(_Types...) , _Arg0, true> >, _Fun_class_base<_Rx,  _Arg0 *, _Types...> { typedef _Rx(__stdcall _Arg0::* const _Fty)(_Types...) ; typedef _Rx result_type; _Refwrap_impl(_Fty& _Val) : _Call_wrapper<_Callable_pmf<_Fty, _Arg0, true> >(_Val) { } }; template<class _Rx, class _Arg0, class... _Types> struct _Refwrap_impl<_Rx(__fastcall _Arg0::* const)(_Types...) > : _Call_wrapper<_Callable_pmf< _Rx(__fastcall _Arg0::* const)(_Types...) , _Arg0, true> >, _Fun_class_base<_Rx,  _Arg0 *, _Types...> { typedef _Rx(__fastcall _Arg0::* const _Fty)(_Types...) ; typedef _Rx result_type; _Refwrap_impl(_Fty& _Val) : _Call_wrapper<_Callable_pmf<_Fty, _Arg0, true> >(_Val) { } }; template<class _Rx, class _Arg0, class... _Types> struct _Refwrap_impl<_Rx(__thiscall _Arg0::* const)(_Types...) const> : _Call_wrapper<_Callable_pmf< _Rx(__thiscall _Arg0::* const)(_Types...) const, _Arg0, true> >, _Fun_class_base<_Rx, const _Arg0 *, _Types...> { typedef _Rx(__thiscall _Arg0::* const _Fty)(_Types...) const; typedef _Rx result_type; _Refwrap_impl(_Fty& _Val) : _Call_wrapper<_Callable_pmf<_Fty, _Arg0, true> >(_Val) { } }; template<class _Rx, class _Arg0, class... _Types> struct _Refwrap_impl<_Rx(__cdecl _Arg0::* const)(_Types...) const> : _Call_wrapper<_Callable_pmf< _Rx(__cdecl _Arg0::* const)(_Types...) const, _Arg0, true> >, _Fun_class_base<_Rx, const _Arg0 *, _Types...> { typedef _Rx(__cdecl _Arg0::* const _Fty)(_Types...) const; typedef _Rx result_type; _Refwrap_impl(_Fty& _Val) : _Call_wrapper<_Callable_pmf<_Fty, _Arg0, true> >(_Val) { } }; template<class _Rx, class _Arg0, class... _Types> struct _Refwrap_impl<_Rx(__stdcall _Arg0::* const)(_Types...) const> : _Call_wrapper<_Callable_pmf< _Rx(__stdcall _Arg0::* const)(_Types...) const, _Arg0, true> >, _Fun_class_base<_Rx, const _Arg0 *, _Types...> { typedef _Rx(__stdcall _Arg0::* const _Fty)(_Types...) const; typedef _Rx result_type; _Refwrap_impl(_Fty& _Val) : _Call_wrapper<_Callable_pmf<_Fty, _Arg0, true> >(_Val) { } }; template<class _Rx, class _Arg0, class... _Types> struct _Refwrap_impl<_Rx(__fastcall _Arg0::* const)(_Types...) const> : _Call_wrapper<_Callable_pmf< _Rx(__fastcall _Arg0::* const)(_Types...) const, _Arg0, true> >, _Fun_class_base<_Rx, const _Arg0 *, _Types...> { typedef _Rx(__fastcall _Arg0::* const _Fty)(_Types...) const; typedef _Rx result_type; _Refwrap_impl(_Fty& _Val) : _Call_wrapper<_Callable_pmf<_Fty, _Arg0, true> >(_Val) { } }; template<class _Rx, class _Arg0, class... _Types> struct _Refwrap_impl<_Rx(__thiscall _Arg0::* const)(_Types...) volatile> : _Call_wrapper<_Callable_pmf< _Rx(__thiscall _Arg0::* const)(_Types...) volatile, _Arg0, true> >, _Fun_class_base<_Rx, volatile _Arg0 *, _Types...> { typedef _Rx(__thiscall _Arg0::* const _Fty)(_Types...) volatile; typedef _Rx result_type; _Refwrap_impl(_Fty& _Val) : _Call_wrapper<_Callable_pmf<_Fty, _Arg0, true> >(_Val) { } }; template<class _Rx, class _Arg0, class... _Types> struct _Refwrap_impl<_Rx(__cdecl _Arg0::* const)(_Types...) volatile> : _Call_wrapper<_Callable_pmf< _Rx(__cdecl _Arg0::* const)(_Types...) volatile, _Arg0, true> >, _Fun_class_base<_Rx, volatile _Arg0 *, _Types...> { typedef _Rx(__cdecl _Arg0::* const _Fty)(_Types...) volatile; typedef _Rx result_type; _Refwrap_impl(_Fty& _Val) : _Call_wrapper<_Callable_pmf<_Fty, _Arg0, true> >(_Val) { } }; template<class _Rx, class _Arg0, class... _Types> struct _Refwrap_impl<_Rx(__stdcall _Arg0::* const)(_Types...) volatile> : _Call_wrapper<_Callable_pmf< _Rx(__stdcall _Arg0::* const)(_Types...) volatile, _Arg0, true> >, _Fun_class_base<_Rx, volatile _Arg0 *, _Types...> { typedef _Rx(__stdcall _Arg0::* const _Fty)(_Types...) volatile; typedef _Rx result_type; _Refwrap_impl(_Fty& _Val) : _Call_wrapper<_Callable_pmf<_Fty, _Arg0, true> >(_Val) { } }; template<class _Rx, class _Arg0, class... _Types> struct _Refwrap_impl<_Rx(__fastcall _Arg0::* const)(_Types...) volatile> : _Call_wrapper<_Callable_pmf< _Rx(__fastcall _Arg0::* const)(_Types...) volatile, _Arg0, true> >, _Fun_class_base<_Rx, volatile _Arg0 *, _Types...> { typedef _Rx(__fastcall _Arg0::* const _Fty)(_Types...) volatile; typedef _Rx result_type; _Refwrap_impl(_Fty& _Val) : _Call_wrapper<_Callable_pmf<_Fty, _Arg0, true> >(_Val) { } }; template<class _Rx, class _Arg0, class... _Types> struct _Refwrap_impl<_Rx(__thiscall _Arg0::* const)(_Types...) const volatile> : _Call_wrapper<_Callable_pmf< _Rx(__thiscall _Arg0::* const)(_Types...) const volatile, _Arg0, true> >, _Fun_class_base<_Rx, const volatile _Arg0 *, _Types...> { typedef _Rx(__thiscall _Arg0::* const _Fty)(_Types...) const volatile; typedef _Rx result_type; _Refwrap_impl(_Fty& _Val) : _Call_wrapper<_Callable_pmf<_Fty, _Arg0, true> >(_Val) { } }; template<class _Rx, class _Arg0, class... _Types> struct _Refwrap_impl<_Rx(__cdecl _Arg0::* const)(_Types...) const volatile> : _Call_wrapper<_Callable_pmf< _Rx(__cdecl _Arg0::* const)(_Types...) const volatile, _Arg0, true> >, _Fun_class_base<_Rx, const volatile _Arg0 *, _Types...> { typedef _Rx(__cdecl _Arg0::* const _Fty)(_Types...) const volatile; typedef _Rx result_type; _Refwrap_impl(_Fty& _Val) : _Call_wrapper<_Callable_pmf<_Fty, _Arg0, true> >(_Val) { } }; template<class _Rx, class _Arg0, class... _Types> struct _Refwrap_impl<_Rx(__stdcall _Arg0::* const)(_Types...) const volatile> : _Call_wrapper<_Callable_pmf< _Rx(__stdcall _Arg0::* const)(_Types...) const volatile, _Arg0, true> >, _Fun_class_base<_Rx, const volatile _Arg0 *, _Types...> { typedef _Rx(__stdcall _Arg0::* const _Fty)(_Types...) const volatile; typedef _Rx result_type; _Refwrap_impl(_Fty& _Val) : _Call_wrapper<_Callable_pmf<_Fty, _Arg0, true> >(_Val) { } }; template<class _Rx, class _Arg0, class... _Types> struct _Refwrap_impl<_Rx(__fastcall _Arg0::* const)(_Types...) const volatile> : _Call_wrapper<_Callable_pmf< _Rx(__fastcall _Arg0::* const)(_Types...) const volatile, _Arg0, true> >, _Fun_class_base<_Rx, const volatile _Arg0 *, _Types...> { typedef _Rx(__fastcall _Arg0::* const _Fty)(_Types...) const volatile; typedef _Rx result_type; _Refwrap_impl(_Fty& _Val) : _Call_wrapper<_Callable_pmf<_Fty, _Arg0, true> >(_Val) { } };
template<class _Ty>
	class reference_wrapper
	: public _Refwrap_impl<_Ty>
	{	
public:
	typedef reference_wrapper<_Ty> _Myt;
	typedef _Refwrap_impl<_Ty> _Mybase;
	typedef _Ty type;
	reference_wrapper(_Ty& _Val) throw ()
		: _Mybase(_Val)
		{	
		}
	reference_wrapper(const _Myt& _Right) throw ()
		: _Mybase(_Right.get())
		{	
		}
	_Myt& operator=(const _Myt& _Right) throw ()
		{	
		this->_Reset(_Right.get());
		return (*this);
		}
	operator _Ty&() const throw ()
		{	
		return (this->_Get());
		}
	_Ty& get() const throw ()
		{	
		return (this->_Get());
		}
	reference_wrapper(_Ty&&) = delete;
	};
template<class _Ty>
	reference_wrapper<_Ty>
		ref(_Ty& _Val) throw ()
	{	
	return (reference_wrapper<_Ty>(_Val));
	}
template<class _Ty>
	void ref(const _Ty&&) = delete;
template<class _Ty>
	reference_wrapper<_Ty>
		ref(reference_wrapper<_Ty> _Val) throw ()
	{	
	return (_Val);
	}
template<class _Ty>
	reference_wrapper<const _Ty>
		cref(const _Ty& _Val) throw ()
	{	
	return (reference_wrapper<const _Ty>(_Val));
	}
template<class _Ty>
	void cref(const _Ty&&) = delete;
template<class _Ty>
	reference_wrapper<const _Ty>
		cref(reference_wrapper<_Ty> _Val) throw ()
	{	
	return (reference_wrapper<const _Ty>(_Val.get()));
	}
namespace tr1 {	
using ::std:: cref;
using ::std:: ref;
using ::std:: reference_wrapper;
using ::std:: result_of;
	}	
}
 #pragma warning(pop)
 #pragma pack(pop)
namespace std {
template<class _Ty>
	using remove_const_t = typename remove_const<_Ty>::type;
template<class _Ty>
	using remove_volatile_t = typename remove_volatile<_Ty>::type;
template<class _Ty>
	using remove_cv_t = typename remove_cv<_Ty>::type;
template<class _Ty>
	using add_const_t = typename add_const<_Ty>::type;
template<class _Ty>
	using add_volatile_t = typename add_volatile<_Ty>::type;
template<class _Ty>
	using add_cv_t = typename add_cv<_Ty>::type;
template<class _Ty>
	using remove_reference_t = typename remove_reference<_Ty>::type;
template<class _Ty>
	using add_lvalue_reference_t = typename add_lvalue_reference<_Ty>::type;
template<class _Ty>
	using add_rvalue_reference_t = typename add_rvalue_reference<_Ty>::type;
template<class _Ty>
	using make_signed_t = typename make_signed<_Ty>::type;
template<class _Ty>
	using make_unsigned_t = typename make_unsigned<_Ty>::type;
template<class _Ty>
	using remove_extent_t = typename remove_extent<_Ty>::type;
template<class _Ty>
	using remove_all_extents_t = typename remove_all_extents<_Ty>::type;
template<class _Ty>
	using remove_pointer_t = typename remove_pointer<_Ty>::type;
template<class _Ty>
	using add_pointer_t = typename add_pointer<_Ty>::type;
template<size_t _Len,
	size_t _Align = alignment_of<max_align_t>::value>
	using aligned_storage_t = typename aligned_storage<_Len, _Align>::type;
template<size_t _Len,
	class... _Types>
	using aligned_union_t = typename aligned_union<_Len, _Types...>::type;
template<class _Ty>
	using decay_t = typename decay<_Ty>::type;
template<bool _Test,
	class _Ty = void>
	using enable_if_t = typename enable_if<_Test, _Ty>::type;
template<bool _Test,
	class _Ty1,
	class _Ty2>
	using conditional_t = typename conditional<_Test, _Ty1, _Ty2>::type;
template<class... _Ty>
	using common_type_t = typename common_type<_Ty...>::type;
template<class _Ty>
	using underlying_type_t = typename underlying_type<_Ty>::type;
template<class _Ty>
	using result_of_t = typename result_of<_Ty>::type;
}
 #pragma warning(pop)
 #pragma pack(pop)
 #pragma pack(push,8)
 #pragma warning(push,3)
 #pragma warning(disable: 4180 4512)
namespace std {
template<class _Ty> inline
	void swap(_Ty&, _Ty&)
		;
template<class _FwdIt1,
	class _FwdIt2> inline
	void iter_swap(_FwdIt1 _Left, _FwdIt2 _Right)
	{	
	swap(*_Left, *_Right);
	}
template<class _Ty,
	size_t _Size> inline
	void swap(_Ty (&_Left)[_Size], _Ty (&_Right)[_Size])
	{	
	if (&_Left != &_Right)
		{	
		_Ty *_First1 = _Left;
		_Ty *_Last1 = _First1 + _Size;
		_Ty *_First2 = _Right;
		for (; _First1 != _Last1; ++_First1, ++_First2)
			::std:: iter_swap(_First1, _First2);
		}
	}
template<class _Ty> inline
	void swap(_Ty& _Left, _Ty& _Right)
	{	
	_Ty _Tmp = _Move(_Left);
	_Left = _Move(_Right);
	_Right = _Move(_Tmp);
	}
template<class _Ty> inline
	void _Swap_adl(_Ty& _Left, _Ty& _Right)
	{	
	swap(_Left, _Right);
	}
struct piecewise_construct_t
	{	
	};
const piecewise_construct_t piecewise_construct =
	piecewise_construct_t();
template<class...>
	class tuple;
template<class _Ty1,
	class _Ty2>
	struct pair
	{	
	typedef pair<_Ty1, _Ty2> _Myt;
	typedef _Ty1 first_type;
	typedef _Ty2 second_type;
	pair()
		: first(), second()
		{	
		}
	pair(const _Ty1& _Val1, const _Ty2& _Val2)
		: first(_Val1), second(_Val2)
		{	
		}
	template<class _Other1,
		class _Other2,
		class = typename enable_if<is_convertible<const _Other1&, _Ty1>::value
			&& is_convertible<const _Other2&, _Ty2>::value,
			void>::type>
		pair(const pair<_Other1, _Other2>& _Right)
		: first(_Right.first), second(_Right.second)
		{	
		}
	template<class _Other1,
		class _Other2>
		_Myt& operator=(const pair<_Other1, _Other2>& _Right)
		{	
		first = _Right.first;
		second = _Right.second;
		return (*this);
		}
	template<class _Tuple1,
		class _Tuple2,
		size_t... _Indexes1,
		size_t... _Indexes2> inline
		pair(_Tuple1& _Val1,
			_Tuple2& _Val2,
			_Arg_idx<_Indexes1...>,
			_Arg_idx<_Indexes2...>);
	template<class... _Types1,
		class... _Types2> inline
		pair(piecewise_construct_t,
			tuple<_Types1...> _Val1,
			tuple<_Types2...> _Val2)
			;
	template<class _Other1,
		class _Other2,
		class = typename enable_if<is_convertible<_Other1, _Ty1>::value
			&& is_convertible<_Other2, _Ty2>::value,
			void>::type>
		pair(_Other1&& _Val1, _Other2&& _Val2)
		: first(::std:: forward<_Other1>(_Val1)),
				second(::std:: forward<_Other2>(_Val2))
		{	
		}
	template<class _Other1,
		class _Other2,
		class = typename enable_if<is_convertible<_Other1, _Ty1>::value
			&& is_convertible<_Other2, _Ty2>::value,
			void>::type>
		pair(pair<_Other1, _Other2>&& _Right)
		: first(::std:: forward<_Other1>(_Right.first)),
			second(::std:: forward<_Other2>(_Right.second))
		{	
		}
	template<class _Other1,
		class _Other2>
		_Myt& operator=(pair<_Other1, _Other2>&& _Right)
		{	
		first = ::std:: forward<_Other1>(_Right.first);
		second = ::std:: forward<_Other2>(_Right.second);
		return (*this);
		}
	_Myt& operator=(_Myt&& _Right)
		{	
		first = ::std:: forward<_Ty1>(_Right.first);
		second = ::std:: forward<_Ty2>(_Right.second);
		return (*this);
		}
	void swap(_Myt& _Right)
		{	
		if (this != &_Right)
			{	
			_Swap_adl(first, _Right.first);
			_Swap_adl(second, _Right.second);
			}
		}
	_Myt& operator=(const _Myt& _Right)
		{	
		first = _Right.first;
		second = _Right.second;
		return (*this);
		}
	_Ty1 first;	
	_Ty2 second;	
	};
template<class _Ty1,
	class _Ty2> inline
	void swap(pair<_Ty1, _Ty2>& _Left, pair<_Ty1, _Ty2>& _Right)
	{	
	_Left.swap(_Right);
	}
template<class _Ty1,
	class _Ty2> inline
	bool operator==(const pair<_Ty1, _Ty2>& _Left,
		const pair<_Ty1, _Ty2>& _Right)
	{	
	return (_Left.first == _Right.first && _Left.second == _Right.second);
	}
template<class _Ty1,
	class _Ty2> inline
	bool operator!=(const pair<_Ty1, _Ty2>& _Left,
		const pair<_Ty1, _Ty2>& _Right)
	{	
	return (!(_Left == _Right));
	}
template<class _Ty1,
	class _Ty2> inline
	bool operator<(const pair<_Ty1, _Ty2>& _Left,
		const pair<_Ty1, _Ty2>& _Right)
	{	
	return (_Left.first < _Right.first ||
		(!(_Right.first < _Left.first) && _Left.second < _Right.second));
	}
template<class _Ty1,
	class _Ty2> inline
	bool operator>(const pair<_Ty1, _Ty2>& _Left,
		const pair<_Ty1, _Ty2>& _Right)
	{	
	return (_Right < _Left);
	}
template<class _Ty1,
	class _Ty2> inline
	bool operator<=(const pair<_Ty1, _Ty2>& _Left,
		const pair<_Ty1, _Ty2>& _Right)
	{	
	return (!(_Right < _Left));
	}
template<class _Ty1,
	class _Ty2> inline
	bool operator>=(const pair<_Ty1, _Ty2>& _Left,
		const pair<_Ty1, _Ty2>& _Right)
	{	
	return (!(_Left < _Right));
	}
template<class _Ty1,
	class _Ty2> inline
	pair<typename _Unrefwrap<_Ty1>::type,
		typename _Unrefwrap<_Ty2>::type>
		make_pair(_Ty1&& _Val1, _Ty2&& _Val2)
	{	
	typedef pair<typename _Unrefwrap<_Ty1>::type,
		typename _Unrefwrap<_Ty2>::type> _Mypair;
	return (_Mypair(::std:: forward<_Ty1>(_Val1),
		::std:: forward<_Ty2>(_Val2)));
	}
	namespace rel_ops
		{	
template<class _Ty> inline
	bool operator!=(const _Ty& _Left, const _Ty& _Right)
	{	
	return (!(_Left == _Right));
	}
template<class _Ty> inline
	bool operator>(const _Ty& _Left, const _Ty& _Right)
	{	
	return (_Right < _Left);
	}
template<class _Ty> inline
	bool operator<=(const _Ty& _Left, const _Ty& _Right)
	{	
	return (!(_Right < _Left));
	}
template<class _Ty> inline
	bool operator>=(const _Ty& _Left, const _Ty& _Right)
	{	
	return (!(_Left < _Right));
	}
		}
}
namespace std {
template<class _Tuple>
	struct tuple_size
	{	
	static_assert(_Always_false<_Tuple>::value,
		"The C++ Standard doesn't define tuple_size for this type.");
	};
template<class _Ty1,
	class _Ty2>
	struct tuple_size<pair<_Ty1, _Ty2> >
	: integral_constant<size_t, 2>
	{	
	};
template<class... _Types>
	struct tuple_size<tuple<_Types...> >
	: integral_constant<size_t, sizeof...(_Types)>
	{	
	};
template<class _Tuple>
	struct tuple_size<const _Tuple>
	: tuple_size<_Tuple>
	{	
	};
template<class _Tuple>
	struct tuple_size<volatile _Tuple>
	: tuple_size<_Tuple>
	{	
	};
template<class _Tuple>
	struct tuple_size<const volatile _Tuple>
	: tuple_size<_Tuple>
	{	
	};
template<size_t _Idx,
	class _Tuple>
	struct tuple_element;
template<int _Idx,
	class _Ty>
	struct _Pair_data;
template<class _Ty1,
	class _Ty2>
	struct _Pair_data<0, pair<_Ty1, _Ty2> >
	{	
	typedef typename add_lvalue_reference<const _Ty1>::type _Ctype;
	typedef typename add_lvalue_reference<_Ty1>::type _Rtype;
	typedef typename add_rvalue_reference<_Ty1>::type _RRtype;
	static _Rtype _Val(pair<_Ty1, _Ty2>& _Pr)
		{	
		return (_Pr.first);
		}
	static _Ctype _Val(const pair<_Ty1, _Ty2>& _Pr)
		{	
		return (_Pr.first);
		}
	static _RRtype _Val(pair<_Ty1, _Ty2>&& _Pr)
		{	
		return (::std:: forward<_Ty1>(_Pr.first));
		}
	};
template<class _Ty1,
	class _Ty2>
	struct _Pair_data<1, pair<_Ty1, _Ty2> >
	{	
	typedef typename add_lvalue_reference<const _Ty2>::type _Ctype;
	typedef typename add_lvalue_reference<_Ty2>::type _Rtype;
	typedef typename add_rvalue_reference<_Ty2>::type _RRtype;
	static _Rtype _Val(pair<_Ty1, _Ty2>& _Pr)
		{	
		return (_Pr.second);
		}
	static _Ctype _Val(const pair<_Ty1, _Ty2>& _Pr)
		{	
		return (_Pr.second);
		}
	static _RRtype _Val(pair<_Ty1, _Ty2>&& _Pr)
		{	
		return (::std:: forward<_Ty2>(_Pr.second));
		}
	};
template<class _Ty1,
	class _Ty2>
	struct tuple_element<0, pair<_Ty1, _Ty2> >
	{	
	typedef _Ty1 type;
	};
template<class _Ty1,
	class _Ty2>
	struct tuple_element<1, pair<_Ty1, _Ty2> >
	{	
	typedef _Ty2 type;
	};
template<int _Idx,
	class _Ty1,
	class _Ty2> inline
	typename _Pair_data<_Idx, pair<_Ty1, _Ty2> >::_Rtype
		get(pair<_Ty1, _Ty2>& _Pr) throw ()
	{	
	return (_Pair_data<_Idx, pair<_Ty1, _Ty2> >::_Val(_Pr));
	}
template<int _Idx,
	class _Ty1,
	class _Ty2> inline
	typename _Pair_data<_Idx, pair<_Ty1, _Ty2> >::_Ctype
		get(const pair<_Ty1, _Ty2>& _Pr) throw ()
	{	
	return (_Pair_data<_Idx, pair<_Ty1, _Ty2> >::_Val(_Pr));
	}
template<int _Idx,
	class _Ty1,
	class _Ty2> inline
	typename _Pair_data<_Idx, pair<_Ty1, _Ty2> >::_RRtype
		get(pair<_Ty1, _Ty2>&& _Pr) throw ()
	{	
	typedef typename _Pair_data<_Idx, pair<_Ty1, _Ty2> >::_RRtype
		_RRtype;
	return (::std:: forward<_RRtype>(
		_Pair_data<_Idx, pair<_Ty1, _Ty2> >::_Val(_Pr)));
	}
}
namespace std {
namespace tr1 {	
using ::std:: get;
using ::std:: tuple_element;
using ::std:: tuple_size;
}	
}
 #pragma warning(pop)
 #pragma pack(pop)
 #pragma pack(push,8)
 #pragma warning(push,3)
namespace std {
typedef const wchar_t *_Dbfile_t;
typedef unsigned int _Dbline_t;
__declspec(dllimport) void __cdecl _Debug_message(const wchar_t *,
	const wchar_t *, unsigned int);
struct _Container_proxy;
struct _Container_base12;
struct _Iterator_base12;
struct __declspec(dllimport) _Container_base0
	{	
	void _Orphan_all()
		{	
		}
	void _Swap_all(_Container_base0&)
		{	
		}
	};
struct _Iterator_base0
	{	
	void _Adopt(const void *)
		{	
		}
	const _Container_base0 *_Getcont() const
		{	
		return (0);
		}
	};
struct _Container_proxy
	{	
	_Container_proxy()
		: _Mycont(0), _Myfirstiter(0)
		{	
		}
	const _Container_base12 *_Mycont;
	_Iterator_base12 *_Myfirstiter;
	};
struct __declspec(dllimport) _Container_base12
	{	
public:
	_Container_base12()
		: _Myproxy(0)
		{	
		}
	_Container_base12(const _Container_base12&)
		: _Myproxy(0)
		{	
		}
	_Container_base12& operator=(const _Container_base12&)
		{	
		return (*this);
		}
	~_Container_base12() throw ()
		{	
		_Orphan_all();
		}
	_Iterator_base12 **_Getpfirst() const
		{	
		return (_Myproxy == 0 ? 0 : &_Myproxy->_Myfirstiter);
		}
	void _Orphan_all();	
	void _Swap_all(_Container_base12&);	
	_Container_proxy *_Myproxy;
	};
struct _Iterator_base12
	{	
public:
	_Iterator_base12()
		: _Myproxy(0), _Mynextiter(0)
		{	
		}
	_Iterator_base12(const _Iterator_base12& _Right)
		: _Myproxy(0), _Mynextiter(0)
		{	
		*this = _Right;
		}
	_Iterator_base12& operator=(const _Iterator_base12& _Right)
		{	
		if (_Myproxy == _Right._Myproxy)
			;
		else if (_Right._Myproxy != 0)
			_Adopt(_Right._Myproxy->_Mycont);
		else
			{	
			_Lockit _Lock(3);
			_Orphan_me();
			}
		return (*this);
		}
	~_Iterator_base12() throw ()
		{	
		_Lockit _Lock(3);
		_Orphan_me();
		}
	void _Adopt(const _Container_base12 *_Parent)
		{	
		if (_Parent == 0)
			{	
			_Lockit _Lock(3);
			_Orphan_me();
			}
		else
			{	
			_Container_proxy *_Parent_proxy = _Parent->_Myproxy;
			if (_Myproxy != _Parent_proxy)
				{	
				_Lockit _Lock(3);
				_Orphan_me();
				_Mynextiter = _Parent_proxy->_Myfirstiter;
				_Parent_proxy->_Myfirstiter = this;
				_Myproxy = _Parent_proxy;
				}
			}
		}
	void _Clrcont()
		{	
		_Myproxy = 0;
		}
	const _Container_base12 *_Getcont() const
		{	
		return (_Myproxy == 0 ? 0 : _Myproxy->_Mycont);
		}
	_Iterator_base12 **_Getpnext()
		{	
		return (&_Mynextiter);
		}
	void _Orphan_me()
		{	
		if (_Myproxy != 0)
			{	
			_Iterator_base12 **_Pnext = &_Myproxy->_Myfirstiter;
			while (*_Pnext != 0 && *_Pnext != this)
				_Pnext = &(*_Pnext)->_Mynextiter;
			if (*_Pnext == 0)
				_Debug_message(L"ITERATOR LIST CORRUPTED!", L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xutility", 201);
			*_Pnext = _Mynextiter;
			_Myproxy = 0;
			}
		}
	_Container_proxy *_Myproxy;
	_Iterator_base12 *_Mynextiter;
	};
inline void _Container_base12::_Orphan_all()
	{	
	if (_Myproxy != 0)
		{	
		_Lockit _Lock(3);
		for (_Iterator_base12 **_Pnext = &_Myproxy->_Myfirstiter;
			*_Pnext != 0; *_Pnext = (*_Pnext)->_Mynextiter)
			(*_Pnext)->_Myproxy = 0;
		_Myproxy->_Myfirstiter = 0;
		}
	}
inline void _Container_base12::_Swap_all(_Container_base12& _Right)
	{	
	_Lockit _Lock(3);
	_Container_proxy *_Temp = _Myproxy;
	_Myproxy = _Right._Myproxy;
	_Right._Myproxy = _Temp;
	if (_Myproxy != 0)
		_Myproxy->_Mycont = (_Container_base12 *)this;
	if (_Right._Myproxy != 0)
		_Right._Myproxy->_Mycont = (_Container_base12 *)&_Right;
	}
typedef _Container_base12 _Container_base;
typedef _Iterator_base12 _Iterator_base;
template<class _Ty>
	struct _Get_unchecked_type
		{ template<class _Uty> static auto _Fn(int) -> _Identity<typename _Uty::_Unchecked_type>; template<class _Uty> static auto _Fn(_Wrap_int) -> _Identity<_Ty>; typedef decltype(_Fn<_Ty>(0)) _Decltype; typedef typename _Decltype::type type; };
template<class _Ty>
	struct _Is_checked_helper
		{ template<class _Uty> static auto _Fn(int, _Identity<typename _Uty::_Unchecked_type> * = 0, _Identity<typename _Uty::_Unchecked_type> * = 0, _Identity<typename _Uty::_Unchecked_type> * = 0) -> true_type; template<class _Uty> static auto _Fn(_Wrap_int) -> false_type; typedef decltype(_Fn<_Ty>(0)) type; };
template<class _Iter> inline
	typename _Is_checked_helper<_Iter>::type _Is_checked(_Iter)
	{	
	return (typename _Is_checked_helper<_Iter>::type());
	}
template<class _Iter> inline
	_Iter _Unchecked(_Iter _Src)
	{	
	return (_Src);
	}
template<class _Iter,
	class _UIter> inline
	_Iter& _Rechecked(_Iter& _Dest, _UIter _Src)
	{	
	_Dest = _Src;
	return (_Dest);
	}
struct input_iterator_tag
	{	
	};
struct _Mutable_iterator_tag
	{	
	};
struct output_iterator_tag
	: _Mutable_iterator_tag
	{	
	};
struct forward_iterator_tag
	: input_iterator_tag, _Mutable_iterator_tag
	{	
	};
struct bidirectional_iterator_tag
	: forward_iterator_tag
	{	
	};
struct random_access_iterator_tag
	: bidirectional_iterator_tag
	{	
	};
struct _Nonscalar_ptr_iterator_tag
	{	
	};
struct _Scalar_ptr_iterator_tag
	{	
	};
template<class _Category,
	class _Ty,
	class _Diff = ptrdiff_t,
	class _Pointer = _Ty *,
	class _Reference = _Ty&>
	struct iterator
	{	
	typedef _Category iterator_category;
	typedef _Ty value_type;
	typedef _Diff difference_type;
	typedef _Diff distance_type;	
	typedef _Pointer pointer;
	typedef _Reference reference;
	};
template<class _Category,
	class _Ty,
	class _Diff,
	class _Pointer,
	class _Reference,
	class _Base>
	struct _Iterator012
		: public _Base
	{	
	typedef _Category iterator_category;
	typedef _Ty value_type;
	typedef _Diff difference_type;
	typedef _Diff distance_type;	
	typedef _Pointer pointer;
	typedef _Reference reference;
	};
typedef iterator<output_iterator_tag, void, void, void, void> _Outit;
template<class _Iter>
	struct iterator_traits
	{	
	typedef typename _Iter::iterator_category iterator_category;
	typedef typename _Iter::value_type value_type;
	typedef typename _Iter::difference_type difference_type;
	typedef difference_type distance_type;	
	typedef typename _Iter::pointer pointer;
	typedef typename _Iter::reference reference;
	};
template<class _Ty>
	struct iterator_traits<_Ty *>
	{	
	typedef random_access_iterator_tag iterator_category;
	typedef _Ty value_type;
	typedef ptrdiff_t difference_type;
	typedef ptrdiff_t distance_type;	
	typedef _Ty *pointer;
	typedef _Ty& reference;
	};
template<class _Ty>
	struct iterator_traits<const _Ty *>
	{	
	typedef random_access_iterator_tag iterator_category;
	typedef _Ty value_type;
	typedef ptrdiff_t difference_type;
	typedef ptrdiff_t distance_type;	
	typedef const _Ty *pointer;
	typedef const _Ty& reference;
	};
template<class _Iter> inline
	typename iterator_traits<_Iter>::iterator_category
		_Iter_cat(const _Iter&)
	{	
	typename iterator_traits<_Iter>::iterator_category _Cat;
	return (_Cat);
	}
template<class _Iter1,
	class _Iter2> inline
	_Nonscalar_ptr_iterator_tag _Ptr_cat(_Iter1&, _Iter2&)
	{	
	_Nonscalar_ptr_iterator_tag _Cat;
	return (_Cat);
	}
template<class _Elem1,
	class _Elem2>
	struct _Ptr_cat_helper
	{	
	typedef _Nonscalar_ptr_iterator_tag type;
	};
template<class _Elem>
	struct _Ptr_cat_helper<_Elem, _Elem>
	{	
	typedef typename _If<is_scalar<_Elem>::value,
		_Scalar_ptr_iterator_tag,
		_Nonscalar_ptr_iterator_tag>::type type;
	};
template<class _Anything>
	struct _Ptr_cat_helper<_Anything *, const _Anything *>
	{	
	typedef _Scalar_ptr_iterator_tag type;
	};
template<class _Elem1,
	class _Elem2> inline
	typename _Ptr_cat_helper<_Elem1, _Elem2>::type
		_Ptr_cat(_Elem1 *, _Elem2 *)
	{	
	typename _Ptr_cat_helper<_Elem1, _Elem2>::type _Cat;
	return (_Cat);
	}
template<class _Elem1,
	class _Elem2> inline
	typename _Ptr_cat_helper<_Elem1, _Elem2>::type
		_Ptr_cat(const _Elem1 *, _Elem2 *)
	{	
	typename _Ptr_cat_helper<_Elem1, _Elem2>::type _Cat;
	return (_Cat);
	}
  #line 477 "c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xutility"
  #line 484 "c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xutility"
  #line 491 "c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xutility"
  #line 500 "c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xutility"
  #line 509 "c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xutility"
template<class _Pr, class _Ty1, class _Ty2> inline
	bool _Debug_lt_pred(_Pr _Pred,
		_Ty1&& _Left, _Ty2&& _Right,
		_Dbfile_t _File, _Dbline_t _Line)
	{	
	if (!_Pred(::std:: forward<_Ty1>(_Left), ::std:: forward<_Ty2>(_Right)))
		return (false);
	else if (_Pred(::std:: forward<_Ty2>(_Right), ::std:: forward<_Ty1>(_Left)))
		_Debug_message(L"invalid operator<", _File, _Line);
	return (true);
	}
template<class _Ty1, class _Ty2> inline
	bool _Debug_lt(_Ty1&& _Left, _Ty2&& _Right,
		_Dbfile_t _File, _Dbline_t _Line)
	{	
	return (_Debug_lt_pred(less<>(),
		::std:: forward<_Ty1>(_Left), ::std:: forward<_Ty2>(_Right), _File, _Line));
	}
template<class _InIt> inline
	void _Debug_pointer(_InIt&, _Dbfile_t, _Dbline_t)
	{	
	}
template<class _Ty> inline
	void _Debug_pointer(const _Ty *_First, _Dbfile_t _File, _Dbline_t _Line)
	{	
	if (_First == 0)
		_Debug_message(L"invalid null pointer", _File, _Line);
	}
template<class _Ty> inline
	void _Debug_pointer(_Ty *_First, _Dbfile_t _File, _Dbline_t _Line)
	{	
	if (_First == 0)
		_Debug_message(L"invalid null pointer", _File, _Line);
	}
template<class _InIt> inline
	void _Debug_range2(_InIt _First, _InIt _Last, _Dbfile_t, _Dbline_t,
		input_iterator_tag)
	{	
	bool _Ans = _First == _Last;	
	_Ans = _Ans;	
	}
template<class _RanIt> inline
	void _Debug_range2(_RanIt _First, _RanIt _Last,
		_Dbfile_t _File, _Dbline_t _Line,
		random_access_iterator_tag)
	{	
	if (_First != _Last)
		{	
		_Debug_pointer(_First, _File, _Line);
		_Debug_pointer(_Last, _File, _Line);
		if (_Last < _First)
			_Debug_message(L"invalid iterator range", _File, _Line);
		}
	}
template<class _InIt> inline
	void _Debug_range(_InIt _First, _InIt _Last,
		_Dbfile_t _File, _Dbline_t _Line)
	{	
	_Debug_range2(_First, _Last, _File, _Line, _Iter_cat(_First));
	}
template<class _InIt> inline
	void _Debug_order2(_InIt, _InIt,
		_Dbfile_t, _Dbline_t, input_iterator_tag)
	{	
	}
template<class _FwdIt> inline
	void _Debug_order2(_FwdIt _First, _FwdIt _Last,
		_Dbfile_t _File, _Dbline_t _Line, forward_iterator_tag)
	{	
	for (_FwdIt _Next = _First; _First != _Last && ++_Next != _Last; ++_First)
		if (_Debug_lt(*_Next, *_First, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xutility", 599))
			_Debug_message(L"sequence not ordered", _File, _Line);
	}
template<class _InIt> inline
	void _Debug_order(_InIt _First, _InIt _Last,
		_Dbfile_t _File, _Dbline_t _Line)
	{	
	_Debug_range(_First, _Last, _File, _Line);
	_Debug_order2(_First, _Last, _File, _Line, _Iter_cat(_First));
	}
template<class _InIt,
	class _Pr> inline
	void _Debug_order2(_InIt, _InIt, _Pr,
		_Dbfile_t, _Dbline_t, input_iterator_tag)
	{	
	}
template<class _FwdIt,
	class _Pr> inline
	void _Debug_order2(_FwdIt _First, _FwdIt _Last, _Pr _Pred,
		_Dbfile_t _File, _Dbline_t _Line, forward_iterator_tag)
	{	
	for (_FwdIt _Next = _First; _First != _Last && ++_Next != _Last; ++_First)
		if (_Debug_lt_pred(_Pred, *_Next, *_First, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xutility", 625))
			_Debug_message(L"sequence not ordered", _File, _Line);
	}
template<class _InIt,
	class _Pr> inline
	void _Debug_order(_InIt _First, _InIt _Last, _Pr _Pred,
		_Dbfile_t _File, _Dbline_t _Line)
	{	
	_Debug_range(_First, _Last, _File, _Line);
	_Debug_pointer(_Pred, _File, _Line);
	_Debug_order2(_First, _Last, _Pred, _File, _Line, _Iter_cat(_First));
	}
template<class _Iter> inline
	typename iterator_traits<_Iter>::value_type *_Val_type(_Iter)
	{	
	return (0);
	}
template<class _InIt,
	class _Diff> inline
	void _Advance(_InIt& _Where, _Diff _Off, input_iterator_tag)
	{	
	if (_Off < 0)
		_Debug_message(L"negative offset in advance", L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xutility", 656);
	for (; 0 < _Off; --_Off)
		++_Where;
	}
template<class _FwdIt,
	class _Diff> inline
	void _Advance(_FwdIt& _Where, _Diff _Off, forward_iterator_tag)
	{	
	if (_Off < 0)
		_Debug_message(L"negative offset in advance", L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xutility", 669);
	for (; 0 < _Off; --_Off)
		++_Where;
	}
template<class _BidIt,
	class _Diff> inline
	void _Advance(_BidIt& _Where, _Diff _Off, bidirectional_iterator_tag)
	{	
	for (; 0 < _Off; --_Off)
		++_Where;
	for (; _Off < 0; ++_Off)
		--_Where;
	}
template<class _RanIt,
	class _Diff> inline
	void _Advance(_RanIt& _Where, _Diff _Off, random_access_iterator_tag)
	{	
	_Where += _Off;
	}
template<class _InIt,
	class _Diff> inline
	void advance(_InIt& _Where, _Diff _Off)
	{	
	_Advance(_Where, _Off, _Iter_cat(_Where));
	}
template<class _Iter> inline
	typename iterator_traits<_Iter>::difference_type
		*_Dist_type(_Iter)
	{	
	return (0);
	}
template<class _InIt,
	class _Diff> inline
		void _Distance2(_InIt _First, _InIt _Last, _Diff& _Off,
			input_iterator_tag)
	{	
	for (; _First != _Last; ++_First)
		++_Off;
	}
template<class _FwdIt,
	class _Diff> inline
		void _Distance2(_FwdIt _First, _FwdIt _Last, _Diff& _Off,
			forward_iterator_tag)
	{	
	for (; _First != _Last; ++_First)
		++_Off;
	}
template<class _BidIt,
	class _Diff> inline
		void _Distance2(_BidIt _First, _BidIt _Last, _Diff& _Off,
			bidirectional_iterator_tag)
	{	
	for (; _First != _Last; ++_First)
		++_Off;
	}
template<class _RanIt,
	class _Diff> inline
		void _Distance2(_RanIt _First, _RanIt _Last, _Diff& _Off,
			random_access_iterator_tag)
	{	
	if (_First != _Last)
		{	
		_Debug_pointer(_First, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xutility", 745);
		_Debug_pointer(_Last, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xutility", 746);
		}
	_Off += _Last - _First;
	}
template<class _InIt> inline
	typename iterator_traits<_InIt>::difference_type
		distance(_InIt _First, _InIt _Last)
	{	
	typename iterator_traits<_InIt>::difference_type _Off = 0;
	_Distance2(_First, _Last, _Off, _Iter_cat(_First));
	return (_Off);
	}
template<class _InIt,
	class _Diff> inline
		void _Distance(_InIt _First, _InIt _Last, _Diff& _Off)
	{	
	_Distance2(_First, _Last, _Off, _Iter_cat(_First));
	}
template<class _FwdIt> inline
	_FwdIt next(_FwdIt _First,
		typename iterator_traits<_FwdIt>::difference_type _Off = 1)
	{	
	static_assert((is_base_of<forward_iterator_tag,
		typename iterator_traits<_FwdIt>::iterator_category>::value),
		"next requires forward iterator");
	::std:: advance(_First, _Off);
	return (_First);
	}
template<class _BidIt> inline
	_BidIt prev(_BidIt _First,
		typename iterator_traits<_BidIt>::difference_type _Off = 1)
	{	
	static_assert((is_base_of<bidirectional_iterator_tag,
		typename iterator_traits<_BidIt>::iterator_category>::value),
		"prev requires bidirectional iterator");
	::std:: advance(_First, -_Off);
	return (_First);
	}
template<class _Ty>
	struct pointer_traits;
template<class _RanIt,
	class _Base>
	class _Revranit
		: public _Base
	{	
public:
	typedef _Revranit<_RanIt, _Base> _Myt;
	typedef typename _Base::difference_type difference_type;
	typedef typename _Base::pointer pointer;
	typedef typename _Base::reference reference;
	typedef _RanIt iterator_type;
	_Revranit()
		{	
		}
	explicit _Revranit(_RanIt _Right)
		: current(_Right)
		{	
		}
	template<class _RanIt2,
		class _Base2>
		_Revranit(const _Revranit<_RanIt2, _Base2>& _Right)
		: current(_Right.base())
		{	
		}
	_RanIt base() const
		{	
		return (current);
		}
	reference operator*() const
		{	
		_RanIt _Tmp = current;
		return (*--_Tmp);
		}
	pointer operator->() const
		{	
		return (::std:: pointer_traits<pointer>::pointer_to(**this));
		}
	_Myt& operator++()
		{	
		--current;
		return (*this);
		}
	_Myt operator++(int)
		{	
		_Myt _Tmp = *this;
		--current;
		return (_Tmp);
		}
	_Myt& operator--()
		{	
		++current;
		return (*this);
		}
	_Myt operator--(int)
		{	
		_Myt _Tmp = *this;
		++current;
		return (_Tmp);
		}
	template<class _RanIt2,
		class _Base2>
		bool _Equal(const _Revranit<_RanIt2, _Base2>& _Right) const
		{	
		return (current == _Right.base());
		}
	_Myt& operator+=(difference_type _Off)
		{	
		current -= _Off;
		return (*this);
		}
	_Myt operator+(difference_type _Off) const
		{	
		return (_Myt(current - _Off));
		}
	_Myt& operator-=(difference_type _Off)
		{	
		current += _Off;
		return (*this);
		}
	_Myt operator-(difference_type _Off) const
		{	
		return (_Myt(current + _Off));
		}
	reference operator[](difference_type _Off) const
		{	
		return (*(*this + _Off));
		}
	template<class _RanIt2,
		class _Base2>
		bool _Less(const _Revranit<_RanIt2, _Base2>& _Right) const
		{	
		return (_Right.base() < current);
		}
	difference_type operator-(const _Myt& _Right) const
		{	
		return (_Right.base() - current);
		}
protected:
	_RanIt current;	
	};
template<class _RanIt,
	class _Base,
	class _Diff> inline
	_Revranit<_RanIt, _Base>
		operator+(_Diff _Off,
		const _Revranit<_RanIt, _Base>& _Right)
	{	
	return (_Right + _Off);
	}
template<class _RanIt1,
	class _Base1,
	class _RanIt2,
	class _Base2>
	auto inline operator-(
		const _Revranit<_RanIt1, _Base1>& _Left,
		const _Revranit<_RanIt2, _Base2>& _Right)
			-> decltype(_Right.base() - _Left.base())
	{	
	return (_Right.base() - _Left.base());
	}
template<class _RanIt1,
	class _Base1,
	class _RanIt2,
	class _Base2> inline
	bool operator==(
		const _Revranit<_RanIt1, _Base1>& _Left,
		const _Revranit<_RanIt2, _Base2>& _Right)
	{	
	return (_Left._Equal(_Right));
	}
template<class _RanIt1,
	class _Base1,
	class _RanIt2,
	class _Base2> inline
	bool operator!=(
		const _Revranit<_RanIt1, _Base1>& _Left,
		const _Revranit<_RanIt2, _Base2>& _Right)
	{	
	return (!(_Left == _Right));
	}
template<class _RanIt1,
	class _Base1,
	class _RanIt2,
	class _Base2> inline
	bool operator<(
		const _Revranit<_RanIt1, _Base1>& _Left,
		const _Revranit<_RanIt2, _Base2>& _Right)
	{	
	return (_Left._Less(_Right));
	}
template<class _RanIt1,
	class _Base1,
	class _RanIt2,
	class _Base2> inline
	bool operator>(
		const _Revranit<_RanIt1, _Base1>& _Left,
		const _Revranit<_RanIt2, _Base2>& _Right)
	{	
	return (_Right < _Left);
	}
template<class _RanIt1,
	class _Base1,
	class _RanIt2,
	class _Base2> inline
	bool operator<=(
		const _Revranit<_RanIt1, _Base1>& _Left,
		const _Revranit<_RanIt2, _Base2>& _Right)
	{	
	return (!(_Right < _Left));
	}
template<class _RanIt1,
	class _Base1,
	class _RanIt2,
	class _Base2> inline
	bool operator>=(
		const _Revranit<_RanIt1, _Base1>& _Left,
		const _Revranit<_RanIt2, _Base2>& _Right)
	{	
	return (!(_Left < _Right));
	}
template<class _RanIt>
	class reverse_iterator
		: public _Revranit<_RanIt, iterator<
			typename iterator_traits<_RanIt>::iterator_category,
			typename iterator_traits<_RanIt>::value_type,
			typename iterator_traits<_RanIt>::difference_type,
			typename iterator_traits<_RanIt>::pointer,
			typename iterator_traits<_RanIt>::reference> >
	{	
	typedef reverse_iterator<_RanIt> _Myt;
	typedef _Revranit<_RanIt, iterator<
		typename iterator_traits<_RanIt>::iterator_category,
		typename iterator_traits<_RanIt>::value_type,
		typename iterator_traits<_RanIt>::difference_type,
		typename iterator_traits<_RanIt>::pointer,
		typename iterator_traits<_RanIt>::reference> > _Mybase;
public:
	typedef typename iterator_traits<_RanIt>::difference_type difference_type;
	typedef typename iterator_traits<_RanIt>::pointer pointer;
	typedef typename iterator_traits<_RanIt>::reference reference;
	typedef _RanIt iterator_type;
	reverse_iterator()
		{	
		}
	explicit reverse_iterator(_RanIt _Right)
		: _Mybase(_Right)
		{	
		}
	template<class _Other>
		reverse_iterator(const reverse_iterator<_Other>& _Right)
		: _Mybase(_Right.base())
		{	
		}
	reverse_iterator(_Mybase _Right)
		: _Mybase(_Right)
		{	
		}
	template<class _Other>
		_Myt& operator=(const reverse_iterator<_Other>& _Right)
		{	
		this->current = _Right.base();
		return (*this);
		}
	_Myt& operator++()
		{	
		++*((_Mybase *)this);
		return (*this);
		}
	_Myt operator++(int)
		{	
		_Myt _Tmp = *this;
		++*this;
		return (_Tmp);
		}
	_Myt& operator--()
		{	
		--*((_Mybase *)this);
		return (*this);
		}
	_Myt operator--(int)
		{	
		_Myt _Tmp = *this;
		--*this;
		return (_Tmp);
		}
	_Myt& operator+=(difference_type _Off)
		{	
		*((_Mybase *)this) += _Off;
		return (*this);
		}
	_Myt operator+(difference_type _Off) const
		{	
		_Myt _Tmp = *this;
		return (_Tmp += _Off);
		}
	_Myt& operator-=(difference_type _Off)
		{	
		*((_Mybase *)this) -= _Off;
		return (*this);
		}
	_Myt operator-(difference_type _Off) const
		{	
		_Myt _Tmp = *this;
		return (_Tmp -= _Off);
		}
	};
template<class _RanIt>
	struct _Is_checked_helper<reverse_iterator<_RanIt> >
		: public _Is_checked_helper<_RanIt>
	{	
	};
template<class _RanIt,
	class _Diff> inline
	reverse_iterator<_RanIt> operator+(_Diff _Off,
		const reverse_iterator<_RanIt>& _Right)
	{	
	return (_Right + _Off);
	}
template<class _RanIt1,
	class _RanIt2>
	auto inline operator-(const reverse_iterator<_RanIt1>& _Left,
		const reverse_iterator<_RanIt2>& _Right)
			-> decltype(_Right.base() - _Left.base())
	{	
	return (_Right.base() - _Left.base());
	}
template<class _RanIt1,
	class _RanIt2> inline
	bool operator==(const reverse_iterator<_RanIt1>& _Left,
		const reverse_iterator<_RanIt2>& _Right)
	{	
	return (_Left._Equal(_Right));
	}
template<class _RanIt1,
	class _RanIt2> inline
	bool operator!=(const reverse_iterator<_RanIt1>& _Left,
		const reverse_iterator<_RanIt2>& _Right)
	{	
	return (!(_Left == _Right));
	}
template<class _RanIt1,
	class _RanIt2> inline
	bool operator<(const reverse_iterator<_RanIt1>& _Left,
		const reverse_iterator<_RanIt2>& _Right)
	{	
	return (_Left._Less(_Right));
	}
template<class _RanIt1,
	class _RanIt2> inline
	bool operator>(const reverse_iterator<_RanIt1>& _Left,
		const reverse_iterator<_RanIt2>& _Right)
	{	
	return (_Right < _Left);
	}
template<class _RanIt1,
	class _RanIt2> inline
	bool operator<=(const reverse_iterator<_RanIt1>& _Left,
		const reverse_iterator<_RanIt2>& _Right)
	{	
	return (!(_Right < _Left));
	}
template<class _RanIt1,
	class _RanIt2> inline
	bool operator>=(const reverse_iterator<_RanIt1>& _Left,
		const reverse_iterator<_RanIt2>& _Right)
	{	
	return (!(_Left < _Right));
	}
template<class _Container>
	auto inline begin(_Container& _Cont) -> decltype(_Cont.begin())
	{	
	return (_Cont.begin());
	}
template<class _Container>
	auto inline begin(const _Container& _Cont) -> decltype(_Cont.begin())
	{	
	return (_Cont.begin());
	}
template<class _Container>
	auto inline end(_Container& _Cont) -> decltype(_Cont.end())
	{	
	return (_Cont.end());
	}
template<class _Container>
	auto inline end(const _Container& _Cont) -> decltype(_Cont.end())
	{	
	return (_Cont.end());
	}
template<class _Ty,
	size_t _Size> inline
	_Ty *begin(_Ty (&_Array)[_Size])
	{	
	return (_Array);
	}
template<class _Ty,
	size_t _Size> inline
	_Ty *end(_Ty (&_Array)[_Size])
	{	
	return (_Array + _Size);
	}
template<class _Container>
	auto inline cbegin(const _Container& _Cont) -> decltype(::std:: begin(_Cont))
	{	
	return (::std:: begin(_Cont));
	}
template<class _Container>
	auto inline cend(const _Container& _Cont) -> decltype(::std:: end(_Cont))
	{	
	return (::std:: end(_Cont));
	}
template<class _Container>
	auto inline rbegin(_Container& _Cont) -> decltype(_Cont.rbegin())
	{	
	return (_Cont.rbegin());
	}
template<class _Container>
	auto inline rbegin(const _Container& _Cont) -> decltype(_Cont.rbegin())
	{	
	return (_Cont.rbegin());
	}
template<class _Container>
	auto inline rend(_Container& _Cont) -> decltype(_Cont.rend())
	{	
	return (_Cont.rend());
	}
template<class _Container>
	auto inline rend(const _Container& _Cont) -> decltype(_Cont.rend())
	{	
	return (_Cont.rend());
	}
template<class _Ty,
	size_t _Size> inline
	reverse_iterator<_Ty *> rbegin(_Ty (&_Array)[_Size])
	{	
	return (reverse_iterator<_Ty *>(_Array + _Size));
	}
template<class _Ty,
	size_t _Size> inline
	reverse_iterator<_Ty *> rend(_Ty (&_Array)[_Size])
	{	
	return (reverse_iterator<_Ty *>(_Array));
	}
template<class _Elem> inline
	reverse_iterator<const _Elem *> rbegin(initializer_list<_Elem> _Ilist)
	{	
	return (reverse_iterator<const _Elem *>(_Ilist.end()));
	}
template<class _Elem> inline
	reverse_iterator<const _Elem *> rend(initializer_list<_Elem> _Ilist)
	{	
	return (reverse_iterator<const _Elem *>(_Ilist.begin()));
	}
template<class _Container>
	auto inline crbegin(const _Container& _Cont) -> decltype(::std:: rbegin(_Cont))
	{	
	return (::std:: rbegin(_Cont));
	}
template<class _Container>
	auto inline crend(const _Container& _Cont) -> decltype(::std:: rend(_Cont))
	{	
	return (::std:: rend(_Cont));
	}
template<class _Ty,
	size_t _Size>
	class _Array_const_iterator
		: public _Iterator012<random_access_iterator_tag,
			_Ty,
			ptrdiff_t,
			const _Ty *,
			const _Ty&,
			_Iterator_base>
	{	
public:
	typedef _Array_const_iterator<_Ty, _Size> _Myiter;
	typedef random_access_iterator_tag iterator_category;
	typedef _Ty value_type;
	typedef size_t size_type;
	typedef ptrdiff_t difference_type;
	typedef const _Ty *pointer;
	typedef const _Ty& reference;
	enum {_EEN_SIZE = _Size};	
	enum {_EEN_IDL =
		2};	
	_Array_const_iterator()
		{	
		_Ptr = 0;
		_Idx = 0;
		}
	explicit _Array_const_iterator(pointer _Parg, size_t _Off = 0)
		{	
		_Ptr = _Parg;
		_Idx = _Off;
		}
	typedef pointer _Unchecked_type;
	_Myiter& _Rechecked(_Unchecked_type _Right)
		{	
		_Idx = _Right - _Ptr;
		return (*this);
		}
	_Unchecked_type _Unchecked() const
		{	
		return (_Ptr + _Idx);
		}
	reference operator*() const
		{	
		if (_Ptr == 0
			|| _Size <= _Idx)
			{	
			_Debug_message(L"array iterator not dereferencable", L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xutility", 1484);
			{ (void) ((!!(("Standard C++ Libraries Out of Range" && 0))) || (1 != _CrtDbgReportW(2, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xutility", 1485, 0, L"%s", L"\"Standard C++ Libraries Out of Range\" && 0")) || (__debugbreak(), 0)); ::_invalid_parameter(L"\"out of range\"", __LPREFIX( __FUNCTION__), L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xutility", 1485, 0); };
			}
		;
		return (_Ptr[_Idx]);
		}
	pointer operator->() const
		{	
		return (::std:: pointer_traits<pointer>::pointer_to(**this));
		}
	_Myiter& operator++()
		{	
		if (_Ptr == 0
			|| _Size <= _Idx)
			{	
			_Debug_message(L"array iterator not incrementable", L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xutility", 1509);
			{ (void) ((!!(("Standard C++ Libraries Out of Range" && 0))) || (1 != _CrtDbgReportW(2, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xutility", 1510, 0, L"%s", L"\"Standard C++ Libraries Out of Range\" && 0")) || (__debugbreak(), 0)); ::_invalid_parameter(L"\"out of range\"", __LPREFIX( __FUNCTION__), L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xutility", 1510, 0); };
			}
		++_Idx;
		return (*this);
		}
	_Myiter operator++(int)
		{	
		_Myiter _Tmp = *this;
		++*this;
		return (_Tmp);
		}
	_Myiter& operator--()
		{	
		if (_Ptr == 0
			|| _Idx <= 0)
			{	
			_Debug_message(L"array iterator not decrementable", L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xutility", 1535);
			{ (void) ((!!(("Standard C++ Libraries Out of Range" && 0))) || (1 != _CrtDbgReportW(2, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xutility", 1536, 0, L"%s", L"\"Standard C++ Libraries Out of Range\" && 0")) || (__debugbreak(), 0)); ::_invalid_parameter(L"\"out of range\"", __LPREFIX( __FUNCTION__), L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xutility", 1536, 0); };
			}
		--_Idx;
		return (*this);
		}
	_Myiter operator--(int)
		{	
		_Myiter _Tmp = *this;
		--*this;
		return (_Tmp);
		}
	_Myiter& operator+=(difference_type _Off)
		{	
		if (_Size < _Idx + _Off)
			{	
			_Debug_message(L"array iterator + offset out of range", L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xutility", 1560);
			{ (void) ((!!(("Standard C++ Libraries Out of Range" && 0))) || (1 != _CrtDbgReportW(2, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xutility", 1561, 0, L"%s", L"\"Standard C++ Libraries Out of Range\" && 0")) || (__debugbreak(), 0)); ::_invalid_parameter(L"\"out of range\"", __LPREFIX( __FUNCTION__), L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xutility", 1561, 0); };
			}
		_Idx += _Off;
		return (*this);
		}
	_Myiter operator+(difference_type _Off) const
		{	
		_Myiter _Tmp = *this;
		return (_Tmp += _Off);
		}
	_Myiter& operator-=(difference_type _Off)
		{	
		return (*this += -_Off);
		}
	_Myiter operator-(difference_type _Off) const
		{	
		_Myiter _Tmp = *this;
		return (_Tmp -= _Off);
		}
	difference_type operator-(const _Myiter& _Right) const
		{	
		_Compat(_Right);
		return (_Idx < _Right._Idx
			? -(difference_type)(_Right._Idx - _Idx)
			: (difference_type)_Idx - _Right._Idx);
		}
	reference operator[](difference_type _Off) const
		{	
		return (*(*this + _Off));
		}
	bool operator==(const _Myiter& _Right) const
		{	
		_Compat(_Right);
		return (_Idx == _Right._Idx);
		}
	bool operator!=(const _Myiter& _Right) const
		{	
		return (!(*this == _Right));
		}
	bool operator<(const _Myiter& _Right) const
		{	
		_Compat(_Right);
		return (_Idx < _Right._Idx);
		}
	bool operator>(const _Myiter& _Right) const
		{	
		return (_Right < *this);
		}
	bool operator<=(const _Myiter& _Right) const
		{	
		return (!(_Right < *this));
		}
	bool operator>=(const _Myiter& _Right) const
		{	
		return (!(*this < _Right));
		}
	void _Compat(const _Myiter& _Right) const
		{	
		if (_Ptr != _Right._Ptr)
			{	
			_Debug_message(L"array iterators incompatible", L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xutility", 1639);
			{ (void) ((!!(("Standard C++ Libraries Invalid Argument" && 0))) || (1 != _CrtDbgReportW(2, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xutility", 1640, 0, L"%s", L"\"Standard C++ Libraries Invalid Argument\" && 0")) || (__debugbreak(), 0)); ::_invalid_parameter(L"\"invalid argument\"", __LPREFIX( __FUNCTION__), L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xutility", 1640, 0); };
			}
		}
	pointer _Ptr;	
	size_t _Idx;	
	};
template<class _Ty,
	size_t _Size> inline
	typename _Array_const_iterator<_Ty, _Size>::_Unchecked_type
		_Unchecked(_Array_const_iterator<_Ty, _Size> _Iter)
	{	
	return (_Iter._Unchecked());
	}
template<class _Ty,
	size_t _Size> inline
	_Array_const_iterator<_Ty, _Size>&
		_Rechecked(_Array_const_iterator<_Ty, _Size>& _Iter,
			typename _Array_const_iterator<_Ty, _Size>
				::_Unchecked_type _Right)
	{	
	return (_Iter._Rechecked(_Right));
	}
template<class _Ty,
	size_t _Size> inline
	_Array_const_iterator<_Ty, _Size> operator+(
		typename _Array_const_iterator<_Ty, _Size>::difference_type _Off,
		_Array_const_iterator<_Ty, _Size> _Next)
	{	
	return (_Next += _Off);
	}
template<class _Ty,
	size_t _Size>
	class _Array_iterator
		: public _Array_const_iterator<_Ty, _Size>
	{	
public:
	typedef _Array_iterator<_Ty, _Size> _Myiter;
	typedef _Array_const_iterator<_Ty, _Size> _Mybase;
	typedef random_access_iterator_tag iterator_category;
	typedef _Ty value_type;
	typedef size_t size_type;
	typedef ptrdiff_t difference_type;
	typedef _Ty *pointer;
	typedef _Ty& reference;
	_Array_iterator()
		{	
		}
	explicit _Array_iterator(pointer _Parg, size_t _Off = 0)
		: _Mybase(_Parg, _Off)
		{	
		}
	enum {_EEN_SIZE = _Size};	
	enum {_EEN_IDL =
		2};	
	typedef pointer _Unchecked_type;
	_Myiter& _Rechecked(_Unchecked_type _Right)
		{	
		((_Mybase *)this)->_Rechecked(_Right);
		return (*this);
		}
	_Unchecked_type _Unchecked() const
		{	
		return ((pointer)((_Mybase *)this)->_Unchecked());
		}
	reference operator*() const
		{	
		return ((reference)**(_Mybase *)this);
		}
	pointer operator->() const
		{	
		return (::std:: pointer_traits<pointer>::pointer_to(**this));
		}
	_Myiter& operator++()
		{	
		++*(_Mybase *)this;
		return (*this);
		}
	_Myiter operator++(int)
		{	
		_Myiter _Tmp = *this;
		++*this;
		return (_Tmp);
		}
	_Myiter& operator--()
		{	
		--*(_Mybase *)this;
		return (*this);
		}
	_Myiter operator--(int)
		{	
		_Myiter _Tmp = *this;
		--*this;
		return (_Tmp);
		}
	_Myiter& operator+=(difference_type _Off)
		{	
		*(_Mybase *)this += _Off;
		return (*this);
		}
	_Myiter operator+(difference_type _Off) const
		{	
		_Myiter _Tmp = *this;
		return (_Tmp += _Off);
		}
	_Myiter& operator-=(difference_type _Off)
		{	
		return (*this += -_Off);
		}
	_Myiter operator-(difference_type _Off) const
		{	
		_Myiter _Tmp = *this;
		return (_Tmp -= _Off);
		}
	difference_type operator-(const _Mybase& _Right) const
		{	
		return (*(_Mybase *)this - _Right);
		}
	reference operator[](difference_type _Off) const
		{	
		return (*(*this + _Off));
		}
	};
template<class _Ty,
	size_t _Size> inline
	typename _Array_iterator<_Ty, _Size>::_Unchecked_type
		_Unchecked(_Array_iterator<_Ty, _Size> _Iter)
	{	
	return (_Iter._Unchecked());
	}
template<class _Ty,
	size_t _Size> inline
	_Array_iterator<_Ty, _Size>&
		_Rechecked(_Array_iterator<_Ty, _Size>& _Iter,
			typename _Array_iterator<_Ty, _Size>
				::_Unchecked_type _Right)
	{	
	return (_Iter._Rechecked(_Right));
	}
template<class _Ty,
	size_t _Size> inline
	_Array_iterator<_Ty, _Size> operator+(
		typename _Array_iterator<_Ty, _Size>::difference_type _Off,
		_Array_iterator<_Ty, _Size> _Next)
	{	
	return (_Next += _Off);
	}
template<class _RanIt>
	class move_iterator
	{	
public:
	typedef move_iterator<_RanIt> _Myt;
	typedef typename iterator_traits<_RanIt>::iterator_category
		iterator_category;
	typedef typename iterator_traits<_RanIt>::value_type
		value_type;
	typedef typename iterator_traits<_RanIt>::difference_type
		difference_type;
	typedef _RanIt pointer;
	typedef value_type&& reference;
	typedef _RanIt iterator_type;
	move_iterator()
		{	
		}
	explicit move_iterator(iterator_type _Right)
		: current(_Right)
		{	
		}
	template<class _RanIt2>
		move_iterator(const move_iterator<_RanIt2>& _Right)
		: current(_Right.base())
		{	
		}
	template<class _RanIt2>
		_Myt& operator=(const move_iterator<_RanIt2>& _Right)
		{	
		current = _Right.base();
		return (*this);
		}
	_RanIt base() const
		{	
		return (current);
		}
	reference operator*() const
		{	
		return (::std:: move(*current));
		}
	pointer operator->() const
		{	
		return (current);
		}
	_Myt& operator++()
		{	
		++current;
		return (*this);
		}
	_Myt operator++(int)
		{	
		_Myt _Tmp = *this;
		++current;
		return (_Tmp);
		}
	_Myt& operator--()
		{	
		--current;
		return (*this);
		}
	_Myt operator--(int)
		{	
		_Myt _Tmp = *this;
		--current;
		return (_Tmp);
		}
	template<class _RanIt2>
		bool _Equal(const move_iterator<_RanIt2>& _Right) const
		{	
		return (current == _Right.base());
		}
	_Myt& operator+=(difference_type _Off)
		{	
		current += _Off;
		return (*this);
		}
	_Myt operator+(difference_type _Off) const
		{	
		return (_Myt(current + _Off));
		}
	_Myt& operator-=(difference_type _Off)
		{	
		current -= _Off;
		return (*this);
		}
	_Myt operator-(difference_type _Off) const
		{	
		return (_Myt(current - _Off));
		}
	reference operator[](difference_type _Off) const
		{	
		return (::std:: move(current[_Off]));
		}
	template<class _RanIt2>
		bool _Less(const move_iterator<_RanIt2>& _Right) const
		{	
		return (current < _Right.base());
		}
	difference_type operator-(const _Myt& _Right) const
		{	
		return (current - _Right.base());
		}
protected:
	iterator_type current;	
	};
template<class _RanIt>
	struct _Is_checked_helper<move_iterator<_RanIt> >
		: public _Is_checked_helper<_RanIt>
	{	
	};
template<class _RanIt,
	class _Diff> inline
	move_iterator<_RanIt>
		operator+(_Diff _Off,
		const move_iterator<_RanIt>& _Right)
	{	
	return (_Right + _Off);
	}
template<class _RanIt1,
	class _RanIt2>
	auto inline operator-(
		move_iterator<_RanIt1>& _Left,
		const move_iterator<_RanIt2>& _Right)
			-> decltype(_Left.base() - _Right.base())
	{	
	return (_Left.base() - _Right.base());
	}
template<class _RanIt1,
	class _RanIt2> inline
	bool operator==(
		const move_iterator<_RanIt1>& _Left,
		const move_iterator<_RanIt2>& _Right)
	{	
	return (_Left._Equal(_Right));
	}
template<class _RanIt1,
	class _RanIt2> inline
	bool operator!=(
		const move_iterator<_RanIt1>& _Left,
		const move_iterator<_RanIt2>& _Right)
	{	
	return (!(_Left == _Right));
	}
template<class _RanIt1,
	class _RanIt2> inline
	bool operator<(
		const move_iterator<_RanIt1>& _Left,
		const move_iterator<_RanIt2>& _Right)
	{	
	return (_Left._Less(_Right));
	}
template<class _RanIt1,
	class _RanIt2> inline
	bool operator>(
		const move_iterator<_RanIt1>& _Left,
		const move_iterator<_RanIt2>& _Right)
	{	
	return (_Right < _Left);
	}
template<class _RanIt1,
	class _RanIt2> inline
	bool operator<=(
		const move_iterator<_RanIt1>& _Left,
		const move_iterator<_RanIt2>& _Right)
	{	
	return (!(_Right < _Left));
	}
template<class _RanIt1,
	class _RanIt2> inline
	bool operator>=(
		const move_iterator<_RanIt1>& _Left,
		const move_iterator<_RanIt2>& _Right)
	{	
	return (!(_Left < _Right));
	}
template<class _RanIt> inline
	move_iterator<_RanIt> make_move_iterator(_RanIt _Iter)
	{	
	return (move_iterator<_RanIt>(_Iter));
	}
template<class _InIt,
	class _OutIt> inline
	_OutIt _Copy_impl(_InIt _First, _InIt _Last,
		_OutIt _Dest, _Nonscalar_ptr_iterator_tag)
	{	
	for (; _First != _Last; ++_Dest, ++_First)
		*_Dest = *_First;
	return (_Dest);
	}
template<class _InIt,
	class _OutIt> inline
	_OutIt _Copy_impl(_InIt _First, _InIt _Last,
		_OutIt _Dest, _Scalar_ptr_iterator_tag)
	{	
	ptrdiff_t _Count = _Last - _First;
	:: memmove(&*_Dest, &*_First,
		_Count * sizeof (*_First));
	return (_Dest + _Count);
	}
template<class _InIt,
	class _OutIt> inline
	_OutIt _Copy_impl(_InIt _First, _InIt _Last,
		_OutIt _Dest)
	{	
	return (_Copy_impl(_First, _Last,
		_Dest, _Ptr_cat(_First, _Dest)));
	}
template<class _InIt,
	class _OutIt> inline
	_OutIt _Copy_impl(_InIt _First, _InIt _Last,
		_OutIt _Dest, input_iterator_tag, _Mutable_iterator_tag)
	{	
	return (_Copy_impl(_First, _Last,
		_Dest));
	}
template<class _InIt,
	class _OutIt> inline
	_OutIt _Copy_impl(_InIt _First, _InIt _Last,
		_OutIt _Dest, random_access_iterator_tag, random_access_iterator_tag)
	{	
	_OutIt _Ans = _Dest + (_Last - _First);	
	_Copy_impl(_First, _Last,
		_Unchecked(_Dest));
	return (_Ans);
	}
template<class _InIt,
	class _OutIt> inline
	_OutIt _Copy_impl(_InIt _First, _InIt _Last,
		_OutIt _Dest, true_type)
	{	
	return (_Copy_impl(_First, _Last,
		_Dest, _Iter_cat(_First), _Iter_cat(_Dest)));
	}
template<class _InIt,
	class _OutIt> inline
__declspec(deprecated("Function call with parameters that may be unsafe - this call relies on the caller to check that the passed values are correct. " "To disable this warning, use -D_SCL_SECURE_NO_WARNINGS. See documentation on how to use Visual C++ 'Checked Iterators'"))
	_OutIt _Copy_impl(_InIt _First, _InIt _Last,
		_OutIt _Dest, false_type)
	{	
	return (_Copy_impl(_First, _Last,
		_Dest, _Iter_cat(_First), _Iter_cat(_Dest)));
	}
template<class _InIt,
	class _OutIt> inline
	_OutIt copy(_InIt _First, _InIt _Last,
		_OutIt _Dest)
	{	
	if (_First == _Last)
		return (_Dest);
	else
		{	
		_Debug_range(_First, _Last, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xutility", 2129);
		_Debug_pointer(_Dest, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xutility", 2130);
		return (_Copy_impl(_Unchecked(_First), _Unchecked(_Last),
			_Dest, _Is_checked(_Dest)));
		}
	}
template<class _InIt,
	class _OutTy,
	size_t _OutSize> inline
	_OutTy *copy(_InIt _First, _InIt _Last,
		_OutTy (&_Dest)[_OutSize])
	{	
	return (_Unchecked(
		::std:: copy(_First, _Last,
			_Array_iterator<_OutTy, _OutSize>(_Dest))));
	}
template<class _InIt,
	class _Diff,
	class _OutIt> inline
	_OutIt _Copy_n(_InIt _First, _Diff _Count,
		_OutIt _Dest, input_iterator_tag)
	{	
	*_Dest = *_First;	
	while (0 < --_Count)
		*++_Dest = *++_First;
	return (++_Dest);
	}
template<class _InIt,
	class _Diff,
	class _OutIt> inline
	_OutIt _Copy_n(_InIt _First, _Diff _Count,
		_OutIt _Dest, forward_iterator_tag)
	{	
	for (; 0 < _Count; --_Count, ++_Dest, ++_First)
		*_Dest = *_First;
	return (_Dest);
	}
template<class _InIt,
	class _Diff,
	class _OutIt> inline
	_OutIt _Copy_n(_InIt _First, _Diff _Count,
		_OutIt _Dest, _Nonscalar_ptr_iterator_tag)
	{	
	return (_Copy_n(_First, _Count,
		_Dest, _Iter_cat(_First)));
	}
template<class _InIt,
	class _Diff,
	class _OutIt> inline
	_OutIt _Copy_n(_InIt _First, _Diff _Count,
		_OutIt _Dest, _Scalar_ptr_iterator_tag)
	{	
	:: memmove(&*_Dest, &*_First,
		_Count * sizeof (*_First));
	return (_Dest + _Count);
	}
template<class _InIt,
	class _Diff,
	class _OutIt> inline
	_OutIt _Copy_n(_InIt _First, _Diff _Count,
		_OutIt _Dest)
	{	
	return (_Copy_n(_First, _Count,
		_Dest, _Ptr_cat(_First, _Dest)));
	}
template<class _InIt,
	class _Diff,
	class _OutIt> inline
	_OutIt _Copy_n2(_InIt _First, _Diff _Count,
		_OutIt _Dest, _Mutable_iterator_tag)
	{	
	return (_Copy_n(_First, _Count,
		_Dest));
	}
template<class _InIt,
	class _Diff,
	class _OutIt> inline
	_OutIt _Copy_n2(_InIt _First, _Diff _Count,
		_OutIt _Dest, random_access_iterator_tag)
	{	
	_OutIt _Ans = _Dest + _Count;	
	_Copy_n(_First, _Count,
		_Unchecked(_Dest));
	return (_Ans);
	}
template<class _InIt,
	class _Diff,
	class _OutIt> inline
	_OutIt _Copy_n1(_InIt _First, _Diff _Count,
		_OutIt _Dest, input_iterator_tag)
	{	
	return (_Copy_n2(_First, _Count,
		_Dest, _Iter_cat(_Dest)));
	}
template<class _InIt,
	class _Diff,
	class _OutIt> inline
	_OutIt _Copy_n1(_InIt _First, _Diff _Count,
		_OutIt _Dest, random_access_iterator_tag)
	{	
	_InIt _Last = _First + _Count;	
	_Last = _Last;	
	return (_Copy_n2(_Unchecked(_First), _Count,
		_Dest, _Iter_cat(_Dest)));
	}
template<class _InIt,
	class _Diff,
	class _OutIt> inline
	_OutIt _Copy_n(_InIt _First, _Diff _Count,
		_OutIt _Dest, true_type)
	{	
	return (_Copy_n1(_First, _Count,
		_Dest, _Iter_cat(_First)));
	}
template<class _InIt,
	class _Diff,
	class _OutIt> inline
__declspec(deprecated("Function call with parameters that may be unsafe - this call relies on the caller to check that the passed values are correct. " "To disable this warning, use -D_SCL_SECURE_NO_WARNINGS. See documentation on how to use Visual C++ 'Checked Iterators'"))
	_OutIt _Copy_n(_InIt _First, _Diff _Count,
		_OutIt _Dest, false_type)
	{	
	return (_Copy_n1(_First, _Count,
		_Dest, _Iter_cat(_First)));
	}
template<class _InIt,
	class _Diff,
	class _OutIt> inline
	_OutIt copy_n(_InIt _First, _Diff _Count,
		_OutIt _Dest)
	{	
	_Debug_pointer(_First, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xutility", 2291);
	_Debug_pointer(_Dest, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xutility", 2292);
	if (_Count <= 0)
		return (_Dest);
	else
		return (_Copy_n(_First, _Count,
			_Dest, _Is_checked(_Dest)));
	}
template<class _InTy,
	size_t _InSize,
	class _Diff,
	class _OutIt> inline
	_OutIt copy_n(_InTy (&_First)[_InSize], _Diff _Count,
		_OutIt _Dest)
	{	
	return (::std:: copy_n(_Array_iterator<_InTy, _InSize>(_First), _Count,
		_Dest));
	}
template<class _InIt,
	class _Diff,
	class _OutTy,
	size_t _OutSize> inline
	_OutTy *copy_n(_InIt _First, _Diff _Count,
		_OutTy (&_Dest)[_OutSize])
	{	
	return (_Unchecked(
		::std:: copy_n(_First, _Count,
			_Array_iterator<_OutTy, _OutSize>(_Dest))));
	}
template<class _InTy,
	size_t _InSize,
	class _Diff,
	class _OutTy,
	size_t _OutSize> inline
	_OutTy *copy_n(_InTy (&_First)[_InSize], _Diff _Count,
		_OutTy (&_Dest)[_OutSize])
	{	
	return (_Unchecked(
		::std:: copy_n(_Array_iterator<_InTy, _InSize>(_First), _Count,
			_Array_iterator<_OutTy, _OutSize>(_Dest))));
	}
template<class _BidIt1,
	class _BidIt2> inline
	_BidIt2 _Copy_backward(_BidIt1 _First, _BidIt1 _Last,
		_BidIt2 _Dest, _Nonscalar_ptr_iterator_tag)
	{	
	while (_First != _Last)
		*--_Dest = *--_Last;
	return (_Dest);
	}
template<class _InIt,
	class _OutIt> inline
	_OutIt _Copy_backward(_InIt _First, _InIt _Last,
		_OutIt _Dest, _Scalar_ptr_iterator_tag)
	{	
	ptrdiff_t _Count = _Last - _First;
	:: memmove(&*_Dest - _Count, &*_First,
		_Count * sizeof (*_First));
	return (_Dest - _Count);
	}
template<class _BidIt1,
	class _BidIt2> inline
	_BidIt2 _Copy_backward(_BidIt1 _First, _BidIt1 _Last,
		_BidIt2 _Dest)
	{	
	return (_Copy_backward(_First, _Last,
		_Dest, _Ptr_cat(_First, _Dest)));
	}
template<class _BidIt1,
	class _BidIt2> inline
	_BidIt2 _Copy_backward(_BidIt1 _First, _BidIt1 _Last,
		_BidIt2 _Dest, true_type)
	{	
	return (_Copy_backward(_Unchecked(_First), _Unchecked(_Last),
		_Dest));
	}
template<class _BidIt1,
	class _BidIt2> inline
__declspec(deprecated("Function call with parameters that may be unsafe - this call relies on the caller to check that the passed values are correct. " "To disable this warning, use -D_SCL_SECURE_NO_WARNINGS. See documentation on how to use Visual C++ 'Checked Iterators'"))
	_BidIt2 _Copy_backward(_BidIt1 _First, _BidIt1 _Last,
		_BidIt2 _Dest, false_type)
	{	
	return (_Copy_backward(_Unchecked(_First), _Unchecked(_Last),
		_Dest));
	}
template<class _BidIt1,
	class _BidIt2> inline
	_BidIt2 copy_backward(_BidIt1 _First, _BidIt1 _Last,
		_BidIt2 _Dest)
	{	
	_Debug_range(_First, _Last, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xutility", 2406);
	_Debug_pointer(_Dest, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xutility", 2407);
	return (_Copy_backward(_Unchecked(_First), _Unchecked(_Last),
		_Dest, _Is_checked(_Dest)));
	}
template<class _InIt,
	class _OutIt> inline
	_OutIt _Move(_InIt _First, _InIt _Last,
		_OutIt _Dest, _Nonscalar_ptr_iterator_tag)
	{	
	for (; _First != _Last; ++_Dest, ++_First)
		*_Dest = ::std:: move(*_First);
	return (_Dest);
	}
template<class _InIt,
	class _OutIt> inline
	_OutIt _Move(_InIt _First, _InIt _Last,
		_OutIt _Dest, _Scalar_ptr_iterator_tag)
	{	
	ptrdiff_t _Count = _Last - _First;
	:: memmove(&*_Dest, &*_First,
		_Count * sizeof (*_First));
	return (_Dest + _Count);
	}
template<class _InIt,
	class _OutIt> inline
	_OutIt _Move(_InIt _First, _InIt _Last,
		_OutIt _Dest)
	{	
	return (_Move(_First, _Last,
		_Dest, _Ptr_cat(_First, _Dest)));
	}
template<class _InIt,
	class _OutIt> inline
	_OutIt _Move(_InIt _First, _InIt _Last,
		_OutIt _Dest, input_iterator_tag, _Mutable_iterator_tag)
	{	
	return (_Move(_First, _Last,
		_Dest));
	}
template<class _InIt,
	class _OutIt> inline
	_OutIt _Move(_InIt _First, _InIt _Last,
		_OutIt _Dest, random_access_iterator_tag, random_access_iterator_tag)
	{	
	_OutIt _Ans = _Dest + (_Last - _First);	
	_Move(_First, _Last,
		_Unchecked(_Dest));
	return (_Ans);
	}
template<class _InIt,
	class _OutIt> inline
	_OutIt _Move(_InIt _First, _InIt _Last,
		_OutIt _Dest, true_type)
	{	
	return (_Move(_First, _Last,
		_Dest, _Iter_cat(_First), _Iter_cat(_Dest)));
	}
template<class _InIt,
	class _OutIt> inline
__declspec(deprecated("Function call with parameters that may be unsafe - this call relies on the caller to check that the passed values are correct. " "To disable this warning, use -D_SCL_SECURE_NO_WARNINGS. See documentation on how to use Visual C++ 'Checked Iterators'"))
	_OutIt _Move(_InIt _First, _InIt _Last,
		_OutIt _Dest, false_type)
	{	
	return (_Move(_First, _Last,
		_Dest, _Iter_cat(_First), _Iter_cat(_Dest)));
	}
template<class _InIt,
	class _OutIt> inline
	_OutIt move(_InIt _First, _InIt _Last,
		_OutIt _Dest)
	{	
	_Debug_range(_First, _Last, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xutility", 2500);
	_Debug_pointer(_Dest, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xutility", 2501);
	return (_Move(_Unchecked(_First), _Unchecked(_Last),
		_Dest, _Is_checked(_Dest)));
	}
template<class _InIt,
	class _OutTy,
	size_t _OutSize> inline
	_OutTy *move(_InIt _First, _InIt _Last,
		_OutTy (&_Dest)[_OutSize])
	{	
	return (_Unchecked(
		::std:: move(_First, _Last,
			_Array_iterator<_OutTy, _OutSize>(_Dest))));
	}
template<class _BidIt1,
	class _BidIt2> inline
	_BidIt2 _Move_backward(_BidIt1 _First, _BidIt1 _Last,
		_BidIt2 _Dest, _Nonscalar_ptr_iterator_tag)
	{	
	while (_First != _Last)
		*--_Dest = ::std:: move(*--_Last);
	return (_Dest);
	}
template<class _InIt,
	class _OutIt> inline
	_OutIt _Move_backward(_InIt _First, _InIt _Last,
		_OutIt _Dest, _Scalar_ptr_iterator_tag)
	{	
	ptrdiff_t _Count = _Last - _First;
	:: memmove(&*_Dest - _Count, &*_First,
		_Count * sizeof (*_First));
	return (_Dest - _Count);
	}
template<class _BidIt1,
	class _BidIt2> inline
	_BidIt2 _Move_backward(_BidIt1 _First, _BidIt1 _Last,
		_BidIt2 _Dest)
	{	
	return (_Move_backward(_First, _Last,
		_Dest, _Ptr_cat(_First, _Dest)));
	}
template<class _BidIt1,
	class _BidIt2> inline
	_BidIt2 _Move_backward(_BidIt1 _First, _BidIt1 _Last,
		_BidIt2 _Dest, true_type)
	{	
	return (_Move_backward(_Unchecked(_First), _Unchecked(_Last),
		_Dest));
	}
template<class _BidIt1,
	class _BidIt2> inline
__declspec(deprecated("Function call with parameters that may be unsafe - this call relies on the caller to check that the passed values are correct. " "To disable this warning, use -D_SCL_SECURE_NO_WARNINGS. See documentation on how to use Visual C++ 'Checked Iterators'"))
	_BidIt2 _Move_backward(_BidIt1 _First, _BidIt1 _Last,
		_BidIt2 _Dest, false_type)
	{	
	return (_Move_backward(_Unchecked(_First), _Unchecked(_Last),
		_Dest));
	}
template<class _BidIt1,
	class _BidIt2> inline
	_BidIt2 move_backward(_BidIt1 _First, _BidIt1 _Last,
		_BidIt2 _Dest)
	{	
	_Debug_range(_First, _Last, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xutility", 2587);
	_Debug_pointer(_Dest, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xutility", 2588);
	return (_Move_backward(_Unchecked(_First), _Unchecked(_Last),
		_Dest, _Is_checked(_Dest)));
	}
template<class _FwdIt,
	class _Ty> inline
	void _Fill(_FwdIt _First, _FwdIt _Last, const _Ty& _Val)
	{	
	for (; _First != _Last; ++_First)
		*_First = _Val;
	}
inline void _Fill(char *_First, char *_Last, char _Val)
	{	
	:: memset(_First, _Val, _Last - _First);
	}
inline void _Fill(signed char *_First, signed char *_Last, signed char _Val)
	{	
	:: memset(_First, _Val, _Last - _First);
	}
inline void _Fill(unsigned char *_First, unsigned char *_Last, unsigned char _Val)
	{	
	:: memset(_First, _Val, _Last - _First);
	}
template<class _FwdIt,
	class _Ty> inline
	void fill(_FwdIt _First, _FwdIt _Last, const _Ty& _Val)
	{	
	_Debug_range(_First, _Last, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xutility", 2622);
	_Fill(_Unchecked(_First), _Unchecked(_Last), _Val);
	}
template<class _OutIt,
	class _Diff,
	class _Ty> inline
	_OutIt _Fill_n(_OutIt _Dest, _Diff _Count, const _Ty& _Val)
	{	
	for (; 0 < _Count; --_Count, ++_Dest)
		*_Dest = _Val;
	return (_Dest);
	}
inline char *_Fill_n(char *_Dest, size_t _Count, char _Val)
	{	
	:: memset(_Dest, _Val, _Count);
	return (_Dest + _Count);
	}
inline signed char *_Fill_n(signed char *_Dest, size_t _Count,
	signed char _Val)
	{	
	:: memset(_Dest, _Val, _Count);
	return (_Dest + _Count);
	}
inline unsigned char *_Fill_n(unsigned char *_Dest, size_t _Count,
	unsigned char _Val)
	{	
	:: memset(_Dest, _Val, _Count);
	return (_Dest + _Count);
	}
template<class _OutIt,
	class _Diff,
	class _Ty> inline
	_OutIt _Fill_n1(_OutIt _Dest, _Diff _Count, const _Ty& _Val,
		_Mutable_iterator_tag)
	{	
	return (_Fill_n(_Dest, _Count, _Val));
	}
template<class _OutIt,
	class _Diff,
	class _Ty> inline
	_OutIt _Fill_n1(_OutIt _Dest, _Diff _Count, const _Ty& _Val,
		random_access_iterator_tag)
	{	
	_OutIt _Ans = _Dest + _Count;	
	_Fill_n(_Unchecked(_Dest), _Count, _Val);
	return (_Ans);
	}
template<class _OutIt,
	class _Diff,
	class _Ty> inline
	_OutIt _Fill_n(_OutIt _Dest, _Diff _Count, const _Ty& _Val,
		true_type)
	{	
	return (_Fill_n1(_Dest, _Count, _Val,
		_Iter_cat(_Dest)));
	}
template<class _OutIt,
	class _Diff,
	class _Ty> inline
__declspec(deprecated("Function call with parameters that may be unsafe - this call relies on the caller to check that the passed values are correct. " "To disable this warning, use -D_SCL_SECURE_NO_WARNINGS. See documentation on how to use Visual C++ 'Checked Iterators'"))
	_OutIt _Fill_n(_OutIt _Dest, _Diff _Count, const _Ty& _Val,
		false_type)
	{	
	return (_Fill_n1(_Dest, _Count, _Val,
		_Iter_cat(_Dest)));
	}
template<class _OutIt,
	class _Diff,
	class _Ty> inline
	_OutIt fill_n(_OutIt _Dest, _Diff _Count, const _Ty& _Val)
	{	
	_Debug_pointer(_Dest, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xutility", 2713);
	return (_Fill_n(_Dest, _Count, _Val,
		_Is_checked(_Dest)));
	}
template<class _OutTy,
	size_t _OutSize,
	class _Diff,
	class _Ty> inline
	_OutTy *fill_n(_OutTy (&_Dest)[_OutSize], _Diff _Count, const _Ty& _Val)
	{	
	return (_Unchecked(::std:: fill_n(_Array_iterator<_OutTy, _OutSize>(_Dest),
		_Count, _Val)));
	}
template<class _InIt1,
	class _InIt2> inline
	bool _Equal(_InIt1 _First1, _InIt1 _Last1, _InIt2 _First2)
	{	
	for (; _First1 != _Last1; ++_First1, ++_First2)
		if (!(*_First1 == *_First2))
			return (false);
	return (true);
	}
inline bool _Equal(const char *_First1, const char *_Last1,
	const char *_First2)
	{	
	return (:: memcmp(_First1, _First2, _Last1 - _First1) == 0);
	}
inline bool _Equal(const signed char *_First1, const signed char *_Last1,
	const signed char *_First2)
	{	
	return (:: memcmp(_First1, _First2, _Last1 - _First1) == 0);
	}
inline bool _Equal(const unsigned char *_First1, const unsigned char *_Last1,
	const unsigned char *_First2)
	{	
	return (:: memcmp(_First1, _First2, _Last1 - _First1) == 0);
	}
template<class _InIt1,
	class _InIt2> inline
	bool _Equal1(_InIt1 _First1, _InIt1 _Last1,
		_InIt2 _First2, true_type)
	{	
	return (_Equal(_First1, _Last1,
		_First2));
	}
template<class _InIt1,
	class _InIt2> inline
__declspec(deprecated("Function call with parameters that may be unsafe - this call relies on the caller to check that the passed values are correct. " "To disable this warning, use -D_SCL_SECURE_NO_WARNINGS. See documentation on how to use Visual C++ 'Checked Iterators'"))
	bool _Equal1(_InIt1 _First1, _InIt1 _Last1,
		_InIt2 _First2, false_type)
	{	
	return (_Equal(_First1, _Last1,
		_First2));
	}
template<class _InIt1,
	class _InIt2> inline
	bool equal(_InIt1 _First1, _InIt1 _Last1,
		_InIt2 _First2)
	{	
	_Debug_range(_First1, _Last1, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xutility", 2795);
	_Debug_pointer(_First2, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xutility", 2796);
	return (_Equal1(_Unchecked(_First1), _Unchecked(_Last1),
		_First2, _Is_checked(_First2)));
	}
template<class _InIt1,
	class _InTy,
	size_t _InSize> inline
	bool equal(_InIt1 _First1, _InIt1 _Last1,
		_InTy (&_First2)[_InSize])
	{	
	return (::std:: equal(_First1, _Last1,
		_Array_iterator<_InTy, _InSize>(_First2)));
	}
template<class _InIt1,
	class _InIt2,
	class _Pr> inline
	bool _Equal(_InIt1 _First1, _InIt1 _Last1,
		_InIt2 _First2, _Pr _Pred)
	{	
	for (; _First1 != _Last1; ++_First1, ++_First2)
		if (!_Pred(*_First1, *_First2))
			return (false);
	return (true);
	}
template<class _InIt1,
	class _InIt2,
	class _Pr> inline
	bool _Equal2(_InIt1 _First1, _InIt1 _Last1,
		_InIt2 _First2, _Pr _Pred, true_type)
	{	
	return (_Equal(_First1, _Last1,
		_First2, _Pred));
	}
template<class _InIt1,
	class _InIt2,
	class _Pr> inline
__declspec(deprecated("Function call with parameters that may be unsafe - this call relies on the caller to check that the passed values are correct. " "To disable this warning, use -D_SCL_SECURE_NO_WARNINGS. See documentation on how to use Visual C++ 'Checked Iterators'"))
	bool _Equal2(_InIt1 _First1, _InIt1 _Last1,
		_InIt2 _First2, _Pr _Pred, false_type)
	{	
	return (_Equal(_First1, _Last1,
		_First2, _Pred));
	}
template<class _InIt1,
	class _InIt2,
	class _Pr> inline
	bool equal(_InIt1 _First1, _InIt1 _Last1,
		_InIt2 _First2, _Pr _Pred)
	{	
	_Debug_range(_First1, _Last1, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xutility", 2866);
	_Debug_pointer(_First2, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xutility", 2867);
	return (_Equal2(_Unchecked(_First1), _Unchecked(_Last1),
		_First2, _Pred, _Is_checked(_First2)));
	}
template<class _InIt1,
	class _InTy,
	size_t _InSize,
	class _Pr> inline
	bool equal(_InIt1 _First1, _InIt1 _Last1,
		_InTy (&_First2)[_InSize], _Pr _Pred)
	{	
	return (::std:: equal(_First1, _Last1,
		_Array_iterator<_InTy, _InSize>(_First2), _Pred));
	}
template<class _InIt1,
	class _InIt2> inline
	bool _Lexicographical_compare(_InIt1 _First1, _InIt1 _Last1,
		_InIt2 _First2, _InIt2 _Last2)
	{	
	for (; _First1 != _Last1 && _First2 != _Last2; ++_First1, ++_First2)
		if (_Debug_lt(*_First1, *_First2, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xutility", 2893))
			return (true);
		else if (*_First2 < *_First1)
			return (false);
	return (_First1 == _Last1 && _First2 != _Last2);
	}
inline bool _Lexicographical_compare(
	const unsigned char *_First1, const unsigned char *_Last1,
	const unsigned char *_First2, const unsigned char *_Last2)
	{	
	ptrdiff_t _Num1 = _Last1 - _First1;
	ptrdiff_t _Num2 = _Last2 - _First2;
	int _Ans = :: memcmp(_First1, _First2, _Num1 < _Num2 ? _Num1 : _Num2);
	return (_Ans < 0 || (_Ans == 0 && _Num1 < _Num2));
	}
template<class _InIt1,
	class _InIt2> inline
	bool lexicographical_compare(_InIt1 _First1, _InIt1 _Last1,
		_InIt2 _First2, _InIt2 _Last2)
	{	
	_Debug_range(_First1, _Last1, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xutility", 2927);
	_Debug_range(_First2, _Last2, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xutility", 2928);
	return (_Lexicographical_compare(_Unchecked(_First1), _Unchecked(_Last1),
		_Unchecked(_First2), _Unchecked(_Last2)));
	}
template<class _InIt1,
	class _InIt2,
	class _Pr> inline
	bool _Lexicographical_compare(_InIt1 _First1, _InIt1 _Last1,
		_InIt2 _First2, _InIt2 _Last2, _Pr _Pred)
	{	
	for (; _First1 != _Last1 && _First2 != _Last2; ++_First1, ++_First2)
		if (_Debug_lt_pred(_Pred, *_First1, *_First2, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xutility", 2941))
			return (true);
		else if (_Pred(*_First2, *_First1))
			return (false);
	return (_First1 == _Last1 && _First2 != _Last2);
	}
template<class _InIt1,
	class _InIt2,
	class _Pr> inline
	bool lexicographical_compare(_InIt1 _First1, _InIt1 _Last1,
		_InIt2 _First2, _InIt2 _Last2, _Pr _Pred)
	{	
	_Debug_range(_First1, _Last1, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xutility", 2954);
	_Debug_range(_First2, _Last2, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xutility", 2955);
	_Debug_pointer(_Pred, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xutility", 2956);
	return (_Lexicographical_compare(_Unchecked(_First1), _Unchecked(_Last1),
		_Unchecked(_First2), _Unchecked(_Last2), _Pred));
	}
template<class _Ty,
	class _Ignored> inline
	bool _Within_limits(const _Ty& _Val, true_type, true_type, _Ignored)
	{	
	return ((-128) <= _Val && _Val <= 127);
	}
template<class _Ty> inline
	bool _Within_limits(const _Ty& _Val, true_type, false_type, true_type)
	{	
	return (_Val <= 127 || static_cast<_Ty>((-128)) <= _Val);
	}
template<class _Ty> inline
	bool _Within_limits(const _Ty& _Val, true_type, false_type, false_type)
	{	
	return (_Val <= 127);
	}
template<class _Ty,
	class _Ignored> inline
	bool _Within_limits(const _Ty& _Val, false_type, true_type, _Ignored)
	{	
	return (0 <= _Val && _Val <= 0xff);
	}
template<class _Ty,
	class _Ignored> inline
	bool _Within_limits(const _Ty& _Val, false_type, false_type, _Ignored)
	{	
	return (_Val <= 0xff);
	}
template<class _InIt,
	class _Ty> inline
	bool _Within_limits(_InIt, const _Ty& _Val)
	{	
	typedef typename remove_pointer<_InIt>::type _Elem;
	return (_Within_limits(_Val, is_signed<_Elem>(), is_signed<_Ty>(),
		integral_constant<bool, -1 == static_cast<_Ty>(-1)>()));
	}
template<class _InIt> inline
	bool _Within_limits(_InIt, const bool&)
	{	
	return (true);
	}
template<class _InIt,
	class _Ty> inline
	_InIt _Find(_InIt _First, _InIt _Last, const _Ty& _Val, true_type)
	{	
	if (!_Within_limits(_First, _Val))
		return (_Last);
	_First = static_cast<_InIt>(:: memchr(
		_First, static_cast<unsigned char>(_Val), _Last - _First));
	return (_First ? _First : _Last);
	}
template<class _InIt,
	class _Ty> inline
	_InIt _Find(_InIt _First, _InIt _Last, const _Ty& _Val, false_type)
	{	
	for (; _First != _Last; ++_First)
		if (*_First == _Val)
			break;
	return (_First);
	}
template<class _InIt,
	class _Ty> inline
	_InIt _Find(_InIt _First, _InIt _Last, const _Ty& _Val)
	{	
	typedef integral_constant<bool,
		(  is_same<_InIt, char *>::value
		|| is_same<_InIt, signed char *>::value
		|| is_same<_InIt, unsigned char *>::value
		|| is_same<_InIt, const char *>::value
		|| is_same<_InIt, const signed char *>::value
		|| is_same<_InIt, const unsigned char *>::value)
		&& is_integral<_Ty>::value
	> _Memchr_opt;
	return (_Find(_First, _Last, _Val, _Memchr_opt()));
	}
template<class _InIt,
	class _Ty> inline
	_InIt find(_InIt _First, _InIt _Last, const _Ty& _Val)
	{	
	_Debug_range(_First, _Last, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xutility", 3052);
	return (_Rechecked(_First,
		_Find(_Unchecked(_First), _Unchecked(_Last), _Val)));
	}
template<class _InIt,
	class _Ty,
	class _Pr> inline
	_InIt _Find_pr(_InIt _First, _InIt _Last, const _Ty& _Val, _Pr _Pred)
	{	
	for (; _First != _Last; ++_First)
		if (_Pred(*_First, _Val))
			break;
	return (_First);
	}
template<class _InIt,
	class _Ty> inline
	typename iterator_traits<_InIt>::difference_type
		_Count_np(_InIt _First, _InIt _Last, const _Ty& _Val)
	{	
	typename iterator_traits<_InIt>::difference_type _Count = 0;
	for (; _First != _Last; ++_First)
		if (*_First == _Val)
			++_Count;
	return (_Count);
	}
template<class _InIt,
	class _Ty> inline
	typename iterator_traits<_InIt>::difference_type
		count(_InIt _First, _InIt _Last, const _Ty& _Val)
	{	
	_Debug_range(_First, _Last, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xutility", 3088);
	return (_Count_np(_Unchecked(_First), _Unchecked(_Last), _Val));
	}
template<class _InIt,
	class _Ty,
	class _Pr> inline
	typename iterator_traits<_InIt>::difference_type
		_Count_pr(_InIt _First, _InIt _Last, const _Ty& _Val, _Pr _Pred)
	{	
	typename iterator_traits<_InIt>::difference_type _Count = 0;
	for (; _First != _Last; ++_First)
		if (_Pred(*_First, _Val))
			++_Count;
	return (_Count);
	}
template<class _FwdIt1,
	class _FwdIt2,
	class _Pr> inline
	bool _Is_permutation(_FwdIt1 _First1, _FwdIt1 _Last1,
		_FwdIt2 _First2, _Pr _Pred)
	{	
	for (; _First1 != _Last1; ++_First1, ++_First2)
		if (!_Pred(*_First1, *_First2))
			break;	
	if (_First1 != _Last1)
		{	
		_FwdIt2 _Last2 = _First2;
		advance(_Last2, distance(_First1, _Last1));
		for (_FwdIt1 _Next1 = _First1; _Next1 != _Last1; ++_Next1)
			if (_Next1 == _Find_pr(_First1, _Next1, *_Next1, _Pred))
				{	
				typename iterator_traits<_FwdIt2>::difference_type _Count =
					_Count_pr(_First2, _Last2, *_Next1, _Pred);
				if (_Count == 0
					|| _Count != _Count_pr(_Next1, _Last1, *_Next1, _Pred))
					return (false);	
				}
		}
	return (true);
	}
template<class _FwdIt1,
	class _FwdIt2,
	class _Pr> inline
	bool is_permutation(_FwdIt1 _First1, _FwdIt1 _Last1,
		_FwdIt2 _First2, _Pr _Pred)
	{	
	_Debug_range(_First1, _Last1, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xutility", 3140);
	_Debug_pointer(_Pred, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xutility", 3141);
	return _Is_permutation(_Unchecked(_First1), _Unchecked(_Last1),
		_Unchecked(_First2), _Pred);
	}
template<class _FwdIt1,
	class _FwdIt2> inline
	bool is_permutation(_FwdIt1 _First1, _FwdIt1 _Last1,
		_FwdIt2 _First2)
	{	
	return (::std:: is_permutation(_First1, _Last1,
		_First2, equal_to<>()));
	}
template<class _BidIt> inline
	void _Reverse(_BidIt _First, _BidIt _Last, bidirectional_iterator_tag)
	{	
	for (; _First != _Last && _First != --_Last; ++_First)
		::std:: iter_swap(_First, _Last);
	}
template<class _BidIt> inline
	void reverse(_BidIt _First, _BidIt _Last)
	{	
	_Debug_range(_First, _Last, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xutility", 3167);
	_Reverse(_Unchecked(_First), _Unchecked(_Last), _Iter_cat(_First));
	}
template<class _FwdIt> inline
	void _Rotate(_FwdIt _First, _FwdIt _Mid, _FwdIt _Last,
		forward_iterator_tag)
	{	
	for (_FwdIt _Next = _Mid; ; )
		{	
		::std:: iter_swap(_First, _Next);
		if (++_First == _Mid)
			if (++_Next == _Last)
				break;	
			else
				_Mid = _Next;	
		else if (++_Next == _Last)
			_Next = _Mid;	
		}
	}
template<class _BidIt> inline
	void _Rotate(_BidIt _First, _BidIt _Mid, _BidIt _Last,
		bidirectional_iterator_tag)
	{	
	::std:: reverse(_First, _Mid);
	::std:: reverse(_Mid, _Last);
	::std:: reverse(_First, _Last);
	}
template<class _RanIt,
	class _Diff,
	class _Ty> inline
	void _Rotate(_RanIt _First, _RanIt _Mid, _RanIt _Last, _Diff *, _Ty *)
	{	
	_Diff _Shift = _Mid - _First;
	_Diff _Count = _Last - _First;
	for (_Diff _Factor = _Shift; _Factor != 0; )
		{	
		_Diff _Tmp = _Count % _Factor;
		_Count = _Factor;
		_Factor = _Tmp;
		}
	if (_Count < _Last - _First)
		for (; 0 < _Count; --_Count)
			{	
			_RanIt _Hole = _First + _Count;
			_RanIt _Next = _Hole;
			_RanIt _Next1 = _Next + _Shift == _Last ? _First : _Next + _Shift;
			for (; ; )
				{	
				iter_swap(_Next, _Next1);
				_Next = _Next1;
				_Next1 = _Shift < _Last - _Next1 ? _Next1 + _Shift
					: _First + (_Shift - (_Last - _Next1));
				if (_Next1 == _Hole)
					break;
				}
			}
	}
template<class _RanIt> inline
	void _Rotate(_RanIt _First, _RanIt _Mid, _RanIt _Last,
		random_access_iterator_tag)
	{	
	_Rotate(_First, _Mid, _Last, _Dist_type(_First), _Val_type(_First));
	}
template<class _FwdIt> inline
	_FwdIt rotate(_FwdIt _First, _FwdIt _Mid, _FwdIt _Last)
	{	
	_Debug_range(_First, _Mid, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xutility", 3241);
	_Debug_range(_Mid, _Last, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xutility", 3242);
	if (_First != _Mid && _Mid != _Last)
		_Rotate(_Unchecked(_First), _Unchecked(_Mid), _Unchecked(_Last),
			_Iter_cat(_First));
	::std:: advance(_First, ::std:: distance(_Mid, _Last));
	return (_First);
	}
template<class _Diff, class _Urng>
	class _Rng_from_urng
	{	
public:
	typedef typename make_unsigned<_Diff>::type _Ty0;
	typedef typename _Urng::result_type _Ty1;
	typedef typename _If<sizeof (_Ty1) < sizeof (_Ty0),
		_Ty0, _Ty1>::type _Udiff;
	explicit _Rng_from_urng(_Urng& _Func)
		: _Ref(_Func), _Bits(8 * sizeof (_Udiff)), _Bmask(_Udiff(-1))
		{	
		for (; (_Urng::max)() - (_Urng::min)() < _Bmask; _Bmask >>= 1)
			--_Bits;
		}
	_Diff operator()(_Diff _Index)
		{	
		for (; ; )
			{	
			_Udiff _Ret = 0;	
			_Udiff _Mask = 0;	
			while (_Mask < _Udiff(_Index - 1))
				{	
				_Ret <<= _Bits - 1;	
				_Ret <<= 1;
				_Ret |= _Get_bits();
				_Mask <<= _Bits - 1;	
				_Mask <<= 1;
				_Mask |= _Bmask;
				}
			if (_Ret / _Index < _Mask / _Index
				|| _Mask % _Index == _Udiff(_Index - 1))
				return (_Ret % _Index);
			}
		}
	_Udiff _Get_all_bits()
		{	
		_Udiff _Ret = 0;
		for (size_t _Num = 0; _Num < 8 * sizeof (_Udiff);
			_Num += _Bits)
			{	
			_Ret <<= _Bits - 1;	
			_Ret <<= 1;
			_Ret |= _Get_bits();
			}
		return (_Ret);
		}
private:
	_Udiff _Get_bits()
		{	
		for (; ; )
			{	
			_Udiff _Val = _Ref() - (_Urng::min)();
			if (_Val <= _Bmask)
				return (_Val);
			}
		}
	_Urng& _Ref;	
	size_t _Bits;	
	_Udiff _Bmask;	
public:
	_Rng_from_urng(const _Rng_from_urng&) = delete;
	_Rng_from_urng& operator=(const _Rng_from_urng&) = delete;
	};
template<class _Elem>
	class __declspec(dllimport) _Yarn
	{	
public:
	typedef _Yarn<_Elem> _Myt;
	 _Yarn()
		: _Myptr(0), _Nul(0)
		{	
		}
	 _Yarn(const _Myt& _Right)
		: _Myptr(0), _Nul(0)
		{	
		*this = _Right;
		}
	 _Yarn(const _Elem *_Right)
		: _Myptr(0), _Nul(0)
		{	
		*this = _Right;
		}
	_Myt&  operator=(const _Myt& _Right)
		{	
		return (*this = _Right._Myptr);
		}
	_Myt&  operator=(const _Elem *_Right)
		{	
		if (_Myptr != _Right)
			{	
			_Tidy();
			if (_Right != 0)
				{	
				const _Elem *_Ptr = _Right;
				while (*_Ptr != (_Elem)0)
					++_Ptr;
				size_t _Count = ((const char *)++_Ptr - (const char *)_Right);
				_Myptr = (_Elem *)_malloc_dbg(_Count, 2,
					"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xutility", 3373);
				if (_Myptr != 0)
					:: memcpy(_Myptr, _Right, _Count);
				}
			}
		return (*this);
		}
	 ~_Yarn() throw ()
		{	
		_Tidy();
		}
	bool  empty() const
		{	
		return (_Myptr == 0);
		}
	const _Elem * c_str() const
		{	
		return (_Myptr != 0 ? _Myptr : &_Nul);
		}
	bool  _Empty() const
		{	
		return (_Myptr == 0);
		}
	const _Elem * _C_str() const
		{	
		return (_Myptr != 0 ? _Myptr : &_Nul);
		}
private:
	void  _Tidy()
		{	
		if (_Myptr != 0)
			_free_dbg(_Myptr, 2);
		_Myptr = 0;
		}
	_Elem *_Myptr;	
	_Elem _Nul;		
	};
template<class _Ty,
	class _Alloc>
	struct _Has_allocator_type
	{	
	template<class _Uty>
		static auto _Fn(int)
			-> is_convertible<_Alloc,
				typename _Uty::allocator_type>;
	template<class _Uty>
		static auto _Fn(_Wrap_int)
			-> false_type;
	typedef decltype(_Fn<_Ty>(0)) type;
	};
struct allocator_arg_t
	{	
	};
const allocator_arg_t allocator_arg = allocator_arg_t();
__declspec(dllimport) __declspec(noreturn) void __cdecl _Xbad_alloc();
__declspec(dllimport) __declspec(noreturn) void __cdecl _Xinvalid_argument(  const char *);
__declspec(dllimport) __declspec(noreturn) void __cdecl _Xlength_error(  const char *);
__declspec(dllimport) __declspec(noreturn) void __cdecl _Xout_of_range(  const char *);
__declspec(dllimport) __declspec(noreturn) void __cdecl _Xoverflow_error(  const char *);
__declspec(dllimport) __declspec(noreturn) void __cdecl _Xruntime_error(  const char *);
}
namespace std {
template<class _Ty,
	class _Alloc>
	struct uses_allocator
		: _Has_allocator_type<_Ty, _Alloc>::type
	{	
	};
}	
 #pragma warning(pop)
 #pragma pack(pop)
 #pragma pack(push,8)
 #pragma warning(push,3)
 #pragma warning(disable: 4100)
namespace std {
template<class _Ty> inline
	_Ty *_Allocate(size_t _Count, _Ty *)
	{	
	void *_Ptr = 0;
	if (_Count == 0)
		;
	else if (((size_t)(-1) / sizeof (_Ty) < _Count)
		|| (_Ptr = ::operator new(_Count * sizeof (_Ty))) == 0)
		_Xbad_alloc();	
	return ((_Ty *)_Ptr);
	}
template<class _Ty1,
	class _Ty2> inline
	void _Construct(_Ty1 *_Ptr, _Ty2&& _Val)
	{	
	void *_Vptr = _Ptr;
	::new (_Vptr) _Ty1(::std:: forward<_Ty2>(_Val));
	}
template<class _Ty1> inline
	void _Construct(_Ty1 *_Ptr)
	{	
	void *_Vptr = _Ptr;
	::new (_Vptr) _Ty1();
	}
template<class _Ty> inline
	void _Destroy(_Ty *_Ptr)
	{	
	_Ptr->~_Ty();
	}
template<> inline
	void _Destroy(char *)
	{	
	}
template<> inline
	void _Destroy(wchar_t *)
	{	
	}
template<> inline
	void _Destroy(unsigned short *)
	{	
	}
template<class _Alloc> inline
	void _Destroy_range(typename _Alloc::pointer _First,
		typename _Alloc::pointer _Last, _Alloc& _Al,
		_Nonscalar_ptr_iterator_tag)
	{	
	for (; _First != _Last; ++_First)
		_Al.destroy(_First);
	}
template<class _Alloc> inline
	void _Destroy_range(typename _Alloc::pointer _First,
		typename _Alloc::pointer _Last, _Alloc& _Al,
		_Scalar_ptr_iterator_tag)
	{	
	}
template<class _Alloc> inline
	void _Destroy_range(typename _Alloc::pointer _First,
		typename _Alloc::pointer _Last, _Alloc& _Al)
	{	
	_Destroy_range(_First, _Last, _Al, _Ptr_cat(_First, _Last));
	}
template<class _Alty>
	struct _Is_simple_alloc
		: _Cat_base<is_same<typename _Alty::size_type, size_t>::value
		&& is_same<typename _Alty::difference_type, ptrdiff_t>::value
		&& is_same<typename _Alty::pointer,
			typename _Alty::value_type *>::value
		&& is_same<typename _Alty::const_pointer,
			const typename _Alty::value_type *>::value
		&& is_same<typename _Alty::reference,
			typename _Alty::value_type&>::value
		&& is_same<typename _Alty::const_reference,
			const typename _Alty::value_type&>::value>
	{	
	};
template<class _Value_type>
	struct _Simple_types
	{	
	typedef _Value_type value_type;
	typedef size_t size_type;
	typedef ptrdiff_t difference_type;
	typedef value_type *pointer;
	typedef const value_type *const_pointer;
	typedef value_type& reference;
	typedef const value_type& const_reference;
	};
template<class _Alty,
	class _Pointer>
	struct _Get_voidptr
	{	
	typedef typename _Alty::template rebind<void>::other _Alvoid;
	typedef typename _Alvoid::pointer type;
	};
template<class _Alty,
	class _Ty>
	struct _Get_voidptr<_Alty, _Ty *>
	{	
	typedef void *type;
	};
template<class _Iter>
	struct _Is_iterator
	: public integral_constant<bool, !is_integral<_Iter>::value>
	{	
	};
template<class _Ty>
	struct _Get_first_parameter;
template<template<class, class...> class _Ty,
	class _First,
	class... _Rest>
	struct _Get_first_parameter<_Ty<_First, _Rest...> >
	{	
	typedef _First type;
	};
template<class _Newfirst,
	class _Ty>
	struct _Replace_first_parameter;
template<class _Newfirst,
	template<class, class...> class _Ty,
	class _First,
	class... _Rest>
	struct _Replace_first_parameter<_Newfirst, _Ty<_First, _Rest...> >
	{	
	typedef _Ty<_Newfirst, _Rest...> type;
	};
template<class _Ty>
	struct _Get_element_type
	{ template<class _Uty> static auto _Fn(int) -> _Identity<typename _Uty::element_type>; template<class _Uty> static auto _Fn(_Wrap_int) -> _Identity<typename _Get_first_parameter<_Uty>::type>; typedef decltype(_Fn<_Ty>(0)) _Decltype; typedef typename _Decltype::type type; };
template<class _Ty>
	struct _Get_ptr_difference_type
	{ template<class _Uty> static auto _Fn(int) -> _Identity<typename _Uty::difference_type>; template<class _Uty> static auto _Fn(_Wrap_int) -> _Identity<ptrdiff_t>; typedef decltype(_Fn<_Ty>(0)) _Decltype; typedef typename _Decltype::type type; };
template<class _Ty,
	class _Other>
	struct _Get_rebind_type
	{ template<class _Uty> static auto _Fn(int) -> _Identity<typename _Uty::template rebind<_Other>::other>; template<class _Uty> static auto _Fn(_Wrap_int) -> _Identity<typename _Replace_first_parameter<_Other , _Uty>::type>; typedef decltype(_Fn<_Ty>(0)) _Decltype; typedef typename _Decltype::type type; };
template<class _Ty>
	struct pointer_traits
	{	
	typedef typename _Get_element_type<_Ty>::type element_type;
	typedef _Ty pointer;
	typedef typename _Get_ptr_difference_type<_Ty>::type difference_type;
	template<class _Other>
		using rebind = typename _Get_rebind_type<_Ty, _Other>::type;
	typedef typename _If<is_void<element_type>::value,
		char&,
		typename add_reference<element_type>::type>::type _Reftype;
	static pointer pointer_to(_Reftype _Val)
		{	
		return (_Ty::pointer_to(_Val));
		}
	};
template<class _Ty>
	struct pointer_traits<_Ty *>
	{	
	typedef _Ty element_type;
	typedef _Ty *pointer;
	typedef ptrdiff_t difference_type;
	template<class _Other>
		using rebind = _Other *;
	typedef typename _If<is_void<_Ty>::value,
		char&,
		typename add_reference<_Ty>::type>::type _Reftype;
	static pointer pointer_to(_Reftype _Val)
		{	
		return (::std:: addressof(_Val));
		}
	};
template<class _Ty>
	struct _Get_pointer_type
	{ template<class _Uty> static auto _Fn(int) -> _Identity<typename _Uty::pointer>; template<class _Uty> static auto _Fn(_Wrap_int) -> _Identity<typename _Ty::value_type *>; typedef decltype(_Fn<_Ty>(0)) _Decltype; typedef typename _Decltype::type type; };
template<class _Ty>
	struct _Get_const_pointer_type
	{ template<class _Uty> static auto _Fn(int) -> _Identity<typename _Uty::const_pointer>; template<class _Uty> static auto _Fn(_Wrap_int) -> _Identity<typename pointer_traits<typename _Get_pointer_type<_Ty>::type> ::template rebind<const typename _Ty::value_type>>; typedef decltype(_Fn<_Ty>(0)) _Decltype; typedef typename _Decltype::type type; };
template<class _Ty>
	struct _Get_void_pointer_type
	{ template<class _Uty> static auto _Fn(int) -> _Identity<typename _Uty::void_pointer>; template<class _Uty> static auto _Fn(_Wrap_int) -> _Identity<typename pointer_traits<typename _Get_pointer_type<_Ty>::type> ::template rebind<void>>; typedef decltype(_Fn<_Ty>(0)) _Decltype; typedef typename _Decltype::type type; };
template<class _Ty>
	struct _Get_const_void_pointer_type
	{ template<class _Uty> static auto _Fn(int) -> _Identity<typename _Uty::const_void_pointer>; template<class _Uty> static auto _Fn(_Wrap_int) -> _Identity<typename pointer_traits<typename _Get_pointer_type<_Ty>::type> ::template rebind<const void>>; typedef decltype(_Fn<_Ty>(0)) _Decltype; typedef typename _Decltype::type type; };
template<class _Ty>
	struct _Get_difference_type
	{ template<class _Uty> static auto _Fn(int) -> _Identity<typename _Uty::difference_type>; template<class _Uty> static auto _Fn(_Wrap_int) -> _Identity<typename _Get_ptr_difference_type< typename _Get_pointer_type<_Ty>::type>::type>; typedef decltype(_Fn<_Ty>(0)) _Decltype; typedef typename _Decltype::type type; };
template<class _Ty>
	struct _Get_size_type
	{ template<class _Uty> static auto _Fn(int) -> _Identity<typename _Uty::size_type>; template<class _Uty> static auto _Fn(_Wrap_int) -> _Identity<typename make_unsigned< typename _Get_difference_type<_Ty>::type>::type>; typedef decltype(_Fn<_Ty>(0)) _Decltype; typedef typename _Decltype::type type; };
template<class _Ty>
	struct _Get_propagate_on_container_copy
	{ template<class _Uty> static auto _Fn(int) -> _Identity<typename _Uty::propagate_on_container_copy_assignment>; template<class _Uty> static auto _Fn(_Wrap_int) -> _Identity<false_type>; typedef decltype(_Fn<_Ty>(0)) _Decltype; typedef typename _Decltype::type type; };
template<class _Ty>
	struct _Get_propagate_on_container_move
	{ template<class _Uty> static auto _Fn(int) -> _Identity<typename _Uty::propagate_on_container_move_assignment>; template<class _Uty> static auto _Fn(_Wrap_int) -> _Identity<false_type>; typedef decltype(_Fn<_Ty>(0)) _Decltype; typedef typename _Decltype::type type; };
template<class _Ty>
	struct _Get_propagate_on_container_swap
	{ template<class _Uty> static auto _Fn(int) -> _Identity<typename _Uty::propagate_on_container_swap>; template<class _Uty> static auto _Fn(_Wrap_int) -> _Identity<false_type>; typedef decltype(_Fn<_Ty>(0)) _Decltype; typedef typename _Decltype::type type; };
struct _Alloc_allocate
	{	
	template<class _Alloc,
		class _Size_type,
		class _Const_void_pointer>
		static auto _Fn(int, _Alloc& _Al,
			_Size_type _Count,
			_Const_void_pointer _Hint)
			-> decltype(_Al.allocate(_Count, _Hint))
		{	
		return (_Al.allocate(_Count, _Hint));
		}
	template<class _Alloc,
		class _Size_type,
		class _Const_void_pointer>
		static auto _Fn(_Wrap_int, _Alloc& _Al,
			_Size_type _Count,
			_Const_void_pointer)
			-> decltype(_Al.allocate(_Count))
		{	
		return (_Al.allocate(_Count));
		}
	};
struct _Alloc_construct
	{	
	template<class _Ty,
		class _Objty,
		class... _Types>
		static auto _Fn(int, _Ty& _Al, _Objty *_Ptr,
			_Types&&... _Args)
			-> decltype(
				_Al.construct(_Ptr, ::std:: forward<_Types>(_Args)...))
		{	
		_Al.construct(_Ptr, ::std:: forward<_Types>(_Args)...);
		}
	template<class _Ty,
		class _Objty,
		class... _Types>
		static auto _Fn(_Wrap_int, _Ty&, _Objty *_Ptr,
			_Types&&... _Args)
			-> void
		{	
		::new (static_cast<void *>(_Ptr))
			_Objty(::std:: forward<_Types>(_Args)...);
		}
	};
struct _Alloc_destroy
	{	
	template<class _Ty,
		class _Objty>
		static auto _Fn(int, _Ty& _Al, _Objty *_Ptr)
			-> decltype(_Al.destroy(_Ptr))
		{	
		_Al.destroy(_Ptr);
		}
	template<class _Ty,
		class _Objty>
		static auto _Fn(_Wrap_int, _Ty&, _Objty *_Ptr)
			-> void
		{	
		_Ptr->~_Objty();
		}
	};
struct _Alloc_max_size
	{	
	template<class _Ty>
		static auto _Fn(int, const _Ty& _Al)
			-> decltype(_Al.max_size())
		{	
		return (_Al.max_size());
		}
	template<class _Ty>
		static auto _Fn(_Wrap_int, const _Ty&)
			-> typename _Get_size_type<_Ty>::type
		{	
		return ((numeric_limits<typename _Get_size_type<_Ty>::type>::max)());
		}
	};
struct _Alloc_select
	{	
	template<class _Ty>
		static auto _Fn(int, const _Ty& _Al)
			-> decltype((_Ty)_Al.select_on_container_copy_construction())
		{	
		return (_Al.select_on_container_copy_construction());
		}
	template<class _Ty>
		static auto _Fn(_Wrap_int, const _Ty& _Al)
			-> _Ty
		{	
		return (_Al);
		}
	};
template<class _Alloc>
	struct allocator_traits
	{	
	typedef allocator_traits<_Alloc> other;
	typedef _Alloc allocator_type;
	typedef typename _Alloc::value_type value_type;
	typedef typename _Get_pointer_type<_Alloc>::type
		pointer;
	typedef typename _Get_const_pointer_type<_Alloc>::type
		const_pointer;
	typedef typename _Get_void_pointer_type<_Alloc>::type
		void_pointer;
	typedef typename _Get_const_void_pointer_type<_Alloc>::type
		const_void_pointer;
	typedef typename _Get_size_type<_Alloc>::type size_type;
	typedef typename _Get_difference_type<_Alloc>::type difference_type;
	typedef typename _Get_propagate_on_container_copy<_Alloc>::type
		propagate_on_container_copy_assignment;
	typedef typename _Get_propagate_on_container_move<_Alloc>::type
		propagate_on_container_move_assignment;
	typedef typename _Get_propagate_on_container_swap<_Alloc>::type
		propagate_on_container_swap;
	template<class _Other>
		using rebind_alloc = typename _Get_rebind_type<_Alloc, _Other>::type;
	template<class _Other>
		using rebind_traits = allocator_traits<rebind_alloc<_Other> >;
	static pointer allocate(_Alloc& _Al, size_type _Count)
		{	
		return (_Al.allocate(_Count));
		}
	static pointer allocate(_Alloc& _Al, size_type _Count,
		const_void_pointer _Hint)
		{	
		return (_Alloc_allocate::_Fn(0, _Al, _Count, _Hint));
		}
	static void deallocate(_Alloc& _Al,
		pointer _Ptr, size_type _Count)
		{	
		_Al.deallocate(_Ptr, _Count);
		}
	template<class _Ty,
		class... _Types>
		static void construct(_Alloc& _Al, _Ty *_Ptr,
			_Types&&... _Args)
		{	
		_Alloc_construct::_Fn(0, _Al, _Ptr,
			::std:: forward<_Types>(_Args)...);
		}
	template<class _Ty>
		static void destroy(_Alloc& _Al, _Ty *_Ptr)
		{	
		_Alloc_destroy::_Fn(0, _Al, _Ptr);
		}
	static size_type max_size(const _Alloc& _Al)
		{	
		return (_Alloc_max_size::_Fn(0, _Al));
		}
	static _Alloc select_on_container_copy_construction(
		const _Alloc& _Al)
		{	
		return (_Alloc_select::_Fn(0, _Al));
		}
	};
template<class _Ty>
	struct _Allocator_base
	{	
	typedef _Ty value_type;
	};
template<class _Ty>
	struct _Allocator_base<const _Ty>
	{	
	typedef _Ty value_type;
	};
template<class _Ty>
	class allocator
		: public _Allocator_base<_Ty>
	{	
public:
	typedef allocator<_Ty> other;
	typedef _Allocator_base<_Ty> _Mybase;
	typedef typename _Mybase::value_type value_type;
	typedef value_type *pointer;
	typedef const value_type *const_pointer;
	typedef void *void_pointer;
	typedef const void *const_void_pointer;
	typedef value_type& reference;
	typedef const value_type& const_reference;
	typedef size_t size_type;
	typedef ptrdiff_t difference_type;
	typedef false_type propagate_on_container_copy_assignment;
	typedef false_type propagate_on_container_move_assignment;
	typedef false_type propagate_on_container_swap;
	allocator<_Ty> select_on_container_copy_construction() const
		{	
		return (*this);
		}
	template<class _Other>
		struct rebind
		{	
		typedef allocator<_Other> other;
		};
	pointer address(reference _Val) const throw ()
		{	
		return (::std:: addressof(_Val));
		}
	const_pointer address(const_reference _Val) const throw ()
		{	
		return (::std:: addressof(_Val));
		}
	allocator() throw ()
		{	
		}
	allocator(const allocator<_Ty>&) throw ()
		{	
		}
	template<class _Other>
		allocator(const allocator<_Other>&) throw ()
		{	
		}
	template<class _Other>
		allocator<_Ty>& operator=(const allocator<_Other>&)
		{	
		return (*this);
		}
	void deallocate(pointer _Ptr, size_type)
		{	
		::operator delete(_Ptr);
		}
	pointer allocate(size_type _Count)
		{	
		return (_Allocate(_Count, (pointer)0));
		}
	pointer allocate(size_type _Count, const void *)
		{	
		return (allocate(_Count));
		}
	void construct(_Ty *_Ptr)
		{	
		::new ((void *)_Ptr) _Ty();
		}
	void construct(_Ty *_Ptr, const _Ty& _Val)
		{	
		::new ((void *)_Ptr) _Ty(_Val);
		}
	template<class _Objty,
		class... _Types>
		void construct(_Objty *_Ptr, _Types&&... _Args)
		{	
		::new ((void *)_Ptr) _Objty(::std:: forward<_Types>(_Args)...);
		}
	template<class _Uty>
		void destroy(_Uty *_Ptr)
		{	
		_Ptr->~_Uty();
		}
	size_t max_size() const throw ()
		{	
		return ((size_t)(-1) / sizeof (_Ty));
		}
	};
template<>
	class allocator<void>
	{	
public:
	typedef allocator<void> other;
	typedef void value_type;
	typedef void *pointer;
	typedef const void *const_pointer;
	typedef void *void_pointer;
	typedef const void *const_void_pointer;
	template<class _Other>
		struct rebind
		{	
		typedef allocator<_Other> other;
		};
	allocator() throw ()
		{	
		}
	allocator(const allocator<void>&) throw ()
		{	
		}
	template<class _Other>
		allocator(const allocator<_Other>&) throw ()
		{	
		}
	template<class _Other>
		allocator<void>& operator=(const allocator<_Other>&)
		{	
		return (*this);
		}
	};
template<class _Ty,
	class _Other> inline
	bool operator==(const allocator<_Ty>&,
		const allocator<_Other>&) throw ()
	{	
	return (true);
	}
template<class _Ty,
	class _Other> inline
	bool operator!=(const allocator<_Ty>& _Left,
		const allocator<_Other>& _Right) throw ()
	{	
	return (!(_Left == _Right));
	}
template<class _Ty>
	struct allocator_traits<allocator<_Ty> >
	{	
	typedef allocator<_Ty> _Alloc;
	typedef allocator_traits<_Alloc> other;
	typedef _Alloc allocator_type;
	typedef typename _Alloc::value_type value_type;
	typedef value_type *pointer;
	typedef const value_type *const_pointer;
	typedef void *void_pointer;
	typedef const void *const_void_pointer;
	typedef size_t size_type;
	typedef ptrdiff_t difference_type;
	typedef false_type propagate_on_container_copy_assignment;
	typedef false_type propagate_on_container_move_assignment;
	typedef false_type propagate_on_container_swap;
	template<class _Other>
		using rebind_alloc = allocator<_Other>;
	template<class _Other>
		using rebind_traits = allocator_traits<allocator<_Other> >;
	static pointer allocate(_Alloc& _Al, size_type _Count)
		{	
		return (_Al.allocate(_Count));
		}
	static pointer allocate(_Alloc& _Al, size_type _Count,
		const_void_pointer _Hint)
		{	
		return (_Al.allocate(_Count, _Hint));
		}
	static void deallocate(_Alloc& _Al,
		pointer _Ptr, size_type _Count)
		{	
		_Al.deallocate(_Ptr, _Count);
		}
	template<class _Objty,
		class... _Types>
		static void construct(_Alloc& _Al, _Objty *_Ptr,
			_Types&&... _Args)
		{	
		_Al.construct(_Ptr, ::std:: forward<_Types>(_Args)...);
		}
	template<class _Uty>
		static void destroy(_Alloc& _Al, _Uty *_Ptr)
		{	
		_Al.destroy(_Ptr);
		}
	static size_type max_size(const _Alloc& _Al)
		{	
		return (_Al.max_size());
		}
	static _Alloc select_on_container_copy_construction(
		const _Alloc& _Al)
		{	
		return (_Al.select_on_container_copy_construction());
		}
	};
template<class _Alloc>
	struct _Wrap_alloc
		: public _Alloc
	{	
	typedef _Wrap_alloc<_Alloc> other;
	typedef _Alloc _Mybase;
	typedef allocator_traits<_Alloc> _Mytraits;
	typedef typename _Mytraits::value_type value_type;
	typedef typename _Mytraits::pointer pointer;
	typedef typename _Mytraits::const_pointer const_pointer;
	typedef typename _Mytraits::void_pointer void_pointer;
	typedef typename _Mytraits::const_void_pointer const_void_pointer;
	typedef typename _If<is_void<value_type>::value,
		int, value_type>::type& reference;
	typedef typename _If<is_void<const value_type>::value,
		const int, const value_type>::type& const_reference;
	typedef typename _Mytraits::size_type size_type;
	typedef typename _Mytraits::difference_type difference_type;
	typedef typename _Mytraits::propagate_on_container_copy_assignment
		propagate_on_container_copy_assignment;
	typedef typename _Mytraits::propagate_on_container_move_assignment
		propagate_on_container_move_assignment;
	typedef typename _Mytraits::propagate_on_container_swap
		propagate_on_container_swap;
	_Wrap_alloc select_on_container_copy_construction() const
		{	
		return (_Mytraits::select_on_container_copy_construction(*this));
		}
	template<class _Other>
		struct rebind
		{	
		typedef typename _Mytraits::template rebind_alloc<_Other> _Other_alloc;
		typedef _Wrap_alloc<_Other_alloc> other;
		};
	pointer address(reference _Val) const
		{	
		return (::std:: addressof(_Val));
		}
	const_pointer address(const_reference _Val) const
		{	
		return (::std:: addressof(_Val));
		}
	_Wrap_alloc() throw ()
		: _Mybase()
		{	
		}
	_Wrap_alloc(const _Mybase& _Right) throw ()
		: _Mybase(_Right)
		{	
		}
	_Wrap_alloc(const _Wrap_alloc& _Right) throw ()
		: _Mybase(_Right)
		{	
		}
	template<class _Other>
		_Wrap_alloc(const _Other& _Right) throw ()
		: _Mybase(_Right)
		{	
		}
	template<class _Other>
		_Wrap_alloc(_Other& _Right) throw ()
		: _Mybase(_Right)
		{	
		}
	_Wrap_alloc& operator=(const _Mybase& _Right)
		{	
		_Mybase::operator=(_Right);
		return (*this);
		}
	_Wrap_alloc& operator=(const _Wrap_alloc& _Right)
		{	
		_Mybase::operator=(_Right);
		return (*this);
		}
	template<class _Other>
		_Wrap_alloc& operator=(const _Other& _Right)
		{	
		_Mybase::operator=(_Right);
		return (*this);
		}
	pointer allocate(size_type _Count)
		{	
		return (_Mybase::allocate(_Count));
		}
	pointer allocate(size_type _Count,
		const_void_pointer _Hint)
		{	
		return (_Mytraits::allocate(*this, _Count, _Hint));
		}
	void deallocate(pointer _Ptr, size_type _Count)
		{	
		_Mybase::deallocate(_Ptr, _Count);
		}
	void construct(value_type *_Ptr)
		{	
		_Mytraits::construct(*this, _Ptr);
		}
	template<class _Ty,
		class... _Types>
		void construct(_Ty *_Ptr,
			_Types&&... _Args)
		{	
		_Mytraits::construct(*this, _Ptr,
			::std:: forward<_Types>(_Args)...);
		}
	template<class _Ty>
		void destroy(_Ty *_Ptr)
		{	
		_Mytraits::destroy(*this, _Ptr);
		}
	size_type max_size() const throw ()
		{	
		return (_Mytraits::max_size(*this));
		}
	};
template<class _Ty,
	class _Other> inline
	bool operator==(const _Wrap_alloc<_Ty>& _Left,
		const _Wrap_alloc<_Other>& _Right) throw ()
	{	
	return (static_cast<_Ty>(_Left) == static_cast<_Other>(_Right));
	}
template<class _Ty,
	class _Other> inline
	bool operator!=(const _Wrap_alloc<_Ty>& _Left,
		const _Wrap_alloc<_Other>& _Right) throw ()
	{	
	return (!(_Left == _Right));
	}
}
   #line 1 "c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xatomic0.h"
 #pragma pack(push,8)
 #pragma warning(push,3)
namespace std {
typedef enum memory_order {
	memory_order_relaxed,
	memory_order_consume,
	memory_order_acquire,
	memory_order_release,
	memory_order_acq_rel,
	memory_order_seq_cst
	} memory_order;
typedef _Uint32t _Uint4_t;
typedef _Uint4_t _Atomic_integral_t;
   #line 58 "c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xatomic0.h"
  #line 59 "c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xatomic0.h"
  #line 67 "c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xatomic0.h"
typedef long _Atomic_flag_t;
inline _Uint4_t _Atomic_load_4(volatile _Uint4_t *, memory_order);
inline int _Atomic_compare_exchange_weak_4(
	volatile _Uint4_t *, _Uint4_t *, _Uint4_t, memory_order, memory_order);
inline _Uint4_t _Atomic_fetch_add_4(
	volatile _Uint4_t *, _Uint4_t, memory_order);
inline _Uint4_t _Atomic_fetch_sub_4(
	volatile _Uint4_t *, _Uint4_t, memory_order);
typedef _Atomic_integral_t _Atomic_counter_t;
inline _Atomic_integral_t
	_Get_atomic_count(const _Atomic_counter_t& _Counter)
	{	
	return (_Counter);
	}
inline void _Init_atomic_counter(_Atomic_counter_t& _Counter,
	_Atomic_integral_t _Value)
	{	
	_Counter = _Value;
	}
inline _Atomic_integral_t _Inc_atomic_counter_explicit(
	_Atomic_counter_t& _Counter, memory_order _Order)
	{	
	return (_Atomic_fetch_add_4(&_Counter, 1, _Order) + 1);
	}
inline _Atomic_integral_t _Inc_atomic_counter(_Atomic_counter_t& _Counter)
	{	
	return (_Inc_atomic_counter_explicit(_Counter, memory_order_seq_cst));
	}
inline _Atomic_integral_t _Dec_atomic_counter_explicit(
	_Atomic_counter_t& _Counter, memory_order _Order)
	{	
	return (_Atomic_fetch_sub_4(&_Counter, 1, _Order) - 1);
	}
inline _Atomic_integral_t _Dec_atomic_counter(_Atomic_counter_t& _Counter)
	{	
	return (_Dec_atomic_counter_explicit(_Counter, memory_order_seq_cst));
	}
inline _Atomic_integral_t _Load_atomic_counter_explicit(
	_Atomic_counter_t& _Counter, memory_order _Order)
	{	
	return (_Atomic_load_4(&_Counter, _Order));
	}
inline _Atomic_integral_t _Load_atomic_counter(_Atomic_counter_t& _Counter)
	{	
	return (_Load_atomic_counter_explicit(_Counter, memory_order_seq_cst));
	}
inline _Atomic_integral_t _Compare_increment_atomic_counter_explicit(
	_Atomic_counter_t& _Counter,
	_Atomic_integral_t _Expected,
	memory_order _Order)
	{	
	return (_Atomic_compare_exchange_weak_4(
		&_Counter, &_Expected, _Expected + 1,
		_Order, _Order));
	}
inline _Atomic_integral_t _Compare_increment_atomic_counter(
	_Atomic_counter_t& _Counter, _Atomic_integral_t _Expected)
	{	
	return (_Compare_increment_atomic_counter_explicit(
		_Counter, _Expected, memory_order_seq_cst));
	}
extern "C" {
__declspec(dllimport) void __cdecl _Lock_shared_ptr_spin_lock();
__declspec(dllimport) void __cdecl _Unlock_shared_ptr_spin_lock();
}
}
 #pragma warning(pop)
 #pragma pack(pop)
   #line 1 "c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\intrin.h"
#pragma pack(push,8)
extern "C" {
typedef struct __JUMP_BUFFER {
    unsigned long Ebp;
    unsigned long Ebx;
    unsigned long Edi;
    unsigned long Esi;
    unsigned long Esp;
    unsigned long Eip;
    unsigned long Registration;
    unsigned long TryLevel;
    unsigned long Cookie;
    unsigned long UnwindFunc;
    unsigned long UnwindData[6];
} _JUMP_BUFFER;
typedef int jmp_buf[16];
int __cdecl _setjmp(  jmp_buf _Buf);
}
#pragma warning(push)
#pragma warning(disable:4987)
extern "C"
{
__declspec(dllimport) __declspec(noreturn) void __cdecl longjmp(  jmp_buf _Buf,   int _Value) throw(...);
}
#pragma warning(pop)
#pragma pack(pop)
extern "C" { 
typedef union __declspec(intrin_type) __declspec(align(8)) __m64
{
    unsigned __int64    m64_u64;
    float               m64_f32[2];
    __int8              m64_i8[8];
    __int16             m64_i16[4];
    __int32             m64_i32[2];
    __int64             m64_i64;
    unsigned __int8     m64_u8[8];
    unsigned __int16    m64_u16[4];
    unsigned __int32    m64_u32[2];
} __m64;
void  _m_empty(void);
__m64 _m_from_int(int _I);
int   _m_to_int(__m64 _M);
__m64 _m_packsswb(__m64 _MM1, __m64 _MM2);
__m64 _m_packssdw(__m64 _MM1, __m64 _MM2);
__m64 _m_packuswb(__m64 _MM1, __m64 _MM2);
__m64 _m_punpckhbw(__m64 _MM1, __m64 _MM2);
__m64 _m_punpckhwd(__m64 _MM1, __m64 _MM2);
__m64 _m_punpckhdq(__m64 _MM1, __m64 _MM2);
__m64 _m_punpcklbw(__m64 _MM1, __m64 _MM2);
__m64 _m_punpcklwd(__m64 _MM1, __m64 _MM2);
__m64 _m_punpckldq(__m64 _MM1, __m64 _MM2);
__m64 _m_paddb(__m64 _MM1, __m64 _MM2);
__m64 _m_paddw(__m64 _MM1, __m64 _MM2);
__m64 _m_paddd(__m64 _MM1, __m64 _MM2);
__m64 _m_paddsb(__m64 _MM1, __m64 _MM2);
__m64 _m_paddsw(__m64 _MM1, __m64 _MM2);
__m64 _m_paddusb(__m64 _MM1, __m64 _MM2);
__m64 _m_paddusw(__m64 _MM1, __m64 _MM2);
__m64 _m_psubb(__m64 _MM1, __m64 _MM2);
__m64 _m_psubw(__m64 _MM1, __m64 _MM2);
__m64 _m_psubd(__m64 _MM1, __m64 _MM2);
__m64 _m_psubsb(__m64 _MM1, __m64 _MM2);
__m64 _m_psubsw(__m64 _MM1, __m64 _MM2);
__m64 _m_psubusb(__m64 _MM1, __m64 _MM2);
__m64 _m_psubusw(__m64 _MM1, __m64 _MM2);
__m64 _m_pmaddwd(__m64 _MM1, __m64 _MM2);
__m64 _m_pmulhw(__m64 _MM1, __m64 _MM2);
__m64 _m_pmullw(__m64 _MM1, __m64 _MM2);
__m64 _m_psllw(__m64 _M, __m64 _Count);
__m64 _m_psllwi(__m64 _M, int _Count);
__m64 _m_pslld(__m64 _M, __m64 _Count);
__m64 _m_pslldi(__m64 _M, int _Count);
__m64 _m_psllq(__m64 _M, __m64 _Count);
__m64 _m_psllqi(__m64 _M, int _Count);
__m64 _m_psraw(__m64 _M, __m64 _Count);
__m64 _m_psrawi(__m64 _M, int _Count);
__m64 _m_psrad(__m64 _M, __m64 _Count);
__m64 _m_psradi(__m64 _M, int _Count);
__m64 _m_psrlw(__m64 _M, __m64 _Count);
__m64 _m_psrlwi(__m64 _M, int _Count);
__m64 _m_psrld(__m64 _M, __m64 _Count);
__m64 _m_psrldi(__m64 _M, int _Count);
__m64 _m_psrlq(__m64 _M, __m64 _Count);
__m64 _m_psrlqi(__m64 _M, int _Count);
__m64 _m_pand(__m64 _MM1, __m64 _MM2);
__m64 _m_pandn(__m64 _MM1, __m64 _MM2);
__m64 _m_por(__m64 _MM1, __m64 _MM2);
__m64 _m_pxor(__m64 _MM1, __m64 _MM2);
__m64 _m_pcmpeqb(__m64 _MM1, __m64 _MM2);
__m64 _m_pcmpeqw(__m64 _MM1, __m64 _MM2);
__m64 _m_pcmpeqd(__m64 _MM1, __m64 _MM2);
__m64 _m_pcmpgtb(__m64 _MM1, __m64 _MM2);
__m64 _m_pcmpgtw(__m64 _MM1, __m64 _MM2);
__m64 _m_pcmpgtd(__m64 _MM1, __m64 _MM2);
__m64 _mm_setzero_si64(void);
__m64 _mm_set_pi32(int _I1, int _I0);
__m64 _mm_set_pi16(short _S3, short _S2, short _S1, short _S0);
__m64 _mm_set_pi8(char _B7, char _B6, char _B5, char _B4,
                  char _B3, char _B2, char _B1, char _B0);
__m64 _mm_set1_pi32(int _I);
__m64 _mm_set1_pi16(short _S);
__m64 _mm_set1_pi8(char _B);
__m64 _mm_setr_pi32(int _I1, int _I0);
__m64 _mm_setr_pi16(short _S3, short _S2, short _S1, short _S0);
__m64 _mm_setr_pi8(char _B7, char _B6, char _B5, char _B4,
                   char _B3, char _B2, char _B1, char _B0);
}; 
typedef union __declspec(intrin_type) __declspec(align(16)) __m128 {
     float               m128_f32[4];
     unsigned __int64    m128_u64[2];
     __int8              m128_i8[16];
     __int16             m128_i16[8];
     __int32             m128_i32[4];
     __int64             m128_i64[2];
     unsigned __int8     m128_u8[16];
     unsigned __int16    m128_u16[8];
     unsigned __int32    m128_u32[4];
 } __m128;
extern "C" { 
extern __m128 _mm_add_ss(__m128 _A, __m128 _B);
extern __m128 _mm_add_ps(__m128 _A, __m128 _B);
extern __m128 _mm_sub_ss(__m128 _A, __m128 _B);
extern __m128 _mm_sub_ps(__m128 _A, __m128 _B);
extern __m128 _mm_mul_ss(__m128 _A, __m128 _B);
extern __m128 _mm_mul_ps(__m128 _A, __m128 _B);
extern __m128 _mm_div_ss(__m128 _A, __m128 _B);
extern __m128 _mm_div_ps(__m128 _A, __m128 _B);
extern __m128 _mm_sqrt_ss(__m128 _A);
extern __m128 _mm_sqrt_ps(__m128 _A);
extern __m128 _mm_rcp_ss(__m128 _A);
extern __m128 _mm_rcp_ps(__m128 _A);
extern __m128 _mm_rsqrt_ss(__m128 _A);
extern __m128 _mm_rsqrt_ps(__m128 _A);
extern __m128 _mm_min_ss(__m128 _A, __m128 _B);
extern __m128 _mm_min_ps(__m128 _A, __m128 _B);
extern __m128 _mm_max_ss(__m128 _A, __m128 _B);
extern __m128 _mm_max_ps(__m128 _A, __m128 _B);
extern __m128 _mm_and_ps(__m128 _A, __m128 _B);
extern __m128 _mm_andnot_ps(__m128 _A, __m128 _B);
extern __m128 _mm_or_ps(__m128 _A, __m128 _B);
extern __m128 _mm_xor_ps(__m128 _A, __m128 _B);
extern __m128 _mm_cmpeq_ss(__m128 _A, __m128 _B);
extern __m128 _mm_cmpeq_ps(__m128 _A, __m128 _B);
extern __m128 _mm_cmplt_ss(__m128 _A, __m128 _B);
extern __m128 _mm_cmplt_ps(__m128 _A, __m128 _B);
extern __m128 _mm_cmple_ss(__m128 _A, __m128 _B);
extern __m128 _mm_cmple_ps(__m128 _A, __m128 _B);
extern __m128 _mm_cmpgt_ss(__m128 _A, __m128 _B);
extern __m128 _mm_cmpgt_ps(__m128 _A, __m128 _B);
extern __m128 _mm_cmpge_ss(__m128 _A, __m128 _B);
extern __m128 _mm_cmpge_ps(__m128 _A, __m128 _B);
extern __m128 _mm_cmpneq_ss(__m128 _A, __m128 _B);
extern __m128 _mm_cmpneq_ps(__m128 _A, __m128 _B);
extern __m128 _mm_cmpnlt_ss(__m128 _A, __m128 _B);
extern __m128 _mm_cmpnlt_ps(__m128 _A, __m128 _B);
extern __m128 _mm_cmpnle_ss(__m128 _A, __m128 _B);
extern __m128 _mm_cmpnle_ps(__m128 _A, __m128 _B);
extern __m128 _mm_cmpngt_ss(__m128 _A, __m128 _B);
extern __m128 _mm_cmpngt_ps(__m128 _A, __m128 _B);
extern __m128 _mm_cmpnge_ss(__m128 _A, __m128 _B);
extern __m128 _mm_cmpnge_ps(__m128 _A, __m128 _B);
extern __m128 _mm_cmpord_ss(__m128 _A, __m128 _B);
extern __m128 _mm_cmpord_ps(__m128 _A, __m128 _B);
extern __m128 _mm_cmpunord_ss(__m128 _A, __m128 _B);
extern __m128 _mm_cmpunord_ps(__m128 _A, __m128 _B);
extern int _mm_comieq_ss(__m128 _A, __m128 _B);
extern int _mm_comilt_ss(__m128 _A, __m128 _B);
extern int _mm_comile_ss(__m128 _A, __m128 _B);
extern int _mm_comigt_ss(__m128 _A, __m128 _B);
extern int _mm_comige_ss(__m128 _A, __m128 _B);
extern int _mm_comineq_ss(__m128 _A, __m128 _B);
extern int _mm_ucomieq_ss(__m128 _A, __m128 _B);
extern int _mm_ucomilt_ss(__m128 _A, __m128 _B);
extern int _mm_ucomile_ss(__m128 _A, __m128 _B);
extern int _mm_ucomigt_ss(__m128 _A, __m128 _B);
extern int _mm_ucomige_ss(__m128 _A, __m128 _B);
extern int _mm_ucomineq_ss(__m128 _A, __m128 _B);
extern int _mm_cvt_ss2si(__m128 _A);
extern __m64 _mm_cvt_ps2pi(__m128 _A);
extern int _mm_cvtt_ss2si(__m128 _A);
extern __m64 _mm_cvtt_ps2pi(__m128 _A);
extern __m128 _mm_cvt_si2ss(__m128, int);
extern __m128 _mm_cvt_pi2ps(__m128, __m64);
extern float _mm_cvtss_f32(__m128 _A);
extern __m128 _mm_shuffle_ps(__m128 _A, __m128 _B, unsigned int _Imm8);
extern __m128 _mm_unpackhi_ps(__m128 _A, __m128 _B);
extern __m128 _mm_unpacklo_ps(__m128 _A, __m128 _B);
extern __m128 _mm_loadh_pi(__m128, __m64 const*);
extern __m128 _mm_movehl_ps(__m128, __m128);
extern __m128 _mm_movelh_ps(__m128, __m128);
extern void _mm_storeh_pi(__m64 *, __m128);
extern __m128 _mm_loadl_pi(__m128, __m64 const*);
extern void _mm_storel_pi(__m64 *, __m128);
extern int _mm_movemask_ps(__m128 _A);
extern int _m_pextrw(__m64, int);
extern __m64 _m_pinsrw(__m64, int, int);
extern __m64 _m_pmaxsw(__m64, __m64);
extern __m64 _m_pmaxub(__m64, __m64);
extern __m64 _m_pminsw(__m64, __m64);
extern __m64 _m_pminub(__m64, __m64);
extern int _m_pmovmskb(__m64);
extern __m64 _m_pmulhuw(__m64, __m64);
extern __m64 _m_pshufw(__m64, int);
extern void _m_maskmovq(__m64, __m64, char *);
extern __m64 _m_pavgb(__m64, __m64);
extern __m64 _m_pavgw(__m64, __m64);
extern __m64 _m_psadbw(__m64, __m64);
extern __m128 _mm_set_ss(float _A);
extern __m128 _mm_set_ps1(float _A);
extern __m128 _mm_set_ps(float _A, float _B, float _C, float _D);
extern __m128 _mm_setr_ps(float _A, float _B, float _C, float _D);
extern __m128 _mm_setzero_ps(void);
extern __m128 _mm_load_ss(float const*_A);
extern __m128 _mm_load_ps1(float const*_A);
extern __m128 _mm_load_ps(float const*_A);
extern __m128 _mm_loadr_ps(float const*_A);
extern __m128 _mm_loadu_ps(float const*_A);
extern void _mm_store_ss(float *_V, __m128 _A);
extern void _mm_store_ps1(float *_V, __m128 _A);
extern void _mm_store_ps(float *_V, __m128 _A);
extern void _mm_storer_ps(float *_V, __m128 _A);
extern void _mm_storeu_ps(float *_V, __m128 _A);
extern void _mm_prefetch(char const*_A, int _Sel);
extern void _mm_stream_pi(__m64 *, __m64);
extern void _mm_stream_ps(float *, __m128);
extern __m128 _mm_move_ss(__m128 _A, __m128 _B);
extern void _mm_sfence(void);
extern unsigned int _mm_getcsr(void);
extern void _mm_setcsr(unsigned int);
__inline __m128 _mm_cvtpi16_ps(__m64 a)
{
  __m128 tmp;
  __m64  ext_val = _m_pcmpgtw(_mm_setzero_si64(), a);
  tmp = _mm_cvt_pi2ps(_mm_setzero_ps(), _m_punpckhwd(a, ext_val));
  return(_mm_cvt_pi2ps(_mm_movelh_ps(tmp, tmp),
                        _m_punpcklwd(a, ext_val)));
}
__inline __m128 _mm_cvtpu16_ps(__m64 a)
{
  __m128 tmp;
  __m64  ext_val = _mm_setzero_si64();
  tmp = _mm_cvt_pi2ps(_mm_setzero_ps(), _m_punpckhwd(a, ext_val));
  return(_mm_cvt_pi2ps(_mm_movelh_ps(tmp, tmp),
                        _m_punpcklwd(a, ext_val)));
}
__inline __m64 _mm_cvtps_pi16(__m128 a)
{
  return _m_packssdw(_mm_cvt_ps2pi(a),
                        _mm_cvt_ps2pi(_mm_movehl_ps(a, a)));
}
__inline __m128 _mm_cvtpi8_ps(__m64 a)
{
  __m64  ext_val = _m_pcmpgtb(_mm_setzero_si64(), a);
  return _mm_cvtpi16_ps(_m_punpcklbw(a, ext_val));
}
__inline __m128 _mm_cvtpu8_ps(__m64 a)
{
  return _mm_cvtpu16_ps(_m_punpcklbw(a, _mm_setzero_si64()));
}
__inline __m64 _mm_cvtps_pi8(__m128 a)
{
  return _m_packsswb(_mm_cvtps_pi16(a), _mm_setzero_si64());
}
__inline __m128 _mm_cvtpi32x2_ps(__m64 a, __m64 b)
{
  return _mm_movelh_ps(_mm_cvt_pi2ps(_mm_setzero_ps(), a),
                       _mm_cvt_pi2ps(_mm_setzero_ps(), b));
}
}; 
typedef union __declspec(intrin_type) __declspec(align(16)) __m128i {
    __int8              m128i_i8[16];
    __int16             m128i_i16[8];
    __int32             m128i_i32[4];
    __int64             m128i_i64[2];
    unsigned __int8     m128i_u8[16];
    unsigned __int16    m128i_u16[8];
    unsigned __int32    m128i_u32[4];
    unsigned __int64    m128i_u64[2];
} __m128i;
typedef struct __declspec(intrin_type) __declspec(align(16)) __m128d {
    double              m128d_f64[2];
} __m128d;
extern "C" { 
extern __m128d _mm_add_sd(__m128d _A, __m128d _B);
extern __m128d _mm_add_pd(__m128d _A, __m128d _B);
extern __m128d _mm_sub_sd(__m128d _A, __m128d _B);
extern __m128d _mm_sub_pd(__m128d _A, __m128d _B);
extern __m128d _mm_mul_sd(__m128d _A, __m128d _B);
extern __m128d _mm_mul_pd(__m128d _A, __m128d _B);
extern __m128d _mm_sqrt_sd(__m128d _A, __m128d _B);
extern __m128d _mm_sqrt_pd(__m128d _A);
extern __m128d _mm_div_sd(__m128d _A, __m128d _B);
extern __m128d _mm_div_pd(__m128d _A, __m128d _B);
extern __m128d _mm_min_sd(__m128d _A, __m128d _B);
extern __m128d _mm_min_pd(__m128d _A, __m128d _B);
extern __m128d _mm_max_sd(__m128d _A, __m128d _B);
extern __m128d _mm_max_pd(__m128d _A, __m128d _B);
extern __m128d _mm_and_pd(__m128d _A, __m128d _B);
extern __m128d _mm_andnot_pd(__m128d _A, __m128d _B);
extern __m128d _mm_or_pd(__m128d _A, __m128d _B);
extern __m128d _mm_xor_pd(__m128d _A, __m128d _B);
extern __m128d _mm_cmpeq_sd(__m128d _A, __m128d _B);
extern __m128d _mm_cmpeq_pd(__m128d _A, __m128d _B);
extern __m128d _mm_cmplt_sd(__m128d _A, __m128d _B);
extern __m128d _mm_cmplt_pd(__m128d _A, __m128d _B);
extern __m128d _mm_cmple_sd(__m128d _A, __m128d _B);
extern __m128d _mm_cmple_pd(__m128d _A, __m128d _B);
extern __m128d _mm_cmpgt_sd(__m128d _A, __m128d _B);
extern __m128d _mm_cmpgt_pd(__m128d _A, __m128d _B);
extern __m128d _mm_cmpge_sd(__m128d _A, __m128d _B);
extern __m128d _mm_cmpge_pd(__m128d _A, __m128d _B);
extern __m128d _mm_cmpneq_sd(__m128d _A, __m128d _B);
extern __m128d _mm_cmpneq_pd(__m128d _A, __m128d _B);
extern __m128d _mm_cmpnlt_sd(__m128d _A, __m128d _B);
extern __m128d _mm_cmpnlt_pd(__m128d _A, __m128d _B);
extern __m128d _mm_cmpnle_sd(__m128d _A, __m128d _B);
extern __m128d _mm_cmpnle_pd(__m128d _A, __m128d _B);
extern __m128d _mm_cmpngt_sd(__m128d _A, __m128d _B);
extern __m128d _mm_cmpngt_pd(__m128d _A, __m128d _B);
extern __m128d _mm_cmpnge_sd(__m128d _A, __m128d _B);
extern __m128d _mm_cmpnge_pd(__m128d _A, __m128d _B);
extern __m128d _mm_cmpord_pd(__m128d _A, __m128d _B);
extern __m128d _mm_cmpord_sd(__m128d _A, __m128d _B);
extern __m128d _mm_cmpunord_pd(__m128d _A, __m128d _B);
extern __m128d _mm_cmpunord_sd(__m128d _A, __m128d _B);
extern int _mm_comieq_sd(__m128d _A, __m128d _B);
extern int _mm_comilt_sd(__m128d _A, __m128d _B);
extern int _mm_comile_sd(__m128d _A, __m128d _B);
extern int _mm_comigt_sd(__m128d _A, __m128d _B);
extern int _mm_comige_sd(__m128d _A, __m128d _B);
extern int _mm_comineq_sd(__m128d _A, __m128d _B);
extern int _mm_ucomieq_sd(__m128d _A, __m128d _B);
extern int _mm_ucomilt_sd(__m128d _A, __m128d _B);
extern int _mm_ucomile_sd(__m128d _A, __m128d _B);
extern int _mm_ucomigt_sd(__m128d _A, __m128d _B);
extern int _mm_ucomige_sd(__m128d _A, __m128d _B);
extern int _mm_ucomineq_sd(__m128d _A, __m128d _B);
extern __m128d _mm_cvtepi32_pd(__m128i _A);
extern __m128i _mm_cvtpd_epi32(__m128d _A);
extern __m128i _mm_cvttpd_epi32(__m128d _A);
extern __m128 _mm_cvtepi32_ps(__m128i _A);
extern __m128i _mm_cvtps_epi32(__m128 _A);
extern __m128i _mm_cvttps_epi32(__m128 _A);
extern __m128 _mm_cvtpd_ps(__m128d _A);
extern __m128d _mm_cvtps_pd(__m128 _A);
extern __m128 _mm_cvtsd_ss(__m128 _A, __m128d _B);
extern __m128d _mm_cvtss_sd(__m128d _A, __m128 _B);
extern int _mm_cvtsd_si32(__m128d _A);
extern int _mm_cvttsd_si32(__m128d _A);
extern __m128d _mm_cvtsi32_sd(__m128d _A, int _B);
extern __m64 _mm_cvtpd_pi32(__m128d _A);
extern __m64 _mm_cvttpd_pi32(__m128d _A);
extern __m128d _mm_cvtpi32_pd(__m64 _A);
extern __m128d _mm_unpackhi_pd(__m128d _A, __m128d _B);
extern __m128d _mm_unpacklo_pd(__m128d _A, __m128d _B);
extern int _mm_movemask_pd(__m128d _A);
extern __m128d _mm_shuffle_pd(__m128d _A, __m128d _B, int _I);
extern __m128d _mm_load_pd(double const*_Dp);
extern __m128d _mm_load1_pd(double const*_Dp);
extern __m128d _mm_loadr_pd(double const*_Dp);
extern __m128d _mm_loadu_pd(double const*_Dp);
extern __m128d _mm_load_sd(double const*_Dp);
extern __m128d _mm_loadh_pd(__m128d _A, double const*_Dp);
extern __m128d _mm_loadl_pd(__m128d _A, double const*_Dp);
extern __m128d _mm_set_sd(double _W);
extern __m128d _mm_set1_pd(double _A);
extern __m128d _mm_set_pd(double _Z, double _Y);
extern __m128d _mm_setr_pd(double _Y, double _Z);
extern __m128d _mm_setzero_pd(void);
extern __m128d _mm_move_sd(__m128d _A, __m128d _B);
extern void _mm_store_sd(double *_Dp, __m128d _A);
extern void _mm_store1_pd(double *_Dp, __m128d _A);
extern void _mm_store_pd(double *_Dp, __m128d _A);
extern void _mm_storeu_pd(double *_Dp, __m128d _A);
extern void _mm_storer_pd(double *_Dp, __m128d _A);
extern void _mm_storeh_pd(double *_Dp, __m128d _A);
extern void _mm_storel_pd(double *_Dp, __m128d _A);
extern __m128i _mm_add_epi8(__m128i _A, __m128i _B);
extern __m128i _mm_add_epi16(__m128i _A, __m128i _B);
extern __m128i _mm_add_epi32(__m128i _A, __m128i _B);
extern __m64 _mm_add_si64(__m64 _A, __m64 _B);
extern __m128i _mm_add_epi64(__m128i _A, __m128i _B);
extern __m128i _mm_adds_epi8(__m128i _A, __m128i _B);
extern __m128i _mm_adds_epi16(__m128i _A, __m128i _B);
extern __m128i _mm_adds_epu8(__m128i _A, __m128i _B);
extern __m128i _mm_adds_epu16(__m128i _A, __m128i _B);
extern __m128i _mm_avg_epu8(__m128i _A, __m128i _B);
extern __m128i _mm_avg_epu16(__m128i _A, __m128i _B);
extern __m128i _mm_madd_epi16(__m128i _A, __m128i _B);
extern __m128i _mm_max_epi16(__m128i _A, __m128i _B);
extern __m128i _mm_max_epu8(__m128i _A, __m128i _B);
extern __m128i _mm_min_epi16(__m128i _A, __m128i _B);
extern __m128i _mm_min_epu8(__m128i _A, __m128i _B);
extern __m128i _mm_mulhi_epi16(__m128i _A, __m128i _B);
extern __m128i _mm_mulhi_epu16(__m128i _A, __m128i _B);
extern __m128i _mm_mullo_epi16(__m128i _A, __m128i _B);
extern __m64 _mm_mul_su32(__m64 _A, __m64 _B);
extern __m128i _mm_mul_epu32(__m128i _A, __m128i _B);
extern __m128i _mm_sad_epu8(__m128i _A, __m128i _B);
extern __m128i _mm_sub_epi8(__m128i _A, __m128i _B);
extern __m128i _mm_sub_epi16(__m128i _A, __m128i _B);
extern __m128i _mm_sub_epi32(__m128i _A, __m128i _B);
extern __m64 _mm_sub_si64(__m64 _A, __m64 _B);
extern __m128i _mm_sub_epi64(__m128i _A, __m128i _B);
extern __m128i _mm_subs_epi8(__m128i _A, __m128i _B);
extern __m128i _mm_subs_epi16(__m128i _A, __m128i _B);
extern __m128i _mm_subs_epu8(__m128i _A, __m128i _B);
extern __m128i _mm_subs_epu16(__m128i _A, __m128i _B);
extern __m128i _mm_and_si128(__m128i _A, __m128i _B);
extern __m128i _mm_andnot_si128(__m128i _A, __m128i _B);
extern __m128i _mm_or_si128(__m128i _A, __m128i _B);
extern __m128i _mm_xor_si128(__m128i _A, __m128i _B);
extern __m128i _mm_slli_si128(__m128i _A, int _Imm);
extern __m128i _mm_slli_epi16(__m128i _A, int _Count);
extern __m128i _mm_sll_epi16(__m128i _A, __m128i _Count);
extern __m128i _mm_slli_epi32(__m128i _A, int _Count);
extern __m128i _mm_sll_epi32(__m128i _A, __m128i _Count);
extern __m128i _mm_slli_epi64(__m128i _A, int _Count);
extern __m128i _mm_sll_epi64(__m128i _A, __m128i _Count);
extern __m128i _mm_srai_epi16(__m128i _A, int _Count);
extern __m128i _mm_sra_epi16(__m128i _A, __m128i _Count);
extern __m128i _mm_srai_epi32(__m128i _A, int _Count);
extern __m128i _mm_sra_epi32(__m128i _A, __m128i _Count);
extern __m128i _mm_srli_si128(__m128i _A, int _Imm);
extern __m128i _mm_srli_epi16(__m128i _A, int _Count);
extern __m128i _mm_srl_epi16(__m128i _A, __m128i _Count);
extern __m128i _mm_srli_epi32(__m128i _A, int _Count);
extern __m128i _mm_srl_epi32(__m128i _A, __m128i _Count);
extern __m128i _mm_srli_epi64(__m128i _A, int _Count);
extern __m128i _mm_srl_epi64(__m128i _A, __m128i _Count);
extern __m128i _mm_cmpeq_epi8(__m128i _A, __m128i _B);
extern __m128i _mm_cmpeq_epi16(__m128i _A, __m128i _B);
extern __m128i _mm_cmpeq_epi32(__m128i _A, __m128i _B);
extern __m128i _mm_cmpgt_epi8(__m128i _A, __m128i _B);
extern __m128i _mm_cmpgt_epi16(__m128i _A, __m128i _B);
extern __m128i _mm_cmpgt_epi32(__m128i _A, __m128i _B);
extern __m128i _mm_cmplt_epi8(__m128i _A, __m128i _B);
extern __m128i _mm_cmplt_epi16(__m128i _A, __m128i _B);
extern __m128i _mm_cmplt_epi32(__m128i _A, __m128i _B);
extern __m128i _mm_cvtsi32_si128(int _A);
extern int _mm_cvtsi128_si32(__m128i _A);
extern __m128i _mm_packs_epi16(__m128i _A, __m128i _B);
extern __m128i _mm_packs_epi32(__m128i _A, __m128i _B);
extern __m128i _mm_packus_epi16(__m128i _A, __m128i _B);
extern int _mm_extract_epi16(__m128i _A, int _Imm);
extern __m128i _mm_insert_epi16(__m128i _A, int _B, int _Imm);
extern int _mm_movemask_epi8(__m128i _A);
extern __m128i _mm_shuffle_epi32(__m128i _A, int _Imm);
extern __m128i _mm_shufflehi_epi16(__m128i _A, int _Imm);
extern __m128i _mm_shufflelo_epi16(__m128i _A, int _Imm);
extern __m128i _mm_unpackhi_epi8(__m128i _A, __m128i _B);
extern __m128i _mm_unpackhi_epi16(__m128i _A, __m128i _B);
extern __m128i _mm_unpackhi_epi32(__m128i _A, __m128i _B);
extern __m128i _mm_unpackhi_epi64(__m128i _A, __m128i _B);
extern __m128i _mm_unpacklo_epi8(__m128i _A, __m128i _B);
extern __m128i _mm_unpacklo_epi16(__m128i _A, __m128i _B);
extern __m128i _mm_unpacklo_epi32(__m128i _A, __m128i _B);
extern __m128i _mm_unpacklo_epi64(__m128i _A, __m128i _B);
extern __m128i _mm_load_si128(__m128i const*_P);
extern __m128i _mm_loadu_si128(__m128i const*_P);
extern __m128i _mm_loadl_epi64(__m128i const*_P);
extern __m128i _mm_set_epi64(__m64 _Q1, __m64 _Q0);
extern __m128i _mm_set_epi32(int _I3, int _I2, int _I1, int _I0);
extern __m128i _mm_set_epi16(short _W7, short _W6, short _W5, short _W4,
                             short _W3, short _W2, short _W1, short _W0);
extern __m128i _mm_set_epi8(char _B15, char _B14, char _B13, char _B12,
                            char _B11, char _B10, char _B9, char _B8,
                            char _B7, char _B6, char _B5, char _B4,
                            char _B3, char _B2, char _B1, char _B0);
extern __m128i _mm_set1_epi64(__m64 _Q);
extern __m128i _mm_set1_epi32(int _I);
extern __m128i _mm_set1_epi16(short _W);
extern __m128i _mm_set1_epi8(char _B);
extern __m128i _mm_setl_epi64(__m128i _Q);
extern __m128i _mm_setr_epi64(__m64 _Q0, __m64 _Q1);
extern __m128i _mm_setr_epi32(int _I0, int _I1, int _I2, int _I3);
extern __m128i _mm_setr_epi16(short _W0, short _W1, short _W2, short _W3,
                              short _W4, short _W5, short _W6, short _W7);
extern __m128i _mm_setr_epi8(char _B15, char _B14, char _B13, char _B12,
                             char _B11, char _B10, char _B9, char _B8,
                             char _B7, char _B6, char _B5, char _B4,
                             char _B3, char _B2, char _B1, char _B0);
extern __m128i _mm_setzero_si128(void);
extern void _mm_store_si128(__m128i *_P, __m128i _B);
extern void _mm_storeu_si128(__m128i *_P, __m128i _B);
extern void _mm_storel_epi64(__m128i *_P, __m128i _Q);
extern void _mm_maskmoveu_si128(__m128i _D, __m128i _N, char *_P);
extern __m128i _mm_move_epi64(__m128i _Q);
extern __m128i _mm_movpi64_epi64(__m64 _Q);
extern __m64 _mm_movepi64_pi64(__m128i _Q);
extern void _mm_stream_pd(double *_Dp, __m128d _A);
extern void _mm_stream_si128(__m128i *_P, __m128i _A);
extern void _mm_clflush(void const*_P);
extern void _mm_lfence(void);
extern void _mm_mfence(void);
extern void _mm_stream_si32(int *_P, int _I);
extern void _mm_pause(void);
extern double _mm_cvtsd_f64(__m128d _A);
extern __m128  _mm_castpd_ps(__m128d);
extern __m128i _mm_castpd_si128(__m128d);
extern __m128d _mm_castps_pd(__m128);
extern __m128i _mm_castps_si128(__m128);
extern __m128  _mm_castsi128_ps(__m128i);
extern __m128d _mm_castsi128_pd(__m128i);
}; 
extern "C" { 
extern __m128 _mm_addsub_ps(__m128 a, __m128 b);
extern __m128 _mm_hadd_ps(__m128 a, __m128 b);
extern __m128 _mm_hsub_ps(__m128 a, __m128 b);
extern __m128 _mm_movehdup_ps(__m128 a);
extern __m128 _mm_moveldup_ps(__m128 a);
extern __m128d _mm_addsub_pd(__m128d a, __m128d b);
extern __m128d _mm_hadd_pd(__m128d a, __m128d b);
extern __m128d _mm_hsub_pd(__m128d a, __m128d b);
extern __m128d _mm_loaddup_pd(double const * dp);
extern __m128d _mm_movedup_pd(__m128d a);
extern __m128i _mm_lddqu_si128(__m128i const *p);
extern void _mm_monitor(void const *p, unsigned extensions, unsigned hints);
extern void _mm_mwait(unsigned extensions, unsigned hints);
}; 
extern "C" {
    extern __m128i _mm_hadd_epi16 (__m128i a, __m128i b);
    extern __m128i _mm_hadd_epi32 (__m128i a, __m128i b);
    extern __m128i _mm_hadds_epi16 (__m128i a, __m128i b);
    extern __m64 _mm_hadd_pi16 (__m64 a, __m64 b);
    extern __m64 _mm_hadd_pi32 (__m64 a, __m64 b);
    extern __m64 _mm_hadds_pi16 (__m64 a, __m64 b);
    extern __m128i _mm_hsub_epi16 (__m128i a, __m128i b);
    extern __m128i _mm_hsub_epi32 (__m128i a, __m128i b);
    extern __m128i _mm_hsubs_epi16 (__m128i a, __m128i b);
    extern __m64 _mm_hsub_pi16 (__m64 a, __m64 b);
    extern __m64 _mm_hsub_pi32 (__m64 a, __m64 b);
    extern __m64 _mm_hsubs_pi16 (__m64 a, __m64 b);
    extern __m128i _mm_maddubs_epi16 (__m128i a, __m128i b);
    extern __m64 _mm_maddubs_pi16 (__m64 a, __m64 b);
    extern __m128i _mm_mulhrs_epi16 (__m128i a, __m128i b);
    extern __m64 _mm_mulhrs_pi16 (__m64 a, __m64 b);
    extern __m128i _mm_shuffle_epi8 (__m128i a, __m128i b);
    extern __m64 _mm_shuffle_pi8 (__m64 a, __m64 b);
    extern __m128i _mm_sign_epi8 (__m128i a, __m128i b);
    extern __m128i _mm_sign_epi16 (__m128i a, __m128i b);
    extern __m128i _mm_sign_epi32 (__m128i a, __m128i b);
    extern __m64 _mm_sign_pi8 (__m64 a, __m64 b);
    extern __m64 _mm_sign_pi16 (__m64 a, __m64 b);
    extern __m64 _mm_sign_pi32 (__m64 a, __m64 b);
    extern __m128i _mm_alignr_epi8 (__m128i a, __m128i b, int n);
    extern __m64 _mm_alignr_pi8 (__m64 a, __m64 b, int n);
    extern __m128i _mm_abs_epi8 (__m128i a);
    extern __m128i _mm_abs_epi16 (__m128i a);
    extern __m128i _mm_abs_epi32 (__m128i a);
    extern __m64 _mm_abs_pi8 (__m64 a);
    extern __m64 _mm_abs_pi16 (__m64 a);
    extern __m64 _mm_abs_pi32 (__m64 a);
};
extern "C" {
        extern __m128i _mm_blend_epi16 (__m128i v1, __m128i v2,
                                        const int mask);
        extern __m128i _mm_blendv_epi8 (__m128i v1, __m128i v2, __m128i mask);
        extern __m128  _mm_blend_ps (__m128  v1, __m128  v2, const int mask);
        extern __m128  _mm_blendv_ps(__m128  v1, __m128  v2, __m128 v3);
        extern __m128d _mm_blend_pd (__m128d v1, __m128d v2, const int mask);
        extern __m128d _mm_blendv_pd(__m128d v1, __m128d v2, __m128d v3);
        extern __m128  _mm_dp_ps(__m128  val1, __m128  val2, const int mask);
        extern __m128d _mm_dp_pd(__m128d val1, __m128d val2, const int mask);
        extern __m128i _mm_cmpeq_epi64(__m128i val1, __m128i val2);
        extern __m128i _mm_min_epi8 (__m128i val1, __m128i val2);
        extern __m128i _mm_max_epi8 (__m128i val1, __m128i val2);
        extern __m128i _mm_min_epu16(__m128i val1, __m128i val2);
        extern __m128i _mm_max_epu16(__m128i val1, __m128i val2);
        extern __m128i _mm_min_epi32(__m128i val1, __m128i val2);
        extern __m128i _mm_max_epi32(__m128i val1, __m128i val2);
        extern __m128i _mm_min_epu32(__m128i val1, __m128i val2);
        extern __m128i _mm_max_epu32(__m128i val1, __m128i val2);
        extern __m128i _mm_mullo_epi32(__m128i a, __m128i b);
        extern __m128i _mm_mul_epi32(__m128i a, __m128i b);
        extern int _mm_testz_si128(__m128i mask, __m128i val);
        extern int _mm_testc_si128(__m128i mask, __m128i val);
        extern int _mm_testnzc_si128(__m128i mask, __m128i s2);
        extern __m128 _mm_insert_ps(__m128 dst, __m128 src, const int ndx);
        extern int _mm_extract_ps(__m128 src, const int ndx);
        extern __m128i _mm_insert_epi8 (__m128i dst, int s, const int ndx);
        extern __m128i _mm_insert_epi32(__m128i dst, int s, const int ndx);
        extern int   _mm_extract_epi8 (__m128i src, const int ndx);
        extern int   _mm_extract_epi32(__m128i src, const int ndx);
        extern __m128i _mm_minpos_epu16(__m128i shortValues);
        extern __m128d _mm_round_pd(__m128d val, int iRoundMode);
        extern __m128d _mm_round_sd(__m128d dst, __m128d val, int iRoundMode);
        extern __m128  _mm_round_ps(__m128  val, int iRoundMode);
        extern __m128  _mm_round_ss(__m128 dst, __m128  val, int iRoundMode);
        extern __m128i _mm_cvtepi8_epi32 (__m128i byteValues);
        extern __m128i _mm_cvtepi16_epi32(__m128i shortValues);
        extern __m128i _mm_cvtepi8_epi64 (__m128i byteValues);
        extern __m128i _mm_cvtepi32_epi64(__m128i intValues);
        extern __m128i _mm_cvtepi16_epi64(__m128i shortValues);
        extern __m128i _mm_cvtepi8_epi16 (__m128i byteValues);
        extern __m128i _mm_cvtepu8_epi32 (__m128i byteValues);
        extern __m128i _mm_cvtepu16_epi32(__m128i shortValues);
        extern __m128i _mm_cvtepu8_epi64 (__m128i shortValues);
        extern __m128i _mm_cvtepu32_epi64(__m128i intValues);
        extern __m128i _mm_cvtepu16_epi64(__m128i shortValues);
        extern __m128i _mm_cvtepu8_epi16 (__m128i byteValues);
        extern __m128i _mm_packus_epi32(__m128i val1, __m128i val2);
        extern __m128i _mm_mpsadbw_epu8(__m128i s1, __m128i s2, const int msk);
        extern __m128i _mm_stream_load_si128(__m128i* v1);
}; 
extern "C" {
    extern __m128i _mm_cmpistrm (__m128i a, __m128i b, const int mode);
    extern int     _mm_cmpistri (__m128i a, __m128i b, const int mode);
    extern __m128i _mm_cmpestrm (__m128i a, int la, __m128i b, int lb, const int mode);
    extern int     _mm_cmpestri (__m128i a, int la, __m128i b, int lb, const int mode);
    extern int     _mm_cmpistrz (__m128i a, __m128i b, const int mode);
    extern int     _mm_cmpistrc (__m128i a, __m128i b, const int mode);
    extern int     _mm_cmpistrs (__m128i a, __m128i b, const int mode);
    extern int     _mm_cmpistro (__m128i a, __m128i b, const int mode);
    extern int     _mm_cmpistra (__m128i a, __m128i b, const int mode);
    extern int     _mm_cmpestrz (__m128i a, int la, __m128i b, int lb, const int mode);
    extern int     _mm_cmpestrc (__m128i a, int la, __m128i b, int lb, const int mode);
    extern int     _mm_cmpestrs (__m128i a, int la, __m128i b, int lb, const int mode);
    extern int     _mm_cmpestro (__m128i a, int la, __m128i b, int lb, const int mode);
    extern int     _mm_cmpestra (__m128i a, int la, __m128i b, int lb, const int mode);
    extern __m128i _mm_cmpgt_epi64(__m128i val1, __m128i val2);
    extern int _mm_popcnt_u32(unsigned int v);
    extern unsigned int _mm_crc32_u8 (unsigned int crc, unsigned char v);
    extern unsigned int _mm_crc32_u16(unsigned int crc, unsigned short v);
    extern unsigned int _mm_crc32_u32(unsigned int crc, unsigned int v);
}; 
extern "C" {
extern __m128i _mm_aesdec_si128(__m128i v, __m128i rkey);
extern __m128i _mm_aesdeclast_si128(__m128i v, __m128i rkey);
extern __m128i _mm_aesenc_si128(__m128i v, __m128i rkey);
extern __m128i _mm_aesenclast_si128(__m128i v, __m128i rkey);
extern __m128i _mm_aesimc_si128(__m128i v);
extern __m128i _mm_aeskeygenassist_si128(__m128i ckey, const int rcon);
extern __m128i _mm_clmulepi64_si128(__m128i v1, __m128i v2,
                                            const int imm8);
}; 
extern "C" {
typedef union __declspec(intrin_type) __declspec(align(32)) __m256 {
    float m256_f32[8];
} __m256;
typedef struct __declspec(intrin_type) __declspec(align(32)) __m256d {
    double m256d_f64[4];
} __m256d;
typedef union  __declspec(intrin_type) __declspec(align(32)) __m256i {
    __int8              m256i_i8[32];
    __int16             m256i_i16[16];
    __int32             m256i_i32[8];
    __int64             m256i_i64[4];
    unsigned __int8     m256i_u8[32];
    unsigned __int16    m256i_u16[16];
    unsigned __int32    m256i_u32[8];
    unsigned __int64    m256i_u64[4];
} __m256i;
extern __m256d __cdecl _mm256_add_pd(__m256d, __m256d);
extern __m256 __cdecl _mm256_add_ps(__m256, __m256);
extern __m256d __cdecl _mm256_addsub_pd(__m256d, __m256d);
extern __m256 __cdecl _mm256_addsub_ps(__m256, __m256);
extern __m256d __cdecl _mm256_and_pd(__m256d, __m256d);
extern __m256 __cdecl _mm256_and_ps(__m256, __m256);
extern __m256d __cdecl _mm256_andnot_pd(__m256d, __m256d);
extern __m256 __cdecl _mm256_andnot_ps(__m256, __m256);
extern __m256d __cdecl _mm256_blend_pd(__m256d, __m256d, const int);
extern __m256 __cdecl _mm256_blend_ps(__m256, __m256, const int);
extern __m256d __cdecl _mm256_blendv_pd(__m256d, __m256d, __m256d);
extern __m256 __cdecl _mm256_blendv_ps(__m256, __m256, __m256);
extern __m256d __cdecl _mm256_div_pd(__m256d, __m256d);
extern __m256 __cdecl _mm256_div_ps(__m256, __m256);
extern __m256 __cdecl _mm256_dp_ps(__m256, __m256, const int);
extern __m256d __cdecl _mm256_hadd_pd(__m256d, __m256d);
extern __m256 __cdecl _mm256_hadd_ps(__m256, __m256);
extern __m256d __cdecl _mm256_hsub_pd(__m256d, __m256d);
extern __m256 __cdecl _mm256_hsub_ps(__m256, __m256);
extern __m256d __cdecl _mm256_max_pd(__m256d, __m256d);
extern __m256 __cdecl _mm256_max_ps(__m256, __m256);
extern __m256d __cdecl _mm256_min_pd(__m256d, __m256d);
extern __m256 __cdecl _mm256_min_ps(__m256, __m256);
extern __m256d __cdecl _mm256_mul_pd(__m256d, __m256d);
extern __m256 __cdecl _mm256_mul_ps(__m256, __m256);
extern __m256d __cdecl _mm256_or_pd(__m256d, __m256d);
extern __m256 __cdecl _mm256_or_ps(__m256, __m256);
extern __m256d __cdecl _mm256_shuffle_pd(__m256d, __m256d, const int);
extern __m256 __cdecl _mm256_shuffle_ps(__m256, __m256, const int);
extern __m256d __cdecl _mm256_sub_pd(__m256d, __m256d);
extern __m256 __cdecl _mm256_sub_ps(__m256, __m256);
extern __m256d __cdecl _mm256_xor_pd(__m256d, __m256d);
extern __m256 __cdecl _mm256_xor_ps(__m256, __m256);
extern __m128d __cdecl _mm_cmp_pd(__m128d, __m128d, const int);
extern __m256d __cdecl _mm256_cmp_pd(__m256d, __m256d, const int);
extern __m128 __cdecl _mm_cmp_ps(__m128, __m128, const int);
extern __m256 __cdecl _mm256_cmp_ps(__m256, __m256, const int);
extern __m128d __cdecl _mm_cmp_sd(__m128d, __m128d, const int);
extern __m128 __cdecl _mm_cmp_ss(__m128, __m128, const int);
extern __m256d __cdecl _mm256_cvtepi32_pd(__m128i);
extern __m256  __cdecl _mm256_cvtepi32_ps(__m256i);
extern __m128  __cdecl _mm256_cvtpd_ps(__m256d);
extern __m256i __cdecl _mm256_cvtps_epi32(__m256);
extern __m256d __cdecl _mm256_cvtps_pd(__m128);
extern __m128i __cdecl _mm256_cvttpd_epi32(__m256d);
extern __m128i __cdecl _mm256_cvtpd_epi32(__m256d);
extern __m256i __cdecl _mm256_cvttps_epi32(__m256);
extern __m128  __cdecl _mm256_extractf128_ps(__m256, const int);
extern __m128d __cdecl _mm256_extractf128_pd(__m256d, const int);
extern __m128i __cdecl _mm256_extractf128_si256(__m256i, const int);
extern void __cdecl _mm256_zeroall(void);
extern void __cdecl _mm256_zeroupper(void);
extern __m256  __cdecl _mm256_permutevar_ps(__m256, __m256i);
extern __m128  __cdecl _mm_permutevar_ps(__m128, __m128i);
extern __m256  __cdecl _mm256_permute_ps(__m256, int);
extern __m128  __cdecl _mm_permute_ps(__m128, int);
extern __m256d __cdecl _mm256_permutevar_pd(__m256d, __m256i);
extern __m128d __cdecl _mm_permutevar_pd(__m128d, __m128i);
extern __m256d __cdecl _mm256_permute_pd(__m256d, int);
extern __m128d __cdecl _mm_permute_pd(__m128d, int);
extern __m256  __cdecl _mm256_permute2f128_ps(__m256, __m256, int);
extern __m256d __cdecl _mm256_permute2f128_pd(__m256d, __m256d, int);
extern __m256i __cdecl _mm256_permute2f128_si256(__m256i, __m256i, int);
extern __m256  __cdecl _mm256_broadcast_ss(float const *);
extern __m128  __cdecl _mm_broadcast_ss(float const *);
extern __m256d __cdecl _mm256_broadcast_sd(double const *);
extern __m256  __cdecl _mm256_broadcast_ps(__m128 const *);
extern __m256d __cdecl _mm256_broadcast_pd(__m128d const *);
extern __m256  __cdecl _mm256_insertf128_ps(__m256, __m128, int);
extern __m256d __cdecl _mm256_insertf128_pd(__m256d, __m128d, int);
extern __m256i __cdecl _mm256_insertf128_si256(__m256i, __m128i, int);
extern __m256d __cdecl _mm256_load_pd(double const *);
extern void    __cdecl _mm256_store_pd(double *, __m256d);
extern __m256  __cdecl _mm256_load_ps(float const *);
extern void    __cdecl _mm256_store_ps(float *, __m256);
extern __m256d __cdecl _mm256_loadu_pd(double const *);
extern void    __cdecl _mm256_storeu_pd(double *, __m256d);
extern __m256  __cdecl _mm256_loadu_ps(float const *);
extern void    __cdecl _mm256_storeu_ps(float *, __m256);
extern __m256i __cdecl _mm256_load_si256(__m256i const *);
extern void    __cdecl _mm256_store_si256(__m256i *, __m256i);
extern __m256i __cdecl _mm256_loadu_si256(__m256i const *);
extern void    __cdecl _mm256_storeu_si256(__m256i *, __m256i);
extern __m256d __cdecl _mm256_maskload_pd(double const *, __m256i);
extern void    __cdecl _mm256_maskstore_pd(double *, __m256i, __m256d);
extern __m128d __cdecl _mm_maskload_pd(double const *, __m128i);
extern void    __cdecl _mm_maskstore_pd(double *, __m128i, __m128d);
extern __m256  __cdecl _mm256_maskload_ps(float const *, __m256i);
extern void    __cdecl _mm256_maskstore_ps(float *, __m256i, __m256);
extern __m128  __cdecl _mm_maskload_ps(float const *, __m128i);
extern void    __cdecl _mm_maskstore_ps(float *, __m128i, __m128);
extern __m256  __cdecl _mm256_movehdup_ps(__m256);
extern __m256  __cdecl _mm256_moveldup_ps(__m256);
extern __m256d __cdecl _mm256_movedup_pd(__m256d);
extern __m256i __cdecl _mm256_lddqu_si256(__m256i const *);
extern void    __cdecl _mm256_stream_si256(__m256i *, __m256i);
extern void    __cdecl _mm256_stream_pd(double *, __m256d);
extern void    __cdecl _mm256_stream_ps(float *, __m256);
extern __m256  __cdecl _mm256_rcp_ps(__m256);
extern __m256  __cdecl _mm256_rsqrt_ps(__m256);
extern __m256d __cdecl _mm256_sqrt_pd(__m256d);
extern __m256  __cdecl _mm256_sqrt_ps(__m256);
extern __m256d __cdecl _mm256_round_pd(__m256d, int);
extern __m256  __cdecl _mm256_round_ps(__m256, int);
extern __m256d __cdecl _mm256_unpackhi_pd(__m256d, __m256d);
extern __m256  __cdecl _mm256_unpackhi_ps(__m256, __m256);
extern __m256d __cdecl _mm256_unpacklo_pd(__m256d, __m256d);
extern __m256  __cdecl _mm256_unpacklo_ps(__m256, __m256);
extern int     __cdecl _mm256_testz_si256(__m256i, __m256i);
extern int     __cdecl _mm256_testc_si256(__m256i, __m256i);
extern int     __cdecl _mm256_testnzc_si256(__m256i, __m256i);
extern int     __cdecl _mm256_testz_pd(__m256d, __m256d);
extern int     __cdecl _mm256_testc_pd(__m256d, __m256d);
extern int     __cdecl _mm256_testnzc_pd(__m256d, __m256d);
extern int     __cdecl _mm_testz_pd(__m128d, __m128d);
extern int     __cdecl _mm_testc_pd(__m128d, __m128d);
extern int     __cdecl _mm_testnzc_pd(__m128d, __m128d);
extern int     __cdecl _mm256_testz_ps(__m256, __m256);
extern int     __cdecl _mm256_testc_ps(__m256, __m256);
extern int     __cdecl _mm256_testnzc_ps(__m256, __m256);
extern int     __cdecl _mm_testz_ps(__m128, __m128);
extern int     __cdecl _mm_testc_ps(__m128, __m128);
extern int     __cdecl _mm_testnzc_ps(__m128, __m128);
extern int     __cdecl _mm256_movemask_pd(__m256d);
extern int     __cdecl _mm256_movemask_ps(__m256);
extern __m256d __cdecl _mm256_setzero_pd(void);
extern __m256  __cdecl _mm256_setzero_ps(void);
extern __m256i __cdecl _mm256_setzero_si256(void);
extern __m256d __cdecl _mm256_set_pd(double, double, double, double);
extern __m256  __cdecl _mm256_set_ps(float, float, float, float,
                                            float, float, float, float);
extern __m256i __cdecl _mm256_set_epi8(char, char, char, char,
                                              char, char, char, char,
                                              char, char, char, char,
                                              char, char, char, char,
                                              char, char, char, char,
                                              char, char, char, char,
                                              char, char, char, char,
                                              char, char, char, char);
extern __m256i __cdecl _mm256_set_epi16(short, short, short, short,
                                               short, short, short, short,
                                               short, short, short, short,
                                               short, short, short, short);
extern __m256i __cdecl _mm256_set_epi32(int, int, int, int,
                                               int, int, int, int);
extern __m256i __cdecl _mm256_set_epi64x(__int64, __int64,
                                                __int64, __int64);
extern __m256d __cdecl _mm256_setr_pd(double, double, double, double);
extern __m256  __cdecl _mm256_setr_ps(float, float, float, float,
                                             float, float, float, float);
extern __m256i __cdecl _mm256_setr_epi8(char, char, char, char,
                                               char, char, char, char,
                                               char, char, char, char,
                                               char, char, char, char,
                                               char, char, char, char,
                                               char, char, char, char,
                                               char, char, char, char,
                                               char, char, char, char);
extern __m256i __cdecl _mm256_setr_epi16(short, short, short, short,
                                                short, short, short, short,
                                                short, short, short, short,
                                                short, short, short, short);
extern __m256i __cdecl _mm256_setr_epi32(int, int, int, int,
                                                int, int, int, int);
extern __m256i __cdecl _mm256_setr_epi64x(__int64, __int64,
                                                 __int64, __int64);
extern __m256d __cdecl _mm256_set1_pd(double);
extern __m256  __cdecl _mm256_set1_ps(float);
extern __m256i __cdecl _mm256_set1_epi8(char);
extern __m256i __cdecl _mm256_set1_epi16(short);
extern __m256i __cdecl _mm256_set1_epi32(int);
extern __m256i __cdecl _mm256_set1_epi64x(long long);
extern __m256  __cdecl _mm256_castpd_ps(__m256d);
extern __m256d __cdecl _mm256_castps_pd(__m256);
extern __m256i __cdecl _mm256_castps_si256(__m256);
extern __m256i __cdecl _mm256_castpd_si256(__m256d);
extern __m256  __cdecl _mm256_castsi256_ps(__m256i);
extern __m256d __cdecl _mm256_castsi256_pd(__m256i);
extern __m128  __cdecl _mm256_castps256_ps128(__m256);
extern __m128d __cdecl _mm256_castpd256_pd128(__m256d);
extern __m128i __cdecl _mm256_castsi256_si128(__m256i);
extern __m256  __cdecl _mm256_castps128_ps256(__m128);
extern __m256d __cdecl _mm256_castpd128_pd256(__m128d);
extern __m256i __cdecl _mm256_castsi128_si256(__m128i);
extern __m128  __cdecl _mm_cvtph_ps(__m128i);
extern __m256  __cdecl _mm256_cvtph_ps(__m128i);
extern __m128i __cdecl _mm_cvtps_ph(__m128 m1, const int imm);
extern __m128i __cdecl _mm256_cvtps_ph(__m256, int);
extern unsigned __int64 __cdecl _xgetbv(unsigned int);
extern void __cdecl _xsetbv(unsigned int, unsigned __int64);
extern void __cdecl _xsave(void *, unsigned __int64);
extern void __cdecl _xsaveopt(void *, unsigned __int64);
extern void __cdecl _xrstor(void const *, unsigned __int64);
extern void __cdecl _fxsave(void *);
extern void __cdecl _fxrstor(void const *);
extern int __cdecl _rdrand16_step(unsigned short *);
extern int __cdecl _rdrand32_step(unsigned int *);
extern __m128  __cdecl _mm_fmadd_ps(__m128, __m128, __m128);
extern __m128d __cdecl _mm_fmadd_pd(__m128d, __m128d, __m128d);
extern __m128  __cdecl _mm_fmadd_ss(__m128, __m128, __m128);
extern __m128d __cdecl _mm_fmadd_sd(__m128d, __m128d, __m128d);
extern __m128  __cdecl _mm_fmsub_ps(__m128, __m128, __m128);
extern __m128d __cdecl _mm_fmsub_pd(__m128d, __m128d, __m128d);
extern __m128  __cdecl _mm_fmsub_ss(__m128, __m128, __m128);
extern __m128d __cdecl _mm_fmsub_sd(__m128d, __m128d, __m128d);
extern __m128  __cdecl _mm_fnmadd_ps(__m128, __m128, __m128);
extern __m128d __cdecl _mm_fnmadd_pd(__m128d, __m128d, __m128d);
extern __m128  __cdecl _mm_fnmadd_ss(__m128, __m128, __m128);
extern __m128d __cdecl _mm_fnmadd_sd(__m128d, __m128d, __m128d);
extern __m128  __cdecl _mm_fnmsub_ps(__m128, __m128, __m128);
extern __m128d __cdecl _mm_fnmsub_pd(__m128d, __m128d, __m128d);
extern __m128  __cdecl _mm_fnmsub_ss(__m128, __m128, __m128);
extern __m128d __cdecl _mm_fnmsub_sd(__m128d, __m128d, __m128d);
extern __m256  __cdecl _mm256_fmadd_ps(__m256, __m256, __m256);
extern __m256d __cdecl _mm256_fmadd_pd(__m256d, __m256d, __m256d);
extern __m256  __cdecl _mm256_fmsub_ps(__m256, __m256, __m256);
extern __m256d __cdecl _mm256_fmsub_pd(__m256d, __m256d, __m256d);
extern __m256  __cdecl _mm256_fnmadd_ps(__m256, __m256, __m256);
extern __m256d __cdecl _mm256_fnmadd_pd(__m256d, __m256d, __m256d);
extern __m256  __cdecl _mm256_fnmsub_ps(__m256, __m256, __m256);
extern __m256d __cdecl _mm256_fnmsub_pd(__m256d, __m256d, __m256d);
extern __m128  __cdecl _mm_fmaddsub_ps(__m128, __m128, __m128);
extern __m128d __cdecl _mm_fmaddsub_pd(__m128d, __m128d, __m128d);
extern __m128  __cdecl _mm_fmsubadd_ps(__m128, __m128, __m128);
extern __m128d __cdecl _mm_fmsubadd_pd(__m128d, __m128d, __m128d);
extern __m256  __cdecl _mm256_fmaddsub_ps(__m256, __m256, __m256);
extern __m256d __cdecl _mm256_fmaddsub_pd(__m256d, __m256d, __m256d);
extern __m256  __cdecl _mm256_fmsubadd_ps(__m256, __m256, __m256);
extern __m256d __cdecl _mm256_fmsubadd_pd(__m256d, __m256d, __m256d);
extern __m256i __cdecl _mm256_cmpeq_epi8(__m256i, __m256i);
extern __m256i __cdecl _mm256_cmpeq_epi16(__m256i, __m256i);
extern __m256i __cdecl _mm256_cmpeq_epi32(__m256i, __m256i);
extern __m256i __cdecl _mm256_cmpeq_epi64(__m256i, __m256i);
extern __m256i __cdecl _mm256_cmpgt_epi8(__m256i, __m256i);
extern __m256i __cdecl _mm256_cmpgt_epi16(__m256i, __m256i);
extern __m256i __cdecl _mm256_cmpgt_epi32(__m256i, __m256i);
extern __m256i __cdecl _mm256_cmpgt_epi64(__m256i, __m256i);
extern __m256i __cdecl _mm256_max_epi8(__m256i, __m256i);
extern __m256i __cdecl _mm256_max_epi16(__m256i, __m256i);
extern __m256i __cdecl _mm256_max_epi32(__m256i, __m256i);
extern __m256i __cdecl _mm256_max_epu8(__m256i, __m256i);
extern __m256i __cdecl _mm256_max_epu16(__m256i, __m256i);
extern __m256i __cdecl _mm256_max_epu32(__m256i, __m256i);
extern __m256i __cdecl _mm256_min_epi8(__m256i, __m256i);
extern __m256i __cdecl _mm256_min_epi16(__m256i, __m256i);
extern __m256i __cdecl _mm256_min_epi32(__m256i, __m256i);
extern __m256i __cdecl _mm256_min_epu8(__m256i, __m256i);
extern __m256i __cdecl _mm256_min_epu16(__m256i, __m256i);
extern __m256i __cdecl _mm256_min_epu32(__m256i, __m256i);
extern __m256i __cdecl _mm256_and_si256(__m256i, __m256i);
extern __m256i __cdecl _mm256_andnot_si256(__m256i, __m256i);
extern __m256i __cdecl _mm256_or_si256(__m256i, __m256i);
extern __m256i __cdecl _mm256_xor_si256(__m256i, __m256i);
extern __m256i __cdecl _mm256_abs_epi8(__m256i);
extern __m256i __cdecl _mm256_abs_epi16(__m256i);
extern __m256i __cdecl _mm256_abs_epi32(__m256i);
extern __m256i __cdecl _mm256_add_epi8(__m256i, __m256i);
extern __m256i __cdecl _mm256_add_epi16(__m256i, __m256i);
extern __m256i __cdecl _mm256_add_epi32(__m256i, __m256i);
extern __m256i __cdecl _mm256_add_epi64(__m256i, __m256i);
extern __m256i __cdecl _mm256_adds_epi8(__m256i, __m256i);
extern __m256i __cdecl _mm256_adds_epi16(__m256i, __m256i);
extern __m256i __cdecl _mm256_adds_epu8(__m256i, __m256i);
extern __m256i __cdecl _mm256_adds_epu16(__m256i, __m256i);
extern __m256i __cdecl _mm256_sub_epi8(__m256i, __m256i);
extern __m256i __cdecl _mm256_sub_epi16(__m256i, __m256i);
extern __m256i __cdecl _mm256_sub_epi32(__m256i, __m256i);
extern __m256i __cdecl _mm256_sub_epi64(__m256i, __m256i);
extern __m256i __cdecl _mm256_subs_epi8(__m256i, __m256i);
extern __m256i __cdecl _mm256_subs_epi16(__m256i, __m256i);
extern __m256i __cdecl _mm256_subs_epu8(__m256i, __m256i);
extern __m256i __cdecl _mm256_subs_epu16(__m256i, __m256i);
extern __m256i __cdecl _mm256_avg_epu8(__m256i, __m256i);
extern __m256i __cdecl _mm256_avg_epu16(__m256i, __m256i);
extern __m256i __cdecl _mm256_hadd_epi16(__m256i, __m256i);
extern __m256i __cdecl _mm256_hadd_epi32(__m256i, __m256i);
extern __m256i __cdecl _mm256_hadds_epi16(__m256i, __m256i);
extern __m256i __cdecl _mm256_hsub_epi16(__m256i, __m256i);
extern __m256i __cdecl _mm256_hsub_epi32(__m256i, __m256i);
extern __m256i __cdecl _mm256_hsubs_epi16(__m256i, __m256i);
extern __m256i __cdecl _mm256_madd_epi16(__m256i, __m256i);
extern __m256i __cdecl _mm256_maddubs_epi16(__m256i, __m256i);
extern __m256i __cdecl _mm256_mulhi_epi16(__m256i, __m256i);
extern __m256i __cdecl _mm256_mulhi_epu16(__m256i, __m256i);
extern __m256i __cdecl _mm256_mullo_epi16(__m256i, __m256i);
extern __m256i __cdecl _mm256_mullo_epi32(__m256i, __m256i);
extern __m256i __cdecl _mm256_mul_epu32(__m256i, __m256i);
extern __m256i __cdecl _mm256_mul_epi32(__m256i, __m256i);
extern __m256i __cdecl _mm256_sign_epi8(__m256i, __m256i);
extern __m256i __cdecl _mm256_sign_epi16(__m256i, __m256i);
extern __m256i __cdecl _mm256_sign_epi32(__m256i, __m256i);
extern __m256i __cdecl _mm256_mulhrs_epi16(__m256i, __m256i);
extern __m256i __cdecl _mm256_sad_epu8(__m256i, __m256i);
extern __m256i __cdecl _mm256_mpsadbw_epu8(__m256i, __m256i, const int);
extern __m256i __cdecl _mm256_slli_si256(__m256i, const int);
extern __m256i __cdecl _mm256_srli_si256(__m256i, const int);
extern __m256i __cdecl _mm256_sll_epi16(__m256i, __m128i);
extern __m256i __cdecl _mm256_sll_epi32(__m256i, __m128i);
extern __m256i __cdecl _mm256_sll_epi64(__m256i, __m128i);
extern __m256i __cdecl _mm256_slli_epi16(__m256i, int);
extern __m256i __cdecl _mm256_slli_epi32(__m256i, int);
extern __m256i __cdecl _mm256_slli_epi64(__m256i, int);
extern __m256i __cdecl _mm256_sllv_epi32(__m256i, __m256i);
extern __m256i __cdecl _mm256_sllv_epi64(__m256i, __m256i);
extern __m128i __cdecl _mm_sllv_epi32(__m128i, __m128i);
extern __m128i __cdecl _mm_sllv_epi64(__m128i, __m128i);
extern __m256i __cdecl _mm256_sra_epi16(__m256i, __m128i);
extern __m256i __cdecl _mm256_sra_epi32(__m256i, __m128i);
extern __m256i __cdecl _mm256_srai_epi16(__m256i, int);
extern __m256i __cdecl _mm256_srai_epi32(__m256i, int);
extern __m256i __cdecl _mm256_srav_epi32(__m256i, __m256i);
extern __m128i __cdecl _mm_srav_epi32(__m128i, __m128i);
extern __m256i __cdecl _mm256_srl_epi16(__m256i, __m128i);
extern __m256i __cdecl _mm256_srl_epi32(__m256i, __m128i);
extern __m256i __cdecl _mm256_srl_epi64(__m256i, __m128i);
extern __m256i __cdecl _mm256_srli_epi16(__m256i, int);
extern __m256i __cdecl _mm256_srli_epi32(__m256i, int);
extern __m256i __cdecl _mm256_srli_epi64(__m256i, int);
extern __m256i __cdecl _mm256_srlv_epi32(__m256i, __m256i);
extern __m256i __cdecl _mm256_srlv_epi64(__m256i, __m256i);
extern __m128i __cdecl _mm_srlv_epi32(__m128i, __m128i);
extern __m128i __cdecl _mm_srlv_epi64(__m128i, __m128i);
extern __m128i __cdecl _mm_blend_epi32(__m128i, __m128i, const int);
extern __m256i __cdecl _mm256_blend_epi32(__m256i,__m256i, const int);
extern __m256i __cdecl _mm256_alignr_epi8(__m256i, __m256i, const int);
extern __m256i __cdecl _mm256_blendv_epi8(__m256i, __m256i, __m256i);
extern __m256i __cdecl _mm256_blend_epi16(__m256i, __m256i, const int);
extern __m256i __cdecl _mm256_packs_epi16(__m256i, __m256i);
extern __m256i __cdecl _mm256_packs_epi32(__m256i, __m256i);
extern __m256i __cdecl _mm256_packus_epi16(__m256i, __m256i);
extern __m256i __cdecl _mm256_packus_epi32(__m256i, __m256i);
extern __m256i __cdecl _mm256_unpackhi_epi8(__m256i, __m256i);
extern __m256i __cdecl _mm256_unpackhi_epi16(__m256i, __m256i);
extern __m256i __cdecl _mm256_unpackhi_epi32(__m256i, __m256i);
extern __m256i __cdecl _mm256_unpackhi_epi64(__m256i, __m256i);
extern __m256i __cdecl _mm256_unpacklo_epi8(__m256i, __m256i);
extern __m256i __cdecl _mm256_unpacklo_epi16(__m256i, __m256i);
extern __m256i __cdecl _mm256_unpacklo_epi32(__m256i, __m256i);
extern __m256i __cdecl _mm256_unpacklo_epi64(__m256i, __m256i);
extern __m256i __cdecl _mm256_shuffle_epi8(__m256i, __m256i);
extern __m256i __cdecl _mm256_shuffle_epi32(__m256i, const int);
extern __m256i __cdecl _mm256_shufflehi_epi16(__m256i, const int);
extern __m256i __cdecl _mm256_shufflelo_epi16(__m256i, const int);
extern __m128i __cdecl _mm256_extracti128_si256(__m256i, const int);
extern __m256i __cdecl _mm256_inserti128_si256(__m256i, __m128i, const int);
extern __m128  __cdecl _mm_broadcastss_ps(__m128);
extern __m128d __cdecl _mm_broadcastsd_pd(__m128d);
extern __m128i __cdecl _mm_broadcastb_epi8(__m128i);
extern __m128i __cdecl _mm_broadcastw_epi16(__m128i);
extern __m128i __cdecl _mm_broadcastd_epi32(__m128i);
extern __m128i __cdecl _mm_broadcastq_epi64(__m128i);
extern __m256  __cdecl _mm256_broadcastss_ps(__m128);
extern __m256d __cdecl _mm256_broadcastsd_pd(__m128d);
extern __m256i __cdecl _mm256_broadcastb_epi8(__m128i);
extern __m256i __cdecl _mm256_broadcastw_epi16(__m128i);
extern __m256i __cdecl _mm256_broadcastd_epi32(__m128i);
extern __m256i __cdecl _mm256_broadcastq_epi64(__m128i);
extern __m256i __cdecl _mm256_broadcastsi128_si256(__m128i);
extern __m256i __cdecl _mm256_cvtepi8_epi16(__m128i);
extern __m256i __cdecl _mm256_cvtepi8_epi32(__m128i);
extern __m256i __cdecl _mm256_cvtepi8_epi64(__m128i);
extern __m256i __cdecl _mm256_cvtepi16_epi32(__m128i);
extern __m256i __cdecl _mm256_cvtepi16_epi64(__m128i);
extern __m256i __cdecl _mm256_cvtepi32_epi64(__m128i);
extern __m256i __cdecl _mm256_cvtepu8_epi16(__m128i);
extern __m256i __cdecl _mm256_cvtepu8_epi32(__m128i);
extern __m256i __cdecl _mm256_cvtepu8_epi64(__m128i);
extern __m256i __cdecl _mm256_cvtepu16_epi32(__m128i);
extern __m256i __cdecl _mm256_cvtepu16_epi64(__m128i);
extern __m256i __cdecl _mm256_cvtepu32_epi64(__m128i);
extern int __cdecl _mm256_movemask_epi8(__m256i);
extern __m128i __cdecl _mm_maskload_epi32(int const * ,
                                          __m128i     );
extern __m128i __cdecl _mm_maskload_epi64(__int64 const * ,
                                          __m128i         );
extern void __cdecl _mm_maskstore_epi32(int *   ,
                                        __m128i ,
                                        __m128i );
extern void __cdecl _mm_maskstore_epi64(__int64 * ,
                                        __m128i   ,
                                        __m128i   );
extern __m256i __cdecl _mm256_maskload_epi32(int const * ,
                                             __m256i     );
extern __m256i __cdecl _mm256_maskload_epi64(__int64 const * ,
                                             __m256i         );
extern void __cdecl _mm256_maskstore_epi32(int *   ,
                                           __m256i ,
                                           __m256i );
extern void __cdecl _mm256_maskstore_epi64(__int64 * ,
                                           __m256i   ,
                                           __m256i   );
extern __m256i __cdecl _mm256_permutevar8x32_epi32(__m256i, __m256i);
extern __m256  __cdecl _mm256_permutevar8x32_ps(__m256, __m256i);
extern __m256i __cdecl _mm256_permute4x64_epi64(__m256i, const int);
extern __m256d __cdecl _mm256_permute4x64_pd(__m256d, const int);
extern __m256i __cdecl _mm256_permute2x128_si256(__m256i, __m256i, const int);
extern __m256i  __cdecl _mm256_stream_load_si256(__m256i const *);
extern __m256d __cdecl _mm256_mask_i32gather_pd(__m256d        ,
                                                double const * ,
                                                __m128i        ,
                                                __m256d        ,
                                                const int      );
extern __m256  __cdecl _mm256_mask_i32gather_ps(__m256         ,
                                                float const *  ,
                                                __m256i        ,
                                                __m256         ,
                                                const int      );
extern __m256d __cdecl _mm256_mask_i64gather_pd(__m256d        ,
                                                double const * ,
                                                __m256i        ,
                                                __m256d        ,
                                                const int      );
extern __m128  __cdecl _mm256_mask_i64gather_ps(__m128         ,
                                                float const *  ,
                                                __m256i        ,
                                                __m128         ,
                                                const int      );
extern __m128d __cdecl _mm_mask_i32gather_pd(__m128d        ,
                                             double const * ,
                                             __m128i        ,
                                             __m128d        ,
                                             const int      );
extern __m128  __cdecl _mm_mask_i32gather_ps(__m128         ,
                                             float const *  ,
                                             __m128i        ,
                                             __m128         ,
                                             const int      );
extern __m128d __cdecl _mm_mask_i64gather_pd(__m128d        ,
                                             double const * ,
                                             __m128i        ,
                                             __m128d        ,
                                             const int      );
extern __m128  __cdecl _mm_mask_i64gather_ps(__m128         ,
                                             float const *  ,
                                             __m128i        ,
                                             __m128         ,
                                             const int      );
extern __m256i __cdecl _mm256_mask_i32gather_epi32(__m256i     ,
                                                   int const * ,
                                                   __m256i     ,
                                                   __m256i     ,
                                                   const int   );
extern __m256i __cdecl _mm256_mask_i32gather_epi64(__m256i     ,
                                                   __int64 const * ,
                                                   __m128i     ,
                                                   __m256i     ,
                                                   const int   );
extern __m128i __cdecl _mm256_mask_i64gather_epi32(__m128i     ,
                                                   int     const * ,
                                                   __m256i     ,
                                                   __m128i     ,
                                                   const int   );
extern __m256i __cdecl _mm256_mask_i64gather_epi64(__m256i     ,
                                                   __int64 const * ,
                                                   __m256i     ,
                                                   __m256i     ,
                                                   const int   );
extern __m128i __cdecl _mm_mask_i32gather_epi32(__m128i         ,
                                                int const *     ,
                                                __m128i         ,
                                                __m128i         ,
                                                const int       );
extern __m128i __cdecl _mm_mask_i32gather_epi64(__m128i         ,
                                                __int64 const * ,
                                                __m128i         ,
                                                __m128i         ,
                                                const int       );
extern __m128i __cdecl _mm_mask_i64gather_epi32(__m128i         ,
                                                int     const * ,
                                                __m128i         ,
                                                __m128i         ,
                                                const int       );
extern __m128i __cdecl _mm_mask_i64gather_epi64(__m128i         ,
                                                __int64 const * ,
                                                __m128i         ,
                                                __m128i         ,
                                                const int       );
extern __m256d __cdecl _mm256_i32gather_pd(double const * ,
                                           __m128i        ,
                                           const int      );
extern __m256  __cdecl _mm256_i32gather_ps(float  const * ,
                                           __m256i        ,
                                           const int      );
extern __m256d __cdecl _mm256_i64gather_pd(double const * ,
                                           __m256i        ,
                                           const int      );
extern __m128  __cdecl _mm256_i64gather_ps(float  const * ,
                                           __m256i        ,
                                           const int      );
extern __m128d __cdecl _mm_i32gather_pd(double const * ,
                                        __m128i        ,
                                        const int      );
extern __m128  __cdecl _mm_i32gather_ps(float  const * ,
                                        __m128i        ,
                                        const int      );
extern __m128d __cdecl _mm_i64gather_pd(double const * ,
                                        __m128i        ,
                                        const int      );
extern __m128  __cdecl _mm_i64gather_ps(float  const * ,
                                        __m128i        ,
                                        const int      );
extern __m256i __cdecl _mm256_i32gather_epi32(int const *     ,
                                              __m256i         ,
                                              const int       );
extern __m256i __cdecl _mm256_i32gather_epi64(__int64 const * ,
                                              __m128i         ,
                                              const int       );
extern __m128i __cdecl _mm256_i64gather_epi32(int const *     ,
                                              __m256i         ,
                                              const int       );
extern __m256i __cdecl _mm256_i64gather_epi64(__int64 const * ,
                                              __m256i         ,
                                              const int       );
extern __m128i __cdecl _mm_i32gather_epi32(int const *     ,
                                           __m128i         ,
                                           const int       );
extern __m128i __cdecl _mm_i32gather_epi64(__int64 const * ,
                                           __m128i         ,
                                           const int       );
extern __m128i __cdecl _mm_i64gather_epi32(int     const * ,
                                           __m128i         ,
                                           const int       );
extern __m128i __cdecl _mm_i64gather_epi64(__int64 const * ,
                                           __m128i         ,
                                           const int       );
extern unsigned int     _bextr_u32(unsigned int ,
                                   unsigned int ,
                                   unsigned int );
extern unsigned int     _blsi_u32(unsigned int);
extern unsigned int     _blsmsk_u32(unsigned int);
extern unsigned int     _blsr_u32(unsigned int);
extern unsigned int     _bzhi_u32(unsigned int ,
                                  unsigned int );
extern unsigned int     _mulx_u32(unsigned int ,
                                  unsigned int ,
                                  unsigned int * );
extern unsigned int     _pdep_u32(unsigned int ,
                                  unsigned int );
extern unsigned int     _pext_u32(unsigned int ,
                                  unsigned int );
extern unsigned int     _rorx_u32(unsigned int ,
                                  const unsigned int );
extern int              _sarx_i32(int ,
                                  unsigned int );
extern unsigned int     _shlx_u32(unsigned int ,
                                  unsigned int );
extern unsigned int     _shrx_u32(unsigned int ,
                                          unsigned int );
extern unsigned int     _lzcnt_u32(unsigned int);
extern unsigned int     _tzcnt_u32(unsigned int);
extern void __cdecl _invpcid(unsigned int , void * );
extern void _Store_HLERelease(long volatile *,long);
extern void _StorePointer_HLERelease(void * volatile *,void *);
extern long _InterlockedExchange_HLEAcquire(long volatile *,long);
extern long _InterlockedExchange_HLERelease(long volatile *,long);
extern void * _InterlockedExchangePointer_HLEAcquire(void *volatile *,void *);
extern void * _InterlockedExchangePointer_HLERelease(void *volatile *,void *);
extern long _InterlockedCompareExchange_HLEAcquire(long volatile *,long,long);
extern long _InterlockedCompareExchange_HLERelease(long volatile *,long,long);
extern __int64 _InterlockedCompareExchange64_HLEAcquire(__int64 volatile *,__int64,__int64);
extern __int64 _InterlockedCompareExchange64_HLERelease(__int64 volatile *,__int64,__int64);
extern void * _InterlockedCompareExchangePointer_HLEAcquire(void *volatile *,void *,void *);
extern void * _InterlockedCompareExchangePointer_HLERelease(void *volatile *,void *,void *);
extern long _InterlockedExchangeAdd_HLEAcquire(long volatile *,long);
extern long _InterlockedExchangeAdd_HLERelease(long volatile *,long);
extern long _InterlockedAnd_HLEAcquire(long volatile *,long);
extern long _InterlockedAnd_HLERelease(long volatile *,long);
extern long _InterlockedOr_HLEAcquire(long volatile *,long);
extern long _InterlockedOr_HLERelease(long volatile *,long);
extern long _InterlockedXor_HLEAcquire(long volatile *,long);
extern long _InterlockedXor_HLERelease(long volatile *,long);
extern unsigned char _interlockedbittestandset_HLEAcquire(long *a,long b);
extern unsigned char _interlockedbittestandset_HLERelease(long *a,long b);
extern unsigned char _interlockedbittestandreset_HLEAcquire(long *a,long b);
extern unsigned char _interlockedbittestandreset_HLERelease(long *a,long b);
extern unsigned int     __cdecl _xbegin(void);
extern void             __cdecl _xend(void);
extern void             __cdecl _xabort(const unsigned int);
extern unsigned char    __cdecl _xtest(void);
extern int __cdecl _rdseed16_step(unsigned short *);
extern int __cdecl _rdseed32_step(unsigned int *);
extern int __cdecl _rdseed64_step(unsigned __int64 *);
extern unsigned char __cdecl _addcarryx_u32(unsigned char ,
                                                   unsigned int ,
                                                   unsigned int ,
                                                   unsigned int * );
}; 
extern "C" { 
__m128 _mm_macc_ps(__m128, __m128, __m128);
__m128d _mm_macc_pd(__m128d, __m128d, __m128d);
__m128 _mm_macc_ss(__m128, __m128, __m128);
__m128d _mm_macc_sd(__m128d, __m128d, __m128d);
__m128 _mm_maddsub_ps(__m128, __m128, __m128);
__m128d _mm_maddsub_pd(__m128d, __m128d, __m128d);
__m128 _mm_msubadd_ps(__m128, __m128, __m128);
__m128d _mm_msubadd_pd(__m128d, __m128d, __m128d);
__m128 _mm_msub_ps(__m128, __m128, __m128);
__m128d _mm_msub_pd(__m128d, __m128d, __m128d);
__m128 _mm_msub_ss(__m128, __m128, __m128);
__m128d _mm_msub_sd(__m128d, __m128d, __m128d);
__m128 _mm_nmacc_ps(__m128, __m128, __m128);
__m128d _mm_nmacc_pd(__m128d, __m128d, __m128d);
__m128 _mm_nmacc_ss(__m128, __m128, __m128);
__m128d _mm_nmacc_sd(__m128d, __m128d, __m128d);
__m128 _mm_nmsub_ps(__m128, __m128, __m128);
__m128d _mm_nmsub_pd(__m128d, __m128d, __m128d);
__m128 _mm_nmsub_ss(__m128, __m128, __m128);
__m128d _mm_nmsub_sd(__m128d, __m128d, __m128d);
__m128i _mm_maccs_epi16(__m128i, __m128i, __m128i);
__m128i _mm_macc_epi16(__m128i, __m128i, __m128i);
__m128i _mm_maccsd_epi16(__m128i, __m128i, __m128i);
__m128i _mm_maccd_epi16(__m128i, __m128i, __m128i);
__m128i _mm_maccs_epi32(__m128i, __m128i, __m128i);
__m128i _mm_macc_epi32(__m128i, __m128i, __m128i);
__m128i _mm_maccslo_epi32(__m128i, __m128i, __m128i);
__m128i _mm_macclo_epi32(__m128i, __m128i, __m128i);
__m128i _mm_maccshi_epi32(__m128i, __m128i, __m128i);
__m128i _mm_macchi_epi32(__m128i, __m128i, __m128i);
__m128i _mm_maddsd_epi16(__m128i, __m128i, __m128i);
__m128i _mm_maddd_epi16(__m128i, __m128i, __m128i);
__m128i _mm_haddw_epi8(__m128i);
__m128i _mm_haddd_epi8(__m128i);
__m128i _mm_haddq_epi8(__m128i);
__m128i _mm_haddd_epi16(__m128i);
__m128i _mm_haddq_epi16(__m128i);
__m128i _mm_haddq_epi32(__m128i);
__m128i _mm_haddw_epu8(__m128i);
__m128i _mm_haddd_epu8(__m128i);
__m128i _mm_haddq_epu8(__m128i);
__m128i _mm_haddd_epu16(__m128i);
__m128i _mm_haddq_epu16(__m128i);
__m128i _mm_haddq_epu32(__m128i);
__m128i _mm_hsubw_epi8(__m128i);
__m128i _mm_hsubd_epi16(__m128i);
__m128i _mm_hsubq_epi32(__m128i);
__m128i _mm_cmov_si128(__m128i, __m128i, __m128i);
__m128i _mm_perm_epi8(__m128i, __m128i, __m128i);
__m128i _mm_rot_epi8(__m128i, __m128i);
__m128i _mm_rot_epi16(__m128i, __m128i);
__m128i _mm_rot_epi32(__m128i, __m128i);
__m128i _mm_rot_epi64(__m128i, __m128i);
__m128i _mm_roti_epi8(__m128i, int);
__m128i _mm_roti_epi16(__m128i, int);
__m128i _mm_roti_epi32(__m128i, int);
__m128i _mm_roti_epi64(__m128i, int);
__m128i _mm_shl_epi8(__m128i, __m128i);
__m128i _mm_shl_epi16(__m128i, __m128i);
__m128i _mm_shl_epi32(__m128i, __m128i);
__m128i _mm_shl_epi64(__m128i, __m128i);
__m128i _mm_sha_epi8(__m128i, __m128i);
__m128i _mm_sha_epi16(__m128i, __m128i);
__m128i _mm_sha_epi32(__m128i, __m128i);
__m128i _mm_sha_epi64(__m128i, __m128i);
__m128i _mm_com_epu8(__m128i, __m128i, int);
__m128i _mm_com_epu16(__m128i, __m128i, int);
__m128i _mm_com_epu32(__m128i, __m128i, int);
__m128i _mm_com_epu64(__m128i, __m128i, int);
__m128i _mm_com_epi8(__m128i, __m128i, int);
__m128i _mm_com_epi16(__m128i, __m128i, int);
__m128i _mm_com_epi32(__m128i, __m128i, int);
__m128i _mm_com_epi64(__m128i, __m128i, int);
__m128 _mm_frcz_ps(__m128);
__m128d _mm_frcz_pd(__m128d);
__m128 _mm_frcz_ss(__m128, __m128);
__m128d _mm_frcz_sd(__m128d, __m128d);
__m128 _mm_permute2_ps(__m128, __m128, __m128i, int);
__m128d _mm_permute2_pd(__m128d, __m128d, __m128i, int);
__m256 _mm256_macc_ps(__m256, __m256, __m256);
__m256d _mm256_macc_pd(__m256d, __m256d, __m256d);
__m256 _mm256_maddsub_ps(__m256, __m256, __m256);
__m256d _mm256_maddsub_pd(__m256d, __m256d, __m256d);
__m256 _mm256_msubadd_ps(__m256, __m256, __m256);
__m256d _mm256_msubadd_pd(__m256d, __m256d, __m256d);
__m256 _mm256_msub_ps(__m256, __m256, __m256);
__m256d _mm256_msub_pd(__m256d, __m256d, __m256d);
__m256 _mm256_nmacc_ps(__m256, __m256, __m256);
__m256d _mm256_nmacc_pd(__m256d, __m256d, __m256d);
__m256 _mm256_nmsub_ps(__m256, __m256, __m256);
__m256d _mm256_nmsub_pd(__m256d, __m256d, __m256d);
__m256i _mm256_cmov_si256(__m256i, __m256i, __m256i);
__m256 _mm256_frcz_ps(__m256);
__m256d _mm256_frcz_pd(__m256d);
__m256 _mm256_permute2_ps(__m256, __m256, __m256i, int);
__m256d _mm256_permute2_pd(__m256d, __m256d, __m256i, int);
void __llwpcb(void *);
void *__slwpcb();
void __lwpval32(unsigned int, unsigned int, unsigned int);
unsigned char __lwpins32(unsigned int, unsigned int, unsigned int);
unsigned int _bextr_u32(unsigned int, unsigned int, unsigned int);
unsigned int _andn_u32(unsigned int, unsigned int);
unsigned int _tzcnt_u32(unsigned int);
unsigned int _lzcnt_u32(unsigned int);
unsigned int _blsr_u32(unsigned int);
unsigned int _blsmsk_u32(unsigned int);
unsigned int _blsi_u32(unsigned int);
unsigned int _bextri_u32(unsigned int, unsigned int);
unsigned int _blcfill_u32(unsigned int);
unsigned int _blsfill_u32(unsigned int);
unsigned int _blcs_u32(unsigned int);
unsigned int _tzmsk_u32(unsigned int);
unsigned int _blcic_u32(unsigned int);
unsigned int _blsic_u32(unsigned int);
unsigned int _t1mskc_u32(unsigned int);
unsigned int _blcmsk_u32(unsigned int);
unsigned int _blci_u32(unsigned int);
}; 
extern "C" { 
void _m_femms(void);
__m64 _m_pavgusb(__m64, __m64);
__m64 _m_pf2id(__m64);
__m64 _m_pfacc(__m64, __m64);
__m64 _m_pfadd(__m64, __m64);
__m64 _m_pfcmpeq(__m64, __m64);
__m64 _m_pfcmpge(__m64, __m64);
__m64 _m_pfcmpgt(__m64, __m64);
__m64 _m_pfmax(__m64, __m64);
__m64 _m_pfmin(__m64, __m64);
__m64 _m_pfmul(__m64, __m64);
__m64 _m_pfrcp(__m64);
__m64 _m_pfrcpit1(__m64, __m64);
__m64 _m_pfrcpit2(__m64, __m64);
__m64 _m_pfrsqrt(__m64);
__m64 _m_pfrsqit1(__m64, __m64);
__m64 _m_pfsub(__m64, __m64);
__m64 _m_pfsubr(__m64, __m64);
__m64 _m_pi2fd(__m64);
__m64 _m_pmulhrw(__m64, __m64);
void _m_prefetch(void*);
void _m_prefetchw(volatile const void*_Source);
__m64 _m_from_float(float);
float _m_to_float(__m64);
__m64 _m_pf2iw(__m64);
__m64 _m_pfnacc(__m64, __m64);
__m64 _m_pfpnacc(__m64, __m64);
__m64 _m_pi2fw(__m64);
__m64 _m_pswapd(__m64);
}; 
extern "C" {
void * _AddressOfReturnAddress(void);
unsigned char _BitScanForward(unsigned long * _Index, unsigned long _Mask);
unsigned char _BitScanReverse(unsigned long * _Index, unsigned long _Mask);
long _InterlockedAddLargeStatistic(__int64 volatile * _Addend, long _Value);
long _InterlockedAnd(long volatile * _Value, long _Mask);
short _InterlockedAnd16(short volatile * _Value, short _Mask);
char _InterlockedAnd8(char volatile * _Value, char _Mask);
long __cdecl _InterlockedCompareExchange(long volatile * _Destination, long _Exchange, long _Comparand);
short _InterlockedCompareExchange16(short volatile * _Destination, short _Exchange, short _Comparand);
__int64 _InterlockedCompareExchange64(__int64 volatile * _Destination, __int64 _Exchange, __int64 _Comparand);
char _InterlockedCompareExchange8(char volatile * _Destination, char _Exchange, char _Comparand);
void * _InterlockedCompareExchangePointer(void * volatile * _Destination, void * _Exchange, void * _Comparand);
long __cdecl _InterlockedDecrement(long volatile * _Addend);
short _InterlockedDecrement16(short volatile * _Addend);
long __cdecl _InterlockedExchange(long volatile * _Target, long _Value);
short _InterlockedExchange16(short volatile * _Target, short _Value);
char _InterlockedExchange8(char volatile * _Target, char _Value);
long __cdecl _InterlockedExchangeAdd(long volatile * _Addend, long _Value);
short _InterlockedExchangeAdd16(short volatile * _Addend, short _Value);
char _InterlockedExchangeAdd8(char volatile * _Addend, char _Value);
__forceinline static void * _Intrin_h_InterlockedExchangePointer(void * volatile * _Target, void * _Value)
{
    return (void *)_InterlockedExchange((long volatile *) _Target, (long) _Value);
}
long __cdecl _InterlockedIncrement(long volatile * _Addend);
short _InterlockedIncrement16(short volatile * _Addend);
long _InterlockedOr(long volatile * _Value, long _Mask);
short _InterlockedOr16(short volatile * _Value, short _Mask);
char _InterlockedOr8(char volatile * _Value, char _Mask);
long _InterlockedXor(long volatile * _Value, long _Mask);
short _InterlockedXor16(short volatile * _Value, short _Mask);
char _InterlockedXor8(char volatile * _Value, char _Mask);
void _ReadBarrier(void);
void _ReadWriteBarrier(void);
void * _ReturnAddress(void);
void _WriteBarrier(void);
void __addfsbyte(unsigned long, unsigned char);
void __addfsdword(unsigned long, unsigned long);
void __addfsword(unsigned long, unsigned short);
void __code_seg(const char *);
void __cpuid(int[4], int);
void __cpuidex(int[4], int, int);
void __cdecl __debugbreak(void);
__int64 __emul(int, int);
unsigned __int64 __emulu(unsigned int, unsigned int);
__declspec(noreturn) void __fastfail(unsigned int);
unsigned int __getcallerseflags(void);
void __halt(void);
unsigned char __inbyte(unsigned short);
void __inbytestring(unsigned short, unsigned char *, unsigned long);
void __incfsbyte(unsigned long);
void __incfsdword(unsigned long);
void __incfsword(unsigned long);
unsigned long __indword(unsigned short);
void __indwordstring(unsigned short, unsigned long *, unsigned long);
void __int2c(void);
void __invlpg(void *);
unsigned short __inword(unsigned short);
void __inwordstring(unsigned short, unsigned short *, unsigned long);
void __lidt(void *);
unsigned __int64 __ll_lshift(unsigned __int64, int);
__int64 __ll_rshift(__int64, int);
unsigned int __lzcnt(unsigned int);
unsigned short __lzcnt16(unsigned short);
void __movsb(unsigned char *, unsigned char const *, size_t);
void __movsd(unsigned long *, unsigned long const *, size_t);
void __movsw(unsigned short *, unsigned short const *, size_t);
void __nop(void);
void __nvreg_restore_fence(void);
void __nvreg_save_fence(void);
void __outbyte(unsigned short, unsigned char);
void __outbytestring(unsigned short, unsigned char *, unsigned long);
void __outdword(unsigned short, unsigned long);
void __outdwordstring(unsigned short, unsigned long *, unsigned long);
void __outword(unsigned short, unsigned short);
void __outwordstring(unsigned short, unsigned short *, unsigned long);
unsigned int __popcnt(unsigned int);
unsigned short __popcnt16(unsigned short);
unsigned __int64 __rdtsc(void);
unsigned __int64 __rdtscp(unsigned int *);
unsigned long __readcr0(void);
unsigned long __readcr2(void);
unsigned long __readcr3(void);
unsigned long __readcr4(void);
unsigned long __readcr8(void);
unsigned int __readdr(unsigned int);
unsigned int __readeflags(void);
unsigned char __readfsbyte(unsigned long);
unsigned long __readfsdword(unsigned long);
unsigned __int64 __readfsqword(unsigned long);
unsigned short __readfsword(unsigned long);
unsigned __int64 __readmsr(unsigned long);
unsigned __int64 __readpmc(unsigned long);
unsigned long __segmentlimit(unsigned long);
void __sidt(void *);
void __stosb(unsigned char *, unsigned char, size_t);
void __stosd(unsigned long *, unsigned long, size_t);
void __stosw(unsigned short *, unsigned short, size_t);
void __svm_clgi(void);
void __svm_invlpga(void *, int);
void __svm_skinit(int);
void __svm_stgi(void);
void __svm_vmload(size_t);
void __svm_vmrun(size_t);
void __svm_vmsave(size_t);
void __ud2(void);
unsigned __int64 __ull_rshift(unsigned __int64, int);
void __vmx_off(void);
void __vmx_vmptrst(unsigned __int64 *);
void __wbinvd(void);
void __writecr0(unsigned int);
void __writecr3(unsigned int);
void __writecr4(unsigned int);
void __writecr8(unsigned int);
void __writedr(unsigned int, unsigned int);
void __writeeflags(unsigned int);
void __writefsbyte(unsigned long, unsigned char);
void __writefsdword(unsigned long, unsigned long);
void __writefsqword(unsigned long, unsigned __int64);
void __writefsword(unsigned long, unsigned short);
void __writemsr(unsigned long, unsigned __int64);
unsigned char _bittest(long const *, long);
unsigned char _bittestandcomplement(long *, long);
unsigned char _bittestandreset(long *, long);
unsigned char _bittestandset(long *, long);
  unsigned __int64 __cdecl _byteswap_uint64(  unsigned __int64);
  unsigned long __cdecl _byteswap_ulong(  unsigned long);
  unsigned short __cdecl _byteswap_ushort(  unsigned short);
void __cdecl _disable(void);
void __cdecl _enable(void);
unsigned char _interlockedbittestandreset(long volatile *, long);
unsigned char _interlockedbittestandset(long volatile *, long);
  unsigned long __cdecl _lrotl(  unsigned long,   int);
  unsigned long __cdecl _lrotr(  unsigned long,   int);
void _m_empty(void);
void _m_femms(void);
__m64 _m_from_float(float);
__m64 _m_from_int(int);
void _m_maskmovq(__m64, __m64, char *);
__m64 _m_packssdw(__m64, __m64);
__m64 _m_packsswb(__m64, __m64);
__m64 _m_packuswb(__m64, __m64);
__m64 _m_paddb(__m64, __m64);
__m64 _m_paddd(__m64, __m64);
__m64 _m_paddsb(__m64, __m64);
__m64 _m_paddsw(__m64, __m64);
__m64 _m_paddusb(__m64, __m64);
__m64 _m_paddusw(__m64, __m64);
__m64 _m_paddw(__m64, __m64);
__m64 _m_pand(__m64, __m64);
__m64 _m_pandn(__m64, __m64);
__m64 _m_pavgb(__m64, __m64);
__m64 _m_pavgusb(__m64, __m64);
__m64 _m_pavgw(__m64, __m64);
__m64 _m_pcmpeqb(__m64, __m64);
__m64 _m_pcmpeqd(__m64, __m64);
__m64 _m_pcmpeqw(__m64, __m64);
__m64 _m_pcmpgtb(__m64, __m64);
__m64 _m_pcmpgtd(__m64, __m64);
__m64 _m_pcmpgtw(__m64, __m64);
int _m_pextrw(__m64, int);
__m64 _m_pf2id(__m64);
__m64 _m_pf2iw(__m64);
__m64 _m_pfacc(__m64, __m64);
__m64 _m_pfadd(__m64, __m64);
__m64 _m_pfcmpeq(__m64, __m64);
__m64 _m_pfcmpge(__m64, __m64);
__m64 _m_pfcmpgt(__m64, __m64);
__m64 _m_pfmax(__m64, __m64);
__m64 _m_pfmin(__m64, __m64);
__m64 _m_pfmul(__m64, __m64);
__m64 _m_pfnacc(__m64, __m64);
__m64 _m_pfpnacc(__m64, __m64);
__m64 _m_pfrcp(__m64);
__m64 _m_pfrcpit1(__m64, __m64);
__m64 _m_pfrcpit2(__m64, __m64);
__m64 _m_pfrsqit1(__m64, __m64);
__m64 _m_pfrsqrt(__m64);
__m64 _m_pfsub(__m64, __m64);
__m64 _m_pfsubr(__m64, __m64);
__m64 _m_pi2fd(__m64);
__m64 _m_pi2fw(__m64);
__m64 _m_pinsrw(__m64, int, int);
__m64 _m_pmaddwd(__m64, __m64);
__m64 _m_pmaxsw(__m64, __m64);
__m64 _m_pmaxub(__m64, __m64);
__m64 _m_pminsw(__m64, __m64);
__m64 _m_pminub(__m64, __m64);
int _m_pmovmskb(__m64);
__m64 _m_pmulhrw(__m64, __m64);
__m64 _m_pmulhuw(__m64, __m64);
__m64 _m_pmulhw(__m64, __m64);
__m64 _m_pmullw(__m64, __m64);
__m64 _m_por(__m64, __m64);
void _m_prefetch(void *);
void _m_prefetchw(volatile const void *);
__m64 _m_psadbw(__m64, __m64);
__m64 _m_pshufw(__m64, int);
__m64 _m_pslld(__m64, __m64);
__m64 _m_pslldi(__m64, int);
__m64 _m_psllq(__m64, __m64);
__m64 _m_psllqi(__m64, int);
__m64 _m_psllw(__m64, __m64);
__m64 _m_psllwi(__m64, int);
__m64 _m_psrad(__m64, __m64);
__m64 _m_psradi(__m64, int);
__m64 _m_psraw(__m64, __m64);
__m64 _m_psrawi(__m64, int);
__m64 _m_psrld(__m64, __m64);
__m64 _m_psrldi(__m64, int);
__m64 _m_psrlq(__m64, __m64);
__m64 _m_psrlqi(__m64, int);
__m64 _m_psrlw(__m64, __m64);
__m64 _m_psrlwi(__m64, int);
__m64 _m_psubb(__m64, __m64);
__m64 _m_psubd(__m64, __m64);
__m64 _m_psubsb(__m64, __m64);
__m64 _m_psubsw(__m64, __m64);
__m64 _m_psubusb(__m64, __m64);
__m64 _m_psubusw(__m64, __m64);
__m64 _m_psubw(__m64, __m64);
__m64 _m_pswapd(__m64);
__m64 _m_punpckhbw(__m64, __m64);
__m64 _m_punpckhdq(__m64, __m64);
__m64 _m_punpckhwd(__m64, __m64);
__m64 _m_punpcklbw(__m64, __m64);
__m64 _m_punpckldq(__m64, __m64);
__m64 _m_punpcklwd(__m64, __m64);
__m64 _m_pxor(__m64, __m64);
float _m_to_float(__m64);
int _m_to_int(__m64);
__m128i _mm_abs_epi16(__m128i);
__m128i _mm_abs_epi32(__m128i);
__m128i _mm_abs_epi8(__m128i);
__m64 _mm_abs_pi16(__m64);
__m64 _mm_abs_pi32(__m64);
__m64 _mm_abs_pi8(__m64);
__m128i _mm_add_epi16(__m128i, __m128i);
__m128i _mm_add_epi32(__m128i, __m128i);
__m128i _mm_add_epi64(__m128i, __m128i);
__m128i _mm_add_epi8(__m128i, __m128i);
__m128d _mm_add_pd(__m128d, __m128d);
__m128 _mm_add_ps(__m128, __m128);
__m128d _mm_add_sd(__m128d, __m128d);
__m64 _mm_add_si64(__m64, __m64);
__m128 _mm_add_ss(__m128, __m128);
__m128i _mm_adds_epi16(__m128i, __m128i);
__m128i _mm_adds_epi8(__m128i, __m128i);
__m128i _mm_adds_epu16(__m128i, __m128i);
__m128i _mm_adds_epu8(__m128i, __m128i);
__m128d _mm_addsub_pd(__m128d, __m128d);
__m128 _mm_addsub_ps(__m128, __m128);
__m128i _mm_alignr_epi8(__m128i, __m128i, int);
__m64 _mm_alignr_pi8(__m64, __m64, int);
__m128d _mm_and_pd(__m128d, __m128d);
__m128 _mm_and_ps(__m128, __m128);
__m128i _mm_and_si128(__m128i, __m128i);
__m128d _mm_andnot_pd(__m128d, __m128d);
__m128 _mm_andnot_ps(__m128, __m128);
__m128i _mm_andnot_si128(__m128i, __m128i);
__m128i _mm_avg_epu16(__m128i, __m128i);
__m128i _mm_avg_epu8(__m128i, __m128i);
__m128i _mm_blend_epi16(__m128i, __m128i, int);
__m128d _mm_blend_pd(__m128d, __m128d, int);
__m128 _mm_blend_ps(__m128, __m128, int);
__m128i _mm_blendv_epi8(__m128i, __m128i, __m128i);
__m128d _mm_blendv_pd(__m128d, __m128d, __m128d);
__m128 _mm_blendv_ps(__m128, __m128, __m128);
void _mm_clflush(void const *);
__m128i _mm_cmpeq_epi16(__m128i, __m128i);
__m128i _mm_cmpeq_epi32(__m128i, __m128i);
__m128i _mm_cmpeq_epi64(__m128i, __m128i);
__m128i _mm_cmpeq_epi8(__m128i, __m128i);
__m128d _mm_cmpeq_pd(__m128d, __m128d);
__m128 _mm_cmpeq_ps(__m128, __m128);
__m128d _mm_cmpeq_sd(__m128d, __m128d);
__m128 _mm_cmpeq_ss(__m128, __m128);
int _mm_cmpestra(__m128i, int, __m128i, int, int);
int _mm_cmpestrc(__m128i, int, __m128i, int, int);
int _mm_cmpestri(__m128i, int, __m128i, int, int);
__m128i _mm_cmpestrm(__m128i, int, __m128i, int, int);
int _mm_cmpestro(__m128i, int, __m128i, int, int);
int _mm_cmpestrs(__m128i, int, __m128i, int, int);
int _mm_cmpestrz(__m128i, int, __m128i, int, int);
__m128d _mm_cmpge_pd(__m128d, __m128d);
__m128 _mm_cmpge_ps(__m128, __m128);
__m128d _mm_cmpge_sd(__m128d, __m128d);
__m128 _mm_cmpge_ss(__m128, __m128);
__m128i _mm_cmpgt_epi16(__m128i, __m128i);
__m128i _mm_cmpgt_epi32(__m128i, __m128i);
__m128i _mm_cmpgt_epi64(__m128i, __m128i);
__m128i _mm_cmpgt_epi8(__m128i, __m128i);
__m128d _mm_cmpgt_pd(__m128d, __m128d);
__m128 _mm_cmpgt_ps(__m128, __m128);
__m128d _mm_cmpgt_sd(__m128d, __m128d);
__m128 _mm_cmpgt_ss(__m128, __m128);
int _mm_cmpistra(__m128i, __m128i, int);
int _mm_cmpistrc(__m128i, __m128i, int);
int _mm_cmpistri(__m128i, __m128i, int);
__m128i _mm_cmpistrm(__m128i, __m128i, int);
int _mm_cmpistro(__m128i, __m128i, int);
int _mm_cmpistrs(__m128i, __m128i, int);
int _mm_cmpistrz(__m128i, __m128i, int);
__m128d _mm_cmple_pd(__m128d, __m128d);
__m128 _mm_cmple_ps(__m128, __m128);
__m128d _mm_cmple_sd(__m128d, __m128d);
__m128 _mm_cmple_ss(__m128, __m128);
__m128i _mm_cmplt_epi16(__m128i, __m128i);
__m128i _mm_cmplt_epi32(__m128i, __m128i);
__m128i _mm_cmplt_epi8(__m128i, __m128i);
__m128d _mm_cmplt_pd(__m128d, __m128d);
__m128 _mm_cmplt_ps(__m128, __m128);
__m128d _mm_cmplt_sd(__m128d, __m128d);
__m128 _mm_cmplt_ss(__m128, __m128);
__m128d _mm_cmpneq_pd(__m128d, __m128d);
__m128 _mm_cmpneq_ps(__m128, __m128);
__m128d _mm_cmpneq_sd(__m128d, __m128d);
__m128 _mm_cmpneq_ss(__m128, __m128);
__m128d _mm_cmpnge_pd(__m128d, __m128d);
__m128 _mm_cmpnge_ps(__m128, __m128);
__m128d _mm_cmpnge_sd(__m128d, __m128d);
__m128 _mm_cmpnge_ss(__m128, __m128);
__m128d _mm_cmpngt_pd(__m128d, __m128d);
__m128 _mm_cmpngt_ps(__m128, __m128);
__m128d _mm_cmpngt_sd(__m128d, __m128d);
__m128 _mm_cmpngt_ss(__m128, __m128);
__m128d _mm_cmpnle_pd(__m128d, __m128d);
__m128 _mm_cmpnle_ps(__m128, __m128);
__m128d _mm_cmpnle_sd(__m128d, __m128d);
__m128 _mm_cmpnle_ss(__m128, __m128);
__m128d _mm_cmpnlt_pd(__m128d, __m128d);
__m128 _mm_cmpnlt_ps(__m128, __m128);
__m128d _mm_cmpnlt_sd(__m128d, __m128d);
__m128 _mm_cmpnlt_ss(__m128, __m128);
__m128d _mm_cmpord_pd(__m128d, __m128d);
__m128 _mm_cmpord_ps(__m128, __m128);
__m128d _mm_cmpord_sd(__m128d, __m128d);
__m128 _mm_cmpord_ss(__m128, __m128);
__m128d _mm_cmpunord_pd(__m128d, __m128d);
__m128 _mm_cmpunord_ps(__m128, __m128);
__m128d _mm_cmpunord_sd(__m128d, __m128d);
__m128 _mm_cmpunord_ss(__m128, __m128);
int _mm_comieq_sd(__m128d, __m128d);
int _mm_comieq_ss(__m128, __m128);
int _mm_comige_sd(__m128d, __m128d);
int _mm_comige_ss(__m128, __m128);
int _mm_comigt_sd(__m128d, __m128d);
int _mm_comigt_ss(__m128, __m128);
int _mm_comile_sd(__m128d, __m128d);
int _mm_comile_ss(__m128, __m128);
int _mm_comilt_sd(__m128d, __m128d);
int _mm_comilt_ss(__m128, __m128);
int _mm_comineq_sd(__m128d, __m128d);
int _mm_comineq_ss(__m128, __m128);
unsigned int _mm_crc32_u16(unsigned int, unsigned short);
unsigned int _mm_crc32_u32(unsigned int, unsigned int);
unsigned int _mm_crc32_u8(unsigned int, unsigned char);
__m128 _mm_cvt_pi2ps(__m128, __m64);
__m64 _mm_cvt_ps2pi(__m128);
__m128 _mm_cvt_si2ss(__m128, int);
int _mm_cvt_ss2si(__m128);
__m128i _mm_cvtepi16_epi32(__m128i);
__m128i _mm_cvtepi16_epi64(__m128i);
__m128i _mm_cvtepi32_epi64(__m128i);
__m128d _mm_cvtepi32_pd(__m128i);
__m128 _mm_cvtepi32_ps(__m128i);
__m128i _mm_cvtepi8_epi16(__m128i);
__m128i _mm_cvtepi8_epi32(__m128i);
__m128i _mm_cvtepi8_epi64(__m128i);
__m128i _mm_cvtepu16_epi32(__m128i);
__m128i _mm_cvtepu16_epi64(__m128i);
__m128i _mm_cvtepu32_epi64(__m128i);
__m128i _mm_cvtepu8_epi16(__m128i);
__m128i _mm_cvtepu8_epi32(__m128i);
__m128i _mm_cvtepu8_epi64(__m128i);
__m128i _mm_cvtpd_epi32(__m128d);
__m64 _mm_cvtpd_pi32(__m128d);
__m128 _mm_cvtpd_ps(__m128d);
__m128d _mm_cvtpi32_pd(__m64);
__m128i _mm_cvtps_epi32(__m128);
__m128d _mm_cvtps_pd(__m128);
int _mm_cvtsd_si32(__m128d);
__m128 _mm_cvtsd_ss(__m128, __m128d);
int _mm_cvtsi128_si32(__m128i);
__m128d _mm_cvtsi32_sd(__m128d, int);
__m128i _mm_cvtsi32_si128(int);
__m128d _mm_cvtss_sd(__m128d, __m128);
__m64 _mm_cvtt_ps2pi(__m128);
int _mm_cvtt_ss2si(__m128);
__m128i _mm_cvttpd_epi32(__m128d);
__m64 _mm_cvttpd_pi32(__m128d);
__m128i _mm_cvttps_epi32(__m128);
int _mm_cvttsd_si32(__m128d);
__m128d _mm_div_pd(__m128d, __m128d);
__m128 _mm_div_ps(__m128, __m128);
__m128d _mm_div_sd(__m128d, __m128d);
__m128 _mm_div_ss(__m128, __m128);
__m128d _mm_dp_pd(__m128d, __m128d, int);
__m128 _mm_dp_ps(__m128, __m128, int);
int _mm_extract_epi16(__m128i, int);
int _mm_extract_epi32(__m128i, int);
int _mm_extract_epi8(__m128i, int);
int _mm_extract_ps(__m128, int);
__m128i _mm_extract_si64(__m128i, __m128i);
__m128i _mm_extracti_si64(__m128i, int, int);
unsigned int _mm_getcsr(void);
__m128i _mm_hadd_epi16(__m128i, __m128i);
__m128i _mm_hadd_epi32(__m128i, __m128i);
__m128d _mm_hadd_pd(__m128d, __m128d);
__m64 _mm_hadd_pi16(__m64, __m64);
__m64 _mm_hadd_pi32(__m64, __m64);
__m128 _mm_hadd_ps(__m128, __m128);
__m128i _mm_hadds_epi16(__m128i, __m128i);
__m64 _mm_hadds_pi16(__m64, __m64);
__m128i _mm_hsub_epi16(__m128i, __m128i);
__m128i _mm_hsub_epi32(__m128i, __m128i);
__m128d _mm_hsub_pd(__m128d, __m128d);
__m64 _mm_hsub_pi16(__m64, __m64);
__m64 _mm_hsub_pi32(__m64, __m64);
__m128 _mm_hsub_ps(__m128, __m128);
__m128i _mm_hsubs_epi16(__m128i, __m128i);
__m64 _mm_hsubs_pi16(__m64, __m64);
__m128i _mm_insert_epi16(__m128i, int, int);
__m128i _mm_insert_epi32(__m128i, int, int);
__m128i _mm_insert_epi8(__m128i, int, int);
__m128 _mm_insert_ps(__m128, __m128, int);
__m128i _mm_insert_si64(__m128i, __m128i);
__m128i _mm_inserti_si64(__m128i, __m128i, int, int);
__m128i _mm_lddqu_si128(__m128i const *);
void _mm_lfence(void);
__m128d _mm_load1_pd(double const *);
__m128d _mm_load_pd(double const *);
__m128 _mm_load_ps(float const *);
__m128 _mm_load_ps1(float const *);
__m128d _mm_load_sd(double const *);
__m128i _mm_load_si128(__m128i const *);
__m128 _mm_load_ss(float const *);
__m128d _mm_loaddup_pd(double const *);
__m128d _mm_loadh_pd(__m128d, double const *);
__m128 _mm_loadh_pi(__m128, __m64 const *);
__m128i _mm_loadl_epi64(__m128i const *);
__m128d _mm_loadl_pd(__m128d, double const *);
__m128 _mm_loadl_pi(__m128, __m64 const *);
__m128d _mm_loadr_pd(double const *);
__m128 _mm_loadr_ps(float const *);
__m128d _mm_loadu_pd(double const *);
__m128 _mm_loadu_ps(float const *);
__m128i _mm_loadu_si128(__m128i const *);
__m128i _mm_madd_epi16(__m128i, __m128i);
__m128i _mm_maddubs_epi16(__m128i, __m128i);
__m64 _mm_maddubs_pi16(__m64, __m64);
void _mm_maskmoveu_si128(__m128i, __m128i, char *);
__m128i _mm_max_epi16(__m128i, __m128i);
__m128i _mm_max_epi32(__m128i, __m128i);
__m128i _mm_max_epi8(__m128i, __m128i);
__m128i _mm_max_epu16(__m128i, __m128i);
__m128i _mm_max_epu32(__m128i, __m128i);
__m128i _mm_max_epu8(__m128i, __m128i);
__m128d _mm_max_pd(__m128d, __m128d);
__m128 _mm_max_ps(__m128, __m128);
__m128d _mm_max_sd(__m128d, __m128d);
__m128 _mm_max_ss(__m128, __m128);
void _mm_mfence(void);
__m128i _mm_min_epi16(__m128i, __m128i);
__m128i _mm_min_epi32(__m128i, __m128i);
__m128i _mm_min_epi8(__m128i, __m128i);
__m128i _mm_min_epu16(__m128i, __m128i);
__m128i _mm_min_epu32(__m128i, __m128i);
__m128i _mm_min_epu8(__m128i, __m128i);
__m128d _mm_min_pd(__m128d, __m128d);
__m128 _mm_min_ps(__m128, __m128);
__m128d _mm_min_sd(__m128d, __m128d);
__m128 _mm_min_ss(__m128, __m128);
__m128i _mm_minpos_epu16(__m128i);
void _mm_monitor(void const *, unsigned int, unsigned int);
__m128i _mm_move_epi64(__m128i);
__m128d _mm_move_sd(__m128d, __m128d);
__m128 _mm_move_ss(__m128, __m128);
__m128d _mm_movedup_pd(__m128d);
__m128 _mm_movehdup_ps(__m128);
__m128 _mm_movehl_ps(__m128, __m128);
__m128 _mm_moveldup_ps(__m128);
__m128 _mm_movelh_ps(__m128, __m128);
int _mm_movemask_epi8(__m128i);
int _mm_movemask_pd(__m128d);
int _mm_movemask_ps(__m128);
__m64 _mm_movepi64_pi64(__m128i);
__m128i _mm_movpi64_epi64(__m64);
__m128i _mm_mpsadbw_epu8(__m128i, __m128i, int);
__m128i _mm_mul_epi32(__m128i, __m128i);
__m128i _mm_mul_epu32(__m128i, __m128i);
__m128d _mm_mul_pd(__m128d, __m128d);
__m128 _mm_mul_ps(__m128, __m128);
__m128d _mm_mul_sd(__m128d, __m128d);
__m128 _mm_mul_ss(__m128, __m128);
__m64 _mm_mul_su32(__m64, __m64);
__m128i _mm_mulhi_epi16(__m128i, __m128i);
__m128i _mm_mulhi_epu16(__m128i, __m128i);
__m128i _mm_mulhrs_epi16(__m128i, __m128i);
__m64 _mm_mulhrs_pi16(__m64, __m64);
__m128i _mm_mullo_epi16(__m128i, __m128i);
__m128i _mm_mullo_epi32(__m128i, __m128i);
void _mm_mwait(unsigned int, unsigned int);
__m128d _mm_or_pd(__m128d, __m128d);
__m128 _mm_or_ps(__m128, __m128);
__m128i _mm_or_si128(__m128i, __m128i);
__m128i _mm_packs_epi16(__m128i, __m128i);
__m128i _mm_packs_epi32(__m128i, __m128i);
__m128i _mm_packus_epi16(__m128i, __m128i);
__m128i _mm_packus_epi32(__m128i, __m128i);
void _mm_pause(void);
int _mm_popcnt_u32(unsigned int);
void _mm_prefetch(char const *, int);
__m128 _mm_rcp_ps(__m128);
__m128 _mm_rcp_ss(__m128);
__m128d _mm_round_pd(__m128d, int);
__m128 _mm_round_ps(__m128, int);
__m128d _mm_round_sd(__m128d, __m128d, int);
__m128 _mm_round_ss(__m128, __m128, int);
__m128 _mm_rsqrt_ps(__m128);
__m128 _mm_rsqrt_ss(__m128);
__m128i _mm_sad_epu8(__m128i, __m128i);
__m128i _mm_set1_epi16(short);
__m128i _mm_set1_epi32(int);
__m128i _mm_set1_epi64(__m64);
__m128i _mm_set1_epi8(char);
__m128d _mm_set1_pd(double);
__m64 _mm_set1_pi16(short);
__m64 _mm_set1_pi32(int);
__m64 _mm_set1_pi8(char);
__m128i _mm_set_epi16(short, short, short, short, short, short, short, short);
__m128i _mm_set_epi32(int, int, int, int);
__m128i _mm_set_epi64(__m64, __m64);
__m128i _mm_set_epi8(char, char, char, char, char, char, char, char, char, char, char, char, char, char, char, char);
__m128d _mm_set_pd(double, double);
__m64 _mm_set_pi16(short, short, short, short);
__m64 _mm_set_pi32(int, int);
__m64 _mm_set_pi8(char, char, char, char, char, char, char, char);
__m128 _mm_set_ps(float, float, float, float);
__m128 _mm_set_ps1(float);
__m128d _mm_set_sd(double);
__m128 _mm_set_ss(float);
void _mm_setcsr(unsigned int);
__m128i _mm_setl_epi64(__m128i);
__m128i _mm_setr_epi16(short, short, short, short, short, short, short, short);
__m128i _mm_setr_epi32(int, int, int, int);
__m128i _mm_setr_epi64(__m64, __m64);
__m128i _mm_setr_epi8(char, char, char, char, char, char, char, char, char, char, char, char, char, char, char, char);
__m128d _mm_setr_pd(double, double);
__m64 _mm_setr_pi16(short, short, short, short);
__m64 _mm_setr_pi32(int, int);
__m64 _mm_setr_pi8(char, char, char, char, char, char, char, char);
__m128 _mm_setr_ps(float, float, float, float);
__m128d _mm_setzero_pd(void);
__m128 _mm_setzero_ps(void);
__m128i _mm_setzero_si128(void);
__m64 _mm_setzero_si64(void);
void _mm_sfence(void);
__m128i _mm_shuffle_epi32(__m128i, int);
__m128i _mm_shuffle_epi8(__m128i, __m128i);
__m128d _mm_shuffle_pd(__m128d, __m128d, int);
__m64 _mm_shuffle_pi8(__m64, __m64);
__m128 _mm_shuffle_ps(__m128, __m128, unsigned int);
__m128i _mm_shufflehi_epi16(__m128i, int);
__m128i _mm_shufflelo_epi16(__m128i, int);
__m128i _mm_sign_epi16(__m128i, __m128i);
__m128i _mm_sign_epi32(__m128i, __m128i);
__m128i _mm_sign_epi8(__m128i, __m128i);
__m64 _mm_sign_pi16(__m64, __m64);
__m64 _mm_sign_pi32(__m64, __m64);
__m64 _mm_sign_pi8(__m64, __m64);
__m128i _mm_sll_epi16(__m128i, __m128i);
__m128i _mm_sll_epi32(__m128i, __m128i);
__m128i _mm_sll_epi64(__m128i, __m128i);
__m128i _mm_slli_epi16(__m128i, int);
__m128i _mm_slli_epi32(__m128i, int);
__m128i _mm_slli_epi64(__m128i, int);
__m128i _mm_slli_si128(__m128i, int);
__m128d _mm_sqrt_pd(__m128d);
__m128 _mm_sqrt_ps(__m128);
__m128d _mm_sqrt_sd(__m128d, __m128d);
__m128 _mm_sqrt_ss(__m128);
__m128i _mm_sra_epi16(__m128i, __m128i);
__m128i _mm_sra_epi32(__m128i, __m128i);
__m128i _mm_srai_epi16(__m128i, int);
__m128i _mm_srai_epi32(__m128i, int);
__m128i _mm_srl_epi16(__m128i, __m128i);
__m128i _mm_srl_epi32(__m128i, __m128i);
__m128i _mm_srl_epi64(__m128i, __m128i);
__m128i _mm_srli_epi16(__m128i, int);
__m128i _mm_srli_epi32(__m128i, int);
__m128i _mm_srli_epi64(__m128i, int);
__m128i _mm_srli_si128(__m128i, int);
void _mm_store1_pd(double *, __m128d);
void _mm_store_pd(double *, __m128d);
void _mm_store_ps(float *, __m128);
void _mm_store_ps1(float *, __m128);
void _mm_store_sd(double *, __m128d);
void _mm_store_si128(__m128i *, __m128i);
void _mm_store_ss(float *, __m128);
void _mm_storeh_pd(double *, __m128d);
void _mm_storeh_pi(__m64 *, __m128);
void _mm_storel_epi64(__m128i *, __m128i);
void _mm_storel_pd(double *, __m128d);
void _mm_storel_pi(__m64 *, __m128);
void _mm_storer_pd(double *, __m128d);
void _mm_storer_ps(float *, __m128);
void _mm_storeu_pd(double *, __m128d);
void _mm_storeu_ps(float *, __m128);
void _mm_storeu_si128(__m128i *, __m128i);
__m128i _mm_stream_load_si128(__m128i *);
void _mm_stream_pd(double *, __m128d);
void _mm_stream_pi(__m64 *, __m64);
void _mm_stream_ps(float *, __m128);
void _mm_stream_sd(double *, __m128d);
void _mm_stream_si128(__m128i *, __m128i);
void _mm_stream_si32(int *, int);
void _mm_stream_ss(float *, __m128);
__m128i _mm_sub_epi16(__m128i, __m128i);
__m128i _mm_sub_epi32(__m128i, __m128i);
__m128i _mm_sub_epi64(__m128i, __m128i);
__m128i _mm_sub_epi8(__m128i, __m128i);
__m128d _mm_sub_pd(__m128d, __m128d);
__m128 _mm_sub_ps(__m128, __m128);
__m128d _mm_sub_sd(__m128d, __m128d);
__m64 _mm_sub_si64(__m64, __m64);
__m128 _mm_sub_ss(__m128, __m128);
__m128i _mm_subs_epi16(__m128i, __m128i);
__m128i _mm_subs_epi8(__m128i, __m128i);
__m128i _mm_subs_epu16(__m128i, __m128i);
__m128i _mm_subs_epu8(__m128i, __m128i);
int _mm_testc_si128(__m128i, __m128i);
int _mm_testnzc_si128(__m128i, __m128i);
int _mm_testz_si128(__m128i, __m128i);
int _mm_ucomieq_sd(__m128d, __m128d);
int _mm_ucomieq_ss(__m128, __m128);
int _mm_ucomige_sd(__m128d, __m128d);
int _mm_ucomige_ss(__m128, __m128);
int _mm_ucomigt_sd(__m128d, __m128d);
int _mm_ucomigt_ss(__m128, __m128);
int _mm_ucomile_sd(__m128d, __m128d);
int _mm_ucomile_ss(__m128, __m128);
int _mm_ucomilt_sd(__m128d, __m128d);
int _mm_ucomilt_ss(__m128, __m128);
int _mm_ucomineq_sd(__m128d, __m128d);
int _mm_ucomineq_ss(__m128, __m128);
__m128i _mm_unpackhi_epi16(__m128i, __m128i);
__m128i _mm_unpackhi_epi32(__m128i, __m128i);
__m128i _mm_unpackhi_epi64(__m128i, __m128i);
__m128i _mm_unpackhi_epi8(__m128i, __m128i);
__m128d _mm_unpackhi_pd(__m128d, __m128d);
__m128 _mm_unpackhi_ps(__m128, __m128);
__m128i _mm_unpacklo_epi16(__m128i, __m128i);
__m128i _mm_unpacklo_epi32(__m128i, __m128i);
__m128i _mm_unpacklo_epi64(__m128i, __m128i);
__m128i _mm_unpacklo_epi8(__m128i, __m128i);
__m128d _mm_unpacklo_pd(__m128d, __m128d);
__m128 _mm_unpacklo_ps(__m128, __m128);
__m128d _mm_xor_pd(__m128d, __m128d);
__m128 _mm_xor_ps(__m128, __m128);
__m128i _mm_xor_si128(__m128i, __m128i);
unsigned int __cdecl _rotl(  unsigned int _Value,   int _Shift);
unsigned short __cdecl _rotl16(unsigned short _Value, unsigned char _Shift);
unsigned __int64 __cdecl _rotl64(  unsigned __int64 _Value,   int _Shift);
unsigned char __cdecl _rotl8(unsigned char _Value, unsigned char _Shift);
unsigned int __cdecl _rotr(  unsigned int _Value,   int _Shift);
unsigned short __cdecl _rotr16(unsigned short _Value, unsigned char _Shift);
unsigned __int64 __cdecl _rotr64(  unsigned __int64 _Value,   int _Shift);
unsigned char __cdecl _rotr8(unsigned char _Value, unsigned char _Shift);
int __cdecl _setjmp(jmp_buf);
void _rsm(void);
void _lgdt(void *);
void _sgdt(void *);
void _clac(void);
void _stac(void);
unsigned char __cdecl _addcarry_u8(unsigned char, unsigned char, unsigned char, unsigned char *);
unsigned char __cdecl _subborrow_u8(unsigned char, unsigned char, unsigned char, unsigned char *);
unsigned char __cdecl _addcarry_u16(unsigned char, unsigned short, unsigned short, unsigned short *);
unsigned char __cdecl _subborrow_u16(unsigned char, unsigned short, unsigned short, unsigned short *);
unsigned char __cdecl _addcarry_u32(unsigned char, unsigned int, unsigned int, unsigned int *);
unsigned char __cdecl _subborrow_u32(unsigned char, unsigned int, unsigned int, unsigned int *);
}
 #pragma warning(pop)
 #pragma pack(pop)
 #pragma pack(push,8)
 #pragma warning(push,3)
 #pragma warning(disable: 4700)
namespace std {
template<class _Ty> inline
	pair<_Ty *, ptrdiff_t>
		get_temporary_buffer(ptrdiff_t _Count) throw ()
	{	
	_Ty *_Pbuf;
	if (_Count < 0)
		_Count = 0;
	else if (((size_t)(-1) / sizeof (_Ty) < _Count))
		_Xbad_alloc();	
	for (_Pbuf = 0; 0 < _Count; _Count /= 2)
		if ((_Pbuf = (_Ty *)operator new(
			(size_t)_Count * sizeof (_Ty), nothrow)) != 0)
			break;
	return (pair<_Ty *, ptrdiff_t>(_Pbuf, _Count));
	}
template<class _Ty> inline
	void return_temporary_buffer(_Ty *_Pbuf)
	{	
	operator delete(_Pbuf);
	}
template<class _InIt,
	class _Diff,
	class _FwdIt> inline
	_FwdIt _Uninitialized_copy_n(_InIt _First, _Diff _Count,
		_FwdIt _Dest, input_iterator_tag)
	{	
	_FwdIt _Next = _Dest;
	try {
	_Construct(&*_Dest, *_First);	
	while (0 < --_Count)
		_Construct(&*++_Dest, *++_First);
	} catch (...) {
	for (; _Next != _Dest; ++_Next)
		_Destroy(&*_Next);
	throw;
	}
	return (++_Dest);
	}
template<class _InIt,
	class _Diff,
	class _FwdIt> inline
	_FwdIt _Uninitialized_copy_n(_InIt _First, _Diff _Count,
		_FwdIt _Dest, forward_iterator_tag)
	{	
	_FwdIt _Next = _Dest;
	try {
	for (; 0 < _Count; --_Count, ++_Dest, ++_First)
		_Construct(&*_Dest, *_First);
	} catch (...) {
	for (; _Next != _Dest; ++_Next)
		_Destroy(&*_Next);
	throw;
	}
	return (_Dest);
	}
template<class _InIt,
	class _Diff,
	class _FwdIt> inline
	_FwdIt _Uninitialized_copy_n(_InIt _First, _Diff _Count,
		_FwdIt _Dest, _Nonscalar_ptr_iterator_tag)
	{	
	return (_Uninitialized_copy_n(_First, _Count,
		_Dest, _Iter_cat(_First)));
	}
template<class _InIt,
	class _Diff,
	class _FwdIt> inline
	_FwdIt _Uninitialized_copy_n(_InIt _First, _Diff _Count,
		_FwdIt _Dest, _Scalar_ptr_iterator_tag)
	{	
	:: memmove(&*_Dest, &*_First,
		_Count * sizeof (*_First));
	return (_Dest + _Count);
	}
template<class _InIt,
	class _Diff,
	class _FwdIt> inline
	_FwdIt _Uninitialized_copy_n(_InIt _First, _Diff _Count,
		_FwdIt _Dest)
	{	
	return (_Uninitialized_copy_n(_First, _Count,
		_Dest, _Ptr_cat(_First, _Dest)));
	}
template<class _InIt,
	class _Diff,
	class _FwdIt> inline
	_FwdIt _Uninitialized_copy_n2(_InIt _First, _Diff _Count,
		_FwdIt _Dest, _Mutable_iterator_tag)
	{	
	return (_Uninitialized_copy_n(_First, _Count,
		_Dest));
	}
template<class _InIt,
	class _Diff,
	class _FwdIt> inline
	_FwdIt _Uninitialized_copy_n2(_InIt _First, _Diff _Count,
		_FwdIt _Dest, random_access_iterator_tag)
	{	
	_FwdIt _Ans = _Dest + _Count;	
	_Uninitialized_copy_n(_First, _Count,
		_Unchecked(_Dest));
	return (_Ans);
	}
template<class _InIt,
	class _Diff,
	class _FwdIt> inline
	_FwdIt _Uninitialized_copy_n1(_InIt _First, _Diff _Count,
		_FwdIt _Dest, input_iterator_tag)
	{	
	return (_Uninitialized_copy_n2(_First, _Count,
		_Dest, _Iter_cat(_Dest)));
	}
template<class _InIt,
	class _Diff,
	class _FwdIt> inline
	_FwdIt _Uninitialized_copy_n1(_InIt _First, _Diff _Count,
		_FwdIt _Dest, random_access_iterator_tag)
	{	
	_InIt _Last = _First + _Count;	
	_Last = _Last;	
	return (_Uninitialized_copy_n2(_Unchecked(_First), _Count,
		_Dest, _Iter_cat(_Dest)));
	}
template<class _InIt,
	class _Diff,
	class _FwdIt> inline
	_FwdIt _Uninitialized_copy_n(_InIt _First, _Diff _Count,
		_FwdIt _Dest, true_type)
	{	
	return (_Uninitialized_copy_n1(_First, _Count,
		_Dest, _Iter_cat(_First)));
	}
template<class _InIt,
	class _Diff,
	class _FwdIt> inline
__declspec(deprecated("Function call with parameters that may be unsafe - this call relies on the caller to check that the passed values are correct. " "To disable this warning, use -D_SCL_SECURE_NO_WARNINGS. See documentation on how to use Visual C++ 'Checked Iterators'"))
	_FwdIt _Uninitialized_copy_n(_InIt _First, _Diff _Count,
		_FwdIt _Dest, false_type)
	{	
	return (_Uninitialized_copy_n1(_First, _Count,
		_Dest, _Iter_cat(_First)));
	}
template<class _InIt,
	class _Diff,
	class _FwdIt> inline
	_FwdIt uninitialized_copy_n(_InIt _First, _Diff _Count,
		_FwdIt _Dest)
	{	
	_Debug_pointer(_First, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xmemory", 202);
	_Debug_pointer(_Dest, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xmemory", 203);
	if (_Count <= 0)
		return (_Dest);
	else
		return (_Uninitialized_copy_n(_First,
			_Count, _Dest, _Is_checked(_Dest)));
	}
template<class _InTy,
	size_t _InSize,
	class _Diff,
	class _FwdIt> inline
	_FwdIt uninitialized_copy_n(_InTy (&_First)[_InSize], _Diff _Count,
		_FwdIt _Dest)
	{	
	return (::std:: uninitialized_copy_n(_Array_iterator<_InTy, _InSize>(_First),
		_Count, _Dest));
	}
template<class _InIt,
	class _Diff,
	class _OutTy,
	size_t _OutSize> inline
	_OutTy *uninitialized_copy_n(_InIt _First, _Diff _Count,
		_OutTy (&_Dest)[_OutSize])
	{	
	return (_Unchecked(
		::std:: uninitialized_copy_n(_First,
			_Count, _Array_iterator<_OutTy, _OutSize>(_Dest))));
	}
template<class _InTy,
	size_t _InSize,
	class _Diff,
	class _OutTy,
	size_t _OutSize> inline
	_OutTy *uninitialized_copy_n(_InTy (&_First)[_InSize], _Diff _Count,
		_OutTy (&_Dest)[_OutSize])
	{	
	return (_Unchecked(
		::std:: uninitialized_copy_n(_Array_iterator<_InTy, _InSize>(_First),
			_Count, _Array_iterator<_OutTy, _OutSize>(_Dest))));
	}
template<class _InIt,
	class _FwdIt> inline
	_FwdIt _Uninitialized_copy0(_InIt _First, _InIt _Last,
		_FwdIt _Dest, _Nonscalar_ptr_iterator_tag)
	{	
	_FwdIt _Next = _Dest;
	try {
	for (; _First != _Last; ++_Dest, ++_First)
		_Construct(&*_Dest, *_First);
	} catch (...) {
	for (; _Next != _Dest; ++_Next)
		_Destroy(&*_Next);
	throw;
	}
	return (_Dest);
	}
template<class _InIt,
	class _FwdIt> inline
	_FwdIt _Uninitialized_copy0(_InIt _First, _InIt _Last,
		_FwdIt _Dest, _Scalar_ptr_iterator_tag)
	{	
	ptrdiff_t _Count = _Last - _First;
	:: memmove(&*_Dest, &*_First,
		_Count * sizeof (*_First));
	return (_Dest + _Count);
	}
template<class _InIt,
	class _FwdIt> inline
	_FwdIt _Uninitialized_copy0(_InIt _First, _InIt _Last,
		_FwdIt _Dest)
	{	
	return (_Uninitialized_copy0(_First, _Last,
		_Dest, _Ptr_cat(_First, _Dest)));
	}
template<class _InIt,
	class _FwdIt> inline
	_FwdIt _Uninitialized_copy0(_InIt _First, _InIt _Last,
		_FwdIt _Dest, input_iterator_tag, forward_iterator_tag)
	{	
	return (_Uninitialized_copy0(_First, _Last,
		_Dest));
	}
template<class _InIt,
	class _FwdIt> inline
	_FwdIt _Uninitialized_copy0(_InIt _First, _InIt _Last,
		_FwdIt _Dest, random_access_iterator_tag, random_access_iterator_tag)
	{	
	_FwdIt _Ans = _Dest + (_Last - _First);	
	_Uninitialized_copy0(_First, _Last,
		_Unchecked(_Dest));
	return (_Ans);
	}
template<class _InIt,
	class _FwdIt> inline
	_FwdIt _Uninitialized_copy0(_InIt _First, _InIt _Last,
		_FwdIt _Dest, true_type)
	{	
	return (_Uninitialized_copy0(_First, _Last,
		_Dest, _Iter_cat(_First), _Iter_cat(_Dest)));
	}
template<class _InIt,
	class _FwdIt> inline
__declspec(deprecated("Function call with parameters that may be unsafe - this call relies on the caller to check that the passed values are correct. " "To disable this warning, use -D_SCL_SECURE_NO_WARNINGS. See documentation on how to use Visual C++ 'Checked Iterators'"))
	_FwdIt _Uninitialized_copy0(_InIt _First, _InIt _Last,
		_FwdIt _Dest, false_type)
	{	
	return (_Uninitialized_copy0(_First, _Last,
		_Dest, _Iter_cat(_First), _Iter_cat(_Dest)));
	}
template<class _InIt,
	class _FwdIt> inline
	_FwdIt uninitialized_copy(_InIt _First, _InIt _Last,
		_FwdIt _Dest)
	{	
	_Debug_range(_First, _Last, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xmemory", 345);
	_Debug_pointer(_Dest, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xmemory", 346);
	return (_Uninitialized_copy0(_Unchecked(_First), _Unchecked(_Last),
		_Dest, _Is_checked(_Dest)));
	}
template<class _InIt,
	class _OutTy,
	size_t _OutSize> inline
	_OutTy *uninitialized_copy(_InIt _First, _InIt _Last,
		_OutTy (&_Dest)[_OutSize])
	{	
	return (_Unchecked(
		::std:: uninitialized_copy(_First, _Last,
			_Array_iterator<_OutTy, _OutSize>(_Dest))));
	}
template<class _InIt,
	class _FwdIt,
	class _Alloc> inline
	_FwdIt _Uninit_copy(_InIt _First, _InIt _Last, _FwdIt _Dest,
		_Wrap_alloc<_Alloc>& _Al, _Nonscalar_ptr_iterator_tag)
	{	
	_Debug_range(_First, _Last, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xmemory", 372);
	_Debug_pointer(_Dest, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xmemory", 373);
	_FwdIt _Next = _Dest;
	try {
	for (; _First != _Last; ++_Dest, ++_First)
		_Al.construct(_Dest, *_First);
	} catch (...) {
	for (; _Next != _Dest; ++_Next)
		_Al.destroy(_Next);
	throw;
	}
	return (_Dest);
	}
template<class _InIt,
	class _FwdIt,
	class _Alloc> inline
	_FwdIt _Uninit_copy(_InIt _First, _InIt _Last, _FwdIt _Dest,
		_Wrap_alloc<_Alloc>& _Al, _Scalar_ptr_iterator_tag)
	{	
	return (_Uninit_copy(_First, _Last, _Dest,
		_Al, _Nonscalar_ptr_iterator_tag()));
	}
template<class _Ty1,
	class _Ty2> inline
	_Ty2 *_Uninit_copy(_Ty1 *_First, _Ty1 *_Last, _Ty2 *_Dest,
		_Wrap_alloc<allocator<_Ty2> >&, _Scalar_ptr_iterator_tag)
	{	
	_Debug_range(_First, _Last, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xmemory", 402);
	_Debug_pointer(_Dest, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xmemory", 403);
	size_t _Count = (size_t)(_Last - _First);
	return ((_Ty2 *):: memmove(&*_Dest, &*_First,
		_Count * sizeof (*_First)) + _Count);	
	}
template<class _InIt,
	class _FwdIt,
	class _Alloc> inline
	_FwdIt _Uninit_copy(_InIt _First, _InIt _Last, _FwdIt _Dest,
		_Alloc& _Al)
	{	
	return (_Uninit_copy(_First, _Last, _Dest, _Al,
		_Ptr_cat(_First, _Dest)));
	}
template<class _InIt,
	class _FwdIt,
	class _Alloc> inline
	_FwdIt _Uninitialized_copy(_InIt _First, _InIt _Last, _FwdIt _Dest,
		_Alloc& _Al)
	{	
	return (_Rechecked(_Dest,
		_Uninit_copy(_Unchecked(_First), _Unchecked(_Last),
			_Unchecked(_Dest), _Al)));
	}
template<class _InIt,
	class _FwdIt,
	class _Alloc,
	class _Valty> inline
	_FwdIt _Uninit_move(_InIt _First, _InIt _Last, _FwdIt _Dest,
		_Wrap_alloc<_Alloc>& _Al, _Valty *, _Nonscalar_ptr_iterator_tag)
	{	
	_Debug_range(_First, _Last, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xmemory", 438);
	_Debug_pointer(_Dest, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xmemory", 439);
	_FwdIt _Next = _Dest;
	try {
	for (; _First != _Last; ++_Dest, ++_First)
		_Al.construct(_Dest, (_Valty&&)*_First);
	} catch (...) {
	for (; _Next != _Dest; ++_Next)
		_Al.destroy(_Next);
	throw;
	}
	return (_Dest);
	}
template<class _InIt,
	class _FwdIt,
	class _Alloc,
	class _Valty> inline
	_FwdIt _Uninit_move(_InIt _First, _InIt _Last, _FwdIt _Dest,
		_Wrap_alloc<_Alloc>& _Al, _Valty *, _Scalar_ptr_iterator_tag)
	{	
	return (_Uninit_move(_First, _Last, _Dest,
		_Al, (_Valty *)0, _Nonscalar_ptr_iterator_tag()));
	}
template<class _Ty1,
	class _Ty2,
	class _Valty> inline
	_Ty2 *_Uninit_move(_Ty1 *_First, _Ty1 *_Last, _Ty2 *_Dest,
		_Wrap_alloc<allocator<_Ty2> >&, _Valty *, _Scalar_ptr_iterator_tag)
	{	
	_Debug_range(_First, _Last, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xmemory", 470);
	_Debug_pointer(_Dest, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xmemory", 471);
	size_t _Count = (size_t)(_Last - _First);
	return ((_Ty2 *):: memmove(&*_Dest, &*_First,
		_Count * sizeof (*_First)) + _Count);	
	}
template<class _InIt,
	class _FwdIt,
	class _Alloc> inline
	_FwdIt _Uninit_move(_InIt _First, _InIt _Last, _FwdIt _Dest,
		_Alloc& _Al)
	{	
	return (_Uninit_move(_First, _Last, _Dest, _Al,
		_Val_type(_First), _Ptr_cat(_First, _Dest)));
	}
template<class _InIt,
	class _FwdIt,
	class _Alloc> inline
	_FwdIt _Uninitialized_move(_InIt _First, _InIt _Last, _FwdIt _Dest,
		_Alloc& _Al)
	{	
	return (_Rechecked(_Dest,
		_Uninit_move(_Unchecked(_First), _Unchecked(_Last),
			_Unchecked(_Dest), _Al)));
	}
template<class _FwdIt,
	class _Tval> inline
	void _Uninit_fill(_FwdIt _First, _FwdIt _Last, const _Tval& _Val,
		_Nonscalar_ptr_iterator_tag)
	{	
	_Debug_range(_First, _Last, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xmemory", 504);
	_FwdIt _Next = _First;
	try {
	for (; _First != _Last; ++_First)
		_Construct(&*_First, _Val);
	} catch (...) {
	for (; _Next != _First; ++_Next)
		_Destroy(&*_Next);
	throw;
	}
	}
template<class _Ty,
	class _Tval> inline
	void _Uninit_fill(_Ty *_First, _Ty *_Last, const _Tval& _Val,
		_Scalar_ptr_iterator_tag)
	{	
	::std:: fill(_First, _Last, _Val);
	}
template<class _FwdIt,
	class _Tval> inline
	void uninitialized_fill(_FwdIt _First, _FwdIt _Last, const _Tval& _Val)
	{	
	_Uninit_fill(_First, _Last, _Val, _Ptr_cat(_First, _First));
	}
template<class _FwdIt,
	class _Diff,
	class _Tval> inline
	_FwdIt _Uninit_fill_n(_FwdIt _First, _Diff _Count, const _Tval& _Val,
		_Nonscalar_ptr_iterator_tag)
	{	
	_FwdIt _Next = _First;
	try {
	for (; 0 < _Count; --_Count, ++_First)
		_Construct(&*_First, _Val);
	} catch (...) {
	for (; _Next != _First; ++_Next)
		_Destroy(&*_Next);
	throw;
	}
	return (_First);
	}
template<class _Ty,
	class _Diff,
	class _Tval> inline
	_Ty *_Uninit_fill_n(_Ty *_First, _Diff _Count, const _Tval& _Val,
		_Scalar_ptr_iterator_tag)
	{	
	return (_Fill_n(_First, _Count, _Val));
	}
template<class _FwdIt,
	class _Diff,
	class _Tval> inline
	_FwdIt uninitialized_fill_n(_FwdIt _First, _Diff _Count,
		const _Tval& _Val)
	{	
	return (_Uninit_fill_n(_First, _Count, _Val, _Ptr_cat(_First, _First)));
	}
template<class _FwdIt,
	class _Diff,
	class _Tval,
	class _Alloc,
	class _Valty> inline
	void _Uninit_fill_n(_FwdIt _First, _Diff _Count,
		const _Tval *_Pval, _Wrap_alloc<_Alloc>& _Al,
			_Valty *, _Nonscalar_ptr_iterator_tag)
	{	
	_FwdIt _Next = _First;
	try {
	for (; 0 < _Count; --_Count, ++_First)
		_Al.construct(_First, *_Pval);
	} catch (...) {
	for (; _Next != _First; ++_Next)
		_Al.destroy(_Next);
	throw;
	}
	}
template<class _FwdIt,
	class _Diff,
	class _Tval,
	class _Alloc,
	class _Valty> inline
	void _Uninit_fill_n(_FwdIt _First, _Diff _Count,
		const _Tval *_Pval, _Wrap_alloc<_Alloc>& _Al,
			_Valty *, _Scalar_ptr_iterator_tag)
	{	
	_Uninit_fill_n(_First, _Count,
		_Pval, _Al, (_Valty *)0, _Nonscalar_ptr_iterator_tag());
	}
template<class _Ty,
	class _Diff,
	class _Tval,
	class _Valty> inline
	void _Uninit_fill_n(_Ty *_First, _Diff _Count,
		const _Tval *_Pval, _Wrap_alloc<allocator<_Ty> >&,
			_Valty *, _Scalar_ptr_iterator_tag)
	{	
	_Fill_n(_First, _Count, *_Pval);
	}
template<class _FwdIt,
	class _Diff,
	class _Tval,
	class _Alloc> inline
	void _Uninitialized_fill_n(_FwdIt _First, _Diff _Count,
		const _Tval *_Pval, _Alloc& _Al)
	{	
	_Uninit_fill_n(_First, _Count, _Pval, _Al,
		_Val_type(_First), _Ptr_cat(_First, _First));
	}
template<class _FwdIt,
	class _Diff,
	class _Alloc,
	class _Valty> inline
	void _Uninit_def_fill_n(_FwdIt _First, _Diff _Count,
		_Wrap_alloc<_Alloc>& _Al, _Valty *, _Nonscalar_ptr_iterator_tag)
	{	
	_FwdIt _Next = _First;
	try {
	for (; 0 < _Count; --_Count, ++_First)
		_Al.construct(_First);
	} catch (...) {
	for (; _Next != _First; ++_Next)
		_Al.destroy(_Next);
	throw;
	}
	}
template<class _FwdIt,
	class _Diff,
	class _Alloc,
	class _Valty> inline
	void _Uninit_def_fill_n(_FwdIt _First, _Diff _Count,
		_Wrap_alloc<_Alloc>& _Al, _Valty *, _Scalar_ptr_iterator_tag)
	{	
	_Uninit_def_fill_n(_First, _Count,
		_Al, (_Valty *)0, _Nonscalar_ptr_iterator_tag());
	}
template<class _Ty,
	class _Diff,
	class _Valty> inline
	void _Uninit_def_fill_n(_Ty *_First, _Diff _Count,
		_Wrap_alloc<allocator<_Ty> >&, _Valty *, _Scalar_ptr_iterator_tag)
	{	
	_Fill_n(_First, _Count, (_Valty)0);
	}
template<class _FwdIt,
	class _Diff,
	class _Alloc> inline
	void _Uninitialized_default_fill_n(_FwdIt _First, _Diff _Count,
		_Alloc& _Al)
	{	
	_Uninit_def_fill_n(_First, _Count, _Al,
		_Val_type(_First), _Ptr_cat(_First, _First));
	}
template<class _OutIt,
	class _Ty>
	class raw_storage_iterator
		: public _Outit
	{	
public:
	typedef _OutIt iterator_type;	
	typedef _OutIt iter_type;	
	typedef _Ty element_type;	
	explicit raw_storage_iterator(_OutIt _First)
		: _Next(_First)
		{	
		}
	raw_storage_iterator<_OutIt, _Ty>& operator*()
		{	
		return (*this);
		}
	raw_storage_iterator<_OutIt, _Ty>& operator=(const _Ty& _Val)
		{	
		_Construct(&*_Next, _Val);
		return (*this);
		}
	raw_storage_iterator<_OutIt, _Ty>& operator++()
		{	
		++_Next;
		return (*this);
		}
	raw_storage_iterator<_OutIt, _Ty> operator++(int)
		{	
		raw_storage_iterator<_OutIt, _Ty> _Ans = *this;
		++_Next;
		return (_Ans);
		}
private:
	_OutIt _Next;	
	};
template<class _Ty>
	class _Temp_iterator
		: public _Outit
	{	
public:
	typedef _Ty *_Pty;
	_Temp_iterator(ptrdiff_t _Count = 0)
		{	
		_Buf._Begin = 0;
		_Buf._Current = 0;
		_Buf._Hiwater = 0;
		_Buf._Size = _Count;	
		_Pbuf = &_Buf;
		}
	_Temp_iterator(const _Temp_iterator<_Ty>& _Right)
		{	
		_Buf._Begin = 0;	
		_Buf._Current = 0;
		_Buf._Hiwater = 0;
		_Buf._Size = 0;
		*this = _Right;
		}
	~_Temp_iterator() throw ()
		{	
		if (_Buf._Begin != 0)
			{	
			for (_Pty _Next = _Buf._Begin;
				_Next != _Buf._Hiwater; ++_Next)
				_Destroy(&*_Next);
			::std:: return_temporary_buffer(_Buf._Begin);
			}
		}
	_Temp_iterator<_Ty>& operator=(const _Temp_iterator<_Ty>& _Right)
		{	
		_Pbuf = _Right._Pbuf;
		return (*this);
		}
	_Temp_iterator<_Ty>& operator=(const _Ty& _Val)
		{	
		if (_Pbuf->_Current < _Pbuf->_Hiwater)
			*_Pbuf->_Current++ = _Val;	
		else
			{	
			_Pty _Ptr = &*_Pbuf->_Current;
			_Construct(_Ptr, _Val);
			_Pbuf->_Hiwater = ++_Pbuf->_Current;
			}
		return (*this);
		}
	_Temp_iterator<_Ty>& operator=(_Ty&& _Val)
		{	
		if (_Pbuf->_Current < _Pbuf->_Hiwater)
			*_Pbuf->_Current++ =
				::std:: forward<_Ty>(_Val);	
		else
			{	
			_Pty _Ptr = &*_Pbuf->_Current;
			_Construct(_Ptr, ::std:: forward<_Ty>(_Val));
			_Pbuf->_Hiwater = ++_Pbuf->_Current;
			}
		return (*this);
		}
	_Temp_iterator<_Ty>& operator*()
		{	
		return (*this);
		}
	_Temp_iterator<_Ty>& operator++()
		{	
		return (*this);
		}
	_Temp_iterator<_Ty>& operator++(int)
		{	
		return (*this);
		}
	_Temp_iterator<_Ty>& _Init()
		{	
		_Pbuf->_Current = _Pbuf->_Begin;
		return (*this);
		}
	_Pty _First() const
		{	
		return (_Pbuf->_Begin);
		}
	_Pty _Last() const
		{	
		return (_Pbuf->_Current);
		}
	ptrdiff_t _Maxlen()
		{	
		if (_Pbuf->_Begin == 0 && 0 < _Pbuf->_Size)
			{	
			pair<_Pty, ptrdiff_t> _Pair =
				::std:: get_temporary_buffer<_Ty>(_Pbuf->_Size);
			_Pbuf->_Begin = _Pair.first;
			_Pbuf->_Current = _Pair.first;
			_Pbuf->_Hiwater = _Pair.first;
			_Pbuf->_Size = _Pair.second;
			}
		return (_Pbuf->_Size);
		}
private:
	struct _Bufpar
		{	
		_Pty _Begin;	
		_Pty _Current;	
		_Pty _Hiwater;	
		ptrdiff_t _Size;	
		};
	_Bufpar _Buf;	
	_Bufpar *_Pbuf;	
	};
template<class _Ty>
	class auto_ptr;
template<class _Ty>
	struct auto_ptr_ref
		{	
	explicit auto_ptr_ref(_Ty *_Right)
		: _Ref(_Right)
		{	
		}
	_Ty *_Ref;	
	};
template<class _Ty>
	class auto_ptr
		{	
public:
	typedef auto_ptr<_Ty> _Myt;
	typedef _Ty element_type;
	explicit auto_ptr(_Ty *_Ptr = 0) throw ()
		: _Myptr(_Ptr)
		{	
		}
	auto_ptr(_Myt& _Right) throw ()
		: _Myptr(_Right.release())
		{	
		}
	auto_ptr(auto_ptr_ref<_Ty> _Right) throw ()
		{	
		_Ty *_Ptr = _Right._Ref;
		_Right._Ref = 0;	
		_Myptr = _Ptr;	
		}
	template<class _Other>
		operator auto_ptr<_Other>() throw ()
		{	
		return (auto_ptr<_Other>(*this));
		}
	template<class _Other>
		operator auto_ptr_ref<_Other>() throw ()
		{	
		_Other *_Cvtptr = _Myptr;	
		auto_ptr_ref<_Other> _Ans(_Cvtptr);
		_Myptr = 0;	
		return (_Ans);
		}
	template<class _Other>
		_Myt& operator=(auto_ptr<_Other>& _Right) throw ()
		{	
		reset(_Right.release());
		return (*this);
		}
	template<class _Other>
		auto_ptr(auto_ptr<_Other>& _Right) throw ()
		: _Myptr(_Right.release())
		{	
		}
	_Myt& operator=(_Myt& _Right) throw ()
		{	
		reset(_Right.release());
		return (*this);
		}
	_Myt& operator=(auto_ptr_ref<_Ty> _Right) throw ()
		{	
		_Ty *_Ptr = _Right._Ref;
		_Right._Ref = 0;	
		reset(_Ptr);	
		return (*this);
		}
	~auto_ptr() throw ()
		{	
		delete _Myptr;
		}
	_Ty& operator*() const throw ()
		{	
		if (_Myptr == 0)
			_Debug_message(L"auto_ptr not dereferencable", L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xmemory", 958);
		return (*get());
		}
	_Ty *operator->() const throw ()
		{	
		if (_Myptr == 0)
			_Debug_message(L"auto_ptr not dereferencable", L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xmemory", 968);
		return (get());
		}
	_Ty *get() const throw ()
		{	
		return (_Myptr);
		}
	_Ty *release() throw ()
		{	
		_Ty *_Tmp = _Myptr;
		_Myptr = 0;
		return (_Tmp);
		}
	void reset(_Ty *_Ptr = 0)
		{	
		if (_Ptr != _Myptr)
			delete _Myptr;
		_Myptr = _Ptr;
		}
private:
	_Ty *_Myptr;	
	};
}
 #pragma warning(pop)
 #pragma pack(pop)
 #pragma pack(push,8)
 #pragma warning(push,3)
namespace std {
 #pragma warning(disable: 4127)
  #pragma warning(disable: 4251)
template<class _Elem,
	class _Traits = char_traits<_Elem>,
	class _Ax = allocator<_Elem> >
	class basic_string;
template<class _Mystr>
	class _String_const_iterator
		: public _Iterator012<random_access_iterator_tag,
			typename _Mystr::value_type,
			typename _Mystr::difference_type,
			typename _Mystr::const_pointer,
			typename _Mystr::const_reference,
			_Iterator_base>
	{	
public:
	typedef _String_const_iterator<_Mystr> _Myiter;
	typedef random_access_iterator_tag iterator_category;
	typedef typename _Mystr::value_type value_type;
	typedef typename _Mystr::difference_type difference_type;
	typedef typename _Mystr::const_pointer pointer;
	typedef typename _Mystr::const_reference reference;
	_String_const_iterator()
		{	
		this->_Ptr = 0;
		}
	_String_const_iterator(pointer _Parg, const _Container_base *_Pstring)
		{	
		this->_Adopt(_Pstring);
		this->_Ptr = _Parg;
		}
	typedef pointer _Unchecked_type;
	_Myiter& _Rechecked(_Unchecked_type _Right)
		{	
		this->_Ptr = _Right;
		return (*this);
		}
	_Unchecked_type _Unchecked() const
		{	
		return (_Unchecked_type(this->_Ptr));
		}
	reference operator*() const
		{	
		if (this->_Getcont() == 0
			|| this->_Ptr == 0
			|| this->_Ptr < ((_Mystr *)this->_Getcont())->_Myptr()
			|| ((_Mystr *)this->_Getcont())->_Myptr()
				+ ((_Mystr *)this->_Getcont())->_Mysize <= this->_Ptr)
			{	
			_Debug_message(L"string iterator not dereferencable", L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xstring", 79);
			{ (void) ((!!(("Standard C++ Libraries Out of Range" && 0))) || (1 != _CrtDbgReportW(2, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xstring", 80, 0, L"%s", L"\"Standard C++ Libraries Out of Range\" && 0")) || (__debugbreak(), 0)); ::_invalid_parameter(L"\"out of range\"", __LPREFIX( __FUNCTION__), L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xstring", 80, 0); };
			}
		;
		return (*this->_Ptr);
		}
	pointer operator->() const
		{	
		return (::std:: pointer_traits<pointer>::pointer_to(**this));
		}
	_Myiter& operator++()
		{	
		if (this->_Getcont() == 0
			|| this->_Ptr == 0
			|| ((_Mystr *)this->_Getcont())->_Myptr()
				+ ((_Mystr *)this->_Getcont())->_Mysize <= this->_Ptr)
			{	
			_Debug_message(L"string iterator not incrementable", L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xstring", 109);
			{ (void) ((!!(("Standard C++ Libraries Out of Range" && 0))) || (1 != _CrtDbgReportW(2, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xstring", 110, 0, L"%s", L"\"Standard C++ Libraries Out of Range\" && 0")) || (__debugbreak(), 0)); ::_invalid_parameter(L"\"out of range\"", __LPREFIX( __FUNCTION__), L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xstring", 110, 0); };
			}
		++this->_Ptr;
		return (*this);
		}
	_Myiter operator++(int)
		{	
		_Myiter _Tmp = *this;
		++*this;
		return (_Tmp);
		}
	_Myiter& operator--()
		{	
		if (this->_Getcont() == 0
			|| this->_Ptr == 0
			|| this->_Ptr <= ((_Mystr *)this->_Getcont())->_Myptr())
			{	
			_Debug_message(L"string iterator not decrementable", L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xstring", 138);
			{ (void) ((!!(("Standard C++ Libraries Out of Range" && 0))) || (1 != _CrtDbgReportW(2, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xstring", 139, 0, L"%s", L"\"Standard C++ Libraries Out of Range\" && 0")) || (__debugbreak(), 0)); ::_invalid_parameter(L"\"out of range\"", __LPREFIX( __FUNCTION__), L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xstring", 139, 0); };
			}
		--this->_Ptr;
		return (*this);
		}
	_Myiter operator--(int)
		{	
		_Myiter _Tmp = *this;
		--*this;
		return (_Tmp);
		}
	_Myiter& operator+=(difference_type _Off)
		{	
		if (this->_Getcont() == 0
			|| this->_Ptr == 0
			|| this->_Ptr + _Off < ((_Mystr *)this->_Getcont())->_Myptr()
			|| ((_Mystr *)this->_Getcont())->_Myptr()
				+ ((_Mystr *)this->_Getcont())->_Mysize < this->_Ptr + _Off)
			{	
			_Debug_message(L"string iterator + offset out of range", L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xstring", 168);
			{ (void) ((!!(("Standard C++ Libraries Out of Range" && 0))) || (1 != _CrtDbgReportW(2, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xstring", 169, 0, L"%s", L"\"Standard C++ Libraries Out of Range\" && 0")) || (__debugbreak(), 0)); ::_invalid_parameter(L"\"out of range\"", __LPREFIX( __FUNCTION__), L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xstring", 169, 0); };
			}
		_Ptr += _Off;
		return (*this);
		}
	_Myiter operator+(difference_type _Off) const
		{	
		_Myiter _Tmp = *this;
		return (_Tmp += _Off);
		}
	_Myiter& operator-=(difference_type _Off)
		{	
		return (*this += -_Off);
		}
	_Myiter operator-(difference_type _Off) const
		{	
		_Myiter _Tmp = *this;
		return (_Tmp -= _Off);
		}
	difference_type operator-(const _Myiter& _Right) const
		{	
		_Compat(_Right);
		return (this->_Ptr - _Right._Ptr);
		}
	reference operator[](difference_type _Off) const
		{	
		return (*(*this + _Off));
		}
	bool operator==(const _Myiter& _Right) const
		{	
		_Compat(_Right);
		return (this->_Ptr == _Right._Ptr);
		}
	bool operator!=(const _Myiter& _Right) const
		{	
		return (!(*this == _Right));
		}
	bool operator<(const _Myiter& _Right) const
		{	
		_Compat(_Right);
		return (this->_Ptr < _Right._Ptr);
		}
	bool operator>(const _Myiter& _Right) const
		{	
		return (_Right < *this);
		}
	bool operator<=(const _Myiter& _Right) const
		{	
		return (!(_Right < *this));
		}
	bool operator>=(const _Myiter& _Right) const
		{	
		return (!(*this < _Right));
		}
	void _Compat(const _Myiter& _Right) const
		{	
		if (this->_Getcont() == 0
			|| this->_Getcont() != _Right._Getcont())
			{	
			_Debug_message(L"string iterators incompatible", L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xstring", 250);
			{ (void) ((!!(("Standard C++ Libraries Invalid Argument" && 0))) || (1 != _CrtDbgReportW(2, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xstring", 251, 0, L"%s", L"\"Standard C++ Libraries Invalid Argument\" && 0")) || (__debugbreak(), 0)); ::_invalid_parameter(L"\"invalid argument\"", __LPREFIX( __FUNCTION__), L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xstring", 251, 0); };
			}
		}
	pointer _Ptr;	
	};
template<class _Mystr> inline
	typename _String_const_iterator<_Mystr>::_Unchecked_type
		_Unchecked(_String_const_iterator<_Mystr> _Iter)
	{	
	return (_Iter._Unchecked());
	}
template<class _Mystr> inline
	_String_const_iterator<_Mystr>
		_Rechecked(_String_const_iterator<_Mystr>& _Iter,
			typename _String_const_iterator<_Mystr>
				::_Unchecked_type _Right)
	{	
	return (_Iter._Rechecked(_Right));
	}
template<class _Mystr> inline
	_String_const_iterator<_Mystr> operator+(
		typename _String_const_iterator<_Mystr>
			::difference_type _Off,
		_String_const_iterator<_Mystr> _Next)
	{	
	return (_Next += _Off);
	}
template<class _Mystr>
	class _String_iterator
		: public _String_const_iterator<_Mystr>
	{	
public:
	typedef _String_iterator<_Mystr> _Myiter;
	typedef _String_const_iterator<_Mystr> _Mybase;
	typedef random_access_iterator_tag iterator_category;
	typedef typename _Mystr::value_type value_type;
	typedef typename _Mystr::difference_type difference_type;
	typedef typename _Mystr::pointer pointer;
	typedef typename _Mystr::reference reference;
	_String_iterator()
		{	
		}
	_String_iterator(pointer _Parg, const _Container_base *_Pstring)
		: _Mybase(_Parg, _Pstring)
		{	
		}
	typedef pointer _Unchecked_type;
	_Myiter& _Rechecked(_Unchecked_type _Right)
		{	
		this->_Ptr = _Right;
		return (*this);
		}
	_Unchecked_type _Unchecked() const
		{	
		return (_Unchecked_type(this->_Ptr));
		}
	reference operator*() const
		{	
		return ((reference)**(_Mybase *)this);
		}
	pointer operator->() const
		{	
		return (::std:: pointer_traits<pointer>::pointer_to(**this));
		}
	_Myiter& operator++()
		{	
		++*(_Mybase *)this;
		return (*this);
		}
	_Myiter operator++(int)
		{	
		_Myiter _Tmp = *this;
		++*this;
		return (_Tmp);
		}
	_Myiter& operator--()
		{	
		--*(_Mybase *)this;
		return (*this);
		}
	_Myiter operator--(int)
		{	
		_Myiter _Tmp = *this;
		--*this;
		return (_Tmp);
		}
	_Myiter& operator+=(difference_type _Off)
		{	
		*(_Mybase *)this += _Off;
		return (*this);
		}
	_Myiter operator+(difference_type _Off) const
		{	
		_Myiter _Tmp = *this;
		return (_Tmp += _Off);
		}
	_Myiter& operator-=(difference_type _Off)
		{	
		return (*this += -_Off);
		}
	_Myiter operator-(difference_type _Off) const
		{	
		_Myiter _Tmp = *this;
		return (_Tmp -= _Off);
		}
	difference_type operator-(const _Mybase& _Right) const
		{	
		return ((_Mybase)*this - _Right);
		}
	reference operator[](difference_type _Off) const
		{	
		return (*(*this + _Off));
		}
	};
template<class _Mystr> inline
	typename _String_iterator<_Mystr>::_Unchecked_type
		_Unchecked(_String_iterator<_Mystr> _Iter)
	{	
	return (_Iter._Unchecked());
	}
template<class _Mystr> inline
	_String_iterator<_Mystr>
		_Rechecked(_String_iterator<_Mystr>& _Iter,
			typename _String_iterator<_Mystr>
				::_Unchecked_type _Right)
	{	
	return (_Iter._Rechecked(_Right));
	}
template<class _Mystr> inline
	_String_iterator<_Mystr> operator+(
		typename _String_iterator<_Mystr>
			::difference_type _Off,
		_String_iterator<_Mystr> _Next)
	{	
	return (_Next += _Off);
	}
template<class _Value_type,
	class _Size_type,
	class _Difference_type,
	class _Pointer,
	class _Const_pointer,
	class _Reference,
	class _Const_reference>
	struct _String_iter_types
	{	
	typedef _Value_type value_type;
	typedef _Size_type size_type;
	typedef _Difference_type difference_type;
	typedef _Pointer pointer;
	typedef _Const_pointer const_pointer;
	typedef _Reference reference;
	typedef _Const_reference const_reference;
	};
template<class _Ty,
	class _Alloc0>
	struct _String_base_types
	{	
	typedef _Alloc0 _Alloc;
	typedef _String_base_types<_Ty, _Alloc> _Myt;
	typedef _Wrap_alloc<_Alloc> _Alty0;
	typedef typename _Alty0::template rebind<_Ty>::other _Alty;
	typedef typename _Alty::pointer _Tptr;
	typedef typename _Alty::template rebind<_Tptr>::other _Alpty;
	typedef typename _If<_Is_simple_alloc<_Alty>::value,
		_Simple_types<typename _Alty::value_type>,
		_String_iter_types<typename _Alty::value_type,
			typename _Alty::size_type,
			typename _Alty::difference_type,
			typename _Alty::pointer,
			typename _Alty::const_pointer,
			typename _Alty::reference,
			typename _Alty::const_reference> >::type
		_Val_types;
	};
template<class _Val_types>
	class _String_val
		: public _Container_base
	{	
public:
	typedef _String_val<_Val_types> _Myt;
	typedef typename _Val_types::value_type value_type;
	typedef typename _Val_types::size_type size_type;
	typedef typename _Val_types::difference_type difference_type;
	typedef typename _Val_types::pointer pointer;
	typedef typename _Val_types::const_pointer const_pointer;
	typedef typename _Val_types::reference reference;
	typedef typename _Val_types::const_reference const_reference;
	typedef _String_iterator<_Myt> iterator;
	typedef _String_const_iterator<_Myt> const_iterator;
	_String_val()
		{	
		_Mysize = 0;
		_Myres = 0;
		}
	enum
		{	
		_BUF_SIZE = 16 / sizeof (value_type) < 1 ? 1
			: 16 / sizeof (value_type)};
	enum
		{	
		_ALLOC_MASK = sizeof (value_type) <= 1 ? 15
			: sizeof (value_type) <= 2 ? 7
			: sizeof (value_type) <= 4 ? 3
			: sizeof (value_type) <= 8 ? 1 : 0};
	value_type *_Myptr()
		{	
		return (this->_BUF_SIZE <= this->_Myres
			? ::std:: addressof(*this->_Bx._Ptr)
			: this->_Bx._Buf);
		}
	const value_type *_Myptr() const
		{	
		return (this->_BUF_SIZE <= this->_Myres
			? ::std:: addressof(*this->_Bx._Ptr)
			: this->_Bx._Buf);
		}
	union _Bxty
		{	
		value_type _Buf[_BUF_SIZE];
		pointer _Ptr;
		char _Alias[_BUF_SIZE];	
		} _Bx;
	size_type _Mysize;	
	size_type _Myres;	
	};
template<bool _Al_has_storage,
	class _Alloc_types>
	class _String_alloc
		: public _String_val<typename _Alloc_types::_Val_types>
	{	
public:
	typename _Alloc_types::_Alty _Alval;	
	typedef _String_alloc<_Al_has_storage, _Alloc_types> _Myt;
	typedef typename _Alloc_types::_Alloc _Alloc;
	typedef typename _Alloc_types::_Alty _Alty;
	_String_alloc(const _Alloc& _Al = _Alloc())
		: _Alval(_Al)
		{	
		_Alloc_proxy();
		}
	~_String_alloc() throw ()
		{	
		_Free_proxy();
		}
	void _Change_alloc(const _Alty& _Al)
		{	
		_Free_proxy();
		this->_Alval = _Al;
		_Alloc_proxy();
		}
	void _Swap_alloc(_Myt& _Right)
		{	
		_Swap_adl(this->_Alval, _Right._Alval);
		_Swap_adl(this->_Myproxy, _Right._Myproxy);
		}
	void _Alloc_proxy()
		{	
		typename _Alloc::template rebind<_Container_proxy>::other
			_Alproxy(this->_Alval);
		this->_Myproxy = _Alproxy.allocate(1);
		_Alproxy.construct(this->_Myproxy, _Container_proxy());
		this->_Myproxy->_Mycont = this;
		}
	void _Free_proxy()
		{	
		typename _Alloc::template rebind<_Container_proxy>::other
			_Alproxy(this->_Alval);
		this->_Orphan_all();
		_Alproxy.destroy(this->_Myproxy);
		_Alproxy.deallocate(this->_Myproxy, 1);
		this->_Myproxy = 0;
		}
	_Alty& _Getal()
		{	
		return (this->_Alval);
		}
	const _Alty& _Getal() const
		{	
		return (this->_Alval);
		}
	};
template<class _Alloc_types>
	class _String_alloc<false, _Alloc_types>
		: public _String_val<typename _Alloc_types::_Val_types>
	{	
public:
	typedef _String_alloc<false, _Alloc_types> _Myt;
	typedef typename _Alloc_types::_Alloc _Alloc;
	typedef typename _Alloc_types::_Alty _Alty;
	_String_alloc(const _Alloc& = _Alloc())
		{	
		_Alloc_proxy();
		}
	~_String_alloc() throw ()
		{	
		_Free_proxy();
		}
	void _Change_alloc(const _Alty&)
		{	
		}
	void _Swap_alloc(_Myt& _Right)
		{	
		_Swap_adl(this->_Myproxy, _Right._Myproxy);
		}
	void _Alloc_proxy()
		{	
		typename _Alloc::template rebind<_Container_proxy>::other
			_Alproxy;
		this->_Myproxy = _Alproxy.allocate(1);
		_Alproxy.construct(this->_Myproxy, _Container_proxy());
		this->_Myproxy->_Mycont = this;
		}
	void _Free_proxy()
		{	
		typename _Alloc::template rebind<_Container_proxy>::other
			_Alproxy;
		this->_Orphan_all();
		_Alproxy.destroy(this->_Myproxy);
		_Alproxy.deallocate(this->_Myproxy, 1);
		this->_Myproxy = 0;
		}
	_Alty _Getal() const
		{	
		return (_Alty());
		}
	};
template<class _Elem,
	class _Traits,
	class _Alloc>
	class basic_string
		: public _String_alloc<!is_empty<_Alloc>::value,
			_String_base_types<_Elem, _Alloc> >
	{	
public:
	typedef basic_string<_Elem, _Traits, _Alloc> _Myt;
	typedef _String_alloc<!is_empty<_Alloc>::value,
		_String_base_types<_Elem, _Alloc> > _Mybase;
	typedef _Traits traits_type;
	typedef _Alloc allocator_type;
	typedef typename _Mybase::_Alty _Alty;
	typedef typename _Mybase::value_type value_type;
	typedef typename _Mybase::size_type size_type;
	typedef typename _Mybase::difference_type difference_type;
	typedef typename _Mybase::pointer pointer;
	typedef typename _Mybase::const_pointer const_pointer;
	typedef typename _Mybase::reference reference;
	typedef typename _Mybase::const_reference const_reference;
	typedef typename _Mybase::iterator iterator;
	typedef typename _Mybase::const_iterator const_iterator;
	typedef ::std:: reverse_iterator<iterator> reverse_iterator;
	typedef ::std:: reverse_iterator<const_iterator> const_reverse_iterator;
	basic_string(const _Myt& _Right)
		: _Mybase(_Right._Getal().select_on_container_copy_construction())
		{	
		_Tidy();
		assign(_Right, 0, npos);
		}
	basic_string(const _Myt& _Right, const _Alloc& _Al)
		: _Mybase(_Al)
		{	
		_Tidy();
		assign(_Right, 0, npos);
		}
	basic_string()
		: _Mybase()
		{	
		_Tidy();
		}
	explicit basic_string(const _Alloc& _Al)
		: _Mybase(_Al)
		{	
		_Tidy();
		}
	basic_string(const _Myt& _Right, size_type _Roff,
		size_type _Count = npos)
		: _Mybase(_Right._Getal())
		{	
		_Tidy();
		assign(_Right, _Roff, _Count);
		}
	basic_string(const _Myt& _Right, size_type _Roff, size_type _Count,
		const _Alloc& _Al)
		: _Mybase(_Al)
		{	
		_Tidy();
		assign(_Right, _Roff, _Count);
		}
	basic_string(const _Elem *_Ptr, size_type _Count)
		: _Mybase()
		{	
		_Tidy();
		assign(_Ptr, _Count);
		}
	basic_string(const _Elem *_Ptr, size_type _Count, const _Alloc& _Al)
		: _Mybase(_Al)
		{	
		_Tidy();
		assign(_Ptr, _Count);
		}
	basic_string(const _Elem *_Ptr)
		: _Mybase()
		{	
		_Tidy();
		assign(_Ptr);
		}
	basic_string(const _Elem *_Ptr, const _Alloc& _Al)
		: _Mybase(_Al)
		{	
		_Tidy();
		assign(_Ptr);
		}
	basic_string(size_type _Count, _Elem _Ch)
		: _Mybase()
		{	
		_Tidy();
		assign(_Count, _Ch);
		}
	basic_string(size_type _Count, _Elem _Ch, const _Alloc& _Al)
		: _Mybase(_Al)
		{	
		_Tidy();
		assign(_Count, _Ch);
		}
	template<class _Iter,
		class = typename enable_if<_Is_iterator<_Iter>::value,
			void>::type>
		basic_string(_Iter _First, _Iter _Last)
		: _Mybase()
		{	
		_Tidy();
		_Construct(_First, _Last, _Iter_cat(_First));
		}
	template<class _Iter,
		class = typename enable_if<_Is_iterator<_Iter>::value,
			void>::type>
		basic_string(_Iter _First, _Iter _Last, const _Alloc& _Al)
		: _Mybase(_Al)
		{	
		_Tidy();
		_Construct(_First, _Last, _Iter_cat(_First));
		}
	template<class _Iter>
		void _Construct(_Iter _First,
			_Iter _Last, input_iterator_tag)
		{	
		try {
		for (; _First != _Last; ++_First)
			append((size_type)1, (_Elem)*_First);
		} catch (...) {
		_Tidy(true);
		throw;
		}
		}
	template<class _Iter>
		void _Construct(_Iter _First,
			_Iter _Last, forward_iterator_tag)
		{	
		_Debug_range(_First, _Last, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xstring", 843);
		size_type _Count = 0;
		_Distance(_First, _Last, _Count);
		reserve(_Count);
		try {
		for (; _First != _Last; ++_First)
			append((size_type)1, (_Elem)*_First);
		} catch (...) {
		_Tidy(true);
		throw;
		}
		}
	basic_string(const_pointer _First, const_pointer _Last)
		: _Mybase()
		{	
		_Debug_range(_First, _Last, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xstring", 860);
		_Tidy();
		if (_First != _Last)
			assign(&*_First, _Last - _First);
		}
	basic_string(const_pointer _First, const_pointer _Last,
		const _Alloc& _Al)
		: _Mybase(_Al)
		{	
		_Debug_range(_First, _Last, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xstring", 870);
		_Tidy();
		if (_First != _Last)
			assign(&*_First, _Last - _First);
		}
	basic_string(const_iterator _First, const_iterator _Last)
		: _Mybase()
		{	
		_Debug_range(_First, _Last, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xstring", 879);
		_Tidy();
		if (_First != _Last)
			assign(&*_First, _Last - _First);
		}
	basic_string(_Myt&& _Right) throw ()
		: _Mybase(_Right._Getal())
		{	
		_Tidy();
		_Assign_rv(::std:: forward<_Myt>(_Right));
		}
	basic_string(_Myt&& _Right, const _Alloc& _Al)
		: _Mybase(_Al)
		{	
		if (this->_Getal() != _Right._Getal())
			assign(_Right.begin(), _Right.end());
		else
			_Assign_rv(::std:: forward<_Myt>(_Right));
		}
	_Myt& operator=(_Myt&& _Right) throw ()
		{	
		if (this != &_Right)
			{	
			_Tidy(true);
			if (_Alty::propagate_on_container_move_assignment::value
				&& this->_Getal() != _Right._Getal())
				this->_Change_alloc(_Right._Getal());
			if (this->_Getal() != _Right._Getal())
				assign(_Right.begin(), _Right.end());
			else
				_Assign_rv(::std:: forward<_Myt>(_Right));
			}
		return (*this);
		}
	_Myt& assign(_Myt&& _Right) throw ()
		{	
		if (this == &_Right)
			;
		else if (get_allocator() != _Right.get_allocator()
			&& this->_BUF_SIZE <= _Right._Myres)
			*this = _Right;
		else
			{	
			_Tidy(true);
			_Assign_rv(::std:: forward<_Myt>(_Right));
			}
		return (*this);
		}
	void _Assign_rv(_Myt&& _Right)
		{	
		if (_Right._Myres < this->_BUF_SIZE)
			_Traits::move(this->_Bx._Buf, _Right._Bx._Buf,
				_Right._Mysize + 1);
		else
			{	
			this->_Getal().construct(&this->_Bx._Ptr, _Right._Bx._Ptr);
			_Right._Bx._Ptr = pointer();
			}
		this->_Mysize = _Right._Mysize;
		this->_Myres = _Right._Myres;
		_Right._Tidy();
		}
	basic_string(::std:: initializer_list<_Elem> _Ilist,
		const _Alloc& _Al = allocator_type())
		: _Mybase(_Al)
		{	
		_Tidy();
		assign(_Ilist.begin(), _Ilist.end());
		}
	_Myt& operator=(::std:: initializer_list<_Elem> _Ilist)
		{	
		return (assign(_Ilist.begin(), _Ilist.end()));
		}
	_Myt& operator+=(::std:: initializer_list<_Elem> _Ilist)
		{	
		return (append(_Ilist.begin(), _Ilist.end()));
		}
	_Myt& assign(::std:: initializer_list<_Elem> _Ilist)
		{	
		return (assign(_Ilist.begin(), _Ilist.end()));
		}
	_Myt& append(::std:: initializer_list<_Elem> _Ilist)
		{	
		return (append(_Ilist.begin(), _Ilist.end()));
		}
	iterator insert(const_iterator _Where,
		::std:: initializer_list<_Elem> _Ilist)
		{	
		return (insert(_Where, _Ilist.begin(), _Ilist.end()));
		}
	_Myt& replace(const_iterator _First, const_iterator _Last,
		::std:: initializer_list<_Elem> _Ilist)
		{	
		return (replace(_First, _Last, _Ilist.begin(), _Ilist.end()));
		}
	~basic_string() throw ()
		{	
		_Tidy(true);
		}
	 static const size_type npos;	
	_Myt& operator=(const _Myt& _Right)
		{	
		if (this != &_Right)
			{	
			if (this->_Getal() != _Right._Getal()
				&& _Alty::propagate_on_container_copy_assignment::value)
				{	
				_Tidy(true);
				this->_Change_alloc(_Right._Getal());
				}
			assign(_Right);
			}
		return (*this);
		}
	_Myt& operator=(const _Elem *_Ptr)
		{	
		return (assign(_Ptr));
		}
	_Myt& operator=(_Elem _Ch)
		{	
		return (assign(1, _Ch));
		}
	_Myt& operator+=(const _Myt& _Right)
		{	
		return (append(_Right));
		}
	_Myt& operator+=(const _Elem *_Ptr)
		{	
		return (append(_Ptr));
		}
	_Myt& operator+=(_Elem _Ch)
		{	
		return (append((size_type)1, _Ch));
		}
	_Myt& append(const _Myt& _Right)
		{	
		return (append(_Right, 0, npos));
		}
	_Myt& append(const _Myt& _Right,
		size_type _Roff, size_type _Count)
		{	
		if (_Right.size() < _Roff)
			_Xran();	
		size_type _Num = _Right.size() - _Roff;
		if (_Num < _Count)
			_Count = _Num;	
		if (npos - this->_Mysize <= _Count)
			_Xlen();	
		if (0 < _Count && _Grow(_Num = this->_Mysize + _Count))
			{	
			_Traits::copy(this->_Myptr() + this->_Mysize,
				_Right._Myptr() + _Roff, _Count);
			_Eos(_Num);
			}
		return (*this);
		}
	_Myt& append(const _Elem *_Ptr, size_type _Count)
		{	
		if (_Count != 0)
			_Debug_pointer(_Ptr, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xstring", 1066);
		if (_Inside(_Ptr))
			return (append(*this,
				_Ptr - this->_Myptr(), _Count));	
		if (npos - this->_Mysize <= _Count)
			_Xlen();	
		size_type _Num;
		if (0 < _Count && _Grow(_Num = this->_Mysize + _Count))
			{	
			_Traits::copy(this->_Myptr() + this->_Mysize, _Ptr, _Count);
			_Eos(_Num);
			}
		return (*this);
		}
	_Myt& append(const _Elem *_Ptr)
		{	
		_Debug_pointer(_Ptr, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xstring", 1086);
		return (append(_Ptr, _Traits::length(_Ptr)));
		}
	_Myt& append(size_type _Count, _Elem _Ch)
		{	
		if (npos - this->_Mysize <= _Count)
			_Xlen();	
		size_type _Num;
		if (0 < _Count && _Grow(_Num = this->_Mysize + _Count))
			{	
			_Chassign(this->_Mysize, _Count, _Ch);
			_Eos(_Num);
			}
		return (*this);
		}
	template<class _Iter>
		typename enable_if<_Is_iterator<_Iter>::value,
			_Myt&>::type
		append(_Iter _First, _Iter _Last)
		{	
		return (replace(end(), end(), _First, _Last));
		}
	_Myt& append(const_pointer _First, const_pointer _Last)
		{	
		return (replace(end(), end(), _First, _Last));
		}
	_Myt& append(const_iterator _First, const_iterator _Last)
		{	
		return (replace(end(), end(), _First, _Last));
		}
	_Myt& assign(const _Myt& _Right)
		{	
		return (assign(_Right, 0, npos));
		}
	_Myt& assign(const _Myt& _Right,
		size_type _Roff, size_type _Count)
		{	
		if (_Right.size() < _Roff)
			_Xran();	
		size_type _Num = _Right.size() - _Roff;
		if (_Count < _Num)
			_Num = _Count;	
		if (this == &_Right)
			erase((size_type)(_Roff + _Num)), erase(0, _Roff);	
		else if (_Grow(_Num))
			{	
			_Traits::copy(this->_Myptr(),
				_Right._Myptr() + _Roff, _Num);
			_Eos(_Num);
			}
		return (*this);
		}
	_Myt& assign(const _Elem *_Ptr, size_type _Count)
		{	
		if (_Count != 0)
			_Debug_pointer(_Ptr, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xstring", 1151);
		if (_Inside(_Ptr))
			return (assign(*this,
				_Ptr - this->_Myptr(), _Count));	
		if (_Grow(_Count))
			{	
			_Traits::copy(this->_Myptr(), _Ptr, _Count);
			_Eos(_Count);
			}
		return (*this);
		}
	_Myt& assign(const _Elem *_Ptr)
		{	
		_Debug_pointer(_Ptr, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xstring", 1168);
		return (assign(_Ptr, _Traits::length(_Ptr)));
		}
	_Myt& assign(size_type _Count, _Elem _Ch)
		{	
		if (_Count == npos)
			_Xlen();	
		if (_Grow(_Count))
			{	
			_Chassign(0, _Count, _Ch);
			_Eos(_Count);
			}
		return (*this);
		}
	template<class _Iter>
		typename enable_if<_Is_iterator<_Iter>::value,
			_Myt&>::type
		assign(_Iter _First, _Iter _Last)
		{	
		return (replace(begin(), end(), _First, _Last));
		}
	_Myt& assign(const_pointer _First, const_pointer _Last)
		{	
		return (replace(begin(), end(), _First, _Last));
		}
	_Myt& assign(const_iterator _First, const_iterator _Last)
		{	
		return (replace(begin(), end(), _First, _Last));
		}
	_Myt& insert(size_type _Off, const _Myt& _Right)
		{	
		return (insert(_Off, _Right, 0, npos));
		}
	_Myt& insert(size_type _Off,
		const _Myt& _Right, size_type _Roff, size_type _Count)
		{	
		if (this->_Mysize < _Off || _Right.size() < _Roff)
			_Xran();	
		size_type _Num = _Right.size() - _Roff;
		if (_Num < _Count)
			_Count = _Num;	
		if (npos - this->_Mysize <= _Count)
			_Xlen();	
		if (0 < _Count && _Grow(_Num = this->_Mysize + _Count))
			{	
			_Traits::move(this->_Myptr() + _Off + _Count,
				this->_Myptr() + _Off,
				this->_Mysize - _Off);	
			if (this == &_Right)
				_Traits::move(this->_Myptr() + _Off,
					this->_Myptr() + (_Off < _Roff ? _Roff + _Count : _Roff),
						_Count);	
			else
				_Traits::copy(this->_Myptr() + _Off,
					_Right._Myptr() + _Roff, _Count);	
			_Eos(_Num);
			}
		return (*this);
		}
	_Myt& insert(size_type _Off,
		const _Elem *_Ptr, size_type _Count)
		{	
		if (_Count != 0)
			_Debug_pointer(_Ptr, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xstring", 1241);
		if (_Inside(_Ptr))
			return (insert(_Off, *this,
				_Ptr - this->_Myptr(), _Count));	
		if (this->_Mysize < _Off)
			_Xran();	
		if (npos - this->_Mysize <= _Count)
			_Xlen();	
		size_type _Num;
		if (0 < _Count && _Grow(_Num = this->_Mysize + _Count))
			{	
			_Traits::move(this->_Myptr() + _Off + _Count,
				this->_Myptr() + _Off,
				this->_Mysize - _Off);	
			_Traits::copy(this->_Myptr() + _Off, _Ptr, _Count);	
			_Eos(_Num);
			}
		return (*this);
		}
	_Myt& insert(size_type _Off, const _Elem *_Ptr)
		{	
		_Debug_pointer(_Ptr, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xstring", 1265);
		return (insert(_Off, _Ptr, _Traits::length(_Ptr)));
		}
	_Myt& insert(size_type _Off,
		size_type _Count, _Elem _Ch)
		{	
		if (this->_Mysize < _Off)
			_Xran();	
		if (npos - this->_Mysize <= _Count)
			_Xlen();	
		size_type _Num;
		if (0 < _Count && _Grow(_Num = this->_Mysize + _Count))
			{	
			_Traits::move(this->_Myptr() + _Off + _Count,
				this->_Myptr() + _Off,
				this->_Mysize - _Off);	
			_Chassign(_Off, _Count, _Ch);	
			_Eos(_Num);
			}
		return (*this);
		}
	iterator insert(const_iterator _Where)
		{	
		return (insert(_Where, _Elem()));
		}
	iterator insert(const_iterator _Where, _Elem _Ch)
		{	
		size_type _Off = _Pdif(_Where, begin());
		insert(_Off, 1, _Ch);
		return (begin() + _Off);
		}
	iterator insert(const_iterator _Where, size_type _Count, _Elem _Ch)
		{	
		size_type _Off = _Pdif(_Where, begin());
		insert(_Off, _Count, _Ch);
		return (begin() + _Off);
		}
	template<class _Iter>
		typename enable_if<_Is_iterator<_Iter>::value,
			iterator>::type
		insert(const_iterator _Where, _Iter _First, _Iter _Last)
		{	
		size_type _Off = _Pdif(_Where, begin());
		replace(_Where, _Where, _First, _Last);
		return (begin() + _Off);
		}
	iterator insert(const_iterator _Where,
		const_pointer _First, const_pointer _Last)
		{	
		size_type _Off = _Pdif(_Where, begin());
		replace(_Where, _Where, _First, _Last);
		return (begin() + _Off);
		}
	iterator insert(const_iterator _Where,
		const_iterator _First, const_iterator _Last)
		{	
		size_type _Off = _Pdif(_Where, begin());
		replace(_Where, _Where, _First, _Last);
		return (begin() + _Off);
		}
	_Myt& erase(size_type _Off = 0)
		{	
		if (this->_Mysize < _Off)
			_Xran();	
		_Eos(_Off);
		return (*this);
		}
	_Myt& erase(size_type _Off, size_type _Count)
		{	
		if (this->_Mysize < _Off)
			_Xran();	
		if (this->_Mysize - _Off <= _Count)
			_Eos(_Off);	
		else if (0 < _Count)
			{	
			value_type *_Ptr = this->_Myptr() + _Off;
			size_type _Newsize = this->_Mysize - _Count;
			_Traits::move(_Ptr, _Ptr + _Count, _Newsize - _Off);
			_Eos(_Newsize);
			}
		return (*this);
		}
	iterator erase(const_iterator _Where)
		{	
		size_type _Count = _Pdif(_Where, begin());
		erase(_Count, 1);
		return (iterator(this->_Myptr() + _Count, this));
		}
	iterator erase(const_iterator _First, const_iterator _Last)
		{	
		_Debug_range(_First, _Last, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xstring", 1366);
		size_type _Count = _Pdif(_First, begin());
		erase(_Count, _Pdif(_Last, _First));
		return (iterator(this->_Myptr() + _Count, this));
		}
	void clear() throw ()
		{	
		_Eos(0);
		}
	_Myt& replace(size_type _Off, size_type _N0, const _Myt& _Right)
		{	
		return (replace(_Off, _N0, _Right, 0, npos));
		}
	_Myt& replace(size_type _Off,
		size_type _N0, const _Myt& _Right, size_type _Roff, size_type _Count)
		{	
		if (this->_Mysize < _Off || _Right.size() < _Roff)
			_Xran();	
		if (this->_Mysize - _Off < _N0)
			_N0 = this->_Mysize - _Off;	
		size_type _Num = _Right.size() - _Roff;
		if (_Num < _Count)
			_Count = _Num;	
		if (npos - _Count <= this->_Mysize - _N0)
			_Xlen();	
		size_type _Nm = this->_Mysize - _N0 - _Off;	
		size_type _Newsize = this->_Mysize + _Count - _N0;
		if (this->_Mysize < _Newsize)
			_Grow(_Newsize);
		if (this != &_Right)
			{	
			_Traits::move(this->_Myptr() + _Off + _Count,
				this->_Myptr() + _Off + _N0, _Nm);	
			_Traits::copy(this->_Myptr() + _Off,
				_Right._Myptr() + _Roff, _Count);	
			}
		else if (_Count <= _N0)
			{	
			_Traits::move(this->_Myptr() + _Off,
				this->_Myptr() + _Roff, _Count);	
			_Traits::move(this->_Myptr() + _Off + _Count,
				this->_Myptr() + _Off + _N0, _Nm);	
			}
		else if (_Roff <= _Off)
			{	
			_Traits::move(this->_Myptr() + _Off + _Count,
				this->_Myptr() + _Off + _N0, _Nm);	
			_Traits::move(this->_Myptr() + _Off,
				this->_Myptr() + _Roff, _Count);	
			}
		else if (_Off + _N0 <= _Roff)
			{	
			_Traits::move(this->_Myptr() + _Off + _Count,
				this->_Myptr() + _Off + _N0, _Nm);	
			_Traits::move(this->_Myptr() + _Off,
				this->_Myptr() + (_Roff + _Count - _N0),
				_Count);	
			}
		else
			{	
			_Traits::move(this->_Myptr() + _Off,
				this->_Myptr() + _Roff, _N0);	
			_Traits::move(this->_Myptr() + _Off + _Count,
				this->_Myptr() + _Off + _N0, _Nm);	
			_Traits::move(this->_Myptr() + _Off + _N0,
				this->_Myptr() + _Roff + _Count,
				_Count - _N0);	
			}
		_Eos(_Newsize);
		return (*this);
		}
	_Myt& replace(size_type _Off,
		size_type _N0, const _Elem *_Ptr, size_type _Count)
		{	
		if (_Count != 0)
			_Debug_pointer(_Ptr, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xstring", 1449);
		if (_Inside(_Ptr))
			return (replace(_Off, _N0, *this,
				_Ptr - this->_Myptr(),
				_Count));	
		if (this->_Mysize < _Off)
			_Xran();	
		if (this->_Mysize - _Off < _N0)
			_N0 = this->_Mysize - _Off;	
		if (npos - _Count <= this->_Mysize - _N0)
			_Xlen();	
		size_type _Nm = this->_Mysize - _N0 - _Off;
		if (_Count < _N0)
			_Traits::move(this->_Myptr() + _Off + _Count,
				this->_Myptr() + _Off + _N0,
				_Nm);	
		size_type _Num;
		if ((0 < _Count || 0 < _N0)
			&& _Grow(_Num = this->_Mysize + _Count - _N0))
			{	
			if (_N0 < _Count)
				_Traits::move(this->_Myptr() + _Off + _Count,
					this->_Myptr() + _Off + _N0, _Nm);	
			_Traits::copy(this->_Myptr() + _Off, _Ptr, _Count);	
			_Eos(_Num);
			}
		return (*this);
		}
	_Myt& replace(size_type _Off, size_type _N0, const _Elem *_Ptr)
		{	
		_Debug_pointer(_Ptr, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xstring", 1483);
		return (replace(_Off, _N0, _Ptr, _Traits::length(_Ptr)));
		}
	_Myt& replace(size_type _Off,
		size_type _N0, size_type _Count, _Elem _Ch)
		{	
		if (this->_Mysize < _Off)
			_Xran();	
		if (this->_Mysize - _Off < _N0)
			_N0 = this->_Mysize - _Off;	
		if (npos - _Count <= this->_Mysize - _N0)
			_Xlen();	
		size_type _Nm = this->_Mysize - _N0 - _Off;
		if (_Count < _N0)
			_Traits::move(this->_Myptr() + _Off + _Count,
				this->_Myptr() + _Off + _N0,
				_Nm);	
		size_type _Num;
		if ((0 < _Count || 0 < _N0)
			&& _Grow(_Num = this->_Mysize + _Count - _N0))
			{	
			if (_N0 < _Count)
				_Traits::move(this->_Myptr() + _Off + _Count,
					this->_Myptr() + _Off + _N0, _Nm);	
			_Chassign(_Off, _Count, _Ch);	
			_Eos(_Num);
			}
		return (*this);
		}
	_Myt& replace(const_iterator _First, const_iterator _Last,
		const _Myt& _Right)
		{	
		return (replace(
			_Pdif(_First, begin()), _Pdif(_Last, _First), _Right));
		}
	_Myt& replace(const_iterator _First, const_iterator _Last,
		const _Elem *_Ptr, size_type _Count)
		{	
		return (replace(
			_Pdif(_First, begin()), _Pdif(_Last, _First), _Ptr, _Count));
		}
	_Myt& replace(const_iterator _First, const_iterator _Last,
		const _Elem *_Ptr)
		{	
		return (replace(
			_Pdif(_First, begin()), _Pdif(_Last, _First), _Ptr));
		}
	_Myt& replace(const_iterator _First, const_iterator _Last,
		size_type _Count, _Elem _Ch)
		{	
		return (replace(
			_Pdif(_First, begin()), _Pdif(_Last, _First), _Count, _Ch));
		}
	template<class _Iter>
		typename enable_if<_Is_iterator<_Iter>::value,
			_Myt&>::type
		replace(const_iterator _First, const_iterator _Last,
			_Iter _First2, _Iter _Last2)
		{	
		_Myt _Right(_First2, _Last2);
		replace(_First, _Last, _Right);
		return (*this);
		}
	_Myt& replace(const_iterator _First, const_iterator _Last,
		const_pointer _First2, const_pointer _Last2)
		{	
		if (_First2 == _Last2)
			erase(_Pdif(_First, begin()), _Pdif(_Last, _First));
		else
			replace(_Pdif(_First, begin()), _Pdif(_Last, _First),
				&*_First2, _Last2 - _First2);
		return (*this);
		}
	_Myt& replace(const_iterator _First, const_iterator _Last,
		pointer _First2, pointer _Last2)
		{	
		if (_First2 == _Last2)
			erase(_Pdif(_First, begin()), _Pdif(_Last, _First));
		else
			replace(_Pdif(_First, begin()), _Pdif(_Last, _First),
				&*_First2, _Last2 - _First2);
		return (*this);
		}
	_Myt& replace(const_iterator _First, const_iterator _Last,
		const_iterator _First2, const_iterator _Last2)
		{	
		if (_First2 == _Last2)
			erase(_Pdif(_First, begin()), _Pdif(_Last, _First));
		else
			replace(_Pdif(_First, begin()), _Pdif(_Last, _First),
				&*_First2, _Last2 - _First2);
		return (*this);
		}
	_Myt& replace(const_iterator _First, const_iterator _Last,
		iterator _First2, iterator _Last2)
		{	
		if (_First2 == _Last2)
			erase(_Pdif(_First, begin()), _Pdif(_Last, _First));
		else
			replace(_Pdif(_First, begin()), _Pdif(_Last, _First),
				&*_First2, _Last2 - _First2);
		return (*this);
		}
	iterator begin() throw ()
		{	
		return (iterator(this->_Myptr(), this));
		}
	const_iterator begin() const throw ()
		{	
		return (const_iterator(this->_Myptr(), this));
		}
	iterator end() throw ()
		{	
		return (iterator(this->_Myptr() + this->_Mysize, this));
		}
	const_iterator end() const throw ()
		{	
		return (const_iterator(this->_Myptr() + this->_Mysize, this));
		}
	reverse_iterator rbegin() throw ()
		{	
		return (reverse_iterator(end()));
		}
	const_reverse_iterator rbegin() const throw ()
		{	
		return (const_reverse_iterator(end()));
		}
	reverse_iterator rend() throw ()
		{	
		return (reverse_iterator(begin()));
		}
	const_reverse_iterator rend() const throw ()
		{	
		return (const_reverse_iterator(begin()));
		}
	const_iterator cbegin() const throw ()
		{	
		return (((const _Myt *)this)->begin());
		}
	const_iterator cend() const throw ()
		{	
		return (((const _Myt *)this)->end());
		}
	const_reverse_iterator crbegin() const throw ()
		{	
		return (((const _Myt *)this)->rbegin());
		}
	const_reverse_iterator crend() const throw ()
		{	
		return (((const _Myt *)this)->rend());
		}
	void shrink_to_fit()
		{	
		if ((size() | this->_ALLOC_MASK) < capacity())
			{	
			_Myt _Tmp(*this);
			swap(_Tmp);
			}
		}
	reference at(size_type _Off)
		{	
		if (this->_Mysize <= _Off)
			_Xran();	
		return (this->_Myptr()[_Off]);
		}
	const_reference at(size_type _Off) const
		{	
		if (this->_Mysize <= _Off)
			_Xran();	
		return (this->_Myptr()[_Off]);
		}
	reference operator[](size_type _Off)
		{	
		if (this->_Mysize < _Off)	
			_Debug_message(L"string subscript out of range", L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xstring", 1685);
		return (this->_Myptr()[_Off]);
		}
	const_reference operator[](size_type _Off) const
		{	
		if (this->_Mysize < _Off)	
			_Debug_message(L"string subscript out of range", L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xstring", 1698);
		return (this->_Myptr()[_Off]);
		}
	void push_back(_Elem _Ch)
		{	
		insert(end(), _Ch);
		}
	void pop_back()
		{	
		erase(this->_Mysize - 1);	
		}
	reference front()
		{	
		return (*begin());
		}
	const_reference front() const
		{	
		return (*begin());
		}
	reference back()
		{	
		return (*(end() - 1));
		}
	const_reference back() const
		{	
		return (*(end() - 1));
		}
	const _Elem *c_str() const throw ()
		{	
		return (this->_Myptr());
		}
	const _Elem *data() const throw ()
		{	
		return (c_str());
		}
	size_type length() const throw ()
		{	
		return (this->_Mysize);
		}
	size_type size() const throw ()
		{	
		return (this->_Mysize);
		}
	size_type max_size() const throw ()
		{	
		size_type _Num = this->_Getal().max_size();
		return (_Num <= 1 ? 1 : _Num - 1);
		}
	void resize(size_type _Newsize)
		{	
		resize(_Newsize, _Elem());
		}
	void resize(size_type _Newsize, _Elem _Ch)
		{	
		if (_Newsize <= this->_Mysize)
			_Eos(_Newsize);
		else
			append(_Newsize - this->_Mysize, _Ch);
		}
	size_type capacity() const throw ()
		{	
		return (this->_Myres);
		}
	void reserve(size_type _Newcap = 0)
		{	
		if (this->_Mysize <= _Newcap && this->_Myres != _Newcap)
			{	
			size_type _Size = this->_Mysize;
			if (_Grow(_Newcap, true))
				_Eos(_Size);
			}
		}
	bool empty() const throw ()
		{	
		return (this->_Mysize == 0);
		}
	__declspec(deprecated("Function call with parameters that may be unsafe - this call relies on the caller to check that the passed values are correct. " "To disable this warning, use -D_SCL_SECURE_NO_WARNINGS. See documentation on how to use Visual C++ 'Checked Iterators'"))
	size_type copy(_Elem *_Ptr,
		size_type _Count, size_type _Off = 0) const
		{	
		if (_Count != 0)
			_Debug_pointer(_Ptr, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xstring", 1803);
		if (this->_Mysize < _Off)
			_Xran();	
		if (this->_Mysize - _Off < _Count)
			_Count = this->_Mysize - _Off;
		_Traits::copy(_Ptr, this->_Myptr() + _Off, _Count);
		return (_Count);
		}
	size_type _Copy_s(_Elem *_Dest, size_type _Dest_size,
		size_type _Count, size_type _Off = 0) const
		{	
		if (_Count != 0)
			_Debug_pointer(_Dest, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xstring", 1819);
		if (this->_Mysize < _Off)
			_Xran();	
		if (this->_Mysize - _Off < _Count)
			_Count = this->_Mysize - _Off;
		_Traits::_Copy_s(_Dest, _Dest_size, this->_Myptr() + _Off, _Count);
		return (_Count);
		}
	void _Swap_bx(_Myt& _Right)
		{	
		if (this->_BUF_SIZE <= this->_Myres)
			if (this->_BUF_SIZE <= _Right._Myres)
				_Swap_adl(this->_Bx._Ptr, _Right._Bx._Ptr);
			else
				{	
				pointer _Ptr = this->_Bx._Ptr;
				this->_Getal().destroy(&this->_Bx._Ptr);
				_Traits::copy(this->_Bx._Buf,
					_Right._Bx._Buf, _Right._Mysize + 1);
				this->_Getal().construct(&_Right._Bx._Ptr, _Ptr);
				}
		else
			if (_Right._Myres < this->_BUF_SIZE)
				::std:: swap(this->_Bx._Buf, _Right._Bx._Buf);
			else
				{	
				pointer _Ptr = _Right._Bx._Ptr;
				this->_Getal().destroy(&_Right._Bx._Ptr);
				_Traits::copy(_Right._Bx._Buf,
					this->_Bx._Buf, this->_Mysize + 1);
				this->_Getal().construct(&this->_Bx._Ptr, _Ptr);
				}
		}
	void swap(_Myt& _Right)
		{	
		if (this == &_Right)
			;	
		else if (this->_Getal() == _Right._Getal())
			{	
			this->_Swap_all(_Right);
			_Swap_bx(_Right);
			::std:: swap(this->_Mysize, _Right._Mysize);
			::std:: swap(this->_Myres, _Right._Myres);
			}
		else if (_Alty::propagate_on_container_swap::value)
			{	
			this->_Swap_alloc(_Right);
			_Swap_bx(_Right);
			::std:: swap(this->_Bx, _Right._Bx);	
			::std:: swap(this->_Mysize, _Right._Mysize);
			::std:: swap(this->_Myres, _Right._Myres);
			}
		else
			{	
			_Myt _Tmp = *this;
			*this = _Right;
			_Right = _Tmp;
			}
		}
	size_type find(const _Myt& _Right, size_type _Off = 0) const throw ()
		{	
		return (find(_Right._Myptr(), _Off, _Right.size()));
		}
	size_type find(const _Elem *_Ptr,
		size_type _Off, size_type _Count) const
		{	
		if (_Count != 0)
			_Debug_pointer(_Ptr, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xstring", 1896);
		if (_Count == 0 && _Off <= this->_Mysize)
			return (_Off);	
		size_type _Nm;
		if (_Off < this->_Mysize && _Count <= (_Nm = this->_Mysize - _Off))
			{	
			const _Elem *_Uptr, *_Vptr;
			for (_Nm -= _Count - 1, _Vptr = this->_Myptr() + _Off;
				(_Uptr = _Traits::find(_Vptr, _Nm, *_Ptr)) != 0;
				_Nm -= _Uptr - _Vptr + 1, _Vptr = _Uptr + 1)
				if (_Traits::compare(_Uptr, _Ptr, _Count) == 0)
					return (_Uptr - this->_Myptr());	
			}
		return (npos);	
		}
	size_type find(const _Elem *_Ptr, size_type _Off = 0) const
		{	
		_Debug_pointer(_Ptr, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xstring", 1918);
		return (find(_Ptr, _Off, _Traits::length(_Ptr)));
		}
	size_type find(_Elem _Ch, size_type _Off = 0) const
		{	
		return (find((const _Elem *)&_Ch, _Off, 1));
		}
	size_type rfind(const _Myt& _Right, size_type _Off = npos) const throw ()
		{	
		return (rfind(_Right._Myptr(), _Off, _Right.size()));
		}
	size_type rfind(const _Elem *_Ptr,
		size_type _Off, size_type _Count) const
		{	
		if (_Count != 0)
			_Debug_pointer(_Ptr, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xstring", 1937);
		if (_Count == 0)
			return (_Off < this->_Mysize ? _Off
				: this->_Mysize);	
		if (_Count <= this->_Mysize)
			{	
			const _Elem *_Uptr = this->_Myptr() +
				(_Off < this->_Mysize - _Count ? _Off
					: this->_Mysize - _Count);
			for (; ; --_Uptr)
				if (_Traits::eq(*_Uptr, *_Ptr)
					&& _Traits::compare(_Uptr, _Ptr, _Count) == 0)
					return (_Uptr - this->_Myptr());	
				else if (_Uptr == this->_Myptr())
					break;	
			}
		return (npos);	
		}
	size_type rfind(const _Elem *_Ptr, size_type _Off = npos) const
		{	
		_Debug_pointer(_Ptr, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xstring", 1961);
		return (rfind(_Ptr, _Off, _Traits::length(_Ptr)));
		}
	size_type rfind(_Elem _Ch, size_type _Off = npos) const
		{	
		return (rfind((const _Elem *)&_Ch, _Off, 1));
		}
	size_type find_first_of(const _Myt& _Right,
		size_type _Off = 0) const throw ()
		{	
		return (find_first_of(_Right._Myptr(), _Off, _Right.size()));
		}
	size_type find_first_of(const _Elem *_Ptr,
		size_type _Off, size_type _Count) const
		{	
		if (_Count != 0)
			_Debug_pointer(_Ptr, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xstring", 1981);
		if (0 < _Count && _Off < this->_Mysize)
			{	
			const _Elem *const _Vptr = this->_Myptr() + this->_Mysize;
			for (const _Elem *_Uptr = this->_Myptr() + _Off;
				_Uptr < _Vptr; ++_Uptr)
				if (_Traits::find(_Ptr, _Count, *_Uptr) != 0)
					return (_Uptr - this->_Myptr());	
			}
		return (npos);	
		}
	size_type find_first_of(const _Elem *_Ptr,
		size_type _Off = 0) const
		{	
		_Debug_pointer(_Ptr, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xstring", 1999);
		return (find_first_of(_Ptr, _Off, _Traits::length(_Ptr)));
		}
	size_type find_first_of(_Elem _Ch,
		size_type _Off = 0) const
		{	
		return (find((const _Elem *)&_Ch, _Off, 1));
		}
	size_type find_last_of(const _Myt& _Right,
		size_type _Off = npos) const throw ()
		{	
		return (find_last_of(_Right._Myptr(), _Off, _Right.size()));
		}
	size_type find_last_of(const _Elem *_Ptr,
		size_type _Off, size_type _Count) const
		{	
		if (_Count != 0)
			_Debug_pointer(_Ptr, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xstring", 2020);
		if (0 < _Count && 0 < this->_Mysize)
			{	
			const _Elem *_Uptr = this->_Myptr()
				+ (_Off < this->_Mysize ? _Off : this->_Mysize - 1);
			for (; ; --_Uptr)
				if (_Traits::find(_Ptr, _Count, *_Uptr) != 0)
					return (_Uptr - this->_Myptr());	
				else if (_Uptr == this->_Myptr())
					break;	
			}
		return (npos);	
		}
	size_type find_last_of(const _Elem *_Ptr,
		size_type _Off = npos) const
		{	
		_Debug_pointer(_Ptr, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xstring", 2040);
		return (find_last_of(_Ptr, _Off, _Traits::length(_Ptr)));
		}
	size_type find_last_of(_Elem _Ch,
		size_type _Off = npos) const
		{	
		return (rfind((const _Elem *)&_Ch, _Off, 1));
		}
	size_type find_first_not_of(const _Myt& _Right,
		size_type _Off = 0) const throw ()
		{	
		return (find_first_not_of(_Right._Myptr(), _Off,
			_Right.size()));
		}
	size_type find_first_not_of(const _Elem *_Ptr,
		size_type _Off, size_type _Count) const
		{	
		if (_Count != 0)
			_Debug_pointer(_Ptr, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xstring", 2062);
		if (_Off < this->_Mysize)
			{	
			const _Elem *const _Vptr = this->_Myptr() + this->_Mysize;
			for (const _Elem *_Uptr = this->_Myptr() + _Off;
				_Uptr < _Vptr; ++_Uptr)
				if (_Traits::find(_Ptr, _Count, *_Uptr) == 0)
					return (_Uptr - this->_Myptr());
			}
		return (npos);
		}
	size_type find_first_not_of(const _Elem *_Ptr,
		size_type _Off = 0) const
		{	
		_Debug_pointer(_Ptr, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xstring", 2079);
		return (find_first_not_of(_Ptr, _Off, _Traits::length(_Ptr)));
		}
	size_type find_first_not_of(_Elem _Ch,
		size_type _Off = 0) const
		{	
		return (find_first_not_of((const _Elem *)&_Ch, _Off, 1));
		}
	size_type find_last_not_of(const _Myt& _Right,
		size_type _Off = npos) const throw ()
		{	
		return (find_last_not_of(_Right._Myptr(), _Off, _Right.size()));
		}
	size_type find_last_not_of(const _Elem *_Ptr,
		size_type _Off, size_type _Count) const
		{	
		if (_Count != 0)
			_Debug_pointer(_Ptr, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xstring", 2100);
		if (0 < this->_Mysize)
			{	
			const _Elem *_Uptr = this->_Myptr()
				+ (_Off < this->_Mysize ? _Off : this->_Mysize - 1);
			for (; ; --_Uptr)
				if (_Traits::find(_Ptr, _Count, *_Uptr) == 0)
					return (_Uptr - this->_Myptr());
				else if (_Uptr == this->_Myptr())
					break;
			}
		return (npos);
		}
	size_type find_last_not_of(const _Elem *_Ptr,
		size_type _Off = npos) const
		{	
		_Debug_pointer(_Ptr, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xstring", 2119);
		return (find_last_not_of(_Ptr, _Off, _Traits::length(_Ptr)));
		}
	size_type find_last_not_of(_Elem _Ch,
		size_type _Off = npos) const
		{	
		return (find_last_not_of((const _Elem *)&_Ch, _Off, 1));
		}
	_Myt substr(size_type _Off = 0, size_type _Count = npos) const
		{	
		return (_Myt(*this, _Off, _Count, get_allocator()));
		}
	int compare(const _Myt& _Right) const throw ()
		{	
		return (compare(0, this->_Mysize, _Right._Myptr(), _Right.size()));
		}
	int compare(size_type _Off, size_type _N0,
		const _Myt& _Right) const
		{	
		return (compare(_Off, _N0, _Right, 0, npos));
		}
	int compare(size_type _Off,
		size_type _N0, const _Myt& _Right,
		size_type _Roff, size_type _Count) const
		{	
		if (_Right.size() < _Roff)
			_Xran();	
		if (_Right._Mysize - _Roff < _Count)
			_Count = _Right._Mysize - _Roff;	
		return (compare(_Off, _N0, _Right._Myptr() + _Roff, _Count));
		}
	int compare(const _Elem *_Ptr) const
		{	
		_Debug_pointer(_Ptr, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xstring", 2158);
		return (compare(0, this->_Mysize, _Ptr, _Traits::length(_Ptr)));
		}
	int compare(size_type _Off, size_type _N0, const _Elem *_Ptr) const
		{	
		_Debug_pointer(_Ptr, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xstring", 2164);
		return (compare(_Off, _N0, _Ptr, _Traits::length(_Ptr)));
		}
	int compare(size_type _Off,
		size_type _N0, const _Elem *_Ptr, size_type _Count) const
		{	
		if (_Count != 0)
			_Debug_pointer(_Ptr, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\xstring", 2173);
		if (this->_Mysize < _Off)
			_Xran();	
		if (this->_Mysize - _Off < _N0)
			_N0 = this->_Mysize - _Off;	
		size_type _Ans = _Traits::compare(this->_Myptr() + _Off, _Ptr,
			_N0 < _Count ? _N0 : _Count);
		return (_Ans != 0 ? (int)_Ans : _N0 < _Count ? -1
			: _N0 == _Count ? 0 : +1);
		}
	allocator_type get_allocator() const throw ()
		{	
		return (this->_Getal());
		}
	void _Chassign(size_type _Off, size_type _Count, _Elem _Ch)
		{	
		if (_Count == 1)
			_Traits::assign(*(this->_Myptr() + _Off), _Ch);
		else
			_Traits::assign(this->_Myptr() + _Off, _Count, _Ch);
		}
	void _Copy(size_type _Newsize, size_type _Oldlen)
		{	
		size_type _Newres = _Newsize | this->_ALLOC_MASK;
		if (max_size() < _Newres)
			_Newres = _Newsize;	
		else if (this->_Myres / 2 <= _Newres / 3)
			;
		else if (this->_Myres <= max_size() - this->_Myres / 2)
			_Newres = this->_Myres
				+ this->_Myres / 2;	
		else
			_Newres = max_size();	
		_Elem *_Ptr;
		try {
			_Ptr = this->_Getal().allocate(_Newres + 1);
		} catch (...) {
			_Newres = _Newsize;	
			try {
				_Ptr = this->_Getal().allocate(_Newres + 1);
			} catch (...) {
			_Tidy(true);	
			throw;
			}
		}
		if (0 < _Oldlen)
			_Traits::copy(_Ptr, this->_Myptr(),
				_Oldlen);	
		_Tidy(true);
		this->_Getal().construct(&this->_Bx._Ptr, _Ptr);
		this->_Myres = _Newres;
		_Eos(_Oldlen);
		}
	void _Eos(size_type _Newsize)
		{	
		_Traits::assign(this->_Myptr()[this->_Mysize = _Newsize], _Elem());
		}
	bool _Grow(size_type _Newsize,
		bool _Trim = false)
		{	
		if (max_size() < _Newsize)
			_Xlen();	
		if (this->_Myres < _Newsize)
			_Copy(_Newsize, this->_Mysize);	
		else if (_Trim && _Newsize < this->_BUF_SIZE)
			_Tidy(true,	
				_Newsize < this->_Mysize ? _Newsize : this->_Mysize);
		else if (_Newsize == 0)
			_Eos(0);	
		return (0 < _Newsize);	
		}
	bool _Inside(const _Elem *_Ptr)
		{	
		if (_Ptr == 0 || _Ptr < this->_Myptr()
			|| this->_Myptr() + this->_Mysize <= _Ptr)
			return (false);	
		else
			return (true);
		}
	static size_type _Pdif(const_iterator _P2,
		const_iterator _P1)
		{	
		return ((_P2)._Ptr == 0 ? 0 : _P2 - _P1);
		}
	void _Tidy(bool _Built = false,
		size_type _Newsize = 0)
		{	
		if (!_Built)
			;
		else if (this->_BUF_SIZE <= this->_Myres)
			{	
			pointer _Ptr = this->_Bx._Ptr;
			this->_Getal().destroy(&this->_Bx._Ptr);
			if (0 < _Newsize)
				_Traits::copy(this->_Bx._Buf,
					::std:: addressof(*_Ptr), _Newsize);
			this->_Getal().deallocate(_Ptr, this->_Myres + 1);
			}
		this->_Myres = this->_BUF_SIZE - 1;
		_Eos(_Newsize);
		}
	__declspec(noreturn) void _Xlen() const
		{	
		_Xlength_error("string too long");
		}
	__declspec(noreturn) void _Xran() const
		{	
		_Xout_of_range("invalid string position");
		}
	};
template<class _Elem,
	class _Traits,
	class _Alloc>
	 const typename basic_string<_Elem, _Traits, _Alloc>::size_type
		basic_string<_Elem, _Traits, _Alloc>::npos =
			(typename basic_string<_Elem, _Traits, _Alloc>::size_type)(-1);
template<class _Elem,
	class _Traits,
	class _Alloc> inline
	void swap(basic_string<_Elem, _Traits, _Alloc>& _Left,
		basic_string<_Elem, _Traits, _Alloc>& _Right)
	{	
	_Left.swap(_Right);
	}
template<class _Elem,
	class _Traits,
	class _Alloc> inline
	basic_string<_Elem, _Traits, _Alloc> operator+(
		const basic_string<_Elem, _Traits, _Alloc>& _Left,
		const basic_string<_Elem, _Traits, _Alloc>& _Right)
	{	
	basic_string<_Elem, _Traits, _Alloc> _Ans;
	_Ans.reserve(_Left.size() + _Right.size());
	_Ans += _Left;
	_Ans += _Right;
	return (_Ans);
	}
template<class _Elem,
	class _Traits,
	class _Alloc> inline
	basic_string<_Elem, _Traits, _Alloc> operator+(
		const _Elem *_Left,
		const basic_string<_Elem, _Traits, _Alloc>& _Right)
	{	
	basic_string<_Elem, _Traits, _Alloc> _Ans;
	_Ans.reserve(_Traits::length(_Left) + _Right.size());
	_Ans += _Left;
	_Ans += _Right;
	return (_Ans);
	}
template<class _Elem,
	class _Traits,
	class _Alloc> inline
	basic_string<_Elem, _Traits, _Alloc> operator+(
		const _Elem _Left,
		const basic_string<_Elem, _Traits, _Alloc>& _Right)
	{	
	basic_string<_Elem, _Traits, _Alloc> _Ans;
	_Ans.reserve(1 + _Right.size());
	_Ans += _Left;
	_Ans += _Right;
	return (_Ans);
	}
template<class _Elem,
	class _Traits,
	class _Alloc> inline
	basic_string<_Elem, _Traits, _Alloc> operator+(
		const basic_string<_Elem, _Traits, _Alloc>& _Left,
		const _Elem *_Right)
	{	
	basic_string<_Elem, _Traits, _Alloc> _Ans;
	_Ans.reserve(_Left.size() + _Traits::length(_Right));
	_Ans += _Left;
	_Ans += _Right;
	return (_Ans);
	}
template<class _Elem,
	class _Traits,
	class _Alloc> inline
	basic_string<_Elem, _Traits, _Alloc> operator+(
		const basic_string<_Elem, _Traits, _Alloc>& _Left,
		const _Elem _Right)
	{	
	basic_string<_Elem, _Traits, _Alloc> _Ans;
	_Ans.reserve(_Left.size() + 1);
	_Ans += _Left;
	_Ans += _Right;
	return (_Ans);
	}
template<class _Elem,
	class _Traits,
	class _Alloc> inline
	basic_string<_Elem, _Traits, _Alloc> operator+(
		const basic_string<_Elem, _Traits, _Alloc>& _Left,
		basic_string<_Elem, _Traits, _Alloc>&& _Right)
	{	
	return (::std:: move(_Right.insert(0, _Left)));
	}
template<class _Elem,
	class _Traits,
	class _Alloc> inline
	basic_string<_Elem, _Traits, _Alloc> operator+(
		basic_string<_Elem, _Traits, _Alloc>&& _Left,
		const basic_string<_Elem, _Traits, _Alloc>& _Right)
	{	
	return (::std:: move(_Left.append(_Right)));
	}
template<class _Elem,
	class _Traits,
	class _Alloc> inline
	basic_string<_Elem, _Traits, _Alloc> operator+(
		basic_string<_Elem, _Traits, _Alloc>&& _Left,
		basic_string<_Elem, _Traits, _Alloc>&& _Right)
	{	
	if (_Right.size() <= _Left.capacity() - _Left.size()
		|| _Right.capacity() - _Right.size() < _Left.size())
		return (::std:: move(_Left.append(_Right)));
	else
		return (::std:: move(_Right.insert(0, _Left)));
	}
template<class _Elem,
	class _Traits,
	class _Alloc> inline
	basic_string<_Elem, _Traits, _Alloc> operator+(
		const _Elem *_Left,
		basic_string<_Elem, _Traits, _Alloc>&& _Right)
	{	
	return (::std:: move(_Right.insert(0, _Left)));
	}
template<class _Elem,
	class _Traits,
	class _Alloc> inline
	basic_string<_Elem, _Traits, _Alloc> operator+(
		const _Elem _Left,
		basic_string<_Elem, _Traits, _Alloc>&& _Right)
	{	
	return (::std:: move(_Right.insert(0, 1, _Left)));
	}
template<class _Elem,
	class _Traits,
	class _Alloc> inline
	basic_string<_Elem, _Traits, _Alloc> operator+(
		basic_string<_Elem, _Traits, _Alloc>&& _Left,
		const _Elem *_Right)
	{	
	return (::std:: move(_Left.append(_Right)));
	}
template<class _Elem,
	class _Traits,
	class _Alloc> inline
	basic_string<_Elem, _Traits, _Alloc> operator+(
		basic_string<_Elem, _Traits, _Alloc>&& _Left,
		const _Elem _Right)
	{	
	return (::std:: move(_Left.append(1, _Right)));
	}
template<class _Elem,
	class _Traits,
	class _Alloc> inline
	bool operator==(
		const basic_string<_Elem, _Traits, _Alloc>& _Left,
		const basic_string<_Elem, _Traits, _Alloc>& _Right)
	{	
	return (_Left.compare(_Right) == 0);
	}
template<class _Elem,
	class _Traits,
	class _Alloc> inline
	bool operator==(
		const _Elem * _Left,
		const basic_string<_Elem, _Traits, _Alloc>& _Right)
	{	
	return (_Right.compare(_Left) == 0);
	}
template<class _Elem,
	class _Traits,
	class _Alloc> inline
	bool operator==(
		const basic_string<_Elem, _Traits, _Alloc>& _Left,
		const _Elem *_Right)
	{	
	return (_Left.compare(_Right) == 0);
	}
template<class _Elem,
	class _Traits,
	class _Alloc> inline
	bool operator!=(
		const basic_string<_Elem, _Traits, _Alloc>& _Left,
		const basic_string<_Elem, _Traits, _Alloc>& _Right)
	{	
	return (!(_Left == _Right));
	}
template<class _Elem,
	class _Traits,
	class _Alloc> inline
	bool operator!=(
		const _Elem *_Left,
		const basic_string<_Elem, _Traits, _Alloc>& _Right)
	{	
	return (!(_Left == _Right));
	}
template<class _Elem,
	class _Traits,
	class _Alloc> inline
	bool operator!=(
		const basic_string<_Elem, _Traits, _Alloc>& _Left,
		const _Elem *_Right)
	{	
	return (!(_Left == _Right));
	}
template<class _Elem,
	class _Traits,
	class _Alloc> inline
	bool operator<(
		const basic_string<_Elem, _Traits, _Alloc>& _Left,
		const basic_string<_Elem, _Traits, _Alloc>& _Right)
	{	
	return (_Left.compare(_Right) < 0);
	}
template<class _Elem,
	class _Traits,
	class _Alloc> inline
	bool operator<(
		const _Elem * _Left,
		const basic_string<_Elem, _Traits, _Alloc>& _Right)
	{	
	return (_Right.compare(_Left) > 0);
	}
template<class _Elem,
	class _Traits,
	class _Alloc> inline
	bool operator<(
		const basic_string<_Elem, _Traits, _Alloc>& _Left,
		const _Elem *_Right)
	{	
	return (_Left.compare(_Right) < 0);
	}
template<class _Elem,
	class _Traits,
	class _Alloc> inline
	bool operator>(
		const basic_string<_Elem, _Traits, _Alloc>& _Left,
		const basic_string<_Elem, _Traits, _Alloc>& _Right)
	{	
	return (_Right < _Left);
	}
template<class _Elem,
	class _Traits,
	class _Alloc> inline
	bool operator>(
		const _Elem * _Left,
		const basic_string<_Elem, _Traits, _Alloc>& _Right)
	{	
	return (_Right < _Left);
	}
template<class _Elem,
	class _Traits,
	class _Alloc> inline
	bool operator>(
		const basic_string<_Elem, _Traits, _Alloc>& _Left,
		const _Elem *_Right)
	{	
	return (_Right < _Left);
	}
template<class _Elem,
	class _Traits,
	class _Alloc> inline
	bool operator<=(
		const basic_string<_Elem, _Traits, _Alloc>& _Left,
		const basic_string<_Elem, _Traits, _Alloc>& _Right)
	{	
	return (!(_Right < _Left));
	}
template<class _Elem,
	class _Traits,
	class _Alloc> inline
	bool operator<=(
		const _Elem * _Left,
		const basic_string<_Elem, _Traits, _Alloc>& _Right)
	{	
	return (!(_Right < _Left));
	}
template<class _Elem,
	class _Traits,
	class _Alloc> inline
	bool operator<=(
		const basic_string<_Elem, _Traits, _Alloc>& _Left,
		const _Elem *_Right)
	{	
	return (!(_Right < _Left));
	}
template<class _Elem,
	class _Traits,
	class _Alloc> inline
	bool operator>=(
		const basic_string<_Elem, _Traits, _Alloc>& _Left,
		const basic_string<_Elem, _Traits, _Alloc>& _Right)
	{	
	return (!(_Left < _Right));
	}
template<class _Elem,
	class _Traits,
	class _Alloc> inline
	bool operator>=(
		const _Elem * _Left,
		const basic_string<_Elem, _Traits, _Alloc>& _Right)
	{	
	return (!(_Left < _Right));
	}
template<class _Elem,
	class _Traits,
	class _Alloc> inline
	bool operator>=(
		const basic_string<_Elem, _Traits, _Alloc>& _Left,
		const _Elem *_Right)
	{	
	return (!(_Left < _Right));
	}
typedef basic_string<char, char_traits<char>, allocator<char> >
	string;
typedef basic_string<wchar_t, char_traits<wchar_t>, allocator<wchar_t> >
	wstring;
template<class _Elem,
	class _Traits,
	class _Alloc>
	struct hash<basic_string<_Elem, _Traits, _Alloc> >
		: public unary_function<basic_string<_Elem, _Traits, _Alloc>, size_t>
	{	
	typedef basic_string<_Elem, _Traits, _Alloc> _Kty;
	size_t operator()(const _Kty& _Keyval) const
		{	
		return (_Hash_seq((const unsigned char *)_Keyval.c_str(),
			_Keyval.size() * sizeof (_Elem)));
		}
	};
typedef basic_string<char16_t, char_traits<char16_t>, allocator<char16_t> >
	u16string;
typedef basic_string<char32_t, char_traits<char32_t>, allocator<char32_t> >
	u32string;
}
 #pragma warning(pop)
 #pragma pack(pop)
 #pragma pack(push,8)
 #pragma warning(push,3)
namespace std {
class logic_error
	: public ::std:: exception
	{	
public:
	typedef ::std:: exception _Mybase;
	explicit logic_error(const string& _Message)
		: _Mybase(_Message.c_str())
		{	
		}
	explicit logic_error(const char *_Message)
		: _Mybase(_Message)
		{	
		}
	};
class domain_error
	: public logic_error
	{	
public:
	typedef logic_error _Mybase;
	explicit domain_error(const string& _Message)
		: _Mybase(_Message.c_str())
		{	
		}
	explicit domain_error(const char *_Message)
		: _Mybase(_Message)
		{	
		}
	};
class invalid_argument
	: public logic_error
	{	
public:
	typedef logic_error _Mybase;
	explicit invalid_argument(const string& _Message)
		: _Mybase(_Message.c_str())
		{	
		}
	explicit invalid_argument(const char *_Message)
		: _Mybase(_Message)
		{	
		}
	};
class length_error
	: public logic_error
	{	
public:
	typedef logic_error _Mybase;
	explicit length_error(const string& _Message)
		: _Mybase(_Message.c_str())
		{	
		}
	explicit length_error(const char *_Message)
		: _Mybase(_Message)
		{	
		}
	};
class out_of_range
	: public logic_error
	{	
public:
	typedef logic_error _Mybase;
	explicit out_of_range(const string& _Message)
		: _Mybase(_Message.c_str())
		{	
		}
	explicit out_of_range(const char *_Message)
		: _Mybase(_Message)
		{	
		}
	};
class runtime_error
	: public ::std:: exception
	{	
public:
	typedef ::std:: exception _Mybase;
	explicit runtime_error(const string& _Message)
		: _Mybase(_Message.c_str())
		{	
		}
	explicit runtime_error(const char *_Message)
		: _Mybase(_Message)
		{	
		}
	};
class overflow_error
	: public runtime_error
	{	
public:
	typedef runtime_error _Mybase;
	explicit overflow_error(const string& _Message)
		: _Mybase(_Message.c_str())
		{	
		}
	explicit overflow_error(const char *_Message)
		: _Mybase(_Message)
		{	
		}
	};
class underflow_error
	: public runtime_error
	{	
public:
	typedef runtime_error _Mybase;
	explicit underflow_error(const string& _Message)
		: _Mybase(_Message.c_str())
		{	
		}
	explicit underflow_error(const char *_Message)
		: _Mybase(_Message)
		{	
		}
	};
class range_error
	: public runtime_error
	{	
public:
	typedef runtime_error _Mybase;
	explicit range_error(const string& _Message)
		: _Mybase(_Message.c_str())
		{	
		}
	explicit range_error(const char *_Message)
		: _Mybase(_Message)
		{	
		}
	};
}
 #pragma warning(pop)
 #pragma pack(pop)
 #pragma pack(push,8)
 #pragma warning(push,3)
 #pragma warning(disable: 4127)
namespace std {
template<class _Mylist,
	class _Base = _Iterator_base0>
	class _List_unchecked_const_iterator
		: public _Iterator012<bidirectional_iterator_tag,
			typename _Mylist::value_type,
			typename _Mylist::difference_type,
			typename _Mylist::const_pointer,
			typename _Mylist::const_reference,
			_Base>
	{	
public:
	typedef _List_unchecked_const_iterator<_Mylist, _Base> _Myiter;
	typedef bidirectional_iterator_tag iterator_category;
	typedef typename _Mylist::_Nodeptr _Nodeptr;
	typedef typename _Mylist::value_type value_type;
	typedef typename _Mylist::difference_type difference_type;
	typedef typename _Mylist::const_pointer pointer;
	typedef typename _Mylist::const_reference reference;
	_List_unchecked_const_iterator()
		: _Ptr(0)
		{	
		}
	_List_unchecked_const_iterator(_Nodeptr _Pnode, const _Mylist *_Plist)
		: _Ptr(_Pnode)
		{	
		this->_Adopt(_Plist);
		}
	reference operator*() const
		{	
		return (_Mylist::_Myval(_Ptr));
		}
	pointer operator->() const
		{	
		return (::std:: pointer_traits<pointer>::pointer_to(**this));
		}
	_Myiter& operator++()
		{	
		_Ptr = _Mylist::_Nextnode(_Ptr);
		return (*this);
		}
	_Myiter operator++(int)
		{	
		_Myiter _Tmp = *this;
		++*this;
		return (_Tmp);
		}
	_Myiter& operator--()
		{	
		_Ptr = _Mylist::_Prevnode(_Ptr);
		return (*this);
		}
	_Myiter operator--(int)
		{	
		_Myiter _Tmp = *this;
		--*this;
		return (_Tmp);
		}
	bool operator==(const _Myiter& _Right) const
		{	
		return (_Ptr == _Right._Ptr);
		}
	bool operator!=(const _Myiter& _Right) const
		{	
		return (!(*this == _Right));
		}
	_Nodeptr _Mynode() const
		{	
		return (_Ptr);
		}
	_Nodeptr _Ptr;	
	};
template<class _Mylist>
	class _List_unchecked_iterator
		: public _List_unchecked_const_iterator<_Mylist>
	{	
public:
	typedef _List_unchecked_iterator<_Mylist> _Myiter;
	typedef _List_unchecked_const_iterator<_Mylist> _Mybase;
	typedef bidirectional_iterator_tag iterator_category;
	typedef typename _Mylist::_Nodeptr _Nodeptr;
	typedef typename _Mylist::value_type value_type;
	typedef typename _Mylist::difference_type difference_type;
	typedef typename _Mylist::pointer pointer;
	typedef typename _Mylist::reference reference;
	_List_unchecked_iterator()
		{	
		}
	_List_unchecked_iterator(_Nodeptr _Pnode, const _Mylist *_Plist)
		: _Mybase(_Pnode, _Plist)
		{	
		}
	reference operator*() const
		{	
		return ((reference)**(_Mybase *)this);
		}
	pointer operator->() const
		{	
		return (::std:: pointer_traits<pointer>::pointer_to(**this));
		}
	_Myiter& operator++()
		{	
		++(*(_Mybase *)this);
		return (*this);
		}
	_Myiter operator++(int)
		{	
		_Myiter _Tmp = *this;
		++*this;
		return (_Tmp);
		}
	_Myiter& operator--()
		{	
		--(*(_Mybase *)this);
		return (*this);
		}
	_Myiter operator--(int)
		{	
		_Myiter _Tmp = *this;
		--*this;
		return (_Tmp);
		}
	};
template<class _Mylist>
	class _List_const_iterator
		: public _List_unchecked_const_iterator<_Mylist, _Iterator_base>
	{	
public:
	typedef _List_const_iterator<_Mylist> _Myiter;
	typedef _List_unchecked_const_iterator<_Mylist, _Iterator_base> _Mybase;
	typedef bidirectional_iterator_tag iterator_category;
	typedef typename _Mylist::_Nodeptr _Nodeptr;
	typedef typename _Mylist::value_type value_type;
	typedef typename _Mylist::difference_type difference_type;
	typedef typename _Mylist::const_pointer pointer;
	typedef typename _Mylist::const_reference reference;
	_List_const_iterator()
		: _Mybase()
		{	
		}
	_List_const_iterator(_Nodeptr _Pnode, const _Mylist *_Plist)
		: _Mybase(_Pnode, _Plist)
		{	
		}
	typedef _List_unchecked_const_iterator<_Mylist> _Unchecked_type;
	_Myiter& _Rechecked(_Unchecked_type _Right)
		{	
		this->_Ptr = _Right._Ptr;
		return (*this);
		}
	_Unchecked_type _Unchecked() const
		{	
		return (_Unchecked_type(this->_Ptr, (_Mylist *)this->_Getcont()));
		}
	reference operator*() const
		{	
		if (this->_Getcont() == 0
			|| this->_Ptr == 0
			|| this->_Ptr == ((_Mylist *)this->_Getcont())->_Myhead)
			{	
			_Debug_message(L"list iterator not dereferencable", L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\list", 210);
			{ (void) ((!!(("Standard C++ Libraries Out of Range" && 0))) || (1 != _CrtDbgReportW(2, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\list", 211, 0, L"%s", L"\"Standard C++ Libraries Out of Range\" && 0")) || (__debugbreak(), 0)); ::_invalid_parameter(L"\"out of range\"", __LPREFIX( __FUNCTION__), L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\list", 211, 0); };
			}
		return (_Mylist::_Myval(this->_Ptr));
		}
	_Myiter& operator++()
		{	
		if (this->_Getcont() == 0
			|| this->_Ptr == 0
			|| this->_Ptr == ((_Mylist *)this->_Getcont())->_Myhead)
			{	
			_Debug_message(L"list iterator not incrementable", L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\list", 230);
			{ (void) ((!!(("Standard C++ Libraries Out of Range" && 0))) || (1 != _CrtDbgReportW(2, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\list", 231, 0, L"%s", L"\"Standard C++ Libraries Out of Range\" && 0")) || (__debugbreak(), 0)); ::_invalid_parameter(L"\"out of range\"", __LPREFIX( __FUNCTION__), L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\list", 231, 0); };
			}
		this->_Ptr = _Mylist::_Nextnode(this->_Ptr);
		return (*this);
		}
	_Myiter operator++(int)
		{	
		_Myiter _Tmp = *this;
		++*this;
		return (_Tmp);
		}
	_Myiter& operator--()
		{	
		if (this->_Getcont() == 0
			|| this->_Ptr == 0
			|| (this->_Ptr = _Mylist::_Prevnode(this->_Ptr))
				== ((_Mylist *)this->_Getcont())->_Myhead)
			{	
			_Debug_message(L"list iterator not decrementable", L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\list", 259);
			{ (void) ((!!(("Standard C++ Libraries Out of Range" && 0))) || (1 != _CrtDbgReportW(2, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\list", 260, 0, L"%s", L"\"Standard C++ Libraries Out of Range\" && 0")) || (__debugbreak(), 0)); ::_invalid_parameter(L"\"out of range\"", __LPREFIX( __FUNCTION__), L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\list", 260, 0); };
			}
		return (*this);
		}
	_Myiter operator--(int)
		{	
		_Myiter _Tmp = *this;
		--*this;
		return (_Tmp);
		}
	bool operator==(const _Myiter& _Right) const
		{	
		if (this->_Getcont() == 0
			|| this->_Getcont() != _Right._Getcont())
			{	
			_Debug_message(L"list iterators incompatible", L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\list", 289);
			{ (void) ((!!(("Standard C++ Libraries Invalid Argument" && 0))) || (1 != _CrtDbgReportW(2, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\list", 290, 0, L"%s", L"\"Standard C++ Libraries Invalid Argument\" && 0")) || (__debugbreak(), 0)); ::_invalid_parameter(L"\"invalid argument\"", __LPREFIX( __FUNCTION__), L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\list", 290, 0); };
			}
		return (this->_Ptr == _Right._Ptr);
		}
	bool operator!=(const _Myiter& _Right) const
		{	
		return (!(*this == _Right));
		}
	};
template<class _Mylist> inline
	typename _List_const_iterator<_Mylist>::_Unchecked_type
		_Unchecked(_List_const_iterator<_Mylist> _Iter)
	{	
	return (_Iter._Unchecked());
	}
template<class _Mylist> inline
	_List_const_iterator<_Mylist>&
		_Rechecked(_List_const_iterator<_Mylist>& _Iter,
			typename _List_const_iterator<_Mylist>
				::_Unchecked_type _Right)
	{	
	return (_Iter._Rechecked(_Right));
	}
template<class _Mylist>
	class _List_iterator
		: public _List_const_iterator<_Mylist>
	{	
public:
	typedef _List_iterator<_Mylist> _Myiter;
	typedef _List_const_iterator<_Mylist> _Mybase;
	typedef bidirectional_iterator_tag iterator_category;
	typedef typename _Mylist::_Nodeptr _Nodeptr;
	typedef typename _Mylist::value_type value_type;
	typedef typename _Mylist::difference_type difference_type;
	typedef typename _Mylist::pointer pointer;
	typedef typename _Mylist::reference reference;
	_List_iterator()
		{	
		}
	_List_iterator(_Nodeptr _Pnode, const _Mylist *_Plist)
		: _Mybase(_Pnode, _Plist)
		{	
		}
	typedef _List_unchecked_iterator<_Mylist> _Unchecked_type;
	_Myiter& _Rechecked(_Unchecked_type _Right)
		{	
		this->_Ptr = _Right._Ptr;
		return (*this);
		}
	_Unchecked_type _Unchecked() const
		{	
		return (_Unchecked_type(this->_Ptr, (_Mylist *)this->_Getcont()));
		}
	reference operator*() const
		{	
		return ((reference)**(_Mybase *)this);
		}
	pointer operator->() const
		{	
		return (::std:: pointer_traits<pointer>::pointer_to(**this));
		}
	_Myiter& operator++()
		{	
		++(*(_Mybase *)this);
		return (*this);
		}
	_Myiter operator++(int)
		{	
		_Myiter _Tmp = *this;
		++*this;
		return (_Tmp);
		}
	_Myiter& operator--()
		{	
		--(*(_Mybase *)this);
		return (*this);
		}
	_Myiter operator--(int)
		{	
		_Myiter _Tmp = *this;
		--*this;
		return (_Tmp);
		}
	};
template<class _Mylist> inline
	typename _List_iterator<_Mylist>::_Unchecked_type
		_Unchecked(_List_iterator<_Mylist> _Iter)
	{	
	return (_Iter._Unchecked());
	}
template<class _Mylist> inline
	_List_iterator<_Mylist>&
		_Rechecked(_List_iterator<_Mylist>& _Iter,
			typename _List_iterator<_Mylist>
				::_Unchecked_type _Right)
	{	
	return (_Iter._Rechecked(_Right));
	}
template<class _Value_type,
	class _Size_type,
	class _Difference_type,
	class _Pointer,
	class _Const_pointer,
	class _Reference,
	class _Const_reference,
	class _Nodeptr_type>
	struct _List_iter_types
	{	
	typedef _Value_type value_type;
	typedef _Size_type size_type;
	typedef _Difference_type difference_type;
	typedef _Pointer pointer;
	typedef _Const_pointer const_pointer;
	typedef _Reference reference;
	typedef _Const_reference const_reference;
	typedef _Nodeptr_type _Nodeptr;
	};
template<class _Value_type,
	class _Voidptr>
	struct _List_node
		{	
		_Voidptr _Next;	
		_Voidptr _Prev;	
		_Value_type _Myval;	
	private:
		_List_node& operator=(const _List_node&);
		};
template<class _Value_type>
	struct _List_node<_Value_type, void *>
		{	
		typedef _List_node<_Value_type, void *> *_Nodeptr;
		_Nodeptr _Next;	
		_Nodeptr _Prev;	
		_Value_type _Myval;	
	private:
		_List_node& operator=(const _List_node&);
		};
template<class _Ty>
	struct _List_simple_types
		: public _Simple_types<_Ty>
	{	
	typedef _List_node<_Ty, void *> _Node;
	typedef _Node *_Nodeptr;
	};
template<class _Ty,
	class _Alloc0>
	struct _List_base_types
	{	
	typedef _Alloc0 _Alloc;
	typedef _List_base_types<_Ty, _Alloc> _Myt;
	typedef _Wrap_alloc<_Alloc> _Alty0;
	typedef typename _Alty0::template rebind<_Ty>::other _Alty;
	typedef typename _Get_voidptr<_Alty, typename _Alty::pointer>::type
		_Voidptr;
	typedef _List_node<typename _Alty::value_type,
		_Voidptr> _Node;
	typedef typename _Alty::template rebind<_Node>::other _Alnod_type;
	typedef typename _Alnod_type::pointer _Nodeptr;
	typedef _Nodeptr& _Nodepref;
	typedef typename _If<_Is_simple_alloc<_Alty>::value,
		_List_simple_types<typename _Alty::value_type>,
		_List_iter_types<typename _Alty::value_type,
			typename _Alty::size_type,
			typename _Alty::difference_type,
			typename _Alty::pointer,
			typename _Alty::const_pointer,
			typename _Alty::reference,
			typename _Alty::const_reference,
			_Nodeptr> >::type
		_Val_types;
	};
template<class _Val_types>
	class _List_val
		: public _Container_base
	{	
public:
	typedef _List_val<_Val_types> _Myt;
	typedef typename _Val_types::_Nodeptr _Nodeptr;
	typedef _Nodeptr& _Nodepref;
	typedef typename _Val_types::value_type value_type;
	typedef typename _Val_types::size_type size_type;
	typedef typename _Val_types::difference_type difference_type;
	typedef typename _Val_types::pointer pointer;
	typedef typename _Val_types::const_pointer const_pointer;
	typedef typename _Val_types::reference reference;
	typedef typename _Val_types::const_reference const_reference;
	typedef _List_const_iterator<_Myt> const_iterator;
	typedef _List_iterator<_Myt> iterator;
	typedef _List_unchecked_const_iterator<_Myt> _Unchecked_const_iterator;
	typedef _List_unchecked_iterator<_Myt> _Unchecked_iterator;
	_List_val()
		{	
		this->_Myhead = 0;
		this->_Mysize = 0;
		}
	static _Nodepref _Nextnode(_Nodeptr _Pnode)
		{	
		return ((_Nodepref)_Pnode->_Next);
		}
	static _Nodepref _Prevnode(_Nodeptr _Pnode)
		{	
		return ((_Nodepref)_Pnode->_Prev);
		}
	static reference _Myval(_Nodeptr _Pnode)
		{	
		return ((reference)_Pnode->_Myval);
		}
	_Nodeptr _Myhead;	
	size_type _Mysize;	
	};
template<bool _Al_has_storage,
	class _Alloc_types>
	class _List_alloc
		: public _List_val<typename _Alloc_types::_Val_types>
	{	
public:
	typename _Alloc_types::_Alnod_type _Alnod;	
	typedef _List_alloc<_Al_has_storage, _Alloc_types> _Myt;
	typedef typename _Alloc_types::_Alloc _Alloc;
	typedef typename _Alloc_types::_Alnod_type _Alty;
	typedef typename _Alloc_types::_Node _Node;
	typedef typename _Alloc_types::_Nodeptr _Nodeptr;
	_List_alloc(const _Alloc& _Al = _Alloc())
		: _Alnod(_Al)
		{	
		this->_Myhead = _Buyheadnode();
		try {
		_Alloc_proxy();
		} catch (...) {
		_Freeheadnode(this->_Myhead);
		throw;
		}
		}
	~_List_alloc() throw ()
		{	
		_Freeheadnode(this->_Myhead);
		_Free_proxy();
		}
	void _Change_alloc(const _Alty& _Al)
		{	
		_Free_proxy();
		this->_Alnod = _Al;
		_Alloc_proxy();
		}
	void _Swap_alloc(_Myt& _Right)
		{	
		_Swap_adl(this->_Alnod, _Right._Alnod);
		_Swap_adl(this->_Myproxy, _Right._Myproxy);
		}
	void _Alloc_proxy()
		{	
		typename _Alty::template rebind<_Container_proxy>::other
			_Alproxy(this->_Alnod);
		this->_Myproxy = _Alproxy.allocate(1);
		_Alproxy.construct(this->_Myproxy, _Container_proxy());
		this->_Myproxy->_Mycont = this;
		}
	void _Free_proxy()
		{	
		typename _Alty::template rebind<_Container_proxy>::other
			_Alproxy(this->_Alnod);
		this->_Orphan_all();
		_Alproxy.destroy(this->_Myproxy);
		_Alproxy.deallocate(this->_Myproxy, 1);
		this->_Myproxy = 0;
		}
	_Nodeptr _Buyheadnode()
		{	
		return (_Buynode0(_Nodeptr(), _Nodeptr()));
		}
	void _Freeheadnode(_Nodeptr _Pnode)
		{	
		this->_Alnod.destroy(
			::std:: addressof(this->_Nextnode(_Pnode)));
		this->_Alnod.destroy(
			::std:: addressof(this->_Prevnode(_Pnode)));
		this->_Alnod.deallocate(_Pnode, 1);
		}
	_Nodeptr _Buynode0(_Nodeptr _Next,
		_Nodeptr _Prev)
		{	
		_Nodeptr _Pnode = this->_Alnod.allocate(1);
		if (_Next == _Nodeptr())
			{	
			_Next = _Pnode;
			_Prev = _Pnode;
			}
		try {
		this->_Alnod.construct(
			::std:: addressof(this->_Nextnode(_Pnode)), _Next);
		this->_Alnod.construct(
			::std:: addressof(this->_Prevnode(_Pnode)), _Prev);
		} catch (...) {
		this->_Alnod.deallocate(_Pnode, 1);
		throw;
		}
		return (_Pnode);
		}
	_Alty& _Getal()
		{	
		return (this->_Alnod);
		}
	const _Alty& _Getal() const
		{	
		return (this->_Alnod);
		}
	};
template<class _Alloc_types>
	class _List_alloc<false, _Alloc_types>
		: public _List_val<typename _Alloc_types::_Val_types>
	{	
public:
	typedef _List_alloc<false, _Alloc_types> _Myt;
	typedef typename _Alloc_types::_Alloc _Alloc;
	typedef typename _Alloc_types::_Alnod_type _Alty;
	typedef typename _Alloc_types::_Node _Node;
	typedef typename _Alloc_types::_Nodeptr _Nodeptr;
	_List_alloc(const _Alloc& = _Alloc())
		{	
		this->_Myhead = _Buyheadnode();
		try {
		_Alloc_proxy();
		} catch (...) {
		_Freeheadnode(this->_Myhead);
		throw;
		}
		}
	~_List_alloc() throw ()
		{	
		_Freeheadnode(this->_Myhead);
		_Free_proxy();
		}
	void _Change_alloc(const _Alty&)
		{	
		}
	void _Swap_alloc(_Myt& _Right)
		{	
		_Swap_adl(this->_Myproxy, _Right._Myproxy);
		}
	void _Alloc_proxy()
		{	
		typename _Alty::template rebind<_Container_proxy>::other
			_Alproxy;
		this->_Myproxy = _Alproxy.allocate(1);
		_Alproxy.construct(this->_Myproxy, _Container_proxy());
		this->_Myproxy->_Mycont = this;
		}
	void _Free_proxy()
		{	
		typename _Alty::template rebind<_Container_proxy>::other
			_Alproxy;
		this->_Orphan_all();
		_Alproxy.destroy(this->_Myproxy);
		_Alproxy.deallocate(this->_Myproxy, 1);
		this->_Myproxy = 0;
		}
	_Nodeptr _Buyheadnode()
		{	
		return (_Buynode0(_Nodeptr(), _Nodeptr()));
		}
	void _Freeheadnode(_Nodeptr _Pnode)
		{	
		this->_Getal().destroy(
			::std:: addressof(this->_Nextnode(_Pnode)));
		this->_Getal().destroy(
			::std:: addressof(this->_Prevnode(_Pnode)));
		this->_Getal().deallocate(_Pnode, 1);
		}
	_Nodeptr _Buynode0(_Nodeptr _Next,
		_Nodeptr _Prev)
		{	
		_Nodeptr _Pnode = this->_Getal().allocate(1);
		if (_Next == _Nodeptr())
			{	
			_Next = _Pnode;
			_Prev = _Pnode;
			}
		try {
		this->_Getal().construct(
			::std:: addressof(this->_Nextnode(_Pnode)), _Next);
		this->_Getal().construct(
			::std:: addressof(this->_Prevnode(_Pnode)), _Prev);
		} catch (...) {
		this->_Getal().deallocate(_Pnode, 1);
		throw;
		}
		return (_Pnode);
		}
	_Alty _Getal() const
		{	
		return (_Alty());
		}
	};
template<class _Ty,
	class _Alloc>
	class _List_buy
		: public _List_alloc<!is_empty<_Alloc>::value,
			_List_base_types<_Ty, _Alloc> >
	{	
public:
	typedef _List_alloc<!is_empty<_Alloc>::value,
		_List_base_types<_Ty, _Alloc> > _Mybase;
	typedef typename _Mybase::_Alty _Alty;
	typedef typename _Mybase::_Nodeptr _Nodeptr;
	_List_buy(const _Alloc& _Al = _Alloc())
		: _Mybase(_Al)
		{	
		}
	template<class... _Valty>
		_Nodeptr _Buynode(_Nodeptr _Next, _Nodeptr _Prev,
			_Valty&&... _Val)
		{	
		_Nodeptr _Pnode = this->_Buynode0(_Next, _Prev);
		try {
		this->_Getal().construct(
			::std:: addressof(this->_Myval(_Pnode)),
				::std:: forward<_Valty>(_Val)...);
		} catch (...) {
		this->_Getal().deallocate(_Pnode, 1);
		throw;
		}
		return (_Pnode);
		}
	void _Freenode(_Nodeptr _Pnode)
		{	
		this->_Getal().destroy(
			::std:: addressof(this->_Nextnode(_Pnode)));
		this->_Getal().destroy(
			::std:: addressof(this->_Prevnode(_Pnode)));
		this->_Getal().destroy(
			::std:: addressof(this->_Myval(_Pnode)));
		this->_Getal().deallocate(_Pnode, 1);
		}
	};
template<class _Ty,
	class _Alloc = allocator<_Ty> >
	class list
		: public _List_buy<_Ty, _Alloc>
	{	
public:
	typedef list<_Ty, _Alloc> _Myt;
	typedef _List_buy<_Ty, _Alloc> _Mybase;
	typedef typename _Mybase::_Node _Node;
	typedef typename _Mybase::_Nodeptr _Nodeptr;
	typedef typename _Mybase::_Alty _Alty;
	typedef _Alloc allocator_type;
	typedef typename _Mybase::size_type size_type;
	typedef typename _Mybase::difference_type difference_type;
	typedef typename _Mybase::pointer pointer;
	typedef typename _Mybase::const_pointer const_pointer;
	typedef typename _Mybase::reference reference;
	typedef typename _Mybase::const_reference const_reference;
	typedef typename _Mybase::value_type value_type;
	typedef typename _Mybase::const_iterator const_iterator;
	typedef typename _Mybase::iterator iterator;
	typedef typename _Mybase::_Unchecked_const_iterator
		_Unchecked_const_iterator;
	typedef typename _Mybase::_Unchecked_iterator
		_Unchecked_iterator;
	typedef ::std:: reverse_iterator<iterator> reverse_iterator;
	typedef ::std:: reverse_iterator<const_iterator> const_reverse_iterator;
	list()
		: _Mybase()
		{	
		}
	explicit list(const _Alloc& _Al)
		: _Mybase(_Al)
		{	
		}
	explicit list(size_type _Count)
		: _Mybase()
		{	
		resize(_Count);
		}
	list(size_type _Count, const _Ty& _Val)
		: _Mybase()
		{	
		_Construct_n(_Count, _Val);
		}
	list(size_type _Count, const _Ty& _Val, const _Alloc& _Al)
		: _Mybase(_Al)
		{	
		_Construct_n(_Count, _Val);
		}
	list(const _Myt& _Right)
		: _Mybase(_Right._Getal().select_on_container_copy_construction())
		{	
		try {
		insert(begin(), _Right.begin(), _Right.end());
		} catch (...) {
		_Tidy();
		throw;
		}
		}
	list(const _Myt& _Right, const _Alloc& _Al)
		: _Mybase(_Al)
		{	
		try {
		insert(begin(), _Right.begin(), _Right.end());
		} catch (...) {
		_Tidy();
		throw;
		}
		}
	template<class _Iter,
		class = typename enable_if<_Is_iterator<_Iter>::value,
			void>::type>
		list(_Iter _First, _Iter _Last)
		: _Mybase()
		{	
		_Construct(_First, _Last);
		}
	template<class _Iter,
		class = typename enable_if<_Is_iterator<_Iter>::value,
			void>::type>
		list(_Iter _First, _Iter _Last, const _Alloc& _Al)
		: _Mybase(_Al)
		{	
		_Construct(_First, _Last);
		}
	template<class _Iter>
		void _Construct(_Iter _First, _Iter _Last)
		{	
		try {
		insert(begin(), _First, _Last);
		} catch (...) {
		_Tidy();
		throw;
		}
		}
	void _Construct_n(size_type _Count,
		const _Ty& _Val)
		{	
		try {
		_Insert_n(_Unchecked_begin(), _Count, _Val);
		} catch (...) {
		_Tidy();
		throw;
		}
		}
	list(_Myt&& _Right)
		: _Mybase(_Right._Getal())
		{	
		_Assign_rv(::std:: forward<_Myt>(_Right));
		}
	list(_Myt&& _Right, const _Alloc& _Al)
		: _Mybase(_Al)
		{	
		_Assign_rv(::std:: forward<_Myt>(_Right));
		}
	_Myt& operator=(_Myt&& _Right)
		{	
		if (this != &_Right)
			{	
			clear();
			if (_Alty::propagate_on_container_move_assignment::value
				&& this->_Getal() != _Right._Getal())
				this->_Change_alloc(_Right._Getal());
			_Assign_rv(::std:: forward<_Myt>(_Right));
			}
		return (*this);
		}
	void _Assign_rv(_Myt&& _Right)
		{	
		this->_Swap_all(_Right);
		_Swap_adl(this->_Myhead, _Right._Myhead);
		::std:: swap(this->_Mysize, _Right._Mysize);
		}
	void push_front(_Ty&& _Val)
		{	
		_Insert(_Unchecked_begin(), ::std:: forward<_Ty>(_Val));
		}
	void push_back(_Ty&& _Val)
		{	
		_Insert(_Unchecked_end(), ::std:: forward<_Ty>(_Val));
		}
	iterator insert(const_iterator _Where, _Ty&& _Val)
		{	
		return (emplace(_Where, ::std:: forward<_Ty>(_Val)));
		}
	template<class... _Valty>
		void emplace_front(_Valty&&... _Val)
		{	
		_Insert(_Unchecked_begin(), ::std:: forward<_Valty>(_Val)...);
		}
	template<class... _Valty>
		void emplace_back(_Valty&&... _Val)
		{	
		_Insert(_Unchecked_end(), ::std:: forward<_Valty>(_Val)...);
		}
	template<class... _Valty>
		iterator emplace(const_iterator _Where, _Valty&&... _Val)
		{	
		if (_Where._Getcont() != this)
			_Debug_message(L"list emplace iterator outside range", L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\list", 1048);
		_Insert(_Where._Unchecked(), ::std:: forward<_Valty>(_Val)...);
		return (_Make_iter(--_Where));
		}
	template<class... _Valty>
		void _Insert(_Unchecked_const_iterator _Where,
		_Valty&&... _Val)
		{	
		_Nodeptr _Pnode = _Where._Mynode();
		_Nodeptr _Newnode =
			this->_Buynode(_Pnode, this->_Prevnode(_Pnode),
				::std:: forward<_Valty>(_Val)...);
		_Incsize(1);
		this->_Prevnode(_Pnode) = _Newnode;
		this->_Nextnode(this->_Prevnode(_Newnode)) = _Newnode;
		}
	list(::std:: initializer_list<_Ty> _Ilist,
		const _Alloc& _Al = allocator_type())
		: _Mybase(_Al)
		{	
		insert(begin(), _Ilist.begin(), _Ilist.end());
		}
	_Myt& operator=(::std:: initializer_list<_Ty> _Ilist)
		{	
		assign(_Ilist.begin(), _Ilist.end());
		return (*this);
		}
	void assign(::std:: initializer_list<_Ty> _Ilist)
		{	
		assign(_Ilist.begin(), _Ilist.end());
		}
	iterator insert(const_iterator _Where,
		::std:: initializer_list<_Ty> _Ilist)
		{	
		return (insert(_Where, _Ilist.begin(), _Ilist.end()));
		}
	~list() throw ()
		{	
		_Tidy();
		}
	_Myt& operator=(const _Myt& _Right)
		{	
		if (this != &_Right)
			{	
			if (this->_Getal() != _Right._Getal()
				&& _Alty::propagate_on_container_copy_assignment::value)
				{	
				clear();
				this->_Change_alloc(_Right._Getal());
				}
			assign(_Right.begin(), _Right.end());
			}
		return (*this);
		}
	iterator begin() throw ()
		{	
		return (iterator(this->_Nextnode(this->_Myhead), this));
		}
	const_iterator begin() const throw ()
		{	
		return (const_iterator(this->_Nextnode(this->_Myhead), this));
		}
	iterator end() throw ()
		{	
		return (iterator(this->_Myhead, this));
		}
	const_iterator end() const throw ()
		{	
		return (const_iterator(this->_Myhead, this));
		}
	_Unchecked_iterator _Unchecked_begin()
		{	
		return (_Unchecked_iterator(this->_Nextnode(this->_Myhead),
			this));
		}
	_Unchecked_const_iterator _Unchecked_begin() const
		{	
		return (_Unchecked_const_iterator(this->_Nextnode(this->_Myhead),
			this));
		}
	_Unchecked_iterator _Unchecked_end()
		{	
		return (_Unchecked_iterator(this->_Myhead, this));
		}
	_Unchecked_const_iterator _Unchecked_end() const
		{	
		return (_Unchecked_const_iterator(this->_Myhead, this));
		}
	iterator _Make_iter(const_iterator _Where) const throw ()
		{	
		return (iterator(_Where._Ptr, this));
		}
	iterator _Make_iter(_Unchecked_const_iterator _Where) const
		{	
		return (iterator(_Where._Ptr, this));
		}
	reverse_iterator rbegin() throw ()
		{	
		return (reverse_iterator(end()));
		}
	const_reverse_iterator rbegin() const throw ()
		{	
		return (const_reverse_iterator(end()));
		}
	reverse_iterator rend() throw ()
		{	
		return (reverse_iterator(begin()));
		}
	const_reverse_iterator rend() const throw ()
		{	
		return (const_reverse_iterator(begin()));
		}
	const_iterator cbegin() const throw ()
		{	
		return (((const _Myt *)this)->begin());
		}
	const_iterator cend() const throw ()
		{	
		return (((const _Myt *)this)->end());
		}
	const_reverse_iterator crbegin() const throw ()
		{	
		return (((const _Myt *)this)->rbegin());
		}
	const_reverse_iterator crend() const throw ()
		{	
		return (((const _Myt *)this)->rend());
		}
	void resize(size_type _Newsize)
		{	
		if (this->_Mysize < _Newsize)
			{	
			size_type _Count = 0;
			try {
			for (; this->_Mysize < _Newsize; ++_Count)
				_Insert(_Unchecked_end());
			} catch (...) {
			for (; 0 < _Count; --_Count)
				pop_back();	
			throw;
			}
			}
		else
			while (_Newsize < this->_Mysize)
				pop_back();
		}
	void resize(size_type _Newsize, const _Ty& _Val)
		{	
		if (this->_Mysize < _Newsize)
			_Insert_n(_Unchecked_end(), _Newsize - this->_Mysize, _Val);
		else
			while (_Newsize < this->_Mysize)
				pop_back();
		}
	size_type size() const throw ()
		{	
		return (this->_Mysize);
		}
	size_type max_size() const throw ()
		{	
		return (this->_Getal().max_size());
		}
	bool empty() const throw ()
		{	
		return (this->_Mysize == 0);
		}
	allocator_type get_allocator() const throw ()
		{	
		return (this->_Getal());
		}
	reference front()
		{	
		return (*begin());
		}
	const_reference front() const
		{	
		return (*begin());
		}
	reference back()
		{	
		return (*(--end()));
		}
	const_reference back() const
		{	
		return (*(--end()));
		}
	void push_front(const _Ty& _Val)
		{	
		_Insert(_Unchecked_begin(), _Val);
		}
	void pop_front()
		{	
		erase(begin());
		}
	void push_back(const _Ty& _Val)
		{	
		_Insert(_Unchecked_end(), _Val);
		}
	void pop_back()
		{	
		erase(--end());
		}
	template<class _Iter>
		typename enable_if<_Is_iterator<_Iter>::value,
			void>::type
		assign(_Iter _First, _Iter _Last)
		{	
		iterator _Old = begin();
		try {
		for (; _First != _Last && _Old != end(); ++_First, ++_Old)
			_Reusenode(_Old, *_First);
		for (; _First != _Last; ++_First)
			_Insert(_Unchecked_end(), *_First);
		} catch (...) {
		clear();
		throw;
		}
		erase(_Old, end());
		}
	template<class _TArg>
		void _Reusenode(iterator _Where, _TArg&& _Arg)
		{	
		try {
		this->_Getal().destroy(
			::std:: addressof(this->_Myval(_Where._Ptr)));
		this->_Getal().construct(
			::std:: addressof(this->_Myval(_Where._Ptr)),
			::std:: forward<_TArg>(_Arg));
		} catch (...) {
		_Unlinknode(_Where);
		this->_Getal().destroy(
			::std:: addressof(this->_Nextnode(_Where._Ptr)));
		this->_Getal().destroy(
			::std:: addressof(this->_Prevnode(_Where._Ptr)));
		this->_Getal().deallocate(_Where._Ptr, 1);
		throw;
		}
		}
	void assign(size_type _Count, const _Ty& _Val)
		{	
		clear();
		_Insert_n(_Unchecked_begin(), _Count, _Val);
		}
	iterator insert(const_iterator _Where, const _Ty& _Val)
		{	
		if (_Where._Getcont() != this)
			_Debug_message(L"list insert iterator outside range", L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\list", 1342);
		_Insert(_Where._Unchecked(), _Val);
		return (_Make_iter(--_Where));
		}
	iterator insert(const_iterator _Where, size_type _Count, const _Ty& _Val)
		{	
		if (_Where._Getcont() != this)
			_Debug_message(L"list insert iterator outside range", L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\list", 1353);
		iterator _Prev = _Make_iter(_Where);
		if (_Prev == begin())
			{	
			_Insert_n(_Where._Unchecked(), _Count, _Val);
			return (begin());
			}
		else
			{	
			--_Prev;
			_Insert_n(_Where._Unchecked(), _Count, _Val);
			return (++_Prev);
			}
		}
	template<class _Iter>
		typename enable_if<_Is_iterator<_Iter>::value,
			iterator>::type
		insert(const_iterator _Where, _Iter _First, _Iter _Last)
		{	
		if (_Where._Getcont() != this)
			_Debug_message(L"list insert iterator outside range", L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\list", 1377);
		iterator _Prev = _Make_iter(_Where);
		if (_Prev == begin())
			{	
			_Insert_range(_Where._Unchecked(), _First, _Last,
				_Iter_cat(_First));
			return (begin());
			}
		else
			{	
			--_Prev;
			_Insert_range(_Where._Unchecked(), _First, _Last,
				_Iter_cat(_First));
			return (++_Prev);
			}
		}
	template<class _Iter>
		void _Insert_range(_Unchecked_const_iterator _Where,
			_Iter _First, _Iter _Last, input_iterator_tag)
		{	
		size_type _Num = 0;
		try {
		for (; _First != _Last; ++_First, ++_Num)
			_Insert(_Where, *_First);
		} catch (...) {
		for (; 0 < _Num; --_Num)
			{	
			_Unchecked_const_iterator _Before = _Where;
			_Unchecked_erase(--_Before);
			}
		throw;
		}
		}
	template<class _Iter>
		void _Insert_range(_Unchecked_const_iterator _Where,
			_Iter _First, _Iter _Last, forward_iterator_tag)
		{	
		_Debug_range(_First, _Last, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\list", 1419);
		_Iter _Next = _First;
		try {
		for (; _First != _Last; ++_First)
			_Insert(_Where, *_First);
		} catch (...) {
		for (; _Next != _First; ++_Next)
			{	
			_Unchecked_const_iterator _Before = _Where;
			_Unchecked_erase(--_Before);
			}
		throw;
		}
		}
	_Nodeptr _Unlinknode(const_iterator _Where)
		{	
		if (_Where._Getcont() != this || _Where._Ptr == this->_Myhead)
			_Debug_message(L"list erase iterator outside range", L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\list", 1439);
		_Nodeptr _Pnode = (_Where)._Mynode();
		_Orphan_ptr(*this, _Pnode);
		this->_Nextnode(this->_Prevnode(_Pnode)) =
			this->_Nextnode(_Pnode);
		this->_Prevnode(this->_Nextnode(_Pnode)) =
			this->_Prevnode(_Pnode);
		--this->_Mysize;
		return (_Pnode);
		}
	iterator erase(const_iterator _Where)
		{	
		_Nodeptr _Pnode = _Unlinknode(_Where++);
		this->_Freenode(_Pnode);
		return (_Make_iter(_Where));
		}
	void _Unchecked_erase(_Unchecked_const_iterator _Where)
		{	
		_Nodeptr _Pnode = _Where._Mynode();
		this->_Nextnode(this->_Prevnode(_Pnode)) =
			this->_Nextnode(_Pnode);
		this->_Prevnode(this->_Nextnode(_Pnode)) =
			this->_Prevnode(_Pnode);
		this->_Freenode(_Pnode);
		--this->_Mysize;
		}
	iterator erase(const_iterator _First, const_iterator _Last)
		{	
		if (_First == begin() && _Last == end())
			{	
			clear();
			return (end());
			}
		else
			{	
			while (_First != _Last)
				_First = erase(_First);
			return (_Make_iter(_Last));
			}
		}
	void clear() throw ()
		{	
		this->_Orphan_ptr(*this, nullptr);
		_Nodeptr _Pnode = this->_Nextnode(this->_Myhead);
		this->_Nextnode(this->_Myhead) = this->_Myhead;
		this->_Prevnode(this->_Myhead) = this->_Myhead;
		this->_Mysize = 0;
		for (_Nodeptr _Pnext; _Pnode != this->_Myhead; _Pnode = _Pnext)
			{	
			_Pnext = this->_Nextnode(_Pnode);
			this->_Freenode(_Pnode);
			}
		}
	void swap(_Myt& _Right)
		{	
		if (this == &_Right)
			;	
		else if (this->_Getal() == _Right._Getal())
			{	
			this->_Swap_all(_Right);
			_Swap_adl(this->_Myhead, _Right._Myhead);
			::std:: swap(this->_Mysize, _Right._Mysize);
			}
		else if (_Alty::propagate_on_container_swap::value)
			{	
			this->_Swap_alloc(_Right);
			_Swap_adl(this->_Myhead, _Right._Myhead);
			::std:: swap(this->_Mysize, _Right._Mysize);
			}
		else	
			_Debug_message(L"list containers incompatible for swap", L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\list", 1529);
		}
	void splice(const_iterator _Where, _Myt& _Right)
		{	
		if (this != &_Right && !_Right.empty())
			{	
			_Splice(_Where, _Right, _Right.begin(), _Right.end(),
				_Right._Mysize);
			}
		}
	void splice(const_iterator _Where, _Myt&& _Right)
		{	
		splice(_Where, (_Myt&)_Right);
		}
	void splice(const_iterator _Where, _Myt& _Right,
		const_iterator _First)
		{	
		if (_First == _Right.end())
			_Debug_message(L"list splice iterator outside range", L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\list", 1555);
		else
			{	
			const_iterator _Last = _First;
			++_Last;
			if (this != &_Right
				|| (_Where != _First && _Where != _Last))
				_Splice(_Where, _Right, _First, _Last, 1);
			}
		}
	void splice(const_iterator _Where, _Myt&& _Right,
		const_iterator _First)
		{	
		splice(_Where, (_Myt&)_Right, _First);
		}
	void splice(const_iterator _Where,
		_Myt& _Right, const_iterator _First, const_iterator _Last)
		{	
		if (_First != _Last && (this != &_Right || _Where != _Last))
			{	
			size_type _Count = 0;
			if (this == &_Right)
				;	
			else if (_First == _Right.begin() && _Last == _Right.end())
				_Count = _Right._Mysize;	
			else
				{	
				const_iterator _Next = _First;
				for (; _Next != _Last; ++_Next, ++_Count)
					if (_Next == _Right.end())
						_Xlength_error("list<T> bad splice");
				}
			_Splice(_Where, _Right, _First, _Last, _Count);
			}
		}
	void splice(const_iterator _Where,
		_Myt&& _Right, const_iterator _First, const_iterator _Last)
		{	
		splice(_Where, (_Myt&)_Right, _First, _Last);
		}
	void remove(const _Ty& _Val)
		{	
		iterator _Val_it = end();
		for (iterator _First = begin(); _First != end(); )
			if (*_First == _Val)
				if (::std:: addressof(*_First) == ::std:: addressof(_Val))
					_Val_it = _First++;
				else
					_First = erase(_First);
			else
				++_First;
		if (_Val_it != end())
			erase(_Val_it);
		}
	template<class _Pr1>
		void remove_if(_Pr1 _Pred)
		{	
		for (iterator _First = begin(); _First != end(); )
			if (_Pred(*_First))
				_First = erase(_First);
			else
				++_First;
		}
	void unique()
		{	
		unique(equal_to<>());
		}
	template<class _Pr2>
		void unique(_Pr2 _Pred)
		{	
		const _Nodeptr _Phead = this->_Myhead;
		_Nodeptr _Pprev = this->_Nextnode(_Phead);
		_Nodeptr _Pnode = this->_Nextnode(_Pprev);
		while (_Pnode != _Phead)
			if (_Pred(_Pprev->_Myval, _Pnode->_Myval))
				{	
				const _Nodeptr _Perase = _Pnode;
				_Pnode = this->_Nextnode(_Pnode);
				this->_Nextnode(_Pprev) = _Pnode;
				this->_Prevnode(_Pnode) = _Pprev;
				this->_Freenode(_Perase);
				--this->_Mysize;
				}
			else
				{	
				_Pprev = _Pnode;
				_Pnode = this->_Nextnode(_Pnode);
				}
		}
	void merge(_Myt& _Right)
		{	
		merge(_Right, less<>());
		}
	void merge(_Myt&& _Right)
		{	
		merge((_Myt&)_Right);
		}
	template<class _Pr2>
		void merge(_Myt& _Right, _Pr2 _Pred)
		{	
		if (&_Right != this)
			{	
			iterator _First1 = begin(), _Last1 = end();
			iterator _First2 = _Right.begin(), _Last2 = _Right.end();
			_Debug_order(_First1, _Last1, _Pred, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\list", 1681);
			_Debug_order(_First2, _Last2, _Pred, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\list", 1682);
			while (_First1 != _Last1 && _First2 != _Last2)
				if (_Debug_lt_pred(_Pred, *_First2, *_First1, L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\list", 1685))
					{	
					iterator _Mid2 = _First2;
					_Splice(_First1, _Right, _First2, ++_Mid2, 1);
					_First2 = _Mid2;
					}
				else
					++_First1;
			if (_First2 != _Last2)
				_Splice(_Last1, _Right, _First2, _Last2,
					_Right._Mysize);	
			}
		}
	template<class _Pr2>
		void merge(_Myt&& _Right, _Pr2 _Pred)
		{	
		merge((_Myt&)_Right, _Pred);
		}
	void sort()
		{	
		sort(less<>());
		}
	template<class _Pr2>
		void sort(_Pr2 _Pred)
		{	
		if (2 <= this->_Mysize)
			{	
			const size_t _MAXBINS = 25;
			_Myt _Templist(this->_Getal()), _Binlist[_MAXBINS + 1];
			size_t _Maxbin = 0;
			while (!empty())
				{	
				_Templist._Splice_same(_Templist.begin(), *this, begin(),
					++begin(), 1);
				size_t _Bin;
				for (_Bin = 0; _Bin < _Maxbin && !_Binlist[_Bin].empty();
					++_Bin)
					{	
					_Binlist[_Bin].merge(_Templist, _Pred);
					_Binlist[_Bin].swap(_Templist);
					}
				if (_Bin == _MAXBINS)
					_Binlist[_Bin - 1].merge(_Templist, _Pred);
				else
					{	
					_Binlist[_Bin].swap(_Templist);
					if (_Bin == _Maxbin)
						++_Maxbin;
					}
				}
			for (size_t _Bin = 1; _Bin < _Maxbin; ++_Bin)
				_Binlist[_Bin].merge(_Binlist[_Bin - 1],
					_Pred);	
			;
			splice(begin(), _Binlist[_Maxbin - 1]);	
			}
		}
	void reverse() throw ()
		{	
		const _Nodeptr _Phead = this->_Myhead;
		_Nodeptr _Pnode = _Phead;
		for (; ; )
			{	
			const _Nodeptr _Pnext = this->_Nextnode(_Pnode);
			this->_Nextnode(_Pnode) = this->_Prevnode(_Pnode);
			this->_Prevnode(_Pnode) = _Pnext;
			if (_Pnext == _Phead)
				break;
			_Pnode = _Pnext;
			}
		}
	void _Splice(const_iterator _Where,
		_Myt& _Right, const_iterator _First, const_iterator _Last,
		size_type _Count)
		{	
		if (_Where._Getcont() != this)
			_Debug_message(L"list splice iterator outside range", L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\list", 1776);
		if (this->_Getal() != _Right._Getal())
			_Debug_message(L"list containers incompatible for splice", L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\list", 1778);
		if (this != &_Right)
			{	
			_Lockit _Lock(3);
			const bool _One = _Count == 1;
			const bool _All = _Count == _Right.size();
			const bool _Some = !_One && !_All;
			_Nodeptr _Oldprev = _First._Ptr->_Prev;
			if (_Some)
				for (_Nodeptr _Ptr = _First._Ptr; _Ptr != _Last._Ptr;
					_Ptr = _Ptr->_Next)
					{	
					_Ptr->_Prev = 0;
					}
			const_iterator **_Pnext = (const_iterator **)_Right._Getpfirst();
			if (_Pnext == 0)
				_Debug_message(L"list container corrupted", L"c:\\program files (x86)\\microsoft visual studio 12.0\\vc\\include\\list", 1800);
			while (*_Pnext != 0)
				{	
				const_iterator& _Iter = **_Pnext;
				if ((_One && _Iter._Ptr == _First._Ptr)
					|| (_All && _Iter._Ptr != _Right._Myhead)
					|| (_Some && _Iter._Ptr->_Prev == 0))
					{	
					*_Pnext = (const_iterator *)_Iter._Mynextiter;
					_Iter._Myproxy = this->_Myproxy;
					_Iter._Mynextiter = this->_Myproxy->_Myfirstiter;
					this->_Myproxy->_Myfirstiter = &_Iter;
					}
				else
					{	
					_Pnext = (const_iterator **)_Iter._Getpnext();
					}
				}
			if (_Some)
				for (_Nodeptr _Ptr = _First._Ptr; _Ptr != _Last._Ptr;
					_Ptr = _Ptr->_Next)
					{	
					_Ptr->_Prev = _Oldprev;
					_Oldprev = _Ptr;
					}
			}
		_Splice_same(_Where, _Right, _First, _Last, _Count);
		}
	void _Splice_same(const_iterator _Where,
		_Myt& _Right, const_iterator _First, const_iterator _Last,
		size_type _Count)
		{	
		if (this != &_Right)
			{	
			_Incsize(_Count);
			_Right._Mysize -= _Count;
			}
		this->_Nextnode(this->_Prevnode(_First._Mynode())) =
			_Last._Mynode();
		this->_Nextnode(this->_Prevnode(_Last._Mynode())) =
			_Where._Mynode();
		this->_Nextnode(this->_Prevnode(_Where._Mynode())) =
			_First._Mynode();
		_Nodeptr _Pnode = this->_Prevnode(_Where._Mynode());
		this->_Prevnode(_Where._Mynode()) =
			this->_Prevnode(_Last._Mynode());
		this->_Prevnode(_Last._Mynode()) =
			this->_Prevnode(_First._Mynode());
		this->_Prevnode(_First._Mynode()) = _Pnode;
		}
	void _Unchecked_splice(_Unchecked_const_iterator _Where,
		_Unchecked_const_iterator _First,
		_Unchecked_const_iterator _Last)
		{	
		this->_Nextnode(this->_Prevnode(_First._Mynode())) =
			_Last._Mynode();
		this->_Nextnode(this->_Prevnode(_Last._Mynode())) =
			_Where._Mynode();
		this->_Nextnode(this->_Prevnode(_Where._Mynode())) =
			_First._Mynode();
		_Nodeptr _Pnode = this->_Prevnode(_Where._Mynode());
		this->_Prevnode(_Where._Mynode()) =
			this->_Prevnode(_Last._Mynode());
		this->_Prevnode(_Last._Mynode()) =
			this->_Prevnode(_First._Mynode());
		this->_Prevnode(_First._Mynode()) = _Pnode;
		}
	void _Tidy()
		{	
		clear();
		}
	void _Insert_n(_Unchecked_const_iterator _Where,
		size_type _Count, const _Ty& _Val)
		{	
		size_type _Countsave = _Count;
		try {
		for (; 0 < _Count; --_Count)
			_Insert(_Where, _Val);
		} catch (...) {
		for (; _Count < _Countsave; ++_Count)
			{	
			_Unchecked_const_iterator _Before = _Where;
			_Unchecked_erase(--_Before);
			}
		throw;
		}
		}
	void _Incsize(size_type _Count)
		{	
		if (max_size() - this->_Mysize - 1 < _Count)
			_Xlength_error("list<T> too long");
		this->_Mysize += _Count;
		}
	void _Orphan_ptr(_Myt& _Cont, _Nodeptr _Ptr) const
		{	
		_Lockit _Lock(3);
		const_iterator **_Pnext = (const_iterator **)_Cont._Getpfirst();
		if (_Pnext != 0)
			while (*_Pnext != 0)
				if ((*_Pnext)->_Ptr == this->_Myhead
					|| (_Ptr != 0 && (*_Pnext)->_Ptr != _Ptr))
					_Pnext = (const_iterator **)(*_Pnext)->_Getpnext();
				else
					{	
					(*_Pnext)->_Clrcont();
					*_Pnext = *(const_iterator **)(*_Pnext)->_Getpnext();
					}
		}
	};
template<class _Ty,
	class _Alloc> inline
	void swap(list<_Ty, _Alloc>& _Left, list<_Ty, _Alloc>& _Right)
	{	
	_Left.swap(_Right);
	}
template<class _Ty,
	class _Alloc> inline
	bool operator==(const list<_Ty, _Alloc>& _Left,
		const list<_Ty, _Alloc>& _Right)
	{	
	return (_Left.size() == _Right.size()
		&& equal(_Left.begin(), _Left.end(), _Right.begin()));
	}
template<class _Ty,
	class _Alloc> inline
	bool operator!=(const list<_Ty, _Alloc>& _Left,
		const list<_Ty, _Alloc>& _Right)
	{	
	return (!(_Left == _Right));
	}
template<class _Ty,
	class _Alloc> inline
	bool operator<(const list<_Ty, _Alloc>& _Left,
		const list<_Ty, _Alloc>& _Right)
	{	
	return (lexicographical_compare(_Left.begin(), _Left.end(),
		_Right.begin(), _Right.end()));
	}
template<class _Ty,
	class _Alloc> inline
	bool operator>(const list<_Ty, _Alloc>& _Left,
		const list<_Ty, _Alloc>& _Right)
	{	
	return (_Right < _Left);
	}
template<class _Ty,
	class _Alloc> inline
	bool operator<=(const list<_Ty, _Alloc>& _Left,
		const list<_Ty, _Alloc>& _Right)
	{	
	return (!(_Right < _Left));
	}
template<class _Ty,
	class _Alloc> inline
	bool operator>=(const list<_Ty, _Alloc>& _Left,
		const list<_Ty, _Alloc>& _Right)
	{	
	return (!(_Left < _Right));
	}
}
 #pragma warning(pop)
 #pragma pack(pop)
typedef signed char        int8_t;
typedef short              int16_t;
typedef int                int32_t;
typedef long long          int64_t;
typedef unsigned char      uint8_t;
typedef unsigned short     uint16_t;
typedef unsigned int       uint32_t;
typedef unsigned long long uint64_t;
typedef signed char        int_least8_t;
typedef short              int_least16_t;
typedef int                int_least32_t;
typedef long long          int_least64_t;
typedef unsigned char      uint_least8_t;
typedef unsigned short     uint_least16_t;
typedef unsigned int       uint_least32_t;
typedef unsigned long long uint_least64_t;
typedef signed char        int_fast8_t;
typedef int                int_fast16_t;
typedef int                int_fast32_t;
typedef long long          int_fast64_t;
typedef unsigned char      uint_fast8_t;
typedef unsigned int       uint_fast16_t;
typedef unsigned int       uint_fast32_t;
typedef unsigned long long uint_fast64_t;
typedef long long          intmax_t;
typedef unsigned long long uintmax_t;
#pragma pack(push,8)
#pragma warning(push,3)
#pragma warning(disable: 4275)
struct __type_info_node {
    void *_MemPtr;
    __type_info_node* _Next;
};
extern __type_info_node __type_info_root_node;
class type_info {
public:
	size_t hash_code() const throw ()
		{	
		return (::std:: _Hash_seq((const unsigned char *) name(),
			:: strlen(name())));
		}
    virtual ~type_info() throw ();
    __declspec(dllimport) bool  operator==(const type_info& _Rhs) const;
    __declspec(dllimport) bool  operator!=(const type_info& _Rhs) const;
    __declspec(dllimport) bool  before(const type_info& _Rhs) const;
    __declspec(dllimport) const char*  name(__type_info_node* __ptype_info_node = &__type_info_root_node) const;
    __declspec(dllimport) const char*  raw_name() const;
private:
    void *_M_data;
    char _M_d_name[1];
public:
     type_info(const type_info&) = delete;
    type_info&  operator=(const type_info&) = delete;
private:
    __declspec(dllimport) static const char *__cdecl _Name_base(const type_info *,__type_info_node* __ptype_info_node);
    __declspec(dllimport) static void __cdecl _Type_info_dtor(type_info *);
};
 namespace std {
using ::type_info;
 }
 namespace std {
class __declspec(dllimport) bad_cast : public exception {
public:
     bad_cast(const char * _Message = "bad cast");
     bad_cast(const bad_cast &);
    virtual  ~bad_cast() throw ();
};
class __declspec(dllimport) bad_typeid : public exception {
public:
     bad_typeid(const char * _Message = "bad typeid");
     bad_typeid(const bad_typeid &);
    virtual  ~bad_typeid() throw ();
};
class __declspec(dllimport) __non_rtti_object : public bad_typeid {
public:
     __non_rtti_object(const char * _Message);
     __non_rtti_object(const __non_rtti_object &);
    virtual  ~__non_rtti_object() throw ();
};
 }
#pragma pack(pop)
#pragma warning(pop)
 #pragma pack(push,8)
 #pragma warning(push,3)
 #pragma warning(disable: 28197)
namespace std {
template<class _Ty>
	struct default_delete;
template<class _Ty,
	class _Dx = default_delete<_Ty> >
	class unique_ptr;
class bad_weak_ptr
	: public ::std:: exception
	{	
public:
	explicit bad_weak_ptr(const char * = 0) throw ()
		{	
		}
	virtual const char * what() const throw()
		{	
		return ("bad_weak_ptr");
		}
	};
class _Ref_count_base
	{	
private:
	virtual void _Destroy() = 0;
	virtual void _Delete_this() = 0;
private:
	_Atomic_counter_t _Uses;
	_Atomic_counter_t _Weaks;
protected:
	_Ref_count_base()
		{	
		_Init_atomic_counter(_Uses, 1);
		_Init_atomic_counter(_Weaks, 1);
		}
public:
	virtual ~_Ref_count_base() throw ()
		{	
		}
	bool _Incref_nz()
		{	
		for (; ; )
			{	
			_Atomic_integral_t _Count =
				static_cast<volatile _Atomic_counter_t&>(_Uses);
			if (_Count == 0)
				return (false);
			if (static_cast<_Atomic_integral_t>(_InterlockedCompareExchange(
					reinterpret_cast<volatile long *>(&_Uses),
					_Count + 1, _Count)) == _Count)
				return (true);
			}
		}
	unsigned int _Get_uses() const
		{	
		return (_Get_atomic_count(_Uses));
		}
	void _Incref()
		{	
		_InterlockedIncrement(reinterpret_cast<volatile long *>(&_Uses));
		}
	void _Incwref()
		{	
		_InterlockedIncrement(reinterpret_cast<volatile long *>(&_Weaks));
		}
	void _Decref()
		{	
		if (_InterlockedDecrement(reinterpret_cast<volatile long *>(&_Uses)) == 0)
			{	
			_Destroy();
			_Decwref();
			}
		}
	void _Decwref()
		{	
		if (_InterlockedDecrement(reinterpret_cast<volatile long *>(&_Weaks)) == 0)
			_Delete_this();
		}
	long _Use_count() const
		{	
		return (_Get_uses());
		}
	bool _Expired() const
		{	
		return (_Get_uses() == 0);
		}
	virtual void *_Get_deleter(const  type_info&) const
		{	
		return (0);
		}
	};
template<class _Ty>
	class _Ref_count
	: public _Ref_count_base
	{	
public:
	_Ref_count(_Ty *_Px)
		: _Ref_count_base(), _Ptr(_Px)
		{	
		}
private:
	virtual void _Destroy()
		{	
		delete _Ptr;
		}
	virtual void _Delete_this()
		{	
		delete this;
		}
	_Ty * _Ptr;
	};
template<class _Ty,
	class _Dx>
	class _Ref_count_del
	: public _Ref_count_base
	{	
public:
	_Ref_count_del(_Ty *_Px, _Dx _Dt)
		: _Ref_count_base(), _Ptr(_Px), _Dtor(_Dt)
		{	
		}
	virtual void *_Get_deleter(const  type_info& _Typeid) const
		{	
		return ((void *)(_Typeid == typeid(_Dx) ? &_Dtor : 0));
		}
private:
	virtual void _Destroy()
		{	
		_Dtor(_Ptr);
		}
	virtual void _Delete_this()
		{	
		delete this;
		}
	_Ty * _Ptr;
	_Dx _Dtor;	
	};
template<class _Ty,
	class _Dx,
	class _Alloc>
	class _Ref_count_del_alloc
	: public _Ref_count_base
	{	
public:
	typedef _Ref_count_del_alloc<_Ty, _Dx, _Alloc> _Myty;
	typedef typename _Alloc::template rebind<_Myty>::other _Myalty;
	_Ref_count_del_alloc(_Ty *_Px, _Dx _Dt, _Myalty _Al)
		: _Ref_count_base(), _Ptr(_Px), _Dtor(_Dt), _Myal(_Al)
		{	
		}
	virtual void *_Get_deleter(const  type_info& _Typeid) const
		{	
		return ((void *)(_Typeid == typeid(_Dx) ? &_Dtor : 0));
		}
private:
	virtual void _Destroy()
		{	
		_Dtor(_Ptr);
		}
	virtual void _Delete_this()
		{	
		_Myalty _Al = _Myal;
		_Al.destroy(this);
		_Al.deallocate(this, 1);
		}
	_Ty * _Ptr;
	_Dx _Dtor;	
	_Myalty _Myal;	
	};
template<class _Ty>
	class weak_ptr;
template<class _Ty>
	class shared_ptr;
template<class _Ty>
	class enable_shared_from_this;
struct _Static_tag {};
struct _Const_tag {};
struct _Dynamic_tag {};
template<class _Ty1,
	class _Ty2>
	void _Do_enable(_Ty1 *, enable_shared_from_this<_Ty2> *,
		_Ref_count_base *);
template<class _Ty>
	inline void _Enable_shared(_Ty *_Ptr, _Ref_count_base *_Refptr,
		typename _Ty::_EStype * = 0)
	{	
	if (_Ptr)
		_Do_enable(_Ptr,
			(enable_shared_from_this<typename _Ty::_EStype>*)_Ptr, _Refptr);
	}
inline void _Enable_shared(const volatile void *, const volatile void *)
	{	
	}
template<class _Ty>
	class _Ptr_base
	{	
public:
	typedef _Ptr_base<_Ty> _Myt;
	typedef _Ty element_type;
	_Ptr_base()
		: _Ptr(0), _Rep(0)
		{	
		}
	_Ptr_base(_Myt&& _Right)
		: _Ptr(0), _Rep(0)
		{	
		_Assign_rv(::std:: forward<_Myt>(_Right));
		}
	template<class _Ty2>
		_Ptr_base(_Ptr_base<_Ty2>&& _Right)
		: _Ptr(_Right._Ptr), _Rep(_Right._Rep)
		{	
		_Right._Ptr = 0;
		_Right._Rep = 0;
		}
	_Myt& operator=(_Myt&& _Right)
		{	
		_Assign_rv(::std:: forward<_Myt>(_Right));
		return (*this);
		}
	void _Assign_rv(_Myt&& _Right)
		{	
		if (this != &_Right)
			_Swap(_Right);
		}
	long use_count() const throw ()
		{	
		return (_Rep ? _Rep->_Use_count() : 0);
		}
	void _Swap(_Ptr_base& _Right)
		{	
		::std:: swap(_Rep, _Right._Rep);
		::std:: swap(_Ptr, _Right._Ptr);
		}
	template<class _Ty2>
		bool owner_before(const _Ptr_base<_Ty2>& _Right) const
		{	
		return (_Rep < _Right._Rep);
		}
	void *_Get_deleter(const  type_info& _Typeid) const
		{	
		return (_Rep ? _Rep->_Get_deleter(_Typeid) : 0);
		}
	_Ty *_Get() const
		{	
		return (_Ptr);
		}
	bool _Expired() const
		{	
		return (!_Rep || _Rep->_Expired());
		}
	void _Decref()
		{	
		if (_Rep != 0)
			_Rep->_Decref();
		}
	void _Reset()
		{	
		_Reset(0, 0);
		}
	template<class _Ty2>
		void _Reset(const _Ptr_base<_Ty2>& _Other)
		{	
		_Reset(_Other._Ptr, _Other._Rep);
		}
	template<class _Ty2>
		void _Reset(const _Ptr_base<_Ty2>& _Other, bool _Throw)
		{	
		_Reset(_Other._Ptr, _Other._Rep, _Throw);
		}
	template<class _Ty2>
		void _Reset(const _Ptr_base<_Ty2>& _Other, const _Static_tag&)
		{	
		_Reset(static_cast<_Ty *>(_Other._Ptr), _Other._Rep);
		}
	template<class _Ty2>
		void _Reset(const _Ptr_base<_Ty2>& _Other, const _Const_tag&)
		{	
		_Reset(const_cast<_Ty *>(_Other._Ptr), _Other._Rep);
		}
	template<class _Ty2>
		void _Reset(const _Ptr_base<_Ty2>& _Other, const _Dynamic_tag&)
		{	
		_Ty *_Ptr = dynamic_cast<_Ty *>(_Other._Ptr);
		if (_Ptr)
			_Reset(_Ptr, _Other._Rep);
		else
			_Reset();
		}
	template<class _Ty2>
		void _Reset(auto_ptr<_Ty2>&& _Other)
		{	
		_Ty2 *_Px = _Other.get();
		_Reset0(_Px, new _Ref_count<_Ty>(_Px));
		_Other.release();
		_Enable_shared(_Px, _Rep);
		}
	template<class _Ty2>
		void _Reset(_Ty *_Ptr, const _Ptr_base<_Ty2>& _Other)
		{	
		_Reset(_Ptr, _Other._Rep);
		}
	void _Reset(_Ty *_Other_ptr, _Ref_count_base *_Other_rep)
		{	
		if (_Other_rep)
			_Other_rep->_Incref();
		_Reset0(_Other_ptr, _Other_rep);
		}
	void _Reset(_Ty *_Other_ptr, _Ref_count_base *_Other_rep, bool _Throw)
		{	
		if (_Other_rep && _Other_rep->_Incref_nz())
			_Reset0(_Other_ptr, _Other_rep);
		else if (_Throw)
			throw bad_weak_ptr(0);
		}
	void _Reset0(_Ty *_Other_ptr, _Ref_count_base *_Other_rep)
		{	
		if (_Rep != 0)
			_Rep->_Decref();
		_Rep = _Other_rep;
		_Ptr = _Other_ptr;
		}
	void _Decwref()
		{	
		if (_Rep != 0)
			_Rep->_Decwref();
		}
	void _Resetw()
		{	
		_Resetw((_Ty *)0, 0);
		}
	template<class _Ty2>
		void _Resetw(const _Ptr_base<_Ty2>& _Other)
		{	
		_Resetw(_Other._Ptr, _Other._Rep);
		}
	template<class _Ty2>
		void _Resetw(const _Ty2 *_Other_ptr, _Ref_count_base *_Other_rep)
		{	
		_Resetw(const_cast<_Ty2*>(_Other_ptr), _Other_rep);
		}
	template<class _Ty2>
		void _Resetw(_Ty2 *_Other_ptr, _Ref_count_base *_Other_rep)
		{	
		if (_Other_rep)
			_Other_rep->_Incwref();
		if (_Rep != 0)
			_Rep->_Decwref();
		_Rep = _Other_rep;
		_Ptr = _Other_ptr;
		}
private:
	_Ty *_Ptr;
	_Ref_count_base *_Rep;
	template<class _Ty0>
		friend class _Ptr_base;
	};
template<class _Ty>
	class shared_ptr
		: public _Ptr_base<_Ty>
	{	
public:
	typedef shared_ptr<_Ty> _Myt;
	typedef _Ptr_base<_Ty> _Mybase;
	shared_ptr() throw ()
		{	
		}
	template<class _Ux>
		explicit shared_ptr(_Ux *_Px)
		{	
		_Resetp(_Px);
		}
	template<class _Ux,
		class _Dx>
		shared_ptr(_Ux *_Px, _Dx _Dt)
		{	
		_Resetp(_Px, _Dt);
		}
	shared_ptr(nullptr_t)
		{	
		}
	template<class _Dx>
		shared_ptr(nullptr_t, _Dx _Dt)
		{	
		_Resetp((_Ty *)0, _Dt);
		}
	template<class _Dx,
		class _Alloc>
		shared_ptr(nullptr_t, _Dx _Dt, _Alloc _Ax)
		{	
		_Resetp((_Ty *)0, _Dt, _Ax);
		}
	template<class _Ux,
		class _Dx,
		class _Alloc>
		shared_ptr(_Ux *_Px, _Dx _Dt, _Alloc _Ax)
		{	
		_Resetp(_Px, _Dt, _Ax);
		}
	template<class _Ty2>
		shared_ptr(const shared_ptr<_Ty2>& _Right, _Ty *_Px) throw ()
		{	
		this->_Reset(_Px, _Right);
		}
	shared_ptr(const _Myt& _Other) throw ()
		{	
		this->_Reset(_Other);
		}
	template<class _Ty2,
		class = typename enable_if<is_convertible<_Ty2 *, _Ty *>::value,
			void>::type>
		shared_ptr(const shared_ptr<_Ty2>& _Other) throw ()
		{	
		this->_Reset(_Other);
		}
	template<class _Ty2>
		explicit shared_ptr(const weak_ptr<_Ty2>& _Other,
			bool _Throw = true)
		{	
		this->_Reset(_Other, _Throw);
		}
	template<class _Ty2>
		shared_ptr(auto_ptr<_Ty2>&& _Other)
		{	
		this->_Reset(::std:: move(_Other));
		}
	template<class _Ty2>
		shared_ptr(const shared_ptr<_Ty2>& _Other, const _Static_tag& _Tag)
		{	
		this->_Reset(_Other, _Tag);
		}
	template<class _Ty2>
		shared_ptr(const shared_ptr<_Ty2>& _Other, const _Const_tag& _Tag)
		{	
		this->_Reset(_Other, _Tag);
		}
	template<class _Ty2>
		shared_ptr(const shared_ptr<_Ty2>& _Other, const _Dynamic_tag& _Tag)
		{	
		this->_Reset(_Other, _Tag);
		}
	shared_ptr(_Myt&& _Right) throw ()
		: _Mybase(::std:: forward<_Myt>(_Right))
		{	
		}
	template<class _Ty2,
		class = typename enable_if<is_convertible<_Ty2 *, _Ty *>::value,
			void>::type>
		shared_ptr(shared_ptr<_Ty2>&& _Right) throw ()
		: _Mybase(::std:: forward<shared_ptr<_Ty2> >(_Right))
		{	
		}
	template<class _Ux,
		class _Dx>
		shared_ptr(unique_ptr<_Ux, _Dx>&& _Right)
		{	
		_Resetp(_Right.release(), _Right.get_deleter());
		}
	template<class _Ux,
		class _Dx>
		_Myt& operator=(unique_ptr<_Ux, _Dx>&& _Right)
		{	
		shared_ptr(::std:: move(_Right)).swap(*this);
		return (*this);
		}
	_Myt& operator=(_Myt&& _Right) throw ()
		{	
		shared_ptr(::std:: move(_Right)).swap(*this);
		return (*this);
		}
	template<class _Ty2>
		_Myt& operator=(shared_ptr<_Ty2>&& _Right) throw ()
		{	
		shared_ptr(::std:: move(_Right)).swap(*this);
		return (*this);
		}
	~shared_ptr() throw ()
		{	
		this->_Decref();
		}
	_Myt& operator=(const _Myt& _Right) throw ()
		{	
		shared_ptr(_Right).swap(*this);
		return (*this);
		}
	template<class _Ty2>
		_Myt& operator=(const shared_ptr<_Ty2>& _Right) throw ()
		{	
		shared_ptr(_Right).swap(*this);
		return (*this);
		}
	template<class _Ty2>
		_Myt& operator=(auto_ptr<_Ty2>&& _Right)
		{	
		shared_ptr(::std:: move(_Right)).swap(*this);
		return (*this);
		}
	void reset() throw ()
		{	
		shared_ptr().swap(*this);
		}
	template<class _Ux>
		void reset(_Ux *_Px)
		{	
		shared_ptr(_Px).swap(*this);
		}
	template<class _Ux,
		class _Dx>
		void reset(_Ux *_Px, _Dx _Dt)
		{	
		shared_ptr(_Px, _Dt).swap(*this);
		}
	template<class _Ux,
		class _Dx,
		class _Alloc>
		void reset(_Ux *_Px, _Dx _Dt, _Alloc _Ax)
		{	
		shared_ptr(_Px, _Dt, _Ax).swap(*this);
		}
	void swap(_Myt& _Other) throw ()
		{	
		this->_Swap(_Other);
		}
	_Ty *get() const throw ()
		{	
		return (this->_Get());
		}
	typename add_reference<_Ty>::type operator*() const throw ()
		{	
		return (*this->_Get());
		}
	_Ty *operator->() const throw ()
		{	
		return (this->_Get());
		}
	bool unique() const throw ()
		{	
		return (this->use_count() == 1);
		}
	explicit operator bool() const throw ()
		{	
		return (this->_Get() != 0);
		}
private:
	template<class _Ux>
		void _Resetp(_Ux *_Px)
		{	
		try {	
		_Resetp0(_Px, new _Ref_count<_Ux>(_Px));
		} catch (...) {	
		delete _Px;
		throw;
		}
		}
	template<class _Ux,
		class _Dx>
		void _Resetp(_Ux *_Px, _Dx _Dt)
		{	
		try {	
		_Resetp0(_Px, new _Ref_count_del<_Ux, _Dx>(_Px, _Dt));
		} catch (...) {	
		_Dt(_Px);
		throw;
		}
		}
	template<class _Ux,
		class _Dx,
		class _Alloc>
		void _Resetp(_Ux *_Px, _Dx _Dt, _Alloc _Ax)
		{	
		typedef _Ref_count_del_alloc<_Ux, _Dx, _Alloc> _Refd;
		typename _Alloc::template rebind<_Refd>::other _Al = _Ax;
		try {	
		_Refd *_Ptr = _Al.allocate(1);
		::new (_Ptr) _Refd(_Px, _Dt, _Al);
		_Resetp0(_Px, _Ptr);
		} catch (...) {	
		_Dt(_Px);
		throw;
		}
		}
public:
	template<class _Ux>
		void _Resetp0(_Ux *_Px, _Ref_count_base *_Rx)
		{	
		this->_Reset0(_Px, _Rx);
		_Enable_shared(_Px, _Rx);
		}
	};
template<class _Ty1,
	class _Ty2>
	bool operator==(const shared_ptr<_Ty1>& _Left,
		const shared_ptr<_Ty2>& _Right) throw ()
	{	
	return (_Left.get() == _Right.get());
	}
template<class _Ty1,
	class _Ty2>
	bool operator!=(const shared_ptr<_Ty1>& _Left,
		const shared_ptr<_Ty2>& _Right) throw ()
	{	
	return (!(_Left == _Right));
	}
template<class _Ty1,
	class _Ty2>
	bool operator<(const shared_ptr<_Ty1>& _Left,
		const shared_ptr<_Ty2>& _Right) throw ()
	{	
	return (less<decltype(_Always_false<_Ty1>::value
		? _Left.get() : _Right.get())>()(
			_Left.get(), _Right.get()));
	}
template<class _Ty1,
	class _Ty2>
	bool operator>=(const shared_ptr<_Ty1>& _Left,
		const shared_ptr<_Ty2>& _Right) throw ()
	{	
	return (!(_Left < _Right));
	}
template<class _Ty1,
	class _Ty2>
	bool operator>(const shared_ptr<_Ty1>& _Left,
		const shared_ptr<_Ty2>& _Right) throw ()
	{	
	return (_Right < _Left);
	}
template<class _Ty1,
	class _Ty2>
	bool operator<=(const shared_ptr<_Ty1>& _Left,
		const shared_ptr<_Ty2>& _Right) throw ()
	{	
	return (!(_Right < _Left));
	}
template<class _Ty>
	bool operator==(const shared_ptr<_Ty>& _Left,
		nullptr_t) throw ()
	{	
	return (_Left.get() == (_Ty *)0);
	}
template<class _Ty>
	bool operator==(nullptr_t,
		const shared_ptr<_Ty>& _Right) throw ()
	{	
	return ((_Ty *)0 == _Right.get());
	}
template<class _Ty>
	bool operator!=(const shared_ptr<_Ty>& _Left,
		nullptr_t _Right) throw ()
	{	
	return (!(_Left == _Right));
	}
template<class _Ty>
	bool operator!=(nullptr_t _Left,
		const shared_ptr<_Ty>& _Right) throw ()
	{	
	return (!(_Left == _Right));
	}
template<class _Ty>
	bool operator<(const shared_ptr<_Ty>& _Left,
		nullptr_t _Right) throw ()
	{	
	return (less<_Ty *>()(_Left.get(), (_Ty *)0));
	}
template<class _Ty>
	bool operator<(nullptr_t _Left,
		const shared_ptr<_Ty>& _Right) throw ()
	{	
	return (less<_Ty *>()((_Ty *)0, _Right.get()));
	}
template<class _Ty>
	bool operator>=(const shared_ptr<_Ty>& _Left,
		nullptr_t _Right) throw ()
	{	
	return (!(_Left < _Right));
	}
template<class _Ty>
	bool operator>=(nullptr_t _Left,
		const shared_ptr<_Ty>& _Right) throw ()
	{	
	return (!(_Left < _Right));
	}
template<class _Ty>
	bool operator>(const shared_ptr<_Ty>& _Left,
		nullptr_t _Right) throw ()
	{	
	return (_Right < _Left);
	}
template<class _Ty>
	bool operator>(nullptr_t _Left,
		const shared_ptr<_Ty>& _Right) throw ()
	{	
	return (_Right < _Left);
	}
template<class _Ty>
	bool operator<=(const shared_ptr<_Ty>& _Left,
		nullptr_t _Right) throw ()
	{	
	return (!(_Right < _Left));
	}
template<class _Ty>
	bool operator<=(nullptr_t _Left,
		const shared_ptr<_Ty>& _Right) throw ()
	{	
	return (!(_Right < _Left));
	}
template<class _Elem,
	class _Traits,
	class _Ty>
	basic_ostream<_Elem, _Traits>&
	operator<<(basic_ostream<_Elem, _Traits>& _Out,
		const shared_ptr<_Ty>& _Px)
	{	
	return (_Out << _Px.get());
	}
template<class _Ty>
	void swap(shared_ptr<_Ty>& _Left,
		shared_ptr<_Ty>& _Right) throw ()
	{	
	_Left.swap(_Right);
	}
template<class _Ty1,
	class _Ty2>
	shared_ptr<_Ty1>
		static_pointer_cast(const shared_ptr<_Ty2>& _Other) throw ()
	{	
	return (shared_ptr<_Ty1>(_Other, _Static_tag()));
	}
template<class _Ty1,
	class _Ty2>
	shared_ptr<_Ty1>
		const_pointer_cast(const shared_ptr<_Ty2>& _Other) throw ()
	{	
	return (shared_ptr<_Ty1>(_Other, _Const_tag()));
	}
template<class _Ty1,
	class _Ty2>
	shared_ptr<_Ty1>
		dynamic_pointer_cast(const shared_ptr<_Ty2>& _Other) throw ()
	{	
	return (shared_ptr<_Ty1>(_Other, _Dynamic_tag()));
	}
template<class _Dx,
	class _Ty>
	_Dx *get_deleter(const shared_ptr<_Ty>& _Sx) throw ()
	{	
	return ((_Dx *)_Sx._Get_deleter(typeid(_Dx)));
	}
template<class _Ty>
	class _Ref_count_obj
	: public _Ref_count_base
	{	
public:
	template<class... _Types>
		_Ref_count_obj(_Types&&... _Args)
		: _Ref_count_base()
		{	
		::new ((void *)&_Storage) _Ty(::std:: forward<_Types>(_Args)...);
		}
	_Ty *_Getptr() const
		{	
		return ((_Ty *)&_Storage);
		}
private:
	virtual void _Destroy()
		{	
		_Getptr()->~_Ty();
		}
	virtual void _Delete_this()
		{	
		delete this;
		}
	typename aligned_storage<sizeof (_Ty),
		alignment_of<_Ty>::value>::type _Storage;
	};
template<class _Ty,
	class _Alloc>
	class _Ref_count_obj_alloc
	: public _Ref_count_base
	{	
public:
	typedef _Ref_count_obj_alloc<_Ty, _Alloc> _Myty;
	typedef typename _Alloc::template rebind<_Myty>::other _Myalty;
	template<class... _Types>
		_Ref_count_obj_alloc(_Myalty _Al, _Types&&... _Args)
		: _Ref_count_base(), _Myal(_Al)
		{	
		::new ((void *)&_Storage) _Ty(::std:: forward<_Types>(_Args)...);
		}
	_Ty *_Getptr() const
		{	
		return ((_Ty *)&_Storage);
		}
private:
	virtual void _Destroy()
		{	
		_Getptr()->~_Ty();
		}
	virtual void _Delete_this()
		{	
		_Myalty _Al = _Myal;
		_Al.destroy(this);
		_Al.deallocate(this, 1);
		}
	typename aligned_storage<sizeof (_Ty),
		alignment_of<_Ty>::value>::type _Storage;
	_Myalty _Myal;	
	};
template<class _Ty,
	class... _Types> inline
		shared_ptr<_Ty> make_shared(_Types&&... _Args)
	{	
	_Ref_count_obj<_Ty> *_Rx =
		new _Ref_count_obj<_Ty>(::std:: forward<_Types>(_Args)...);
	shared_ptr<_Ty> _Ret;
	_Ret._Resetp0(_Rx->_Getptr(), _Rx);
	return (_Ret);
	}
template<class _Ty,
	class _Alloc,
	class... _Types> inline
		shared_ptr<_Ty> allocate_shared(
			const _Alloc& _Al_arg, _Types&&... _Args)
	{	
	typedef _Ref_count_obj_alloc<_Ty, _Alloc> _Refoa;
	typename _Alloc::template rebind<_Refoa>::other _Alref = _Al_arg;
	_Refoa *_Rx = _Alref.allocate(1);
	try {
		::new (_Rx) _Refoa(_Al_arg, ::std:: forward<_Types>(_Args)...);
	} catch (...) {
		_Alref.deallocate(_Rx, 1);
	throw;
	}
	shared_ptr<_Ty> _Ret;
	_Ret._Resetp0(_Rx->_Getptr(), _Rx);
	return (_Ret);
	}
template<class _Ty>
	class weak_ptr
		: public _Ptr_base<_Ty>
	{	
public:
	weak_ptr() throw ()
		{	
		}
	weak_ptr(const weak_ptr& _Other) throw ()
		{	
		this->_Resetw(_Other);
		}
	template<class _Ty2,
		class = typename enable_if<is_convertible<_Ty2 *, _Ty *>::value,
			void>::type>
		weak_ptr(const shared_ptr<_Ty2>& _Other) throw ()
		{	
		this->_Resetw(_Other);
		}
	template<class _Ty2,
		class = typename enable_if<is_convertible<_Ty2 *, _Ty *>::value,
			void>::type>
		weak_ptr(const weak_ptr<_Ty2>& _Other) throw ()
		{	
		this->_Resetw(_Other.lock());
		}
	~weak_ptr() throw ()
		{	
		this->_Decwref();
		}
	weak_ptr& operator=(const weak_ptr& _Right) throw ()
		{	
		this->_Resetw(_Right);
		return (*this);
		}
	template<class _Ty2>
		weak_ptr& operator=(const weak_ptr<_Ty2>& _Right) throw ()
		{	
		this->_Resetw(_Right.lock());
		return (*this);
		}
	template<class _Ty2>
		weak_ptr& operator=(const shared_ptr<_Ty2>& _Right) throw ()
		{	
		this->_Resetw(_Right);
		return (*this);
		}
	void reset() throw ()
		{	
		this->_Resetw();
		}
	void swap(weak_ptr& _Other) throw ()
		{	
		this->_Swap(_Other);
		}
	bool expired() const throw ()
		{	
		return (this->_Expired());
		}
	shared_ptr<_Ty> lock() const throw ()
		{	
		return (shared_ptr<_Ty>(*this, false));
		}
	};
template<class _Ty>
	void swap(weak_ptr<_Ty>& _W1, weak_ptr<_Ty>& _W2) throw ()
	{	
	_W1.swap(_W2);
	}
template<class _Ty>
	class enable_shared_from_this
	{	
public:
	typedef _Ty _EStype;
	shared_ptr<_Ty> shared_from_this()
		{	
		return (shared_ptr<_Ty>(_Wptr));
		}
	shared_ptr<const _Ty> shared_from_this() const
		{	
		return (shared_ptr<const _Ty>(_Wptr));
		}
protected:
	enable_shared_from_this() throw ()
		{	
		}
	enable_shared_from_this(const enable_shared_from_this&) throw ()
		{	
		}
	enable_shared_from_this&
		operator=(const enable_shared_from_this&) throw ()
		{	
		return (*this);
		}
	~enable_shared_from_this() throw ()
		{	
		}
private:
	template<class _Ty1,
		class _Ty2>
		friend void _Do_enable(
			_Ty1 *,
			enable_shared_from_this<_Ty2>*,
			_Ref_count_base *);
	mutable weak_ptr<_Ty> _Wptr;
	};
template<class _Ty1,
	class _Ty2>
	inline void _Do_enable(
		_Ty1 *_Ptr,
		enable_shared_from_this<_Ty2> *_Es,
		_Ref_count_base *_Refptr)
	{	
	_Es->_Wptr._Resetw(_Ptr, _Refptr);
	}
}
namespace std {
template<class _Ty>
	struct default_delete
	{	
	typedef default_delete<_Ty> _Myt;
	default_delete() throw ()
		{	
		}
	template<class _Ty2,
		class = typename enable_if<is_convertible<_Ty2 *, _Ty *>::value,
			void>::type>
		default_delete(const default_delete<_Ty2>&) throw ()
		{	
		}
	void operator()(_Ty *_Ptr) const throw ()
		{	
		static_assert(0 < sizeof (_Ty),
			"can't delete an incomplete type");
		delete _Ptr;
		}
	};
template<class _Ty>
	struct default_delete<_Ty[]>
	{	
	typedef default_delete<_Ty> _Myt;
	default_delete() throw ()
		{	
		}
	template<class _Other>
		void operator()(_Other *) const = delete;
	void operator()(_Ty *_Ptr) const throw ()
		{	
		static_assert(0 < sizeof (_Ty),
			"can't delete an incomplete type");
		delete[] _Ptr;
		}
	};
template<class _Val,
	class _Ty>
	struct _Get_deleter_pointer_type
	{ template<class _Uty> static auto _Fn(int) -> _Identity<typename _Uty::pointer>; template<class _Uty> static auto _Fn(_Wrap_int) -> _Identity<_Val *>; typedef decltype(_Fn<_Ty>(0)) _Decltype; typedef typename _Decltype::type type; };
template<class _Ty,
	class _Dx,
	bool _Empty_deleter>
	class _Unique_ptr_base
	{	
public:
	typedef typename remove_reference<_Dx>::type _Dx_noref;
	typedef typename _Get_deleter_pointer_type<_Ty, _Dx_noref>::type pointer;
	_Unique_ptr_base(pointer _Ptr, _Dx _Dt)
		: _Myptr(_Ptr), _Mydel(_Dt)
		{	
		}
	_Unique_ptr_base(pointer _Ptr)
		: _Myptr(_Ptr)
		{	
		}
	template<class _Ptr2,
		class _Dx2>
		_Unique_ptr_base(_Ptr2 _Ptr, _Dx2 _Dt)
		: _Myptr(_Ptr), _Mydel(_Dt)
		{	
		}
	template<class _Ptr2>
		_Unique_ptr_base(_Ptr2 _Ptr)
		: _Myptr(_Ptr)
		{	
		}
	_Dx_noref& get_deleter()
		{	
		return (_Mydel);
		}
	const _Dx_noref& get_deleter() const
		{	
		return (_Mydel);
		}
	pointer _Myptr;	
	_Dx _Mydel;		
	};
template<class _Ty,
	class _Dx>
	class _Unique_ptr_base<_Ty, _Dx, true>
		: public _Dx
	{	
public:
	typedef _Dx _Mybase;
	typedef typename remove_reference<_Dx>::type _Dx_noref;
	typedef typename _Get_deleter_pointer_type<_Ty, _Dx_noref>::type pointer;
	_Unique_ptr_base(pointer _Ptr, _Dx _Dt) throw ()
		: _Myptr(_Ptr), _Mybase(_Dt)
		{	
		}
	_Unique_ptr_base(pointer _Ptr) throw ()
		: _Myptr(_Ptr)
		{	
		}
	template<class _Ptr2,
		class _Dx2>
		_Unique_ptr_base(_Ptr2 _Ptr, _Dx2 _Dt) throw ()
		: _Myptr(_Ptr), _Mybase(_Dt)
		{	
		}
	template<class _Ptr2>
		_Unique_ptr_base(_Ptr2 _Ptr) throw ()
		: _Myptr(_Ptr)
		{	
		}
	_Dx_noref& get_deleter() throw ()
		{	
		return (*this);
		}
	const _Dx_noref& get_deleter() const throw ()
		{	
		return (*this);
		}
	pointer _Myptr;	
	};
template<class _Ty,
	class _Dx>	
	class unique_ptr
		: private _Unique_ptr_base<_Ty, _Dx,
			is_empty<_Dx>::value
				|| is_same<default_delete<_Ty>, _Dx>::value>
	{	
public:
	typedef unique_ptr<_Ty, _Dx> _Myt;
	typedef _Unique_ptr_base<_Ty, _Dx,
		is_empty<_Dx>::value
			|| is_same<default_delete<_Ty>, _Dx>::value> _Mybase;
	typedef typename _Mybase::pointer pointer;
	typedef _Ty element_type;
	typedef _Dx deleter_type;
	using _Mybase::get_deleter;
	unique_ptr() throw ()
		: _Mybase(pointer())
		{	
		static_assert(!is_pointer<_Dx>::value,
			"unique_ptr constructed with null deleter pointer");
		}
	unique_ptr(nullptr_t) throw ()
		: _Mybase(pointer())
		{	
		static_assert(!is_pointer<_Dx>::value,
			"unique_ptr constructed with null deleter pointer");
		}
	_Myt& operator=(nullptr_t) throw ()
		{	
		reset();
		return (*this);
		}
	explicit unique_ptr(pointer _Ptr) throw ()
		: _Mybase(_Ptr)
		{	
		static_assert(!is_pointer<_Dx>::value,
			"unique_ptr constructed with null deleter pointer");
		}
	unique_ptr(pointer _Ptr,
		typename _If<is_reference<_Dx>::value, _Dx,
			const typename remove_reference<_Dx>::type&>::type _Dt) throw ()
		: _Mybase(_Ptr, _Dt)
		{	
		}
	unique_ptr(pointer _Ptr,
		typename remove_reference<_Dx>::type&& _Dt) throw ()
		: _Mybase(_Ptr, ::std:: move(_Dt))
		{	
		static_assert(!is_reference<_Dx>::value,
			"unique_ptr constructed with reference to rvalue deleter");
		}
	unique_ptr(unique_ptr&& _Right) throw ()
		: _Mybase(_Right.release(),
			::std:: forward<_Dx>(_Right.get_deleter()))
		{	
		}
	template<class _Ty2,
		class _Dx2,
		class = typename enable_if<!is_array<_Ty2>::value
			&& is_convertible<typename unique_ptr<_Ty2, _Dx2>::pointer,
				pointer>::value
			&& ((is_reference<_Dx>::value && is_same<_Dx, _Dx2>::value)
				|| (!is_reference<_Dx>::value
					&& is_convertible<_Dx2, _Dx>::value)),
			void>::type>
		unique_ptr(unique_ptr<_Ty2, _Dx2>&& _Right) throw ()
			: _Mybase(_Right.release(),
				::std:: forward<_Dx2>(_Right.get_deleter()))
		{	
		}
	template<class _Ty2,
		class = typename enable_if<is_convertible<_Ty2 *, _Ty *>::value
			&& is_same<_Dx, default_delete<_Ty> >::value,
			void>::type>
		unique_ptr(auto_ptr<_Ty2>&& _Right) throw ()
			: _Mybase(_Right.release())
		{	
		}
	template<class _Ty2,
		class _Dx2>
		typename enable_if<!is_array<_Ty2>::value
			&& is_convertible<typename unique_ptr<_Ty2, _Dx2>::pointer,
				pointer>::value,
			_Myt&>::type
		operator=(unique_ptr<_Ty2, _Dx2>&& _Right) throw ()
		{	
		reset(_Right.release());
		this->get_deleter() = ::std:: forward<_Dx2>(_Right.get_deleter());
		return (*this);
		}
	_Myt& operator=(_Myt&& _Right) throw ()
		{	
		if (this != &_Right)
			{	
			reset(_Right.release());
			this->get_deleter() = ::std:: forward<_Dx>(_Right.get_deleter());
			}
		return (*this);
		}
	void swap(_Myt& _Right) throw ()
		{	
		_Swap_adl(this->_Myptr, _Right._Myptr);
		_Swap_adl(this->get_deleter(),
			_Right.get_deleter());
		}
	~unique_ptr() throw ()
		{	
		if (this->_Myptr != pointer())
			this->get_deleter()(this->_Myptr);
		}
	typename add_reference<_Ty>::type operator*() const
		{	
		return (*this->_Myptr);
		}
	pointer operator->() const throw ()
		{	
		return (::std:: pointer_traits<pointer>::pointer_to(**this));
		}
	pointer get() const throw ()
		{	
		return (this->_Myptr);
		}
	explicit operator bool() const throw ()
		{	
		return (this->_Myptr != pointer());
		}
	pointer release() throw ()
		{	
		pointer _Ans = this->_Myptr;
		this->_Myptr = pointer();
		return (_Ans);
		}
	void reset(pointer _Ptr = pointer()) throw ()
		{	
		pointer _Old = this->_Myptr;
		this->_Myptr = _Ptr;
		if (_Old != pointer())
			this->get_deleter()(_Old);
		}
	unique_ptr(const _Myt&) = delete;
	_Myt& operator=(const _Myt&) = delete;
	};
template<class _Ty,
	class _Dx>
	class unique_ptr<_Ty[], _Dx>
		: private _Unique_ptr_base<_Ty, _Dx,
			is_empty<_Dx>::value
				|| is_same<default_delete<_Ty[]>, _Dx>::value>
	{	
public:
	typedef unique_ptr<_Ty[], _Dx> _Myt;
	typedef _Unique_ptr_base<_Ty, _Dx,
		is_empty<_Dx>::value
			|| is_same<default_delete<_Ty[]>, _Dx>::value> _Mybase;
	typedef typename _Mybase::pointer pointer;
	typedef _Ty element_type;
	typedef _Dx deleter_type;
	using _Mybase::get_deleter;
	unique_ptr() throw ()
		: _Mybase(pointer())
		{	
		static_assert(!is_pointer<_Dx>::value,
			"unique_ptr constructed with null deleter pointer");
		}
	explicit unique_ptr(pointer _Ptr) throw ()
		: _Mybase(_Ptr)
		{	
		static_assert(!is_pointer<_Dx>::value,
			"unique_ptr constructed with null deleter pointer");
		}
	unique_ptr(pointer _Ptr,
		typename _If<is_reference<_Dx>::value, _Dx,
			const typename remove_reference<_Dx>::type&>::type _Dt) throw ()
		: _Mybase(_Ptr, _Dt)
		{	
		}
	unique_ptr(pointer _Ptr,
		typename remove_reference<_Dx>::type&& _Dt) throw ()
		: _Mybase(_Ptr, ::std:: move(_Dt))
		{	
		static_assert(!is_reference<_Dx>::value,
			"unique_ptr constructed with reference to rvalue deleter");
		}
	unique_ptr(unique_ptr&& _Right) throw ()
		: _Mybase(_Right.release(),
			::std:: forward<_Dx>(_Right.get_deleter()))
		{	
		}
	_Myt& operator=(_Myt&& _Right) throw ()
		{	
		if (this != &_Right)
			{	
			reset(_Right.release());
			this->get_deleter() = ::std:: move(_Right.get_deleter());
			}
		return (*this);
		}
	unique_ptr(nullptr_t) throw ()
		: _Mybase(pointer())
		{	
		static_assert(!is_pointer<_Dx>::value,
			"unique_ptr constructed with null deleter pointer");
		}
	_Myt& operator=(nullptr_t) throw ()
		{	
		reset();
		return (*this);
		}
	void reset(nullptr_t) throw ()
		{	
		reset();
		}
	void swap(_Myt& _Right) throw ()
		{	
		_Swap_adl(this->_Myptr, _Right._Myptr);
		_Swap_adl(this->get_deleter(), _Right.get_deleter());
		}
	~unique_ptr() throw ()
		{	
		_Delete();
		}
	typename add_reference<_Ty>::type operator[](size_t _Idx) const
		{	
		return (this->_Myptr[_Idx]);
		}
	pointer get() const throw ()
		{	
		return (this->_Myptr);
		}
	explicit operator bool() const throw ()
		{	
		return (this->_Myptr != pointer());
		}
	pointer release() throw ()
		{	
		pointer _Ans = this->_Myptr;
		this->_Myptr = pointer();
		return (_Ans);
		}
	void reset(pointer _Ptr = pointer()) throw ()
		{	
		_Delete();
		this->_Myptr = _Ptr;
		}
	template<class _Ptr2>
		explicit unique_ptr(_Ptr2) = delete;
	template<class _Ptr2,
		class _Dx2>
		unique_ptr(_Ptr2, _Dx2) = delete;
	unique_ptr(const _Myt&) = delete;
	_Myt& operator=(const _Myt&) = delete;
	template<class _Ptr2>
		void reset(_Ptr2) = delete;
private:
	void _Delete()
		{	
		if (this->_Myptr != pointer())
			this->get_deleter()(this->_Myptr);
		}
	};
template<class _Ty,
	class... _Types> inline
	typename enable_if<!is_array<_Ty>::value,
		unique_ptr<_Ty> >::type make_unique(_Types&&... _Args)
	{	
	return (unique_ptr<_Ty>(new _Ty(::std:: forward<_Types>(_Args)...)));
	}
template<class _Ty> inline
	typename enable_if<is_array<_Ty>::value && extent<_Ty>::value == 0,
		unique_ptr<_Ty> >::type make_unique(size_t _Size)
	{	
	typedef typename remove_extent<_Ty>::type _Elem;
	return (unique_ptr<_Ty>(new _Elem[_Size]()));
	}
template<class _Ty,
	class... _Types>
	typename enable_if<extent<_Ty>::value != 0,
		void>::type make_unique(_Types&&...) = delete;
template<class _Ty,
	class _Dx>
	void swap(unique_ptr<_Ty, _Dx>& _Left,
		unique_ptr<_Ty, _Dx>& _Right) throw ()
	{	
	_Left.swap(_Right);
	}
template<class _Ty1,
	class _Dx1,
	class _Ty2,
	class _Dx2>
	bool operator==(const unique_ptr<_Ty1, _Dx1>& _Left,
		const unique_ptr<_Ty2, _Dx2>& _Right)
	{	
	return (_Left.get() == _Right.get());
	}
template<class _Ty1,
	class _Dx1,
	class _Ty2,
	class _Dx2>
	bool operator!=(const unique_ptr<_Ty1, _Dx1>& _Left,
		const unique_ptr<_Ty2, _Dx2>& _Right)
	{	
	return (!(_Left == _Right));
	}
template<class _Ty1,
	class _Dx1,
	class _Ty2,
	class _Dx2>
	bool operator<(const unique_ptr<_Ty1, _Dx1>& _Left,
		const unique_ptr<_Ty2, _Dx2>& _Right)
	{	
	typedef typename unique_ptr<_Ty1, _Dx1>::pointer _Ptr1;
	typedef typename unique_ptr<_Ty2, _Dx2>::pointer _Ptr2;
	typedef typename common_type<_Ptr1, _Ptr2>::type _Common;
	return (less<_Common>()(_Left.get(), _Right.get()));
	}
template<class _Ty1,
	class _Dx1,
	class _Ty2,
	class _Dx2>
	bool operator>=(const unique_ptr<_Ty1, _Dx1>& _Left,
		const unique_ptr<_Ty2, _Dx2>& _Right)
	{	
	return (!(_Left < _Right));
	}
template<class _Ty1,
	class _Dx1,
	class _Ty2,
	class _Dx2>
	bool operator>(const unique_ptr<_Ty1, _Dx1>& _Left,
		const unique_ptr<_Ty2, _Dx2>& _Right)
	{	
	return (_Right < _Left);
	}
template<class _Ty1,
	class _Dx1,
	class _Ty2,
	class _Dx2>
	bool operator<=(const unique_ptr<_Ty1, _Dx1>& _Left,
		const unique_ptr<_Ty2, _Dx2>& _Right)
	{	
	return (!(_Right < _Left));
	}
template<class _Ty,
	class _Dx>
	bool operator==(const unique_ptr<_Ty, _Dx>& _Left,
		nullptr_t) throw ()
	{	
	return (!_Left);
	}
template<class _Ty,
	class _Dx>
	bool operator==(nullptr_t,
		const unique_ptr<_Ty, _Dx>& _Right) throw ()
	{	
	return (!_Right);
	}
template<class _Ty,
	class _Dx>
	bool operator!=(const unique_ptr<_Ty, _Dx>& _Left,
		nullptr_t _Right) throw ()
	{	
	return (!(_Left == _Right));
	}
template<class _Ty,
	class _Dx>
	bool operator!=(nullptr_t _Left,
		const unique_ptr<_Ty, _Dx>& _Right) throw ()
	{	
	return (!(_Left == _Right));
	}
template<class _Ty,
	class _Dx>
	bool operator<(const unique_ptr<_Ty, _Dx>& _Left,
		nullptr_t _Right)
	{	
	typedef typename unique_ptr<_Ty, _Dx>::pointer _Ptr;
	return (less<_Ptr>()(_Left.get(), _Right));
	}
template<class _Ty,
	class _Dx>
	bool operator<(nullptr_t _Left,
		const unique_ptr<_Ty, _Dx>& _Right)
	{	
	typedef typename unique_ptr<_Ty, _Dx>::pointer _Ptr;
	return (less<_Ptr>()(_Left, _Right.get()));
	}
template<class _Ty,
	class _Dx>
	bool operator>=(const unique_ptr<_Ty, _Dx>& _Left,
		nullptr_t _Right)
	{	
	return (!(_Left < _Right));
	}
template<class _Ty,
	class _Dx>
	bool operator>=(nullptr_t _Left,
		const unique_ptr<_Ty, _Dx>& _Right)
	{	
	return (!(_Left < _Right));
	}
template<class _Ty,
	class _Dx>
	bool operator>(const unique_ptr<_Ty, _Dx>& _Left,
		nullptr_t _Right)
	{	
	return (_Right < _Left);
	}
template<class _Ty,
	class _Dx>
	bool operator>(nullptr_t _Left,
		const unique_ptr<_Ty, _Dx>& _Right)
	{	
	return (_Right < _Left);
	}
template<class _Ty,
	class _Dx>
	bool operator<=(const unique_ptr<_Ty, _Dx>& _Left,
		nullptr_t _Right)
	{	
	return (!(_Right < _Left));
	}
template<class _Ty,
	class _Dx>
	bool operator<=(nullptr_t _Left,
		const unique_ptr<_Ty, _Dx>& _Right)
	{	
	return (!(_Right < _Left));
	}
enum class pointer_safety {	
	relaxed,
	preferred,
	strict
	};
typedef pointer_safety _Pointer_safety;
inline void declare_reachable(void *)
	{	
	}
template<class _Ty> inline
	_Ty *undeclare_reachable(_Ty *_Ptr)
	{	
	return (_Ptr);
	}
inline void declare_no_pointers(char *, size_t)
	{	
	}
inline void undeclare_no_pointers(char *, size_t)
	{	
	}
inline _Pointer_safety get_pointer_safety() throw ()
	{	
	return (pointer_safety::relaxed);
	}
namespace tr1 {	
using ::std:: allocate_shared;
using ::std:: bad_weak_ptr;
using ::std:: const_pointer_cast;
using ::std:: dynamic_pointer_cast;
using ::std:: enable_shared_from_this;
using ::std:: get_deleter;
using ::std:: make_shared;
using ::std:: shared_ptr;
using ::std:: static_pointer_cast;
using ::std:: swap;
using ::std:: weak_ptr;
}	
template<class _Ty>
	struct owner_less;	
template<class _Ty>
	struct owner_less<shared_ptr<_Ty> >
		: public binary_function<shared_ptr<_Ty>, shared_ptr<_Ty>, bool>
	{	
	bool operator()(const shared_ptr<_Ty>& _Left,
		const shared_ptr<_Ty>& _Right) const
		{	
		return (_Left.owner_before(_Right));
		}
	bool operator()(const shared_ptr<_Ty>& _Left,
		const weak_ptr<_Ty>& _Right) const
		{	
		return (_Left.owner_before(_Right));
		}
	bool operator()(const weak_ptr<_Ty>& _Left,
		const shared_ptr<_Ty>& _Right) const
		{	
		return (_Left.owner_before(_Right));
		}
	};
template<class _Ty>
	struct owner_less<weak_ptr<_Ty> >
		: public binary_function<weak_ptr<_Ty>, weak_ptr<_Ty>, bool>
	{	
	bool operator()(const weak_ptr<_Ty>& _Left,
		const weak_ptr<_Ty>& _Right) const
		{	
		return (_Left.owner_before(_Right));
		}
	bool operator()(const weak_ptr<_Ty>& _Left,
		const shared_ptr<_Ty>& _Right) const
		{	
		return (_Left.owner_before(_Right));
		}
	bool operator()(const shared_ptr<_Ty>& _Left,
		const weak_ptr<_Ty>& _Right) const
		{	
		return (_Left.owner_before(_Right));
		}
	};
template<class _Ty,
	class _Dx>
	struct hash<unique_ptr<_Ty, _Dx> >
		: public unary_function<unique_ptr<_Ty, _Dx>, size_t>
	{	
	typedef unique_ptr<_Ty, _Dx> _Kty;
	typedef typename _Kty::pointer _Ptrtype;
	size_t operator()(const _Kty& _Keyval) const
		{	
		return (hash<_Ptrtype>()(_Keyval.get()));
		}
	};
template<class _Ty>
	struct hash<shared_ptr<_Ty> >
		: public unary_function<shared_ptr<_Ty>, size_t>
	{	
	typedef shared_ptr<_Ty> _Kty;
	typedef _Ty *_Ptrtype;
	size_t operator()(const _Kty& _Keyval) const
		{	
		return (hash<_Ptrtype>()(_Keyval.get()));
		}
	};
inline void *align(size_t _Bound, size_t _Size,
	void *& _Ptr, size_t& _Space) throw ()
	{	
	size_t _Off = (size_t)((uintptr_t)_Ptr & (_Bound - 1));
	if (0 < _Off)
		_Off = _Bound - _Off;	
	if (_Space < _Off || _Space - _Off < _Size)
		return (0);
	else
		{	
		_Ptr = (char *)_Ptr + _Off;
		_Space -= _Off;
		return (_Ptr);
		}
	}
struct _Shared_ptr_spin_lock
	{	
	_Shared_ptr_spin_lock()
		{	
		_Lock_shared_ptr_spin_lock();
		}
	~_Shared_ptr_spin_lock() throw ()
		{	
		_Unlock_shared_ptr_spin_lock();
		}
	};
template <class _Ty> inline
	bool atomic_is_lock_free(const shared_ptr<_Ty> *)
	{	
	return (false);
	}
template <class _Ty> inline
	shared_ptr<_Ty> atomic_load_explicit(const shared_ptr<_Ty> *_Ptr,
		memory_order)
	{	
	_Shared_ptr_spin_lock _Lock;
	shared_ptr<_Ty> _Result = *_Ptr;
	return (_Result);
	}
template <class _Ty> inline
	shared_ptr<_Ty> atomic_load(const shared_ptr<_Ty> *_Ptr)
	{	
	return (atomic_load_explicit(_Ptr, memory_order_seq_cst));
	}
template <class _Ty> inline
	void atomic_store_explicit(shared_ptr<_Ty> *_Ptr, shared_ptr<_Ty> _Other,
		memory_order)
	{	
	_Shared_ptr_spin_lock _Lock;
	_Ptr->swap(_Other);
	}
template <class _Ty> inline
	void atomic_store(shared_ptr<_Ty> *_Ptr, shared_ptr<_Ty> _Other)
	{	
	atomic_store_explicit(_Ptr, _Other, memory_order_seq_cst);
	}
template <class _Ty> inline
	shared_ptr<_Ty> atomic_exchange_explicit(
		shared_ptr<_Ty> *_Ptr, shared_ptr<_Ty> _Other,
		memory_order)
	{	
	_Shared_ptr_spin_lock _Lock;
	shared_ptr<_Ty> _Result = *_Ptr;
	_Ptr->swap(_Other);
	return (_Result);
	}
template <class _Ty> inline
	shared_ptr<_Ty> atomic_exchange(
		shared_ptr<_Ty> *_Ptr, shared_ptr<_Ty> _Other)
	{	
	return (atomic_exchange_explicit(_Ptr, _Other, memory_order_seq_cst));
	}
template <class _Ty> inline
	bool atomic_compare_exchange_weak_explicit(
		shared_ptr<_Ty> *_Ptr, shared_ptr<_Ty> *_Exp, shared_ptr<_Ty> _Value,
		memory_order, memory_order)
	{	
	_Shared_ptr_spin_lock _Lock;
	bool _Success = _Ptr->get() == _Exp->get();
	if (_Success)
		*_Ptr = _Value;
	else
		{	
		*_Exp = *_Ptr;
		}
	return (_Success);
	}
template <class _Ty> inline
	bool atomic_compare_exchange_weak(
		shared_ptr<_Ty> *_Ptr, shared_ptr<_Ty> *_Exp,
			shared_ptr<_Ty> _Value)
	{	
	return (atomic_compare_exchange_weak_explicit(_Ptr, _Exp, _Value,
		memory_order_seq_cst, memory_order_seq_cst));
	}
template <class _Ty> inline
	bool atomic_compare_exchange_strong_explicit(
		shared_ptr<_Ty> *_Ptr, shared_ptr<_Ty> *_Exp, shared_ptr<_Ty> _Value,
		memory_order, memory_order)
	{	
	return (atomic_compare_exchange_weak_explicit(_Ptr, _Exp, _Value,
		memory_order_seq_cst, memory_order_seq_cst));
	}
template <class _Ty> inline
	bool atomic_compare_exchange_strong(
	shared_ptr<_Ty> *_Ptr, shared_ptr<_Ty> *_Exp,
		shared_ptr<_Ty> _Value)
	{	
	return (atomic_compare_exchange_strong_explicit(_Ptr, _Exp, _Value,
		memory_order_seq_cst, memory_order_seq_cst));
	}
}
 #pragma warning(pop)
 #pragma pack(pop)
namespace Schladetsch { namespace Events { namespace Detail
{
    struct Null
    {
        typedef Null Next, Prev, Value, Type;
    };
    template <int N>
    struct Number
    {
        enum { Value = N };
    };
    #line 35 "c:\\dev\\cppevents\\include\\schladetsch\\events\\detail\\arity.h"
    template < class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7>
    struct Arity : Number<8> { };
    template <> struct Arity<    Null , Null , Null , Null , Null , Null , Null , Null> : Number<0> {}; template < class T0> struct Arity<  T0 ,  Null , Null , Null , Null , Null , Null , Null> : Number<1> {}; template < class T0 , class T1> struct Arity<  T0 , T1 ,  Null , Null , Null , Null , Null , Null> : Number<2> {}; template < class T0 , class T1 , class T2> struct Arity<  T0 , T1 , T2 ,  Null , Null , Null , Null , Null> : Number<3> {}; template < class T0 , class T1 , class T2 , class T3> struct Arity<  T0 , T1 , T2 , T3 ,  Null , Null , Null , Null> : Number<4> {}; template < class T0 , class T1 , class T2 , class T3 , class T4> struct Arity<  T0 , T1 , T2 , T3 , T4 ,  Null , Null , Null> : Number<5> {}; template < class T0 , class T1 , class T2 , class T3 , class T4 , class T5> struct Arity<  T0 , T1 , T2 , T3 , T4 , T5 ,  Null , Null> : Number<6> {}; template < class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6> struct Arity<  T0 , T1 , T2 , T3 , T4 , T5 , T6 ,  Null> : Number<7> {};
} } }
namespace Schladetsch { namespace Events { namespace Detail
{
    template <int>
    struct Delegate;
    template <> struct Delegate<0> { template <   class = Null , class = Null , class = Null , class = Null , class = Null , class = Null , class = Null , class = Null> struct Given { virtual ~Given() {} virtual void Invoke() { } }; }; template <> struct Delegate<1> { template < class T0 ,  class = Null , class = Null , class = Null , class = Null , class = Null , class = Null , class = Null> struct Given { virtual ~Given() {} virtual void Invoke( T0) { } }; }; template <> struct Delegate<2> { template < class T0 , class T1 ,  class = Null , class = Null , class = Null , class = Null , class = Null , class = Null> struct Given { virtual ~Given() {} virtual void Invoke( T0 , T1) { } }; }; template <> struct Delegate<3> { template < class T0 , class T1 , class T2 ,  class = Null , class = Null , class = Null , class = Null , class = Null> struct Given { virtual ~Given() {} virtual void Invoke( T0 , T1 , T2) { } }; }; template <> struct Delegate<4> { template < class T0 , class T1 , class T2 , class T3 ,  class = Null , class = Null , class = Null , class = Null> struct Given { virtual ~Given() {} virtual void Invoke( T0 , T1 , T2 , T3) { } }; }; template <> struct Delegate<5> { template < class T0 , class T1 , class T2 , class T3 , class T4 ,  class = Null , class = Null , class = Null> struct Given { virtual ~Given() {} virtual void Invoke( T0 , T1 , T2 , T3 , T4) { } }; }; template <> struct Delegate<6> { template < class T0 , class T1 , class T2 , class T3 , class T4 , class T5 ,  class = Null , class = Null> struct Given { virtual ~Given() {} virtual void Invoke( T0 , T1 , T2 , T3 , T4 , T5) { } }; }; template <> struct Delegate<7> { template < class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 ,  class = Null> struct Given { virtual ~Given() {} virtual void Invoke( T0 , T1 , T2 , T3 , T4 , T5 , T6) { } }; };
    template <int>
    struct CreateFunction;
    #line 1 "c:\\sdk\\boost\\boost\\preprocessor\\iteration\\detail\\iter\\forward1.hpp"
        template <>
        struct CreateFunction<0>
        {
            template <   class = Null , class = Null , class = Null , class = Null , class = Null , class = Null , class = Null , class = Null>
            struct Given : Delegate<0>::Given<>
            {
                typedef void (*Function)();
                Function fun;
                Given(Function F) : fun(F) { }
                void Invoke()
                {
                    fun();
                }
            };
        };
        template <>
        struct CreateFunction<1>
        {
            template < class T0 ,  class = Null , class = Null , class = Null , class = Null , class = Null , class = Null , class = Null>
            struct Given : Delegate<1>::Given< T0>
            {
                typedef void (*Function)( T0);
                Function fun;
                Given(Function F) : fun(F) { }
                void Invoke( T0 t0)
                {
                    fun( t0);
                }
            };
        };
        template <>
        struct CreateFunction<2>
        {
            template < class T0 , class T1 ,  class = Null , class = Null , class = Null , class = Null , class = Null , class = Null>
            struct Given : Delegate<2>::Given< T0 , T1>
            {
                typedef void (*Function)( T0 , T1);
                Function fun;
                Given(Function F) : fun(F) { }
                void Invoke( T0 t0 , T1 t1)
                {
                    fun( t0 , t1);
                }
            };
        };
        template <>
        struct CreateFunction<3>
        {
            template < class T0 , class T1 , class T2 ,  class = Null , class = Null , class = Null , class = Null , class = Null>
            struct Given : Delegate<3>::Given< T0 , T1 , T2>
            {
                typedef void (*Function)( T0 , T1 , T2);
                Function fun;
                Given(Function F) : fun(F) { }
                void Invoke( T0 t0 , T1 t1 , T2 t2)
                {
                    fun( t0 , t1 , t2);
                }
            };
        };
        template <>
        struct CreateFunction<4>
        {
            template < class T0 , class T1 , class T2 , class T3 ,  class = Null , class = Null , class = Null , class = Null>
            struct Given : Delegate<4>::Given< T0 , T1 , T2 , T3>
            {
                typedef void (*Function)( T0 , T1 , T2 , T3);
                Function fun;
                Given(Function F) : fun(F) { }
                void Invoke( T0 t0 , T1 t1 , T2 t2 , T3 t3)
                {
                    fun( t0 , t1 , t2 , t3);
                }
            };
        };
        template <>
        struct CreateFunction<5>
        {
            template < class T0 , class T1 , class T2 , class T3 , class T4 ,  class = Null , class = Null , class = Null>
            struct Given : Delegate<5>::Given< T0 , T1 , T2 , T3 , T4>
            {
                typedef void (*Function)( T0 , T1 , T2 , T3 , T4);
                Function fun;
                Given(Function F) : fun(F) { }
                void Invoke( T0 t0 , T1 t1 , T2 t2 , T3 t3 , T4 t4)
                {
                    fun( t0 , t1 , t2 , t3 , t4);
                }
            };
        };
        template <>
        struct CreateFunction<6>
        {
            template < class T0 , class T1 , class T2 , class T3 , class T4 , class T5 ,  class = Null , class = Null>
            struct Given : Delegate<6>::Given< T0 , T1 , T2 , T3 , T4 , T5>
            {
                typedef void (*Function)( T0 , T1 , T2 , T3 , T4 , T5);
                Function fun;
                Given(Function F) : fun(F) { }
                void Invoke( T0 t0 , T1 t1 , T2 t2 , T3 t3 , T4 t4 , T5 t5)
                {
                    fun( t0 , t1 , t2 , t3 , t4 , t5);
                }
            };
        };
        template <>
        struct CreateFunction<7>
        {
            template < class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 ,  class = Null>
            struct Given : Delegate<7>::Given< T0 , T1 , T2 , T3 , T4 , T5 , T6>
            {
                typedef void (*Function)( T0 , T1 , T2 , T3 , T4 , T5 , T6);
                Function fun;
                Given(Function F) : fun(F) { }
                void Invoke( T0 t0 , T1 t1 , T2 t2 , T3 t3 , T4 t4 , T5 t5 , T6 t6)
                {
                    fun( t0 , t1 , t2 , t3 , t4 , t5 , t6);
                }
            };
        };
    template <int, bool>
    struct CreateMethod;
    #line 1 "c:\\sdk\\boost\\boost\\preprocessor\\iteration\\detail\\iter\\forward1.hpp"
        template <>
        struct CreateMethod<0,false>
        {
            template <   class = Null , class = Null , class = Null , class = Null , class = Null , class = Null , class = Null , class = Null>
            struct Given
            {
                template <class Class>
                struct Type : Delegate<0>::Given<>
                {
                    typedef void (Class::*Method)();
                    typedef Class *Servant;
                    Servant object;
                    Method method;
                    Type(Servant Q, Method M) : object(Q), method(M) { }
                    void Invoke()
                    {
                        (object->*method)();
                    }
                };
            };
        };
        template <>
        struct CreateMethod<0, true>
        {
            template <   class = Null , class = Null , class = Null , class = Null , class = Null , class = Null , class = Null , class = Null>
            struct Given
            {
                template <class Class>
                struct Type : Delegate<0>::Given<>
                {
                    typedef void (Class::*Method)() const;
                    typedef const Class *Servant;
                    Servant object;
                    Method method;
                    Type(Servant Q, Method M) : object(Q), method(M) { }
                    void Invoke()
                    {
                        (object->*method)();
                    }
                };
            };
        };
        template <>
        struct CreateMethod<1,false>
        {
            template < class T0 ,  class = Null , class = Null , class = Null , class = Null , class = Null , class = Null , class = Null>
            struct Given
            {
                template <class Class>
                struct Type : Delegate<1>::Given< T0>
                {
                    typedef void (Class::*Method)( T0);
                    typedef Class *Servant;
                    Servant object;
                    Method method;
                    Type(Servant Q, Method M) : object(Q), method(M) { }
                    void Invoke( T0 t0)
                    {
                        (object->*method)( t0);
                    }
                };
            };
        };
        template <>
        struct CreateMethod<1, true>
        {
            template < class T0 ,  class = Null , class = Null , class = Null , class = Null , class = Null , class = Null , class = Null>
            struct Given
            {
                template <class Class>
                struct Type : Delegate<1>::Given< T0>
                {
                    typedef void (Class::*Method)( T0) const;
                    typedef const Class *Servant;
                    Servant object;
                    Method method;
                    Type(Servant Q, Method M) : object(Q), method(M) { }
                    void Invoke( T0 t0)
                    {
                        (object->*method)( t0);
                    }
                };
            };
        };
        template <>
        struct CreateMethod<2,false>
        {
            template < class T0 , class T1 ,  class = Null , class = Null , class = Null , class = Null , class = Null , class = Null>
            struct Given
            {
                template <class Class>
                struct Type : Delegate<2>::Given< T0 , T1>
                {
                    typedef void (Class::*Method)( T0 , T1);
                    typedef Class *Servant;
                    Servant object;
                    Method method;
                    Type(Servant Q, Method M) : object(Q), method(M) { }
                    void Invoke( T0 t0 , T1 t1)
                    {
                        (object->*method)( t0 , t1);
                    }
                };
            };
        };
        template <>
        struct CreateMethod<2, true>
        {
            template < class T0 , class T1 ,  class = Null , class = Null , class = Null , class = Null , class = Null , class = Null>
            struct Given
            {
                template <class Class>
                struct Type : Delegate<2>::Given< T0 , T1>
                {
                    typedef void (Class::*Method)( T0 , T1) const;
                    typedef const Class *Servant;
                    Servant object;
                    Method method;
                    Type(Servant Q, Method M) : object(Q), method(M) { }
                    void Invoke( T0 t0 , T1 t1)
                    {
                        (object->*method)( t0 , t1);
                    }
                };
            };
        };
        template <>
        struct CreateMethod<3,false>
        {
            template < class T0 , class T1 , class T2 ,  class = Null , class = Null , class = Null , class = Null , class = Null>
            struct Given
            {
                template <class Class>
                struct Type : Delegate<3>::Given< T0 , T1 , T2>
                {
                    typedef void (Class::*Method)( T0 , T1 , T2);
                    typedef Class *Servant;
                    Servant object;
                    Method method;
                    Type(Servant Q, Method M) : object(Q), method(M) { }
                    void Invoke( T0 t0 , T1 t1 , T2 t2)
                    {
                        (object->*method)( t0 , t1 , t2);
                    }
                };
            };
        };
        template <>
        struct CreateMethod<3, true>
        {
            template < class T0 , class T1 , class T2 ,  class = Null , class = Null , class = Null , class = Null , class = Null>
            struct Given
            {
                template <class Class>
                struct Type : Delegate<3>::Given< T0 , T1 , T2>
                {
                    typedef void (Class::*Method)( T0 , T1 , T2) const;
                    typedef const Class *Servant;
                    Servant object;
                    Method method;
                    Type(Servant Q, Method M) : object(Q), method(M) { }
                    void Invoke( T0 t0 , T1 t1 , T2 t2)
                    {
                        (object->*method)( t0 , t1 , t2);
                    }
                };
            };
        };
        template <>
        struct CreateMethod<4,false>
        {
            template < class T0 , class T1 , class T2 , class T3 ,  class = Null , class = Null , class = Null , class = Null>
            struct Given
            {
                template <class Class>
                struct Type : Delegate<4>::Given< T0 , T1 , T2 , T3>
                {
                    typedef void (Class::*Method)( T0 , T1 , T2 , T3);
                    typedef Class *Servant;
                    Servant object;
                    Method method;
                    Type(Servant Q, Method M) : object(Q), method(M) { }
                    void Invoke( T0 t0 , T1 t1 , T2 t2 , T3 t3)
                    {
                        (object->*method)( t0 , t1 , t2 , t3);
                    }
                };
            };
        };
        template <>
        struct CreateMethod<4, true>
        {
            template < class T0 , class T1 , class T2 , class T3 ,  class = Null , class = Null , class = Null , class = Null>
            struct Given
            {
                template <class Class>
                struct Type : Delegate<4>::Given< T0 , T1 , T2 , T3>
                {
                    typedef void (Class::*Method)( T0 , T1 , T2 , T3) const;
                    typedef const Class *Servant;
                    Servant object;
                    Method method;
                    Type(Servant Q, Method M) : object(Q), method(M) { }
                    void Invoke( T0 t0 , T1 t1 , T2 t2 , T3 t3)
                    {
                        (object->*method)( t0 , t1 , t2 , t3);
                    }
                };
            };
        };
        template <>
        struct CreateMethod<5,false>
        {
            template < class T0 , class T1 , class T2 , class T3 , class T4 ,  class = Null , class = Null , class = Null>
            struct Given
            {
                template <class Class>
                struct Type : Delegate<5>::Given< T0 , T1 , T2 , T3 , T4>
                {
                    typedef void (Class::*Method)( T0 , T1 , T2 , T3 , T4);
                    typedef Class *Servant;
                    Servant object;
                    Method method;
                    Type(Servant Q, Method M) : object(Q), method(M) { }
                    void Invoke( T0 t0 , T1 t1 , T2 t2 , T3 t3 , T4 t4)
                    {
                        (object->*method)( t0 , t1 , t2 , t3 , t4);
                    }
                };
            };
        };
        template <>
        struct CreateMethod<5, true>
        {
            template < class T0 , class T1 , class T2 , class T3 , class T4 ,  class = Null , class = Null , class = Null>
            struct Given
            {
                template <class Class>
                struct Type : Delegate<5>::Given< T0 , T1 , T2 , T3 , T4>
                {
                    typedef void (Class::*Method)( T0 , T1 , T2 , T3 , T4) const;
                    typedef const Class *Servant;
                    Servant object;
                    Method method;
                    Type(Servant Q, Method M) : object(Q), method(M) { }
                    void Invoke( T0 t0 , T1 t1 , T2 t2 , T3 t3 , T4 t4)
                    {
                        (object->*method)( t0 , t1 , t2 , t3 , t4);
                    }
                };
            };
        };
        template <>
        struct CreateMethod<6,false>
        {
            template < class T0 , class T1 , class T2 , class T3 , class T4 , class T5 ,  class = Null , class = Null>
            struct Given
            {
                template <class Class>
                struct Type : Delegate<6>::Given< T0 , T1 , T2 , T3 , T4 , T5>
                {
                    typedef void (Class::*Method)( T0 , T1 , T2 , T3 , T4 , T5);
                    typedef Class *Servant;
                    Servant object;
                    Method method;
                    Type(Servant Q, Method M) : object(Q), method(M) { }
                    void Invoke( T0 t0 , T1 t1 , T2 t2 , T3 t3 , T4 t4 , T5 t5)
                    {
                        (object->*method)( t0 , t1 , t2 , t3 , t4 , t5);
                    }
                };
            };
        };
        template <>
        struct CreateMethod<6, true>
        {
            template < class T0 , class T1 , class T2 , class T3 , class T4 , class T5 ,  class = Null , class = Null>
            struct Given
            {
                template <class Class>
                struct Type : Delegate<6>::Given< T0 , T1 , T2 , T3 , T4 , T5>
                {
                    typedef void (Class::*Method)( T0 , T1 , T2 , T3 , T4 , T5) const;
                    typedef const Class *Servant;
                    Servant object;
                    Method method;
                    Type(Servant Q, Method M) : object(Q), method(M) { }
                    void Invoke( T0 t0 , T1 t1 , T2 t2 , T3 t3 , T4 t4 , T5 t5)
                    {
                        (object->*method)( t0 , t1 , t2 , t3 , t4 , t5);
                    }
                };
            };
        };
        template <>
        struct CreateMethod<7,false>
        {
            template < class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 ,  class = Null>
            struct Given
            {
                template <class Class>
                struct Type : Delegate<7>::Given< T0 , T1 , T2 , T3 , T4 , T5 , T6>
                {
                    typedef void (Class::*Method)( T0 , T1 , T2 , T3 , T4 , T5 , T6);
                    typedef Class *Servant;
                    Servant object;
                    Method method;
                    Type(Servant Q, Method M) : object(Q), method(M) { }
                    void Invoke( T0 t0 , T1 t1 , T2 t2 , T3 t3 , T4 t4 , T5 t5 , T6 t6)
                    {
                        (object->*method)( t0 , t1 , t2 , t3 , t4 , t5 , t6);
                    }
                };
            };
        };
        template <>
        struct CreateMethod<7, true>
        {
            template < class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 ,  class = Null>
            struct Given
            {
                template <class Class>
                struct Type : Delegate<7>::Given< T0 , T1 , T2 , T3 , T4 , T5 , T6>
                {
                    typedef void (Class::*Method)( T0 , T1 , T2 , T3 , T4 , T5 , T6) const;
                    typedef const Class *Servant;
                    Servant object;
                    Method method;
                    Type(Servant Q, Method M) : object(Q), method(M) { }
                    void Invoke( T0 t0 , T1 t1 , T2 t2 , T3 t3 , T4 t4 , T5 t5 , T6 t6)
                    {
                        (object->*method)( t0 , t1 , t2 , t3 , t4 , t5 , t6);
                    }
                };
            };
        };
    template <int>
    struct CreateEvent;
    #line 1 "c:\\sdk\\boost\\boost\\preprocessor\\iteration\\detail\\iter\\forward1.hpp"
        template <>
        struct CreateEvent<0>
        {
            template <   class = Null , class = Null , class = Null , class = Null , class = Null , class = Null , class = Null , class = Null>
            struct Given
            {
                template <class Ev>
                struct Using : Delegate<0>::Given<>
                {
                    typedef int XXX;
                    typedef Ev EventType;
                    EventType const &ev;
                    Using(EventType const &F) : ev(F) { }
                    void Invoke()
                    {
                        ev();
                    }
                };
            };
        };
        template <>
        struct CreateEvent<1>
        {
            template < class T0 ,  class = Null , class = Null , class = Null , class = Null , class = Null , class = Null , class = Null>
            struct Given
            {
                template <class Ev>
                struct Using : Delegate<1>::Given< T0>
                {
                    typedef int XXX;
                    typedef Ev EventType;
                    EventType const &ev;
                    Using(EventType const &F) : ev(F) { }
                    void Invoke( T0 t0)
                    {
                        ev( t0);
                    }
                };
            };
        };
        template <>
        struct CreateEvent<2>
        {
            template < class T0 , class T1 ,  class = Null , class = Null , class = Null , class = Null , class = Null , class = Null>
            struct Given
            {
                template <class Ev>
                struct Using : Delegate<2>::Given< T0 , T1>
                {
                    typedef int XXX;
                    typedef Ev EventType;
                    EventType const &ev;
                    Using(EventType const &F) : ev(F) { }
                    void Invoke( T0 t0 , T1 t1)
                    {
                        ev( t0 , t1);
                    }
                };
            };
        };
        template <>
        struct CreateEvent<3>
        {
            template < class T0 , class T1 , class T2 ,  class = Null , class = Null , class = Null , class = Null , class = Null>
            struct Given
            {
                template <class Ev>
                struct Using : Delegate<3>::Given< T0 , T1 , T2>
                {
                    typedef int XXX;
                    typedef Ev EventType;
                    EventType const &ev;
                    Using(EventType const &F) : ev(F) { }
                    void Invoke( T0 t0 , T1 t1 , T2 t2)
                    {
                        ev( t0 , t1 , t2);
                    }
                };
            };
        };
        template <>
        struct CreateEvent<4>
        {
            template < class T0 , class T1 , class T2 , class T3 ,  class = Null , class = Null , class = Null , class = Null>
            struct Given
            {
                template <class Ev>
                struct Using : Delegate<4>::Given< T0 , T1 , T2 , T3>
                {
                    typedef int XXX;
                    typedef Ev EventType;
                    EventType const &ev;
                    Using(EventType const &F) : ev(F) { }
                    void Invoke( T0 t0 , T1 t1 , T2 t2 , T3 t3)
                    {
                        ev( t0 , t1 , t2 , t3);
                    }
                };
            };
        };
        template <>
        struct CreateEvent<5>
        {
            template < class T0 , class T1 , class T2 , class T3 , class T4 ,  class = Null , class = Null , class = Null>
            struct Given
            {
                template <class Ev>
                struct Using : Delegate<5>::Given< T0 , T1 , T2 , T3 , T4>
                {
                    typedef int XXX;
                    typedef Ev EventType;
                    EventType const &ev;
                    Using(EventType const &F) : ev(F) { }
                    void Invoke( T0 t0 , T1 t1 , T2 t2 , T3 t3 , T4 t4)
                    {
                        ev( t0 , t1 , t2 , t3 , t4);
                    }
                };
            };
        };
        template <>
        struct CreateEvent<6>
        {
            template < class T0 , class T1 , class T2 , class T3 , class T4 , class T5 ,  class = Null , class = Null>
            struct Given
            {
                template <class Ev>
                struct Using : Delegate<6>::Given< T0 , T1 , T2 , T3 , T4 , T5>
                {
                    typedef int XXX;
                    typedef Ev EventType;
                    EventType const &ev;
                    Using(EventType const &F) : ev(F) { }
                    void Invoke( T0 t0 , T1 t1 , T2 t2 , T3 t3 , T4 t4 , T5 t5)
                    {
                        ev( t0 , t1 , t2 , t3 , t4 , t5);
                    }
                };
            };
        };
        template <>
        struct CreateEvent<7>
        {
            template < class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 ,  class = Null>
            struct Given
            {
                template <class Ev>
                struct Using : Delegate<7>::Given< T0 , T1 , T2 , T3 , T4 , T5 , T6>
                {
                    typedef int XXX;
                    typedef Ev EventType;
                    EventType const &ev;
                    Using(EventType const &F) : ev(F) { }
                    void Invoke( T0 t0 , T1 t1 , T2 t2 , T3 t3 , T4 t4 , T5 t5 , T6 t6)
                    {
                        ev( t0 , t1 , t2 , t3 , t4 , t5 , t6);
                    }
                };
            };
        };
    struct DelegateType
    {
        enum Type { None, Function, Method, Event };
        Type type;
        DelegateType(Type T = None) : type(T) { }
        friend bool operator==(DelegateType A, DelegateType B) { return A.type == B.type; }
        friend bool operator!=(DelegateType A, DelegateType B) { return A.type != B.type; }
    };
} } }
namespace Schladetsch { namespace Events { namespace Detail
{
    template <int N>
    struct InvokerBase
    {
        template < class T0 = Null , class T1 = Null , class T2 = Null , class T3 = Null , class T4 = Null , class T5 = Null , class T6 = Null , class T7 = Null>
        struct SinksType
        {
            typedef typename Delegate<N>::template Given<  T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 > DelegateN;
            typedef DelegateN * Ptr;
            typedef std::list<std::pair<DelegateType, Ptr> > Type;
        };
    };
    template <int>
    struct AddInvoker;
    #line 1 "c:\\sdk\\boost\\boost\\preprocessor\\iteration\\detail\\iter\\forward1.hpp"
        template <>
        struct AddInvoker<0> : InvokerBase<0>
        {
            template < class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7>
            struct Given
            {
                typedef typename SinksType<>::Type Sinks;
                Sinks sinks;
                void operator()() const
                {
                    typename Sinks::const_iterator iter = sinks.begin(), end = sinks.end();
                    for (; iter != end; ++iter)
                    {
                        iter->second->Invoke();
                    }
                }
            };
        };
        template <>
        struct AddInvoker<1> : InvokerBase<1>
        {
            template < class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7>
            struct Given
            {
                typedef typename SinksType< T0>::Type Sinks;
                Sinks sinks;
                void operator()( T0 t0) const
                {
                    typename Sinks::const_iterator iter = sinks.begin(), end = sinks.end();
                    for (; iter != end; ++iter)
                    {
                        iter->second->Invoke( t0);
                    }
                }
            };
        };
        template <>
        struct AddInvoker<2> : InvokerBase<2>
        {
            template < class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7>
            struct Given
            {
                typedef typename SinksType< T0 , T1>::Type Sinks;
                Sinks sinks;
                void operator()( T0 t0 , T1 t1) const
                {
                    typename Sinks::const_iterator iter = sinks.begin(), end = sinks.end();
                    for (; iter != end; ++iter)
                    {
                        iter->second->Invoke( t0 , t1);
                    }
                }
            };
        };
        template <>
        struct AddInvoker<3> : InvokerBase<3>
        {
            template < class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7>
            struct Given
            {
                typedef typename SinksType< T0 , T1 , T2>::Type Sinks;
                Sinks sinks;
                void operator()( T0 t0 , T1 t1 , T2 t2) const
                {
                    typename Sinks::const_iterator iter = sinks.begin(), end = sinks.end();
                    for (; iter != end; ++iter)
                    {
                        iter->second->Invoke( t0 , t1 , t2);
                    }
                }
            };
        };
        template <>
        struct AddInvoker<4> : InvokerBase<4>
        {
            template < class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7>
            struct Given
            {
                typedef typename SinksType< T0 , T1 , T2 , T3>::Type Sinks;
                Sinks sinks;
                void operator()( T0 t0 , T1 t1 , T2 t2 , T3 t3) const
                {
                    typename Sinks::const_iterator iter = sinks.begin(), end = sinks.end();
                    for (; iter != end; ++iter)
                    {
                        iter->second->Invoke( t0 , t1 , t2 , t3);
                    }
                }
            };
        };
        template <>
        struct AddInvoker<5> : InvokerBase<5>
        {
            template < class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7>
            struct Given
            {
                typedef typename SinksType< T0 , T1 , T2 , T3 , T4>::Type Sinks;
                Sinks sinks;
                void operator()( T0 t0 , T1 t1 , T2 t2 , T3 t3 , T4 t4) const
                {
                    typename Sinks::const_iterator iter = sinks.begin(), end = sinks.end();
                    for (; iter != end; ++iter)
                    {
                        iter->second->Invoke( t0 , t1 , t2 , t3 , t4);
                    }
                }
            };
        };
        template <>
        struct AddInvoker<6> : InvokerBase<6>
        {
            template < class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7>
            struct Given
            {
                typedef typename SinksType< T0 , T1 , T2 , T3 , T4 , T5>::Type Sinks;
                Sinks sinks;
                void operator()( T0 t0 , T1 t1 , T2 t2 , T3 t3 , T4 t4 , T5 t5) const
                {
                    typename Sinks::const_iterator iter = sinks.begin(), end = sinks.end();
                    for (; iter != end; ++iter)
                    {
                        iter->second->Invoke( t0 , t1 , t2 , t3 , t4 , t5);
                    }
                }
            };
        };
        template <>
        struct AddInvoker<7> : InvokerBase<7>
        {
            template < class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7>
            struct Given
            {
                typedef typename SinksType< T0 , T1 , T2 , T3 , T4 , T5 , T6>::Type Sinks;
                Sinks sinks;
                void operator()( T0 t0 , T1 t1 , T2 t2 , T3 t3 , T4 t4 , T5 t5 , T6 t6) const
                {
                    typename Sinks::const_iterator iter = sinks.begin(), end = sinks.end();
                    for (; iter != end; ++iter)
                    {
                        iter->second->Invoke( t0 , t1 , t2 , t3 , t4 , t5 , t6);
                    }
                }
            };
        };
} } }
namespace Schladetsch { namespace Events { namespace Detail
{
    template <int N>
    struct Event
    {
        template < class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7>
        struct Create
            : AddInvoker<N>::template Given< T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7>
        {
            typedef typename AddInvoker<N>::template Given< T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7> Parent;
            typedef typename Parent::Sinks Sinks;
            typedef typename Sinks::value_type ValueType;
            using Parent::sinks;
            typedef typename CreateFunction<N>::template Given< T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7> FunctionDelegate;
            typedef typename FunctionDelegate::Function Function;
            typedef typename Event<N>:: template Create< T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7> ThisType;
            typedef typename CreateEvent<N>::template Given< T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7>::template Using<ThisType> EventDelegate;
            template <class Class, bool Const>
            struct MethodObjectBase : CreateMethod<N, Const>::template Given< T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7>::template Type<Class>
            {
                typedef typename CreateMethod<N, Const>::template Given< T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7>::template Type<Class> Parent;
                MethodObjectBase(typename Parent::Servant Q, typename Parent::Method M) : Parent(Q, M) { }
            };
            template <class Class>
            struct ConstMethodObject : MethodObjectBase<Class,true>
            {
                typedef MethodObjectBase<Class,true> Parent;
                ConstMethodObject(typename Parent::Servant Q, typename Parent::Method M) : Parent(Q, M) { }
            };
            template <class Class>
            struct MethodObject : MethodObjectBase<Class,false>
            {
                typedef MethodObjectBase<Class,false> Parent;
                MethodObject(typename Parent::Servant Q, typename Parent::Method M) : Parent(Q, M) { }
            };
            void Clear()
            {
                sinks.clear();
            }
            void AddFunction(Function fun)
            {
				ValueType vt(DelegateType::Function, new FunctionDelegate(fun));
                sinks.push_back(vt);
            }
            template <class C, bool D>
            void AddMethod(MethodObjectBase<C,D> const &foo)
            {
                sinks.push_back(ValueType(DelegateType::Method, new MethodObjectBase<C,D>(foo)));
            }
            void RemoveFunction(Function fun)
            {
                typename Sinks::iterator A = sinks.begin(), B = sinks.end();
                for (; A != B; ++A)
                {
                    if (A->first != DelegateType::Function)
                        continue;
                    FunctionDelegate *F = reinterpret_cast<FunctionDelegate *>(A->second);
                    if (F->fun != fun)
                        continue;
                    sinks.erase(A);
                    return;
                }
            }
            template <class C, bool D>
            void RemoveMethod(MethodObjectBase<C,D> const &bound)
            {
                typename Sinks::iterator A = sinks.begin(), B = sinks.end();
                for (; A != B; ++A)
                {
                    if (A->first != DelegateType::Method)
                        continue;
                    MethodObjectBase<C,D> *M = reinterpret_cast<MethodObjectBase<C,D> *>(A->second);
                    if (M->object != bound.object || M->method != bound.method)
                        continue;
                    sinks.erase(A);
                    return;
                }
            }
            void Add(Function fun)
            {
                AddFunction(fun);
            }
            template <class C>
            void Add(const C &object, typename ConstMethodObject<C>::Method method)
            {
                AddMethod(ConstMethodObject<C>(&object, method));
            }
            template <class C>
            void Add(C &object, typename MethodObject<C>::Method method)
            {
                AddMethod(MethodObject<C>(&object, method));
            }
            void Add(ThisType const &ev)
            {
                sinks.push_back(ValueType(DelegateType::Event, new EventDelegate(ev)));
            }
            void Remove(Function fun)
            {
                RemoveFunction(fun);
            }
            template <class C>
            void Remove(const C &object, typename ConstMethodObject<C>::Method method)
            {
                RemoveMethod(ConstMethodObject<C>(&object, method));
            }
            template <class C>
            void Remove(C &object, typename MethodObject<C>::Method method)
            {
                RemoveMethod(MethodObject<C>(&object, method));
            }
            void Remove(ThisType const &ev)
            {
                typename Sinks::iterator A = sinks.begin(), B = sinks.end();
                for (; A != B; ++A)
                {
                    if (A->first != DelegateType::Event)
                        continue;
                    EventDelegate *M = reinterpret_cast<EventDelegate *>(A->second.get());
                    if (&M->ev != &ev)
                        continue;
                    sinks.erase(A);
                    return;
                }
            }
        };
    };
} } }
namespace Schladetsch { namespace Events
{
    template < class T0 = Detail::Null , class T1 = Detail::Null , class T2 = Detail::Null , class T3 = Detail::Null , class T4 = Detail::Null , class T5 = Detail::Null , class T6 = Detail::Null , class T7 = Detail::Null>
    struct Event
        : Detail::Event<Detail::Arity< T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7>::Value>
            ::template Create< T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7> { };
} }

