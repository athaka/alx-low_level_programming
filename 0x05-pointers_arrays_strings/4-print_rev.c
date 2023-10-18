#include "main.h"
#include <string.h>
/**
 * print_rev - A function that prints a string in reverse
 * @s: Holds the strings to be printed
 * Return: nothing.
 */

void print_rev(char *s)
{
	int l = strlen(s);
	int i;

	i = l - 1;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
