#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string
 *
 * @str: the string to duplicate
 *
 * Return: a pointer to the newly-allocated duplicate string
 */
char *_strdup(char *str)
{
	char *duplicate;
	int i, len;

	if (str == NULL)
		return (NULL);

	len = 0;
	while (str[len] != '\0')
		len++;

	duplicate = malloc(sizeof(char) * (len + 1));
	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		duplicate[i] = str[i];

	duplicate[len] = '\0';

	return (duplicate);
}
