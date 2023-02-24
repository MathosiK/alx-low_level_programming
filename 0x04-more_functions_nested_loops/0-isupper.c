#include "main.h"

/**
 * _isupper - A function that checks for uppercase character
 * @c: char to check
 *
 * Return: 1 if c is uppercase or 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
