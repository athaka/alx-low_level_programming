#include "main.h"

/**
 * _strlen - A function that counts the lenght of a string
 * @s: Takes a pointer to a string (char *s) and
 * and returns an integer, the lenght of the string
 * Return: nothing.
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
