#include <stdio.h>
/**
  * main - A program that prints all possible distinct combinations of
  * three-digits numbers using putchar
  * Return: 0 and exit
  */
int main(void)
{
	int n11, n12, n21, n22;

	/* use a for loop tio iterate from 0 to 7 for the first digits */
	for (n11 = 0; n11 <= 9; n11++)
	{
	/* nested for loop to iterate from 0 to 8 for the second digits */
		for (n12 = n11 + 1; n12 <= 9; n12++)
		{
			for (n21 = 0; n21 <= 9; n21++)
			{
				for (n22 = n21 + 1; n22 <= 9; n22++)
				{
					/* nested for loop to iterate from 0 to 9 for the third digits */
					putchar('0' + n11);
					putchar('0' + n12);
					putchar(' ');
					/* return last combination without a comma */
					if (n11 != 9 || n12 != 8 || n21 != 9 || n22 != 9)
					{
						putchar('0' + n21);
						putchar('0' + n22);
						putchar(',');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
