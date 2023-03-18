#include <stdio.h>

/**
 * main - print all base 16 numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char num = '0';

	for (; num <= '9'; num++)
	{
		putchar(num);
	}
	for (num = 'a'; num <= 'f'; num++)
	{
		putchar(num);
	}
	putchar('\n');

	return (0);
}
