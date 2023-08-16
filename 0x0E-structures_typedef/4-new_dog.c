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

	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;

	return (new_dog);
}
