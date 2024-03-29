#include "dog.h"
#include <stddef.h>

/**
 * init_dog - A function that initializes a variable type
 * struct dog
 * @d: Pointer to type struct dog
 * @name: the dog's name
 * @age: the dog's age
 * @owner: Silly Charlie
 *
 * Return: 0 always
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
