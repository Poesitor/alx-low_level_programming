#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints the numbers passed to a
 * function followed by a new line
 *
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * @...: the variable arguments
 *
 * Return: Void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	if (n == 0)
		return;

	va_start(ap, n);
	for (i = 0; i < n - 1; i++)
		printf("%d%s", va_arg(ap, int), (separator) ? separator : "");

	printf("%d\n", va_arg(ap, int));
	va_end(ap);
}
