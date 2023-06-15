#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: Pointer to the head of the list.
 *
 * Description: Frees all the nodes of a doubly linked list.
 * It sets the head pointer to NULL.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}

	head = NULL;
}
