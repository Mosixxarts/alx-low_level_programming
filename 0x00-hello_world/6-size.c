#include <stdio.h>

/**
 * main - Prints the size of many var types
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	a = 1;
	b = 4;
	c = 4;
	d = 8;
	e = 4;

	printf("Size of a char: %d byte(s)\n", size of(a));
	printf("Size of an int: %d byte(s)\n", size of(b));
	printf("Size of a long int: %d byte(s)\n", size of(c));
	printf("Size of a long long int: %d byte(s)\n", size of(d));
	printf("Size of a float: %d byte(s)\n", size of(e));
	return (0);
}
