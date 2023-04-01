#include <stdio.h>

int main(void)
{
	int i, num, sign, result;
	char var[] = "+++++-----++++234";

	i = num = 0;
	sign = 1;
	while(var[i])
	{
		if (var[i] == 45)
		{
			sign *= -1;
		}
		else if (var[i] >= 48 && var[i] <= 57)
		{
			num = num * 10 + (var[i] - '0');
		}
		i++;
	}

	result = sign * num;

	printf("%d\n", result);
	return (0);
}
