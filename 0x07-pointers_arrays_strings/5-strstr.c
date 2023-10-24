#include "main.h"
#include <stdio.h>
/**
 * _strstr - A function  that locates a substring
 * @haystack: Pointer to the main string
 * @needle: Pointer to the substring
 * Return: null.
 */

char *_strstr(char *haystack, char *needle)
{
	char *s, *a;

	if (haystack == NULL || needle == NULL)
	{
		return (NULL);
	}

	s = haystack, a = needle;

	while (*s != '\0')
	{
		if (*s == *a)
		{
			while (*a != '\0')
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (NULL);
}
