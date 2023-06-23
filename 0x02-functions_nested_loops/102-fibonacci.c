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
	for (i = 0; i < 50; i++)
	{
		if (i == 0)
			printf("%lu, ", prev1);
		if (i == 1)
			printf("%lu, ", prev2);
		else
		{
			num = prev1 + prev2;
			if (i != 50)
			{
				printf("%lu, ", num);
			}
			else
				printf("%lu", num);

			prev1 = prev2;
			prev2 = num;
		}
	}
}
