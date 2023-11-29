#include "main.h"

/**
 * flip_bits - Returns the number of bits to flip to
 * get from one number to another
 * @n: The first number
 * @m: The second number
 *
 * Return: Number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result != 0)
	{
		/* Increment count for each set bit in xor_result */
		count += xor_result & 1;
		/* Right shift xor_result to process the next bit */
		xor_result >>= 1;
	}
	return (count);
}
