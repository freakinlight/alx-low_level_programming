#define _GNU_SOURCE
#include <dlfcn.h>
#include <stdio.h>

int rand(void) {
    return 9;  // we replace 9 with the winning number
}
