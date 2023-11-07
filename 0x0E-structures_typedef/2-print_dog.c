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
		printf("Name: ");
		d->name == NULL ? printf("(nil)\n") : printf("%s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: ");
		d->owner == NULL ? printf("(nil)\n") : printf("%s\n", d->owner);
	}
}
