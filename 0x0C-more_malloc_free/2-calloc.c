#include <stdlib.h>
#include <string.h>

/**
 * _calloc - a function that allocates memory for an arra using malloc
 *
 * @nmemb: number of elements in the array
 * @size: the size of each element in the array
 *
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	memset(ptr, 0, nmemb * size);
	return (ptr);
}
