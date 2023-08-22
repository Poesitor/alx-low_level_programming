#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - a function that sums all its parameters
 *
 * @n: the number of parameters passed
 * @...: The variable arguments.
 *
 * Return: the sum of all the parameters passed to the function.
 * or returns 0 if n = 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list ap;

	if (n == 0)
		return (0);

	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);

	return (sum);
}
