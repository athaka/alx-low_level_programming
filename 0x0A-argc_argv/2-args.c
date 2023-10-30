#include <stdlib.h>
#include <stdio.h>

/**
 * main - A function that prints whatever,
 * line by line.
 * @argc: argument count represents number of  arguments
 * @argv: argument vector containing actual argument
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
