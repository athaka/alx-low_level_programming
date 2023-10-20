#include "main.h"
/**
 * leet - A function that encodes a string into 1337
 * @str: A pointer to the string
 * Return: original.
 */

char *leet(char *str)
{
	int i, j;
	char sub[] = "aAeEoOtTlL";
	char replace[] = "43071";

	i = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; sub[j] != '\0'; j++)
			if (str[i] == sub[j])
				str[i] = replace[j / 2];
	}
	return (str);
}
