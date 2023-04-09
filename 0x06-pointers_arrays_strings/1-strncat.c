#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 *
 * @dest: the function appends another string to this
 * @src: the string to be appended
 * @n: function uses at most n bytes from src
 *
 * Return: A pointer pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len, i;

	i = dest_len = 0;
	while (dest[i])
	{
		dest_len++;
		i++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';

	return (dest);
}
