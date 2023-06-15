#include "lists.h"
#include <stddef.h>

/**
* dlistint_len -this function counts the number of nodes in the linked list
* @h:this is a pointer to the beginning of a linked list
* Return: it returns the number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{

		h = h->next;

		count++;
	}

	return (count);
}
