#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints all the arguments it receives
 *
 * @argc: argunemt count
 * @argv: argument vector
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
