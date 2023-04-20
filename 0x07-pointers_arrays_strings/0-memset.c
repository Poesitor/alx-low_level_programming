#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 *
 * @s: pointer to the memory location
 * @b: the constant byte to be filled
 * @n: the number of memory areas to be filled
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
