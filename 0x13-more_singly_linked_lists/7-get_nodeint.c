#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 *
 * @head: a pointer to the head node of the list
 * @index: the index of the node, starting at 0
 *
 * Return: the nth node of the list,
 * or NULL if the node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	listint_t *current = head;

	while (i != index && current != NULL)
	{
		current =  current->next;
		i++;
	}

	if (current == NULL)
		return (NULL);
	else
		return (current);

}
