#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: the first string
 * @s2: the second string
 *
 * Return: a pointer to the newly allocates space in memory that contains
 * the contents of s1, followed by the contents of s2
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	int size = 0;
	char *concat;

	if (s1 != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
			size++;
	}

	if (s2 != NULL)
	{
		for (i = 0; s2[i] != '\0'; i++)
			size++;
	}
	size += 1;

	concat = malloc(sizeof(char) * size);
	if (concat == NULL)
		return (NULL);

	for (i = 0, j = 0; s1[i] != '\0'; i++, j++)
		concat[i] = s1[i];

	for (i = 0; s2[i] != '\0'; i++, j++)
		concat[j] = s2[i];

	return (concat);
}
