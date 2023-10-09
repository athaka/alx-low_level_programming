#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* main - A program that returns the sign of the value in a variable 'n' */
/* Return: 0 and exit */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

/* check the boolean condition */
if (n > 0)
{
/* if this condition is true print */
printf("%d is positive", n);
}
else if (n == 0)
{
/* if this condition is true print */
printf("%d is zero", n);
}
else
{
/* if non of the condition is true print */
printf("%d is negative", n);
}
return (0);
}
