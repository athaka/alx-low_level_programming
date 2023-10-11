#include <stdio.h>
/**
  * main - A program that prints all possible distinct combinations of
  * three-digits numbers using putchar
  * Return: 0 and exit
  */
int main(void)
{
	int n1, n2, n3;

	/* use a for loop tio iterate from 0 to 7 for the first digits */
	for (n1 = 0; n1 <= 7; n1++)
	{
	/* nested for loop to iterate from 0 to 8 for the second digits */
		for (n2 = n1 + 1; n2 <= 8; n2++)
		{
			for (n3 = n2 + 1; n3 <= 9; n3++)
			{
				/* nested for loop to iterate from 0 to 9 for the third digits */
				putchar('0' + n1);
				putchar('0' + n2);
				putchar('0' + n3);
				/* return last combination without a comma */
				if (n1 != 7 || n2 != 8 || n3 != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
