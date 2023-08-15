#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints a struct dog
 *
 * @d: a pointer to the address of the struct
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		(d->name != NULL) ? printf("Name: %s\n", d->name) : printf("nil");
		(d->age != 0) ? printf("Age: %f\n", d->age) : printf("nil");
		(d->owner != NULL) ? printf("Owner: %s\n", d->owner) : printf("nil");
	}
}
