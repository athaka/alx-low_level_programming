#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - A function that prints numbers from n to 98
 * @n: - A random integer
 * Return: Always 0.
 */

void print_to_98(int n)
{
	while (n <= 98)
	{
		printf("%d", n);
		if (n != 98)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}
		n++;
	}
}
