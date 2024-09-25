#ifndef CARCONTROL_CPP__VISIBILITY_CONTROL_H_
#define CARCONTROL_CPP__VISIBILITY_CONTROL_H_

#ifdef __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define CARCONTROL_CPP_EXPORT __attribute__ ((dllexport))
    #define CARCONTROL_CPP_IMPORT __attribute__ ((dllimport))
  #else
    #define CARCONTROL_CPP_EXPORT __declspec(dllexport)
    #define CARCONTROL_CPP_IMPORT __declspec(dllimport)
  #endif
  #ifdef CARCONTROL_CPP_BUILDING_DLL
    #define CARCONTROL_CPP_PUBLIC CARCONTROL_CPP_EXPORT
  #else
    #define CARCONTROL_CPP_PUBLIC CARCONTROL_CPP_IMPORT
  #endif
  #define CARCONTROL_CPP_PUBLIC_TYPE CARCONTROL_CPP_PUBLIC
  #define CARCONTROL_CPP_LOCAL
#else
  #define CARCONTROL_CPP_EXPORT __attribute__ ((visibility("default")))
  #define CARCONTROL_CPP_IMPORT
  #if __GNUC__ >= 4
    #define CARCONTROL_CPP_PUBLIC __attribute__ ((visibility("default")))
    #define CARCONTROL_CPP_LOCAL  __attribute__ ((visibility("hidden")))
  #else
    #define CARCONTROL_CPP_PUBLIC
    #define CARCONTROL_CPP_LOCAL
  #endif
  #define CARCONTROL_CPP_PUBLIC_TYPE
#endif

#ifdef __cplusplus
}
#endif

#endif  // CARCONTROL_CPP__VISIBILITY_CONTROL_H_