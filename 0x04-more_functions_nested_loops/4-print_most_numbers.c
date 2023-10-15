#include "main.h"

/**
 * print_most_numbers - A function that checks for digits
 *
 * Return: Always 0.
 */

void print_most_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		if (n != 2 && n != 4)
		{
			_putchar('0' + n);
		}
	}
	_putchar('\n');
}
