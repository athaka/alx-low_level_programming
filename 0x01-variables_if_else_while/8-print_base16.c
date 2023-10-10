#include <stdio.h>
/**
  * main - A program that prints all the numbers of
  * the base 16 (hexadecimal) in lower case using putchar
  * Return: 0 and exit
  */
int main(void)
{
	int n;

	/* use a for loop to iterate from 0 to 15 */
	for (n = 0; n <= 15; n++)
	{
		if (n >= 0 && n <= 9)
		{
			/* print the current numbers followed by a new line */
			putchar('0' + n);
		}
		else
		{
			/* print the alphabet part of the hexadecimal */
			putchar('a' + (n - 10));
		}
	}
	putchar('\n');
	return (0);
}
