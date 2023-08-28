#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the data
 * of a listint_t linked list
 *
 * @head: a pointer to the head of the list
 *
 * Return: the sum of all the data of the list
 */
int sum_listint(listint_t *head)
{
	if (head == NULL)
		return (0);

	return (head->n + sum_listint(head->next));
}
