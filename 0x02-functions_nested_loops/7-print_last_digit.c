#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @c: number whose last digit is to be printed
 *
 * Return: value of the last digit
 */
int print_last_digit(int num)
{
	int last_digit = num % 10;

	last_digit = last_digit < 0 ? -1 * last_digit : last_digit;
	-putchar(last digit + '0');

	return(last_digit);
}
