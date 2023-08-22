#include "main.h"

/**
 * _atoi - converts a string to an integer
 *
 * @s: a pointer to the string to be converted
 *
 * Return: the resulting ineger
 */
int _atoi(char *s)
{
	int i, sign, val, result;

	sign = 1;
	result = 0;

	for (i = 0; (s[i] == '-') || (s[i] == '+') || (s[i] == ' '); i++)
	{
		if (s[i] == '-')
			sign *= -1;
	}
	for (; s[i] != '\0'; i++)
	{
		if ((s[i] < 48 && s[i] > 57) && (s[i - 1] >= 48 && s[i - 1] <= 57))
		{
			result *= sign;
		}
		if (s[i] >= 48 && s[i] <= 57)
		{
			val = s[i] - '0';
			result *= 10;
			result += val;
		}
	}
	return (result);
}
