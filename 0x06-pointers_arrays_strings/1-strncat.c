#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: the parent string
 * @src: the string to be added
 * @n: the function will add at most n bytes from src
 *
 * Return: a pointer resulting to string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int j, i, len;

	j = len = 0;
	while (dest[j] != '\0')
	{
		len++;
		j++;
	}
	
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}	
	dest[len + i] = '\0';

	return (dest);
}
