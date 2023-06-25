#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random passwords for the program 101-crackme.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	char password[10 + 1];

	srand(time(NULL));

	for (i = 0; i < 10; i++)
	{
		password[i] = '!' + (rand() % ('-' - '!'));
	}

	password[10] = '\0';

	printf("%s\n", password);

	return (0);
}
