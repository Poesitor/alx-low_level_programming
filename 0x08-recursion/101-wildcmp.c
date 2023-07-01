#include "main.h"

/**
 * wildcmp_helper - recursive helper function for wildcmp.
 *
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise.
 */
int wildcmp_helper(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp_helper(s1, s2 + 1));
		if (*(s2 + 1) == '\0')
			return (1);
		if (*s1 != '\0' && wildcmp_helper(s1 + 1, s2))
			return (1);
		return wildcmp_helper(s1, s2 + 1);
	}
	if (*s1 != *s2)
		return (0);
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	return (wildcmp_helper(s1 + 1, s2 + 1));
}

/**
 * wildcmp - compares two strings and checks if they can be considered identical
 *
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	return (wildcmp_helper(s1, s2));
}
