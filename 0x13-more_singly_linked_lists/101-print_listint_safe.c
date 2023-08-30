#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint_safe - prints all the elements of a listint_t list.
 * this function can print lists with a loop.
 *
 * @h: a pointer to the constand head of the list
 *
 * Return: the number of nodes in the listint_t list
 */
size_t print_listint_safe(const listint_t *h)
{
	size_t node_count = 0;
	const listint_t *current = h;
	flag_listint_t *new_current;

	if (h == NULL)
		exit(98);

	new_current = malloc(sizeof(flag_listint_t));
	while (current != NULL)
	{
		new_current->n = current->n;
		new_current->flag = 1;
		new_current->next = malloc(sizeof(flag_listint_t));

		printf("[%p] %d\n", (void *)current, current->n);
		new_current = new_current->next;
		current = current->next;
		node_count++;
	}

	if (new_current->flag)
	{
		fprintf(stderr, "-> [%p] %d\n", (void *)current, current->n);
		exit(98);
	}

	return (i);
}
