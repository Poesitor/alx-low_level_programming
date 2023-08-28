#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * listint_len - returns the number of elements in a linked list
 *
 * @h: a pointer to the head of the list
 *
 * Return: the number of elements in the linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}

	return (len);
}
