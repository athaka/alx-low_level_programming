#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - Function that takes 3 arguments.
 * @array: Pointer to an array of integers.
 * @size: Number of element in the array.
 * @cmp: Function pointer that takes an integer
 * as parameter and returns an integer.
 *
 * Return: Nothing.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
