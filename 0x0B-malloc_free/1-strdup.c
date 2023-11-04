#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - A function that duplicate a given string
 * @str: A pointer to a string
 *
 * Return: always 0
 */
char *_strdup(char *str)
{
	char *duplicate;
	size_t l;

	/* return NULL if the input string is NULL */
	if (str == NULL)
	{
		return (NULL);
	};

	/* calculate the length of the string */
	l = strlen(str);

	/* allocate memory for the new string */
	duplicate = (char *)malloc((l + 1) * sizeof(char));

	/* check if memory allocation failed */
	if (duplicate == NULL)
	{
		return (NULL);
	}

	/* copy the string to the newly allocated memory */
	strcpy(duplicate, str);

	/* return the pointer to a duplicate string */
	return (duplicate);
}
