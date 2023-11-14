#ifndef TEAMASACONTROLLER__VISIBILITY_CONTROL_H_
#define TEAMASACONTROLLER__VISIBILITY_CONTROL_H_
#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define TEAMASACONTROLLER_EXPORT __attribute__ ((dllexport))
    #define TEAMASACONTROLLER_IMPORT __attribute__ ((dllimport))
  #else
    #define TEAMASACONTROLLER_EXPORT __declspec(dllexport)
    #define TEAMASACONTROLLER_IMPORT __declspec(dllimport)
  #endif
  #ifdef TEAMASACONTROLLER_BUILDING_LIBRARY
    #define TEAMASACONTROLLER_PUBLIC TEAMASACONTROLLER_EXPORT
  #else
    #define TEAMASACONTROLLER_PUBLIC TEAMASACONTROLLER_IMPORT
  #endif
  #define TEAMASACONTROLLER_PUBLIC_TYPE TEAMASACONTROLLER_PUBLIC
  #define TEAMASACONTROLLER_LOCAL
#else
  #define TEAMASACONTROLLER_EXPORT __attribute__ ((visibility("default")))
  #define TEAMASACONTROLLER_IMPORT
  #if __GNUC__ >= 4
    #define TEAMASACONTROLLER_PUBLIC __attribute__ ((visibility("default")))
    #define TEAMASACONTROLLER_LOCAL  __attribute__ ((visibility("hidden")))
  #else
    #define TEAMASACONTROLLER_PUBLIC
    #define TEAMASACONTROLLER_LOCAL
  #endif
  #define TEAMASACONTROLLER_PUBLIC_TYPE
#endif
#endif  // TEAMASACONTROLLER__VISIBILITY_CONTROL_H_
// Generated 14-Nov-2023 10:10:15
// Copyright 2019-2020 The MathWorks, Inc.
