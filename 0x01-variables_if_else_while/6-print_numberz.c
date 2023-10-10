#include <stdio.h>
/**
  * main - A program that prints all single digits number of
  * base 10 starting from zero (0) using putchar
  * Return: 0 and exit
  */
int main(void)
{
	int i;

	/* use a for loop to iterate from 0 to 9 */
	for (i = 0; i <= 9; i++)
	{
		/* print the current number followed by a new line */
		putchar('0' + i);
	}
	putchar('\n');
	return (0);
}
