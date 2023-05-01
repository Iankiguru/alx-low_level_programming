#include "lists.h"
/**
*listint_len - the number of elements present  in a linked listint_t list.
*@h: the head pointer
*Return: it returns the number of elements
*/
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
