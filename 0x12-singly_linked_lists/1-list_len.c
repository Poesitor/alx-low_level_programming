#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - gets the number of elements in a linked list
 *
 * @h: a pointer to the head of the list
 *
 * Return: the number of elements in the list
 */
size_t list_len(const list_t *h)
{
	if (h == NULL)
		return (0);

	return (1 + list_len(h->next));
}
