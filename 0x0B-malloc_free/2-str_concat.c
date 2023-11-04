#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - A function that concatenates two strings
 * @s1: A pointer to a string
 * @s2: A pointer to a string
 *
 * Return: always 0
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	size_t l_s1;
	size_t l_s2;

	/* treat NULL strings as empty strings */
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	/* get the length of the strings */
	l_s1 = strlen(s1);
	l_s2 = strlen(s2);

	/* allocate memory for the concatenated string */
	concat = (char *)malloc((l_s1 + l_s2 + 1) * sizeof(char));

	/* check if memory allocation failed */
	if (concat == NULL)
	{
		return (NULL);
	}

	/* copy s1 and s2 into concatenated string */
	strcpy(concat, s1);
	strcat(concat, s2);

	/* return pointer to concatenated string */
	return (concat);

}
