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
	unsigned int i;
	char *dest;

	if (nmemb == 0 || size == 0)
		return (NULL);

	dest = malloc(size * nmemb);
	if (dest == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		dest[i] = 0;

	return (dest);
}
