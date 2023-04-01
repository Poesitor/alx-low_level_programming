#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 *
 * @dest: the function appends another string to this
 * @src: the string to be appended
 *
 * Return: A pointer pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int dest_len, i;

	i = dest_len = 0;
	while (dest[i])
	{
		dest_len++;
		i++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';

	return (dest);
}
