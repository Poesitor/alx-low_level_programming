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
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
