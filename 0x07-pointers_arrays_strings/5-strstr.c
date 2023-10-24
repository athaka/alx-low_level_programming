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

	while (*haystack != '\0')
	{
		h = haystack, n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
