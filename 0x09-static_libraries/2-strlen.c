#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: a pointer that points to the string to be counted
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i, len;

	i = len = 0;
	while (s[i])
	{
		len++;
		i++;
	}
	return (len);
}
