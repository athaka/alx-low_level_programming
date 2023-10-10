#include <stdio.h>
/**
  * main - A program that prints all possible combinations of
  * single-digit numbers using putchar
  * Return: 0 and exit
  */
int main(void)
{
	int n;

	/* use a for loop to iterate from 0 to 15 */
	for (n = 0; n <= 9; n++)
	{
		putchar('0' + n);
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
