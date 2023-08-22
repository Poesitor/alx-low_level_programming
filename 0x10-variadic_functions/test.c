#include <stdio.h>
#include <stdarg.h>

/**
 * printargs - a function that prints the arguments passsed to it
 * until a negative argument is seen or up to the last argument
 *
 * @arg1: the first of the variable number of arguments
 *
 * Return: void
 */
void printargs(int arg1, ...)
{
	va_list ap;
	int i;

	va_start(ap, arg1);
	for (i = arg1; i >= 0; i = va_arg(ap, int))
		printf("%d ", i);
	va_end(ap);
	printf("\n");
}

int main(void)
{
	printargs(2, 4, 5);

	return (0);
}
