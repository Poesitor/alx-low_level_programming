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
	if (index >= sizeof(n) * 8)
		return (-1);
	if (1 << index & n)
		return (1);
	else
		return (0);
}
