#include "main.h"
#include <stdio.h>
/**
 * print_array - A function that prints n elements
 * of an array of integers.
 * @a: Pointer to integer to be printed
 * @n: An integer for array count
 * Return: nothing.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
