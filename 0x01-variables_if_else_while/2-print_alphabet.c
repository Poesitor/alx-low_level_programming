#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
