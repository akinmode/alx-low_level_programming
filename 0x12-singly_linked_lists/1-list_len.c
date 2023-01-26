#include <stdio.h>
#include "lists.h"

/**
* list_len - function that returns the
* number of elements in a linked list_t list.
* @h: node of the linked  list
* Return: elements
*/
size_t list_len(const list_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		nnodes++;
		h = h->next;
	}
	return (nnodes);
}
