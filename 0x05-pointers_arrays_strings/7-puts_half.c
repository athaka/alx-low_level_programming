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
	/* calculate the lenght of the string */
	int l = strlen(str);
	/* calculate the starting index of the second half*/
	int start_index = (l + 1) / 2;
	int i;

	/* loop through the starting from start_index to end */
	/* and print each character. */
	for (i = start_index; i < l; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
