#include "main.h"

/**
 * _islower - check if char is lowercase
 * @m: int to be checked
 * Return: 1 if character is lowercase , 0 otherwise.
 */
int _islower(int m)
{
	if (m >= 'a' && m <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
