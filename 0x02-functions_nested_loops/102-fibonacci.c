#include <stdio.h>

/**
 * main - prints the first 100 fibonacci numbers
 *
 * Return: void
 */
int main(void)
{
	int i;
	unsigned long long sequence[100];

	sequence[0] = 1;
	sequence[1] = 2;
	for (i = 2; i <= 100; i++)
	{
		sequence[i] = sequence[i - 2] + sequence[i - 1];
	}

	i = 0;
	while (sequence[i])
	{
		printf("%lld, ", sequence[i]);
		i++;

		if (sequence == 0)
			printf("\n");
	}

	return (0);
}
