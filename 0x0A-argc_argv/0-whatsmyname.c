#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints its name followed by a new line
 *
 * @argc: the argument count
 * @argv: an array of arguments passed to main
 *
 * Return: Always 0.
 */
int main(__attribute__((unused))int argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
