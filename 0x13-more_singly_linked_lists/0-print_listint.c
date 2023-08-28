#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - prints all the elements of a listint_t list
 *
 * @h: a pointer to the constand head of the list
 *
 * Return: the number of nodes in the listint_t list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *iterator = h;

	while (iterator != NULL)
	{
		printf("%d\n", iterator->n);
		iterator = iterator->next;

		count++;
	}

	return (count);
}
