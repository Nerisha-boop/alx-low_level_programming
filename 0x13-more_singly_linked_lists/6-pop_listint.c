#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - Deletes head node of a linked list and returns its data.
 * @head: Pointer to the first node of the linked list.
 *
 * Returns: Data of the removed node or 0 if the list is emprty.
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *tmp;

	if (*head == NULL)
		return (0);

	tmp = *head;
	*head = (*head)->next;
	data = tmp->n;
	free(tmp);

	return (data);
}
