#include "main.h"
#include <stdlib.h>

/**
 * _realloc - a function that reallocates a memory block using malloc and free
 *
 * @ptr: a pointer to the previously allocated memory
 * @old_size: the size of the allocated space for ptr
 * @new_size: the size of the new memory block
 *
 * Return: a pointer to the newly allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int min_size, i;
	char *dest, *char_ptr;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	dest = malloc(new_size);
	if (dest == NULL)
		return (NULL);

	if (ptr == NULL)
		return (dest);

	min_size = (new_size > old_size) ? old_size : new_size;

	char_ptr = ptr;
	for (i = 0; i < min_size; i++)
		dest[i] = char_ptr[i];
	free(ptr);

	return (dest);
}
