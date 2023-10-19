#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

int main(void)
{
	/* +1 for the null terminator */
	char password[PASSWORD_LENGTH + 1];
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	int i;
	int index;

	srand(time(NULL));

	/* Seed the random number generator with the current time */
	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		index = rand() % (sizeof(charset) - 1);
		password[i] = charset[index];
	}
	/* Null-terminate the password */
	password[PASSWORD_LENGTH] = '\0';
	/* Print the generated password */
	printf("%s\n", password);
	return 0;
}
