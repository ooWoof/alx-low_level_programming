#include <stdio.h>
#include "main.h"

/**
 * _memset - Fills memory with a constant byte.
 *
 * @s: Pointer to memory area.
 * @b: Constant byte.
 * @n: Number of bytes to fill.
 *
 * Return: Pointer to memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
        unsigned int k;

        for (k = 0; k < n; k++)
                s[k] = b;
        return (s);
}

