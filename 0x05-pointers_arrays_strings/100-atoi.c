#include <stdio.h>
#include "main.h"

int _atoi(char *s)
{
	int i, num, sign, result;

	i = num = 0;
	sign = 1;
	while (s[i])
	{
		if (s[i] == 45)
		{
			sign *= -1;
		}
		else if (s[i] >= 48 && s[i] <= 57)
		{
			num = num * 10 + (s[i] - '0');

			if (s[i + 1] < 48 || s[i + 1] > 57)
			{
				break;
			}
		}
		i++;
	}

	result = sign * num;

	return (result);
}
