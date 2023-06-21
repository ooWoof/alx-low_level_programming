#include "main.h"
#include <stdio.h>
/**
 *times_table - prints the 9 times table starting with 0
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = j * i;
			if (k < 10 && j != 0)
			{
				putchar(' ');
			}
			else if (k >= 10)
			{
				putchar((k / 10) + '0');
			}
			putchar((k % 10) + '0');
			if (j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}
}
