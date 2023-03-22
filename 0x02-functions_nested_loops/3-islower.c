#include "main.h"

/**
 * _islower - checks for the lowercase character
 *
 * Return: 1 (character is lowercase), 0 (character is uppercase)
 */
int _islower(int c)
{
	if (c < 97 || c > 122)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
