#include <stdlib.h>

/**
 * array_range -  a function that creates an array of integers from min to max
 *
 * @min: the first value of the array
 * @max: the last value of the array
 *
 * Return: returns a pointer to the newly created array (on success),
 * or returns NULL (on failure)
 */
int *array_range(int min, int max)
{
	int *arr;
	int size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min + i;

	return (arr);
}
