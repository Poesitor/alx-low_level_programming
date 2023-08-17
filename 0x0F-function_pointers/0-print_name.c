#include "function_pointers.h"

/**
 * a function that prints the name passed to it, based on the format specified
 *
 * @name: the name to be printed
 * @f: a pointer to a function that takes name as parameter, and prints.
 *
 * Return: voie
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
