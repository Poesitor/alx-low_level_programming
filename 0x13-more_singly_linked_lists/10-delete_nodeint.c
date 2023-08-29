#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at a given index
 *
 * @head: A pointer to the address of the lists' head
 * @index: The position of the node to be deleted (head = index 0)
 *
 * Return: 1 (on success). -1 (operation fails)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current_node, *previous_node;

	if (*head == NULL)
		return (-1);

	previous_node = NULL;
	current_node = *head;
	if (index == 0)
	{
		*head = current_node->next;
		free(current_node);
		return (1);
	}

	i = 0;

	while (i < index && current_node != NULL)
	{
		previous_node = current_node;
		current_node = current_node->next;
		i++;
	}

	if (current_node == NULL)
		return (-1);
	previous_node->next = current_node->next;

	free(current_node);

	return (1);
}
