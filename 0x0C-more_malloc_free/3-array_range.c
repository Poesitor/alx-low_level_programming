#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 *
 * @min: the lowest value of the integers
 * @max: the highest value of the integers
 *
 * Return: a pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int num, i;
	int *dest;

	if (min > max)
		return (NULL);

	num = max - min + 1;

	dest = malloc(sizeof(int) * num);
	if (dest == NULL)
		return (NULL);

	for (i = 0; i < num; i++)
		dest[i] = min + i;

	return (dest);
}
