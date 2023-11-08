#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - Function that takes 3 arguments.
 * @array: Pointer to an array of integers.
 * @size: Size of the array.
 * @action: Function pointer that takes an integer
 * as parameter and returns void.
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		exit(EXIT_FAILURE);
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
