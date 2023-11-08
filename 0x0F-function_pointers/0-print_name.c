#include <stdio.h>
#include <string.h>
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
	if (name == NULL)
	{
		return;
	}
	f(name);
}
