#include "main.h"
#include <string.h>
/**
 * puts2 - A function that prints every other character
 * of a string.
 * @str: Holds the strings to be printed
 * Return: nothing.
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		/* check if the index is even */
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
