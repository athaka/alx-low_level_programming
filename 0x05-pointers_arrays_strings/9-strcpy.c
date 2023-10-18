#include "main.h"
/**
 * _strcpy - A function that copies string pointed
 * by src
 * @dest: Pointer to a destination character to
 * @src: Pointer to a cource character
 * Return: nothing.
 */

char *_strcpy(char *dest, char *src)
{
	/* save the original destination pointer */
	char *og_dest = dest;

	/* copy character from src to dest until null termination */
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	/* add the null terminator to the destination string */
	*dest = '\0';
	/* return the pointer to the beginning of the string */
	return (og_dest);
}
