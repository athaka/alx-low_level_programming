#include "main.h"
#include <string.h>
/**
 * puts_half - A function that prints half
 * of a string.
 * @str: Holds the strings to be printed
 * Return: nothing.
 */

void puts_half(char *str)
{
	int l = strlen(str);
	int start_index;

	if (l % 2 == 0)
	{
		start_index = l / 2;
	}
	else
	{
		start_index = (l - 1) / 2;
	}
	while (str[start_index] != '\0')
	{
		_putchar(str[start_index]);
		start_index++;
	}
	_putchar('\n');
}
