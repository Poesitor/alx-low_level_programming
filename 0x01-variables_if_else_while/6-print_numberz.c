#include <stdio.h>

/**
 * main - prints all single digit numbers with putchar
 *
 * Return: Always 0 (main)
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
