#include "main.h"

/**
 * _memcpy - Copies a memory area.
 * @dest: Pointer to the memory area to copy to.
 * @src: Pointer to the memory area to copy from.
 * @n: Number of bytes to copy.
 *
 * Return: Pointer to the destination memory area.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
        char *p = dest;

        while (n--)
                *p++ = *src++;
        return (dest);
}

