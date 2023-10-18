#include "main.h"

/**
 * _puts - A function that prints a string
 * @str: Holds the strings to be printed
 * Return: nothing.
 */

void _puts(char *str)
{
	while (*str != '\0')

	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
