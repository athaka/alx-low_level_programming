#include <stdlib.h>
#include <stdio.h>
/**
 * main - A function that prints the
 * addition of two integers.
 * @argc: argument count represents number of  arguments
 * @argv: argument vector containing actual argument
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int coins[5] = {25, 10, 5, 2, 1};
	int coinsCount;
	int coinIndex;
	int totalCoins;
	int cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	coinsCount = sizeof(coins) / sizeof(coins[0]);
	coinIndex = 0;
	totalCoins = 0;
	while (cents > 0 && coinIndex < coinsCount)
	{
		/* Count the number of coins for the current denomination */
		totalCoins += cents / coins[coinIndex];
		/* Update the remaining amount */
		cents %= coins[coinIndex];
		/* Move to the next denomination */
		coinIndex++;
	}
	printf("%d\n", totalCoins);
	return (0);
}
