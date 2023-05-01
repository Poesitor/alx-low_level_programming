#include "main.h"

/**
 * _memcpy - a function that copies a memory area
 *
 * @dest: the copy destination
 * @src: the copy source
 * @n: the number of bytes to copy from src
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = src[i];
	}

	return (dest);
}
