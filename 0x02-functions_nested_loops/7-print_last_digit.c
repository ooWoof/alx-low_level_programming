#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @j: Extracts the last digit from j
 * Return: The value of the last digit
 */

int print_last_digit(int j)
{
	int y;

	y = j % 10;

	if (j < 0)
		y = -y;

	_putchar(y + '0');

	return (y);
}
