#include "main.h"

/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number to calculate the square root of.
 *
 * Return: The natural square root of n, or -1 if it does not have one.
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
    {
        return -1; // Error: Invalid input, no square root for negative numbers
    }
    else if (n == 0 || n == 1)
    {
        return n; // Base case: square root of 0 or 1 is the number itself
    }
    else
    {
        return sqrt_helper(n, 1, n);
    }
}

/**
 * sqrt_helper - Recursive helper function to find the square root.
 * @n: The number to calculate the square root of.
 * @start: The starting guess for the square root.
 * @end: The ending guess for the square root.
 *
 * Return: The natural square root of n, or -1 if it does not have one.
 */
int sqrt_helper(int n, int start, int end)
{
    int mid;

    if (start <= end)
    {
        mid = (start + end) / 2;
        if (mid * mid == n)
        {
            return mid; // Found the square root
        }
        else if (mid * mid > n)
        {
            return sqrt_helper(n, start, mid - 1); // Look in the lower half
        }
        else
        {
            return sqrt_helper(n, mid + 1, end); // Look in the upper half
        }
    }
    else
    {
        return -1; // No exact square root found
    }
}

