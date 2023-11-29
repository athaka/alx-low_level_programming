#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index
 * @n: Pointer to the number whose bit to clear
 * @index: The index of the bit to clear (0-based)
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		/* Check if the index is within the valid range */
		return (-1);
	}
	*n = (*n) & ~(1 << index);
	return (1);
}
