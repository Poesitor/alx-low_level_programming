#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function that multiplies two numbers from arguments
 *
 * @argc: the number of arguments passed to the function
 * @argv: an array holding the arguments
 *
 * Return: On success 0.
 * if argc does not equal two 1.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
