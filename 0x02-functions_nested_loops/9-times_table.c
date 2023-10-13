#include "main.h"

/**
 * times_table - A function that prints the 9 timws table beginning from 0
 * Return: Always 0.
 */

void times_table(void)
{
	int x, y, z;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			z = x * y;
			/* print the result with proper formating */
			if (y == 0)
			{
				_putchar(z + '0');
			}
			else
			{
				_putchar(' ');
				if (z < 10)
				{
					_putchar(' ');
				}
				else
				{
					_putchar(z / 10 + '0');
				}
				_putchar(z % 10 + '0');
			}
			if (y < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		/* print a new line to start a new row */
		_putchar('\n');
	}
}
