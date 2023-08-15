#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 *
 * @d: a pointer to the variable struct
 * @name: the name to be used
 * @age: the age to be used
 * @owner: the name of the owner to be used
 *
 * Return: void
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
