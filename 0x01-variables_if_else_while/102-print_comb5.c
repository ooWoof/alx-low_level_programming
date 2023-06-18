#include <stdio.h>
/**
 * main - program that prints all possible combinations of two two-digit numbers.
 * Return: 0
 */
#include <stdio.h>

int main(void)
{
    int i;

    for (i = 0; i <= 99; i++)
    {
        int j;

        for (j = i; j <= 99; j++)
        {
            putchar(i / 10 + '0');
            putchar(i % 10 + '0');
            putchar(' ');
            putchar(j / 10 + '0');
            putchar(j % 10 + '0');

            if (i != 99 || j != 99)
            {
                putchar(',');
                putchar(' ');
            }
        }
    }

    putchar('\n');

    return 0;
}
