#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 (s1 and s2 are equal), 
 * -1 (s1 is less than s2)
 *  1 (s1 is greater than s2)
 */
int _strcmp(char *s1, char *s2)
{
	int i, val1, val2;

	val1 = 0;
	for (i = 0; s1[i] != '\0'; i++)
	{
		val1 += s1[i];
	}

	val2 = 0;
	for (i = 0; s2[i] != '\0'; i++)
	{
		val2 += s2[i];
	}

	if (val1 < val2)
		return (-15);
	if (val1 > val2)
		return (15);

	return (0);
}
