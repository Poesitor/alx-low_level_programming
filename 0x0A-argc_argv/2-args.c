#include "main.h"
#include <stdio.h>

/**
 * main - a function that prints all the arguments it receives
 *
 * @argc: the number of arguments received
 * @argv: an array of all the arguments
 *
 * Return: On success 0.
 * On failure 1.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
