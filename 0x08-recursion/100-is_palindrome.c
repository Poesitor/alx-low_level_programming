#include "main.h"
#include "2-strlen_recursion.c"

/**
 * helper - function to help determine if a string is a palindrome or not
 *
 * @s: the string to be checked
 * @len: the length of the string
 * @i: the index of the checker step along the string
 *
 * Return: 1, if the string is a palindrome,
 * 0 otherwise.
 */
int helper(char *s, int len, int i)
{
	if (i >= len)
		return (1);

	if (s[i] != s[len - 1])
		return (0);
	else
		return (helper(s, len - 1, i + 1));
}

/**
 * is_palindrome - checks if a string is a palindrome or not
 *
 * @s: the string to be checked
 *
 * Return: 1, if the string is a palindrome
 * 0, if the string is not.
 */
int is_palindrome(char *s)
{
	int i, len;

	i = 0;
	len = _strlen_recursion(s);

	if (len == 0)
		return (1);
	else
		return (helper(s, len, i));
}
