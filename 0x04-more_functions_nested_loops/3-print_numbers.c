#include "main.h"

/**
 * print_numbers - A function that prints 0 to 9
 *
 * Return: Always 0.
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		_putchar('0' + n);
	}
	_putchar('\n');
}
