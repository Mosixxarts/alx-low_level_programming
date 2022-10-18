#include <stdio.h>

/**
 * print_alphabet ->  prints the lowercase alphabets
 *
 * Return: Always (Success)
 */
void print_alphabet(void)
{
	int j;

	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}_putchar('\n');
	return (0);
}
