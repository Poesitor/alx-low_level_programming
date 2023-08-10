#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - a function that allocates memory using malloc
 *
 * @b: The size of the memory to be allocated
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *space;

	space = malloc(b);
	if (space == NULL)
		exit(98);

	return (space);
}
