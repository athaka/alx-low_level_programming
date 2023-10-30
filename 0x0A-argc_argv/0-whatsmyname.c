#include <stdlib.h>
#include <stdio.h>

/**
 * main - A function that prints its own name
 * @argc: argument count represents number of  arguments
 * @argv: argument vector containing actual argument
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
