//
//  platform.c
//  KrewEngine
//
//  Created by Diego Revilla Rubiera on 06/09/2018.
//  Copyright © 2018 SKG. All rights reserved.
//

#include "platform.h"

#include <string.h>
#include "platform.h"

#if defined(_WIN32) || defined(_WIN64)

#include <math.h>

// strndup() is not available on Windows
char *strndup( const char *s1, size_t n)
{
    char *copy= (char*)malloc( n+1 );
    memcpy( copy, s1, n );
    copy[n] = 0;
    return copy;
};
#endif


// strndup() was only added in OSX lion
#if defined(__APPLE__)
char *strndup( const char *s1, size_t n)
{
    char *copy = calloc( n+1, sizeof(char) );
    memcpy( copy, s1, n );
    return copy;
};
#endif
