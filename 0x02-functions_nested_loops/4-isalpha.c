#include "main.h"

/**
 * _isalpha - A function that prints the sign of any number
 * @c: The integer to be checked for
 * Return: Always 0.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
