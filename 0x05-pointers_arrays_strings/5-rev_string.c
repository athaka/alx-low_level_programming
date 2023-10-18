#include "main.h"
#include <string.h>
/**
 * rev_string - A function that reverses a string
 * @s: Holds the strings to be reversed
 * Return: nothing.
 */

void rev_string(char *s)
{
	/* declare and initialize variable and pointers */
	int l = 0;
	char *b = s, temp, *e;

	/* calculate the lenght of the string */
	while (s[l] != '\0')
	{
		l++;
	}

	/* point to the last character */
	e = s + l - 1;

	/* swap characters */
	while (b < e)
	{
		/* swap characters pointed to by start and end */
		temp = *b;
		*b = *e;
		*e = temp;

		/* move pointers */
		b++;
		e--;
	}
}
