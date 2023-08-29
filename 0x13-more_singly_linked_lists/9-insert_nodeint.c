#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position (idx)
 *
 * @head: a pointer to the address of the head of the list
 * @idx: the position to insert the new node
 * @n: the value of the data at the new node
 *
 * Return: The address of the node,
 * or returns NULL if failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *previous_node;
	listint_t *new_node;
	listint_t *current_node = *head;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	if (idx == 0)
	{
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	i = 0;
	while (i < idx && current_node != NULL)
	{
		previous_node = current_node;
		current_node = current_node->next;
		i++;
	}
	if (current_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->next = current_node;
	previous_node->next = new_node;

	return (new_node);
}
