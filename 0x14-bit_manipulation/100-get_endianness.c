#include <stdio.h>

/**
 * get_endianness - a function to check the endianness of a system
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	unsigned char *c = (unsigned char *)&i;

	if (*c)
		return (1);
	else
		return (0);
}
