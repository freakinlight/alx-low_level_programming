#include "hash_tables.h"

/**
 * hash_djb2 - Hash function implementing the djb2 algorithm
 * @str: The string to hash
 *
 * Return: The hash value generated
 */
unsigned long int simple_hash(const unsigned char *str)
{
    unsigned long int hash = 0;
    int i = 0;

    while (str[i] != '\0')
    {
        hash += str[i];
        i++;
    }

    return hash;
}
