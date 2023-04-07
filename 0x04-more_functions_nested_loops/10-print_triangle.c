#include "main.h"

/**
 * print_triangle - prints a triangle followed by a new line
 *
 * @size: the size of the triangle
 *
 * Return: Always 0 (success)
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= 2; i++)
	{
		while (i < size)
		{
			_putchar(' ');
			i++;
		}

		j = 0;
		while (j <= i)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
	}
}
