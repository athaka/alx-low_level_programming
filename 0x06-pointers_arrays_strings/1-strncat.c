#include "main.h"
/**
 * _strncat - A function that concatenate two string
 * by src
 * @dest: Pointer to a destination character
 * @src: Pointer to a cource character
 * @n: An integer for number of bytes used
 * Return: nothing.
 */

char *_strncat(char *dest, char *src, int n)
{
	/* save the original destination pointer */
	char *og_dest = dest;

	/* move dest to end of string */
	while (*dest != '\0')
	{
		dest++;
	}
	/* copy character from src to dest */
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	/* add the null terminator to the end */
	*dest = '\0';
	/* return the pointer to the beginning of the string */
	return (og_dest);
}
