#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list and sets head to NULL
 *
 * @head: a pointer to the address of the head of the list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *tmp;

	if (*head == NULL || head == NULL)
		return;

	current = *head;
	while (current != NULL)
	{
		tmp = current->next;
		free(current);
		current = tmp;
	}

	*head = NULL;
}
