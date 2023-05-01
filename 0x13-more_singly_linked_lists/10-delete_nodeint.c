#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: double pointer to head node
 * @index: index of node to delete
 *
 * Return: 1 on success, -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp, *node_to_delete;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		node_to_delete = *head;
		*head = (*head)->next;
		free(node_to_delete);
		return (1);
	}

	temp = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (temp->next == NULL)
			return (-1);
		temp = temp->next;
	}

	node_to_delete = temp->next;
	if (node_to_delete == NULL)
		return (-1);
	temp->next = node_to_delete->next;
	free(node_to_delete);

	return (1);
}

