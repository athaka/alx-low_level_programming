#include "main.h"
#include <string.h>
/**
 * is_palindrome - A function  that identifys a palindrome in a string
 * @s: A string.
 *
 * Return: nothing.
 */

int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len <= 1)
	{
		/* An empty string or a single character is a palindrome. */
		return (1);
	}
	return (is_palindrome_recursive(s, 0, len - 1));
}

/**
 * is_palindrome_recursive - A Helper function  to identifys a palindrome
 * @s: A string.
 * @start: The beginning of the string
 * @end: The end of the string
 *
 * Return: nothing.
 */

int is_palindrome_recursive(char *s, int start, int end)
{
	/* Base Case: An empty string or a single character is a palindrome. */
	if (start >= end)
	{
		return (1);
	}
	/* Compare characters at the start and end of the string. */
	if (s[start] == s[end])
	{
		/* Continue checking the rest of the string. */
		return (is_palindrome_recursive(s, start + 1, end - 1));
	}
	/* Characters do not match, not a palindrome. */
	return (0);
}
