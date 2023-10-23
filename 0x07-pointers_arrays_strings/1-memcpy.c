#include "main.h"
#include <stdio.h>
/**
 * _memcpy - A function  that copies memory area
 * @dest: Pointer to the destination memory area
 * @src: Pointer to the source memory area
 * @n: number of bytes to be copied
 * Return: nothing.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	if (dest == NULL || src == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
