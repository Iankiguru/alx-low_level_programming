#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - function that frees a listint_t list
 * @head: a double pointer to the head of the list
 *
 * This function frees a listint_t list and sets the head to NULL.
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *next_node;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		next_node = (*head)->next;
		free(*head);
		*head = next_node;
	}

	*head = NULL;
}

