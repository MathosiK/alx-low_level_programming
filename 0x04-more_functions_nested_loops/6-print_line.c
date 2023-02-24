#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: numbers of times the character _ shoild be printed
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar("\n");
	}
	else
