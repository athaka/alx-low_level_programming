#include "main.h"
/**
 * is_prime_number - A function  that identifys prime numbers
 * @n: Any number.
 *
 * Return: null.
 */

int is_prime_number(int n)
{
	/* Start the recursive check with div = 2. */
	return (is_prime_recursive(n, 2));
}

/**
 * is_prime_recursive - Helper function that compute
 * prime numbers.
 * @n: Any number.
 * @div: A tester number.
 *
 * Return: nothing.
 */

int is_prime_recursive(int n, int div)
{
	/* Base Case: If n is less than 2, it's not a prime number. */
	if (n < 2)
	{
		return (0);
	}
	/* Base Case: If the div exceeds the square root of n, it's prime. */
	if (div * div > n)
	{
		return (1);
	}
	/* If n is divisible by the current div, it's not prime. */
	if (n % div == 0)
	{
		return (0);
	}
	/* Try the next div candidate. */
	return (is_prime_recursive(n, div + 1));
}
