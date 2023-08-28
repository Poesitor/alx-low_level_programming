#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a listint_t list
 *
 * @head: a pointer to the head of list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	if (head->next != NULL)
	{
		free_listint(head->next);
	}

	free(head);
}
