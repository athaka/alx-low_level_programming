#include "main.h"

/**
 * _isdigit - A function that checks for digits
 * @c: The character to be checked for
 * Return: Always 0.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
