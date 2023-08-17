#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches an array for an integer
 *
 * @array: a pointer to the array
 * @size: the size of the array
 * @cmp: the pointer to the function to perform the searching for an integer value
 *
 * Return: the index of the first element for which
 * the cmp function does not return 0.
 * if no element matches, function retyrns -1.
 * if size <= 0, returns -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}

	return (-1);
}
