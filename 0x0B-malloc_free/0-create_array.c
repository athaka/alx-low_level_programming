#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - A function that creates an array of characters,
 * @size: Size of array to create
 * @c: A character to initialize the array
 *
 * Return: always 0
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
