#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints its name
 *
 * @argc: the number of arguments passed to the function
 * @argv: the array holding the string values of the arguments
 *
 * Return: On success 0.
 * On failure 1.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
