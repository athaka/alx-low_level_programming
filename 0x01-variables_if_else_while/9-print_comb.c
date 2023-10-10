#include <stdio.h>
/**
  * main - A program that prints all possible combinations of
  * single-digit numbers using putchar
  * Return: 0 and exit
  */
int main(void)
{
	int n1, n2;

	/* use a for loop to iterate from 0 to 15 */
	for (n1 = 0; n1 <= 9; n1++)
	{
		for (n2 = 0; n2 <= 9; n2++)
		{
			putchar('0' + n1);
			putchar(',' + ' ');
			putchar('0' + n2);
		}
	}
	putchar('\n');
	return (0);
}
