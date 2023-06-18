#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	putchar('0');
	putchar('1');

	for (int i = 2; i <= 9; i++)
	{
		putchar(i / 10 + '0');
		putchar(i % 10 + '0');
		putchar(i < 9 ? ',' : '\n');
	}

	return (0);
}

