#include "hm_win32_posix.h"
#include <stdio.h>

inline double seconds()
{
    struct timeval tp;
    void *tzp;
    int i = gettimeofday(&tp, tzp);
    return ((double)tp.tv_sec + (double)tp.tv_usec * 1.e-6);
}

