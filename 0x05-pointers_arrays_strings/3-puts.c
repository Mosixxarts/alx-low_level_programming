#include "main.h"
#include <stdout.h>

/**
 * _puts - write string followed by new line
 * @str: string
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('0');
}
