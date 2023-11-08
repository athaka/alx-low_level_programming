#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - Prints a given name
 * @name: Name of the person
 * @f: Pointer to a function with one argument
 *
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
	{
		exit(EXIT_FAILURE);
	}
	if (*name != '\0')
	{
		f(name);
	}
}
