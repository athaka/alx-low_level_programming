#include "main.h"

/**
 * print_last_digit - A function that prints the absolute value of any number
 * @n: integer to be transformed
 * Return: Always 0.
 */

int print_last_digit(int n)
{
	int i;
	{
		i = n % 10;
		if (i < 0)
		{
			i = i * -1;
		}
		_putchar('0' + i);
		return (i);
	}
}
