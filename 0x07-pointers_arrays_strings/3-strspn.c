#include "main.h"
#include <stdio.h>

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: the string to be searched
 * @accept: the bytes to be searched for
 *
 * Return: the number of bytes in the initial segment of s which consist only
 * bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int k, l;

	for (k = 0; s[k] != '\0'; k++)
	{
		for (l = 0; accept[l] != '\0'; l++)
		{
			if (s[k] == accept[l])
				break;
		}
		if (accept[l] == '\0')
			break;
	}

	return (k);
}

