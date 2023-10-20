#include "main.h"
/**
 * reverse_array - A function that reverses an array of numbers
 * @a: Pointer to an int
 * @n: array of integers
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;
	int temp;

	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;

		start++;
		end--;
	}
}
