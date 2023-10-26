#include "main.h"
#include <string.h>
/**
 * wildcmp - A function  that compares two string
 * @s1: Pointer to string one.
 * @s2: Pointer to string two.
 *
 * Return: nothing.
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0')
	{
		/* If s2 is empty, s1 must be empty for a match */
		return (*s1 == '\0');
	}
	else if (*s2 == '*')
	{
		/* If s2 has a '*', try all possibilities of matching */
		return (matchWild(s1, s2));
	}
	else if (*s1 == '\0')
	{
		/* If s1 is empty, s2 must be empty or contain only '*' for a match */
		while (*s2 == '*')
		{
			s2++;
		}
		return ((*s2 == '\0'));
	}
	else if (match(s1, s2))
	{
		/* Regular characters match, move both pointers */
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else
	{
		/* Characters don't match */
		return (0);
	}
}

/**
 * match - A helper function for wildcmp
 * @s1: string 1
 * @s2: string 2
 *
 * Return: nothing
 */
int match(char *s1, char *s2)
{
	return (*s1 == *s2 || *s2 == '.');
}

/**
 * matchWild - A helper function for wildcmp
 * @s1: string 1
 * @s2: string 2
 *
 * Return: nothing
 */
int matchWild(char *s1, char *s2)
{
	if (*s2 == '\0')
	{
		/* A '*' at the end matches everything */
		return (1);
	}
	while (*s1 != '\0')
	{
		if (wildcmp(s1, s2 + 1))
		{
			return (1);
		}
		s1++;
	}
	return (wildcmp(s1, s2 + 1));
}
