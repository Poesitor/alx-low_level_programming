#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: the leading string
 * @src: the ending string
 *
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int i, j, len;

	len = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		len++;
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';

	return (dest);
}
