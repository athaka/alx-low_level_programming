#include "main.h"
/**
 * factorial - A function  that returns the factorial of
 * an integer.
 * @n: A giving integer.
 *
 * Return: null.
 */

int factorial(int n)
{
	/* error handle: if n is less than 0, return -1 */
	if (n < 0)
	{
		return (-1);
	}
	/* base case: if n is 0, return 1 */
	else if (n == 0)
	{
		return (1);
	}
	/* recursive case: calculate the factorial */
	else
	{
		return (n * factorial(n - 1));
	}
}
