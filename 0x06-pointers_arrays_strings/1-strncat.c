#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: the leading string
 * @src: the ending string
 * @n: maximum number of bytes to take from src
 *
 * Return: a pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, len;

	len = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		len++;
	}

	for (j = 0; j < n; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';

	return (dest);
}
