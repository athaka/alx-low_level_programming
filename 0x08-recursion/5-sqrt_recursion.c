#include "main.h"
/**
 * _sqrt_recursion - A function  that returns the square root
 * of an integer.
 * @n: Any giving integer.
 *
 * Return: null.
 */

int _sqrt_recursion(int n)
{
	/* error handling */
	if (n < 0)
	{
		return (-1);
	}
	/* base case */
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	/* recursive case */
	else
	{
		return (find_sqrt(n, 1));
	}
}

/**
 * find_sqrt - Helper function to find square root of n.
 * @n: Any giveninteger such that n = x * x
 * @x: An integer such that x * x = n.
 *
 * Return: nothing.
 */

int find_sqrt(int n, int x)
{
	/* calculate the square of the current estimate */
	int square = x * x;

	/* if the square is equall to n, we found the square root */
	if (square == n)
	{
		return (x);
	}
	/* if the square is larger than n, reduce the estimate */
	else if (square > n)
	{
		return (-1);
	}
	/* if the square is smaller than n, increment the estimate and continue. */
	else
	{
		return (find_sqrt(n, x + 1));
	}
}
