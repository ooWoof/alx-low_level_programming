#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @p: the number to check
 * Return: 1 if p is positive, -1 if p is negative, 0 otherwise
 */
int print_sign(int p)
{
	if (p > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (p == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (p < 0)
	{
		_putchar('-');
	}
	return (-1);
}

