#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * string_nconcat - a function that concatenates two strings
 *
 * @s1: the first string
 * @s2: the second string
 * @n: the number of bytes of s2 to be concatenated to s1
 *
 * Return: on success(A pointer to the newly allocated space in memory
 * which contains s1, followed by the first n bytes of s2, and null terminated)
 * On failure (NULL)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		n = len2;

	result = malloc(len1 + n + 1);

	if (result == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		result[i] = s1[i];

	for (i = 0; i < n; i++)
		result[len1 + i] = s2[i];

	result[len1 + n] = '\0';

	return (result);
}
