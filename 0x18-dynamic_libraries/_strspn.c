#include "main.h"

unsigned int _strspn(char *s, char *accept) {
    unsigned int count = 0;
    int found;

    while (*s) {
        found = 0;
        char *a = accept;
        while (*a) {
            if (*s == *a) {
                found = 1;
                break;
            }
            a++;
        }
        if (!found)
            break;
        count++;
        s++;
    }

    return count;
}
