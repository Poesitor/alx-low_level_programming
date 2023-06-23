#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	unsigned long prev1, prev2, num;

	prev1 = 0;
	prev2 = 1;
	for (i = 0; i <= 51; i++)
	{
		if (i != 0 && i != 1)
		{
			num = prev1 + prev2;
			if (i != 51)
			{
				printf("%lu, ", num);
			}
			else
				printf("%lu", num);

			prev1 = prev2;
			prev2 = num;
		}
	}
	return (0);
}
