#ifndef MYSQL_MAIN_H
#define MYSQL_MAIN_H

#ifdef THISCALL
#undef THISCALL
#endif

#include "sdk.hpp"

#ifdef _WIN32
#define THISCALL __thiscall
#else
#define THISCALL
#endif

#endif //MYSQL_MAIN_H