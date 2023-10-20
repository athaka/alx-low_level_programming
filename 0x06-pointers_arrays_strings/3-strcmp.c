#include "main.h"
/**
 * _strcmp - A function that compares two strings
 * @s1: Pointer to one string
 * @s2: Pointer to a another string
 * Return: nothing.
 */

int _strcmp(char *s1, char *s2)
{
	/* compare characters until a mismatch is found or both strings */
	/* are null-terminated. */
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	/* Return the difference between the last compared characters. */
	/* This will be 0 if the strings are equal, a positive value */
	/* if s1 is greater, and a negative value if s2 is greater. */
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
