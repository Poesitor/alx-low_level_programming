#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void print_error(void)
{
	printf("Error\n");
	exit(98);
}

int parse_number(char *str, int *digits, int len)
{
	int i;
	for (i = 0; i < len; i++)
	{
		if (!isdigit(str[i]))
		{
			print_error();
		}
		digits[len - 1 - i] = str[i] - '0';
	}
	return (len);
}

void multiply(int *a, int len_a, int *b, int len_b, int *result)
{
	int i, j, carry;
	for (i = 0; i < len_a + len_b; i++)
	{
		result[i] = 0;
	}
	for (i = 0; i < len_a; i++)
	{
		carry = 0;
		for (j = 0; j < len_b; j++)
		{
			result[i + j] += a[i] * b[j] + carry;
			carry = result[i + j] / 10;
			result[i + j] %= 10;
		}
		result[i + j] += carry;
	}
}


void print_number(int *digits, int len)
{
	int i;

	for (i = len - 1; i >= 0; i--)
	{
		printf("%d", digits[i]);
	}
	printf("\n");
}

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		print_error();
	}
	int len_a = strlen(argv[1]);
	int len_b = strlen(argv[2]);
	int *a = malloc(len_a * sizeof(int));
	int *b = malloc(len_b * sizeof(int));
	if (a == NULL || b == NULL)
	{
		print_error();
	}
	len_a = parse_number(argv[1], a, len_a);
	len_b = parse_number(argv[2], b, len_b);
	int *result = malloc((len_a + len_b) * sizeof(int));
	if (result == NULL)
	{
		print_error();
	}

	multiply(a, len_a, b, len_b, result);
	print_number(result, len_a + len_b);
	free(a);
	free(b);
	free(result);
	return (0);
}
