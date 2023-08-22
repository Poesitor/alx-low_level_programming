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


	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(ap);

	putchar('\n');
}
