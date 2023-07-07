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
        return -1; // Return -1 to indicate an error for negative numbers
    }
    else if (n == 0)
    {
        return 1; // Base case: Factorial of 0 is 1
    }
    else
    {
        return n * factorial(n - 1); // Recursive case: Multiply n by factorial of (n-1)
    }
}

