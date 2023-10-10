#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  * main - A program that returns the magnitude of the last
  * digit of a random number
  * Return: 0 and exit
  */
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* Assigning variables*/
	l = n % 10;

	/* check the boolean condition */
	if (l == 0)
	{
		/* if this condition is true print */
		printf("Last digit of %d is %d and is 0\n", n, l);
	}
	else if (l < 6 && l != 0)
	{
		/* if this condition is true print */
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
	}
	else
	{
		/* if non of the above conditions is true print */
		printf("Last digit of %d is %d and is greater than 5\n", n, l);
	}
	return (0);
}
