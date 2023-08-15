#ifndef DOG_H
#define DOG_H

/**
 * struct dog - contains the characteristics of a dog
 *
 * @name: the name of the dog
 * @age: the old of the dog in human years
 * @owner: the name of the dog's owner
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
