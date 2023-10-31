#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - A function that prints the
 * addition of two integers.
 * @argc: argument count represents number of  arguments
 * @argv: argument vector containing actual argument
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;
	int j;
	int sum = 0;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
