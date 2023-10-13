#include "main.h"

/**
 * print_alphabet_x10 - A function that prints the alphabets 10 times
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	char y = 'a';
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 26; j++)
		{
			_putchar(y);
			y++;
		}
		_putchar('\n');
		y = 'a';
	}
}
