#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * pow - function to raise an integer by an exponent
 *
 * @x: integer to be raised
 * @y: the exponent
 *
 * Return: -1 if y is lower than 0
 */
int _pow(int x, int y)
{
	int i;

	if (y < 0)
	{
		return (1);
	}

	if (y > 0)
	{
		if (i == 1)
			return (x);
		if (i == 0)
			return (1);
		for (i = 2; i < y; i++)
		{
			x *= x;
		}
	}
	return (x);
}


/**
 * main - for performing tests
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char last_digit_arg2;
	int length_arg1, length_arg2, i;
	int value = 0;

	length_arg1 = strlen(argv[1]);

	length_arg2 = strlen(argv[2]);
	last_digit_arg2 = argv[2][length_arg2 - 1];

	for (i = 0; i < length_arg1; i++)
	{
		value += (last_digit_arg2 - '0') * ((argv[1][length_arg1 - 1 - i]) - '0') * (_pow(10, i));
		printf("%d\n", value);
	}


	return (0);
}
