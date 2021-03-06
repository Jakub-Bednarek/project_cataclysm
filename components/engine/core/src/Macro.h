//
// Created by BlackFlage on 29.09.2021.
//

#ifndef CATACLYSM_MACRO_H
#define CATACLYSM_MACRO_H

#include <csignal>

#if(!_WIN32)
    #error Cataclysm works only on Windows!
#endif

#ifdef CTM_ENABLE_ASSERTS
    #define CTM_ASSERT(x, ...) \
    { \
    if(!(x))                     \
        {                        \
            CTM_CORE_ERROR("Assertion failed!\nMessage: {0}\nFile: {1}\nLine: {2}\nFunction: {3}", __VA_ARGS__, __FILE__, __LINE__, __PRETTY_FUNCTION__); \
            __builtin_debugtrap();                                                                                                      \
        }                                                                                                    \
    }
#else
    #define CTM_ASSERT(x, ...)
#endif

#endif //CATACLYSM_MACRO_H
