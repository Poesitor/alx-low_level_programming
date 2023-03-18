#include <stdio.h>

/**
 * main - print all letters except two
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'q' || letter != 'e')
		{
			putchar(letter);
		}
		letter++;
	}
	putchar('\n');
}
