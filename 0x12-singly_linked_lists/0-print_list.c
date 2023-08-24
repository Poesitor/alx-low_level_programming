#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 *
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes on the list
 */
size_t print_list(const list_t *h)
{
	const list_t *current = h;
	size_t element_count = 0;

	while (current != NULL)
	{
		if (current->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", current->len, current->str);

		current = current->next;
		element_count++;
	}

	return (element_count);
}
