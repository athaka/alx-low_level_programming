#include <stdio.h>
/**
  * main - A program that prints all possible distinct combinations of
  * two-digits numbers using putchar
  * Return: 0 and exit
  */
int main(void)
{
	int n1, n2;

	/* use a for loop tio iterate from 0 to 9 for the first digits */
	for (n1 = 0; n1 <= 9; n1++)
	{
	/* nested for loop to iterate from 0 to 9 for the second digits */
		for (n2 = n1 + 1; n2 <= 9; n2++)
		{
			putchar('0' + n1);
			putchar('0' + n2);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
