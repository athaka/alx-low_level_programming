#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: The number to extract the bit from
 * @index: The index of the bit to retrieve (0-based)
 *
 * Return: Value of the bit at the given index,
 * or -1 if an error occurred
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		/* Check if the index is within the valid range */
		return (-1);
	}
	return ((n >> index) & 1);
}
