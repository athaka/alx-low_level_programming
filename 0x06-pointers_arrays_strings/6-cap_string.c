#include "main.h"
#include <stdio.h>
/**
 * is_separator - A function that capitalizes
 * @c: A char value
 * Return: nothing.
 */

/* a function to check if a character is a seperator */
int is_separator(char c)
{
	int i;
	char separators[] = " \t\n,;.!?\"(){}";

	for (i = 0; separators[i] != '\0'; i++)
	{
		if (c == separators[i])
		{
			return (1);
		}
	}
	return (0);
}

/**
 * cap_string - A function that capitalizes
 * all letters of a string
 * @str: Pointer to a string
 * Return: nothing.
 */

char *cap_string(char *str)
{
	int cap_next = 1;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (cap_next && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 'a' + 'A';
			cap_next = 0;
		}
		if (is_separator(str[i]))
		{
			cap_next = 1;
		}
		else
		{
			cap_next = 0;
		}
	}
	return (str);
}
