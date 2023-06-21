#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int limit = 4000000;
    int term1 = 1, term2 = 2, next_term = 0;
    int sum = 0;

    while (term1 <= limit)
    {
        if (term1 % 2 == 0)
            sum += term1;

        next_term = term1 + term2;
        term1 = term2;
        term2 = next_term;
    }

    printf("Sum of even-valued terms: %d\n", sum);

    return 0;
}

