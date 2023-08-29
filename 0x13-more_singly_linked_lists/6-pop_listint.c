#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 *
 * @head: a pointer to the address of the head of the list
 *
 * Return: the head node's data,
 * returns 0 if linked list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int n;

	current = *head;
	if (current == NULL)
		return (0);

	n = current->n;
	*head = current->next;

	free(current);

	return (n);
}
