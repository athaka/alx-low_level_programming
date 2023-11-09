#include <stdlib.h>
#include <stdio.h>
#include "calc.h"

/**
 * main - Function that performs the magic calculation.
 * @argc: Number of arguments passed.
 * @argv: Arguments vector passed.
 *
 * Return: Nothing.
 */

int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);
	int result;

	int (*selected_op)(int, int) = get_op_func(argv[2]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (selected_op == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = selected_op(num1, num2);
	printf("%d\n", result);

	return (0);
}
