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
	char *h, *n;

	if (haystack == NULL || needle == NULL)
	{
		return (NULL);
	}

	h = haystack, n = needle;

	while (*h != '\0')
	{
		if (*h == *n)
		{
			while (*n != '\0')
			{
				return (h);
			}
			n++;
		}
		h++;
	}
	if (*n == '\0')
	{
		return (h);
	}
	return (NULL);
}
