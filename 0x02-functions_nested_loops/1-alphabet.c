#include <stdio.h>

/**
 *print_alphabet - entry point
 * Description: a function that prints the alphabet,
 * in lowercase followed by a new line
 * Return: void
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
}
