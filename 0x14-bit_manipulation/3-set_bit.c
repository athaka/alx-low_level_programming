#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index
 * @n: Pointer to the number whose bit to set
 * @index: The index of the bit to set (0-based)
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		/* Check if the index is within the valid range */
		return (-1);
	}
	*n = (*n) | (1 << index);
	return (1);
}
