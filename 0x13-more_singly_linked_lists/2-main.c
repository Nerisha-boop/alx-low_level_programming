#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	listint_t *head = NULL;
	listint_t *node;
	int i;

	for (i = 0; i < 10; i++)
	{
		node == add_nodeint(&head, i);
		if (!node)
		{
			printf("Failed to add node.\n");
			return (1);
		}
	}

	for (node = head; node; node = node->next)
		printf("%d", node->n);
	printf("\n");

	return (0);
}
