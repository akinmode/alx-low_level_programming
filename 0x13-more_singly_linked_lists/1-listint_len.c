#include <stdio.h>
#include "lists.h"

/**
* listint_len - function that returns the
* number of elements in a linked listint_t list.
* @h: node of the linked  list
* Return: elements
*/

size_t listint_len(const listint_t *h)
{
	size_t nnodes = 0;

	if (h != NULL)
	{
		while (h != NULL)
		{
			nnodes++;
			h = h->next;
		}
		return (nnodes);
	}
	return (0);
}
