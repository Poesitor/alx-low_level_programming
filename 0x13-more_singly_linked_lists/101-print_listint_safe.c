#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * find_loop_length - gets the length of a looped linked
 *
 * @head: A pointer to the head of the linked list
 *
 * Return: the index of the last node of the linked list,
 * or returns NULL if no loop is found.
 */
loopInfo_t find_loop_info(const listint_t *head)
{
	loopInfo_t result;
	size_t node_index, end_index, no_loop_end;
	const listint_t *slow, *fast, *meet;

	meet = NULL;
	slow = fast = head;
	end_index = node_index = no_loop_end = 0;

	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (fast == slow)
			break;

		no_loop_end += 2;
	}

	if (fast == NULL)
	{
		result.loop_length = no_loop_end;
		result.loop_start = NULL;
		return (result);
	}
	if (fast->next == NULL)
	{
		result.loop_length = ++no_loop_end;
		result.loop_start = NULL;
		return (result);
	}


	slow = head;
	while(slow != fast)
	{
		slow = slow->next;
		fast = fast->next;

		node_index++;
	}

	end_index = node_index;

	meet = slow->next;
	end_index++;
	while (meet != slow)
	{
		meet = meet->next;
		end_index++;
	}
	result.loop_length = end_index;
	result.loop_start = fast;
	return (result);
}


/**
 * print_listint_safe - prints all the elements of a listint_t list.
 * this function can print lists with a loop.
 *
 * @h: a pointer to the constand head of the list
 *
 * Return: the number of nodes in the listint_t list
 */
size_t print_listint_safe(const listint_t *h)
{
	loopInfo_t loop_info = find_loop_info(h);
	size_t nodecount = 0;
	size_t end_index = loop_info.loop_length;
	const listint_t *start = loop_info.loop_start;

	while (nodecount < end_index)
	{
		printf("[%p] %d\n", (const void *)h, h->n);
		h = h->next;
		nodecount++;
	}

	if (loop_info.loop_start != NULL)
		printf("->[%p] %d\n", (const void *)start, start->n);
	return (nodecount);
}
