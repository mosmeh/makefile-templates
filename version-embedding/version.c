#include "version.h"
#include <stdio.h>

#ifndef FOO_VERSION
#define FOO_VERSION "unknown"
#endif

void print_version(void) {
    puts("version " FOO_VERSION
#ifdef FOO_COMMIT
        " (commit " FOO_COMMIT ")"
#endif
        );
}
