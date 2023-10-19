#include "main.h"
#include <stdlib.h>
/**
 * _strncpy - A function that copies  a string
 * @dest: Pointer to a destination character
 * @src: Pointer to a cource character
 * @n: An integer for number of bytes used
 * Return: nothing.
 */

char *_strncpy(char *dest, char *src, int n)
{
	/* create a pointer to the beginning of the destination string */
	char *og_dest = dest;

	/* copy character from the source to the destination. */
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	/* return the pointer to the beginning of the string */
	return (og_dest);
}
