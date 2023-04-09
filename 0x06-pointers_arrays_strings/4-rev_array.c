#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integers
 *
 * @a: a pointer to the array
 * @n: the number of elements of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, len, temp;

	len = n / 2;
	for (i = 0; i < len; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
