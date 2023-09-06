#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 *
 * @n: a pointer to the integer to be manipulated
 * @index: the position of the index to be changed
 *
 * Return: 1 On success, -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	*n = *n | 1 << index;
	return (1);
}
