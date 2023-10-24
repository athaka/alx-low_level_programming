#include "main.h"
#include <stdio.h>
/**
 * _strspn - A function  that gets the lenght of a prefix
 * @s: Pointer to the string
 * @accept: accepted segment of string to search from
 * Return: null.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	char *a;
	int match;

	if (s == NULL || accept == NULL)
	{
		return (len);
	}

	while (*s != '\0')
	{
		a = accept;
		match = 0;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				match = 1;
				break;
			}
			a++;
		}
		if (!match)
		{
			break;
		}
		len++;
		s++;
	}
	return (len);
}
