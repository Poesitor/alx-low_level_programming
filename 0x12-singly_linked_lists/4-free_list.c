#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 *
 * @head: a pointer to the lead of the list
 *
 * Return: Void.
 */
void free_list(list_t *head)
{
	list_t *next_node;
	list_t *current_node = head;
	if (current_node == NULL)
		return;

	if (head == NULL)
		return;

	current_node = head;
	while (current_node != NULL)
	{
		next_node = current_node->next;
		free(current_node->str);
		free(current_node);
		current_node = next_node;
	}
}
