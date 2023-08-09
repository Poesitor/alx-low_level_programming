#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and
 * initializes it with a specific char
 *
 * @size: the size of the memory to create
 * @c: the character to initialiize the created memory with
 *
 * Return: a pointer to the array.
 * returns NULL if memory allocation fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);
	if (arr != NULL)
	{
		for (i = 0; i < size; i++)
			arr[i] = c;
	}

	return (arr);
}
