#include <stdio.h>
/**
  * main - A program that prints in lowercase all
  * the letter of the alphabet using putchar twice
  * Return: 0 and exit
  */
int main(void)
{
	char l = 'a';

	while (l <= 'z')
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
