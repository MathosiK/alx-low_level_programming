#include "main.h"

/**
 * times_table - print the 9 times table
 * rone = row, cone = column, d = digits of current result
 * Return:times table
 *add extra space past ingle digit
 */
void times_table(void)
{
	int r, c, d;

	for (r = 0; r <= 9; r++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		for (c = 1; c <= 9; c++)
		{
			d = (r * c);
			if ((d / 10) > 0)
			{
				_putchar((d / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((d % 10) + 10);
			if (c < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}




