#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: the pointer to the string
 *
 * Return: the length of s
 */
int _strlen(char *s)
{
	int len, i;

	len = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}
