#include "main.h"
/**
 * _atoi - A function that converts a string to an integer
 * @s: Pointer to a character
 * Return: nothing.
 */

int _atoi(char *s)
{
	/* initialize the result to 0 */
	int result = 0;
	/* initialize the sign to positive */
	int sign = 1;

	/* handle signs and leading characters */
	while (*s)
	{
		if (*s == ' ')
		{
			/* toggle the sign for each '-' */
			sign = -sign;
		}
		else if (*s >= '0' && *s <= '9')
		{
			/* process digits in the string */
			result = result * 10 + (*s - '0');
		}
		else if (result != 0)
		{
			/* stop processing if non-digit character follow digits */
			break;
		}
		/* move to the next character */
		s++;
	}
	return (result * sign);
}
