#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_dog - A function that frees dog
 * @d: Pointer to dog_t
 *
 * Return: 0 always
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
		{
			free(d->name);
		}
		if (d->owner != NULL)
		{
			free(d->owner);
		}
		free(d);
	}
}
