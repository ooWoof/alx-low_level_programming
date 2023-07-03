#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: pointer to string to search through
 * @accept: pointer to set of bytes to search for
 *
 * Return: Pointer to the matching character in s, otherwise NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
				return (s);
		}
		s++;
	}

	return ('\0');
}

