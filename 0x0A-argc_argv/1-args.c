#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed to it
 *
 * @argc: the number of arguments passed to the function
 * @argv: the array holding the string values of the arguments
 *
 * Return: On success 0.
 * On failure 1.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", (argc - 1));

	return (0);
}
