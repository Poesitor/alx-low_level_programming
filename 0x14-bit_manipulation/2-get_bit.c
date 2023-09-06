#include "main.h"

/**
 * get_bit - gets the value of a bit at a given index
 *
 * @n: the number whose bit is to be checked
 * @index: the index of the bit to be returned
 *
 * Return: the value of the bit at index,
 * or returns -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if ((1 << index & n) >= 1)
		return (1);
	else if ((1 << index & n) == 0)
		return (0);
	else
		return (-1);
}
