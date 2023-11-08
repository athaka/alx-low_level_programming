#include <stdlib.h>
#include <stdio.h>

/**
 * print_main_opcodes - Function to print opcode
 * @bytes: An argument
 *
 * Return: Nothing.
 */

void print_main_opcodes(int bytes)
{
	__asm__ (
			".intel_syntax noprefix\n\t"
			"label_main:\n\t"
			"nop\n\t"
			"nop\n\t"
			"nop\n\t"
			".att_syntax prefix\n\t"
			);
	int i;
	unsigned char *ptr = (unsigned char *)&main;

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < bytes; i++)
	{
		printf("%02x", ptr[i]);
		if (i < bytes - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
}

/**
 * main - check the code
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	bytes = atoi(argv[1]);
	print_main_opcodes(bytes);
	return (0);
}
