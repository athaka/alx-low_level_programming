#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Function that returns a sum of all its
 * parameters.
 * @n: Number of arguments taken
 *
 * Return: Nothing.
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list args;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);
	return (sum);
}
