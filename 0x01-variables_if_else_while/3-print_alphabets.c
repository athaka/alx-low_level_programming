#include <stdio.h>
/**
  * main - A program that prints all the letters
  * of the alphatet in lower and the uper case
  * respectively.
  * Return: 0 and exit
  */
int main(void)
{
	char l = 'a';
	char L = 'A';

	while (l <= 'z')
	{
		putchar(l);
		l++;
	}
	while (L <= 'Z')
	{
		putchar(L);
		L++;
	}
	putchar('\n');
	return (0);
}
