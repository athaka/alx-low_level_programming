#include "main.h"

/**
 * get_endianness - Checks the endianness of the system
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *byte_pointer = (char *)&num;
	/* If the first byte is 1, the system is little endian */
	return (*byte_pointer == 1);
}
