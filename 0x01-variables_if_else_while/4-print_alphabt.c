#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, except q and e
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char i;

	for (i = 97; i <= 122; i++)
	{
		if (i != 'q' && i != 'e')
		{
			putchar(i);
		}
	}

	putchar('\n');

	return (0);
}
