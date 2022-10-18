#include "main.h"

/**
 * _isalpha - checks for alphabetical error
 * @c: a character to be checked on
 * Return: returns 0 and 1 depending on condition
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
