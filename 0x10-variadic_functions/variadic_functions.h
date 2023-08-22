#include <stdarg.h>

#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

typedef struct
{
	char *format;
	void (*format_print)(va_list);
} FormatMapping;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* VARIADIC_FUNCTIONS_H */
