#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a linked list of integers.
 * @head: pointer to the head of the list.
 *
 * Return: void.
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}

