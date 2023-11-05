#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr -  A function that concatenates the
 * arguments provided to the program.
 * @ac: Number of arguments.
 * @av: Pointer to an array of arguments.
 *
 * Return: Nothing.
 */
char *argstostr(int ac, char **av)
{
	int i, l, pos;
	char *concat;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	l = 0;

	for (i = 0; i < ac; i++)
	{
		l += strlen(av[i]) + 1;
	}
	concat = (char *)malloc(l * sizeof(*av));

	if (concat == NULL)
	{
		return (NULL);
	}
	pos = 0;
	for (i = 0; i < ac; i++)
	{
		strcpy(concat + pos, av[i]);
		pos += strlen(av[i]);
		concat[pos++] = '\n';
	}
	concat[pos] = '\0';

	return (concat);
}
