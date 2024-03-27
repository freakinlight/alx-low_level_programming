#include "main.h"

int _atoi(char *s) {
    int result = 0;
    int sign = 1;
    while (*s == ' ')
        s++;
    if (*s == '-') {
        sign = -1;
        s++;
    } else if (*s == '+') {
        s++;
    }
    while (*s >= '0' && *s <= '9') {
        result = result * 10 + (*s - '0');
        s++;
    }

    return sign * result;
}
