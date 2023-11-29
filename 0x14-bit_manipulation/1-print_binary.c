#include "main.h"

/**
 * print_binary - Print the binary representation of a number
 * @n: The integer to print in binary
 *
 * Return: print binary rep of integer
 */

void print_binary(unsigned long int n)
{
	int shift = sizeof(unsigned long int) * 8 - 1;
	/* To track leading zeros */
	int flag = 0;

	while (shift >= 0)
	{
		unsigned long int bit = (n >> shift) & 1;

		if (bit || flag)
		{
			_putchar(bit + '0');
			/* Set flag once a non-zero bit is encountered */
			flag = 1;
		}
		shift--;
	}

	/* If the number is 0, print a single '0' */
	if (!flag)
		_putchar('0');
}
