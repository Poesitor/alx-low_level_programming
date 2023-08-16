#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - a function that creates a new dog struct
 *
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the car
 *
 * Return: a pointer to the address of the newly created dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = strdup(name);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->age = strdup(age);
	if (new->age == NULL)
	{
		free(new->name);
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = owner;

	return (new_dog);
}
