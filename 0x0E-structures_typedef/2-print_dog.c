#include <stdio.h>
#include "dog.h"

/**
 * print_dog - A function that prints the details of
 * a struct dog
 * @d: Pointer to type struct dog
 *
 * Return: 0 always
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("name: %s\n", (d->name != NULL) ? d->name : "(nil)");
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
	}
}
