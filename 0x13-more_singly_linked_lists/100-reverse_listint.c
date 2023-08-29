#include "lists.h"

/**
 * reverse_listint - a function that reverses a listint_t linked list
 *
 * @head: a pointer to the address of the list's head
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous, *next;

	previous = NULL;

	if (*head == NULL)
		return (NULL);

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}

	*head = previous;	
	return (*head);
}
