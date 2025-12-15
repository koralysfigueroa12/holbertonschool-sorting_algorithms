#include "sort.h"
#include <stdio.h>

/**
 * insertion_sort_list - Sorts a doubly linked list using Insertion sort
 * @list: Pointer to the head of the list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *next;

	if (!list || !*list || !(*list)->next)
		return;

	current = (*list)->next;
	while (current)
	{
		next = current->next;
		while (current->prev && current->n < current->prev->n)
		{
			listint_t *prev = current->prev;

			/* Swap current and prev nodes */
			if (prev->prev)
				prev->prev->next = current;
			current->prev = prev->prev;

			prev->next = current->next;
			if (current->next)
				current->next->prev = prev;

			current->next = prev;
			prev->prev = current;

			/* Update head if needed */
			if (!current->prev)
				*list = current;

			print_list(*list);
		}
		current = next;
	}
}
