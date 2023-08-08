#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 *
 * @argc: the number of arguments passed
 * @argv: an array of argrments passed to main
 *
 * Return: Always 0.
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
