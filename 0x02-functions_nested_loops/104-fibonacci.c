#include <stdio.h>
#include "main.h"
/**
 *initialize the first two Fibonacci numbers
 *print the first two Fibonacci numbers
 */
int main()
{
	int fib1 = 1;
	int fib2 = 2;
	int i;

	printf("%d, %d, ", fib1, fib2);
	for (i = 0; i < 98; i++)
	{
		int fib3 = fib1 + fib2;
		printf("%d, ", fib3);
		fib1 = fib2;
		fib2 = fib3;
	}
	printf("\n");
	return (0);
}
