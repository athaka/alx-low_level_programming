#include "main.h"

/**
 * print_alphabet - A function that prints the alphabets
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
