#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop - finds the loop in a linked list
 *
 * @head: a pointer to the lead of the linked list
 *
 * Return: The address of the node where the loop starts,
 * or returns NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fast, *slow;

	fast = slow = head;
	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
			break;
	}
	if (slow != fast)
		return (NULL);

	slow = head;
	while (slow != fast)
	{
		slow = slow->next;
		fast = fast->next;
	}
	return (slow);
}
