#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t linked list and sets the head to NULL
 * @head: double pointer to the head node of the list
 */
void free_listint2(listint_t **head)
{
	if (head == NULL)
		return;

	while (*head != NULL)
	{
		listint_t *temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
