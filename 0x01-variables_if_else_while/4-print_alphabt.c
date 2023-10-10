#include <stdio.h>
/**
  * main - A program that prints in lowercase all
  * the letter of the alphabet using putchar,
  * except e and q
  * Return: 0 and exit
  */
int main(void)
{
	char l = 'a';

	while (l <= 'z')
	{
		if (l != 'e' && l != 'q')
		{
			putchar(l);
		}
		l++;
	}
	putchar('\n');
	return (0);
}
