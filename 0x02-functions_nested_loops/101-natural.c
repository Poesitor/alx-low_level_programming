#include "main.h"
#include <stdio.h>

/**
 * main - a function that prints the sum of all multiples of
 * 3 and 5 below 1024
 *
 * Return: void
 */
int main(void)
{
	int i, sum;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 || i % 5)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);

	return (0);
}
