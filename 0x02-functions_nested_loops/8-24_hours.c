#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 *
 * Return: void
 */
void jack_bauer(void)
{
	int i = 0;
	int j = 0;

	while (i <= 23)
	{
		j = 0;
		while (j <= 59)
		{
			printf("%02d:%02d\n", i, j);
			j++;
		}
		i++;
	}
}
