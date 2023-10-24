#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - A function  that prints the sum
 * of the two diagonals of a square matrix of integers
 * @a: Pointer to an integer
 * @size: matrix size
 * Return: null.
 */

void print_diagsums(int *a, int size)
{
	int primary_sum = 0;
	int secondary_sum = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		primary_sum += a[i * size + i];
		secondary_sum += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", primary_sum, secondary_sum);
}
