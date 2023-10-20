#include "main.h"
/**
 * leet - A function that encodes a string into 1337
 * @str: A pointer to the string
 * Return: original.
 */

char *leet(char *str)
{
	/* store the original pointer to the string. */
	char *original = str;
	char c;

	while (*str)
	{
		/* Get the current character. */
		c = *str;
		/* Using a single 'if' statement, we'll check and encode characters. */
		if (c == 'a' || c == 'A')
		{
			*str = '4';
		}
		else if (c == 'e' || c == 'E')
		{
			*str = '3';
		}
		else if (c == 'o' || c == 'O')
		{
			*str = '0';
		}
		else if (c == 't' || c == 'T')
		{
			*str = '7';
		}
		else if (c == 'l' || c == 'L')
		{
			*str = '1';
		}
		else
		{
			*str = c;
		}
		/* Move to the next character. */
		str++;
	}
	/* Return the modified string. */
	return (original);
	_putchar('\n');
}
