#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to head node of linked list
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	const listint_t *prev = NULL;
	size_t count = 0;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;

		if (prev != NULL && prev >= current)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			break;
		}
		prev = current;
		current = current->next;
	}
	return (count);
}
