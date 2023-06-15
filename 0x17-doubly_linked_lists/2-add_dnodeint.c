#include "lists.h"
#include <stdlib.h>

/**
*add_dnodeint-this function adds a new node at the beginning of the linked list
* @head: double pointer to the beginning of the linked list
* @n: the value to add to the new node
* Return: it returns pointer to the new node, or NULL on failure
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = *head;

	if (*head != NULL)
	{

	(*head)->prev = newNode;
	}

	*head = newNode;
	return (newNode);
}

