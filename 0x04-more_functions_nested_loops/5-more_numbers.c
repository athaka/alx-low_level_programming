#include "main.h"

/**
 * more_numbers - A function that prints 0 to 14
 * 10 times
 * Return: Always 0.
 */

void more_numbers(void)
{
	int n, m;

	for (m = 0; m < 10; m++)
	{
		for (n = 0; n < 15; n++)
		{
			if (n > 9)
			{
				_putchar('0' + n / 10);
			}
			_putchar('0' + n % 10);
		}
		_putchar('\n');
	}
}
