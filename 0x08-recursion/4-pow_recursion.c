#include "main.h"
/**
 * _pow_recursion - A function  that returns the value of x
 * raised to the power of y.
 * @x: Any giving integer.
 * @y: The exponent.
 *
 * Return: null.
 */

int _pow_recursion(int x, int y)
{
	/* error handling */
	if (y < 0)
	{
		return (-1);
	}
	/* base case */
	else if (y == 0)
	{
		return (1);
	}
	/* recursive case */
	else
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
}
