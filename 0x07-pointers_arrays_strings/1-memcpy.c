#include "main.h"
#include <stdio.h>

/**
 * _memcpy - function that copies memory area
 *
 * @dest: pointer to memory area to copy to
 * @src: Pointer to the memory area to copy from
 * @n: Number of bytes to copy
 *
 * Return: pointer to dest memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;

	while (n--)
	{
		*p++ = *src++;
	}

	return (dest);
}

