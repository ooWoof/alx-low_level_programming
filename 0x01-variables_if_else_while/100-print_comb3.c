#include <stdio.h>
/**
 * main -  program that prints all possible different combinations of two digits
 * Return: 0
 */
int main(void)
{
       	int i;
	for (i = 0; i <= 8; i++)
	{
		int j;
		for (j = i + 1; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			
			if (i != 8 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	
	putchar('\n');
	
	return (0);
}
