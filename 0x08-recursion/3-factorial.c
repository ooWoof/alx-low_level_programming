#include "main.h"

/**
 * factorial - Calculates the factorial of a given number.
 * @n: The number.
 *
 * Return: The factorial of n, or -1 if n is lower than 0.
 */
int factorial(int n)
{
    if (n < 0)
    {
        return -1;
    }
    else if (n==0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

