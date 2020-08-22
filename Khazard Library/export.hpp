#pragma once
#if defined(_WIN32)
#define ALTAMAL_SYS_WIN
#endif
#if !defined(ALTAMAL_STATIC)
  #ifdef ALTAMAL_SYS_WIN
    #define ALTAMAL_API_IMP __declspec(dllimport)
    #define ALTAMAL_API_EXP __declspec(dllexport)
  #endif
#ifdef ALTAMAL_EXPORTS
#define ALTAMAL_API ALTAMAL_API_EXP
#else 
#define ALTAMAL_API ALTAMAL_API_IMP
#endif
#endif