#include "main.h"
/**
 * string_toupper - A function that changes lowercase
 * letters of a string to upercase
 * @str: Pointer to a string
 * Return: nothing.
 */

char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - 'a' + 'A';
		}
		ptr++;
	}
	return (str);
}
