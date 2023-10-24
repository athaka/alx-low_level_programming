#include "main.h"
#include <stdio.h>
/**
 * _strchr - A function  that takes two parameters
 * @s: Pointer to the string in which to search for the character
 * @c: Character to searc for
 * Return: null.
 */

char *_strchr(char *s, char c)
{
	if (s == NULL)
	{
		return (NULL);
	}

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
