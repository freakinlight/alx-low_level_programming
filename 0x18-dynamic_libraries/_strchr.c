#include "main.h"

char *_strchr(char *s, char c) {
    while (*s) {
        if (*s == c)
            return s;
        s++;
    }
    if (c == '\0')
        return s;
    return NULL;
}
