#include "main.h"
/**
 * _memset - A function that fills memory with a constant byte
 * @s: Pointer to the memory area
 * @b: the constant byte value
 * @n: number of bytes to be fill
 * Return: nothing.
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}
	return (start);
}
