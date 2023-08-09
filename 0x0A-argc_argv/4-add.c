#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that adds positive numbers
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: On success 0,
 * otherwise 1.
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;

	while (i < argc)
	{
		if (*argv[i] < 48 || *argv[i] > 57)
		{
			printf("Error\n");
			return (1);
		}

		else
		{
			sum += atoi(argv[i]);
		}

		i++;
	}
	printf("%d\n", sum);

	return (0);
}
