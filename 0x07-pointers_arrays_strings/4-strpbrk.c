#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - A function  that searches a string
 * for a set of bytes.
 * @s: Pointer to the string
 * @accept: Pointer to accepted segment of string to search from
 * Return: null.
 */

char *_strpbrk(char *s, char *accept)
{
	char *a;

	if (s == NULL || accept == NULL)
	{
		return (NULL);
	}

	while (*s != '\0')
	{
		a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (NULL);
}
