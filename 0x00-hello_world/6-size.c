#include <stdio.h>
/**
 * main - program that prints the size of various types on the
 * computer it is compiled and run on
 * Return: 0 (success)
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	printf("Size of a double: %lu byte(s)\n", sizeof(double));
	printf("Size of a long double: %lu byte(s)\n", sizeof(long double));
	return (0);
}