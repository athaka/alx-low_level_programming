#include <stdio.h>

/**
 * main - display the size of data types
 * Return: 0 and exit the program.
 */
int main(void)
{
printf("Size of a char: %zu byte(s)\n", (unsigned long)sizeof(char));
printf("Size of an int: %zu byte(s)\n", (unsigned long)sizeof(int));
printf("Size of a long int: %zu byte(s)\n", (unsigned long)sizeof(long int));
printf("Size of a long long int: %zu byte(s)\n", (unsigned long)sizeof(long
long int));
printf("Size of a float: %zu bytes(s)\n", (unsigned long)sizeof(float));
return (0);
}
