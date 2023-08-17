#include <stdlib.h>
#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each element
 * of an array.
 *
 * @array: a pointer to the first element of the array
 * @size: the size of the array
 * @action: the pointer to the function to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array != NULL && action != NULL)
		for (i = 0; i < (int) size; i++)
		{
			action(array[i]);
		}
}
