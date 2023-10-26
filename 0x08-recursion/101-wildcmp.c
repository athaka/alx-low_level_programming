#include "main.h"
#include <string.h>
/**
 * wildcmp - A function  that compares two string
 * @s1: Pointer to string one.
 * @s2: Pointer to string two.
 *
 * Return: nothing.
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*' && *(s2 + 1) && !*s1)
		return (0);
	if (!*s1 && !*s2)
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	return (0);
}
