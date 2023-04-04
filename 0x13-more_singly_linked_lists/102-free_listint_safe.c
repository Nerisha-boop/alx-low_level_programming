#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list.
 * @h: A pointer to the address of the head of the list.
 *
 * Return: The size of the freed list.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t node_count = 0;
	listint_t *tmp;

	while (*h && *h > (*h)->next)
	{
		tmp = (*h)->next;
		free(*h);
		*h = tmp;
		node_count++;
	}

	if (*h)
	{
		free(*h);
		node_count++;
		*h = NULL;
	}
	return (node_count);
}
