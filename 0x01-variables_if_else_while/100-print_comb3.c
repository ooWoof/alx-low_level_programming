#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	putchar('0');
	putchar(',');
	putchar(' ');
	putchar('0' + 1 / 10);
	putchar('0' + 1 % 10);
	putchar('\n');

	return (0);
}
