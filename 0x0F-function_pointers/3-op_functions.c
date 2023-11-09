#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

/**
 * op_add - Return the sum of a and b.
 * @a: A given integer.
 * @b: A given integer.
 *
 * Return: Nothing.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Return the difference of a and b.
 * @a: A given integer.
 * @b: A given integer.
 *
 * Return: Nothing.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Return the product of a and b.
 * @a: A given integer.
 * @b: A given integer.
 *
 * Return: Nothing.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Return the division of a by b.
 * @a: A given integer.
 * @b: A given integer.
 *
 * Return: Nothing.
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Return the remainder of a / b.
 * @a: A given integer.
 * @b: A given integer.
 *
 * Return: Nothing.
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
