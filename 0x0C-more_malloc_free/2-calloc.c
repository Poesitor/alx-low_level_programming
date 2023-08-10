#include "main.h"
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array using malloc
 *
 * @nmemb: the number of elements in the array
 * @size: the size of each element in the array
 *
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *dest;

	if (nmemb == 0 || size == 0)
		return (NULL);

	dest = malloc(sizeof(size) * nmemb);
	if (dest == NULL)
		return (NULL);

	return (dest);
}
