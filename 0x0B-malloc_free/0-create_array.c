#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific character
 *
 * @size: the size of the array
 * @c: the initializing character
 *
 * Return: NULL (if size = 0), NULL (if the program fails)
 * returns a pointer to the array (on success)
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}

	char *array == malloc(size * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}

	for (unsigned int i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
