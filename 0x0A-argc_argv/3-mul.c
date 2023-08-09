#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies and prints two numbers passed to it
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if two arguments are passed
 * otherwise returns 1.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		puts("Error");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
