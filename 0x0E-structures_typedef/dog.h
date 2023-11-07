#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A structure that declares my dog's profile
 * @name: my dog's name
 * @age: my dog's age
 * @owner: me
 * Return: 0 always
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
