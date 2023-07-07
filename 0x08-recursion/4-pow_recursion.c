#include "main.h"

/**
 * _pow_recursion - Calculates the value of x raised to the power of y.
 * @x: The base number.
 * @y: The exponent.
 *
 * Return: The result of x raised to the power of y, or -1 if there's an error.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return -1; // Error: Invalid input
	}
	else if (y == 0)
	{
		return 1; // Base case: any number raised to 0 is 1
	}
	else
	{
		return x * _pow_recursion(x, y - 1); // Recursive case
	}
}

