#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - helper function to print a character format
 *
 * @args: the arguments passed to the print_all function
 *
 * Return: Void
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - helper function to print an int format
 *
 * @args: the arguments passed to the print_all function
 *
 * Return: Void
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - helper function to print a floating point format
 *
 * @args: the arguments passed to the print_all function
 *
 * Return: Void
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - helper function to print a string format
 *
 * @args: the arguments passed to the print_all function
 *
 * Return: Void
 */
void print_string(va_list args)
{
	char *string;
	string = va_arg(args, char *);

	if (string == NULL)
		string = "(nil)";

	printf("%s", string);
}

/**
 * print_all - a function that prints anyting passed to it
 *
 * @format: a list of types of arguments passed to the function
 * @...: the variable arguments
 *
 * Return: Void.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int j;
	int i = 0;
	int separator = 0;

	FormatMapping mappings[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format[i] && format)
	{
		if (separator)
		{
			printf(", ");
			separator = 0;
		}

		j = 0;
		while (j < 4)
		{
			if (format[i] == *mappings[j].format)
			{
				mappings[j].format_print(args);
				separator = 1;
				break;
			}
			j++;
		}
		i++;
	}

	va_end(args);
	printf("\n");
}
