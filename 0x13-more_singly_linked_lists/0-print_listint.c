#include <stdio.h>
#include "lists.h"

/**
* print_listint - function that prints all the elements of a listint_t list.
* @h: node of the linked  list
* Return: elements
*/

size_t print_listint(const listint_t *h)
{
	size_t nnodes = 0;

	if (h != NULL)
	{
		while (h != NULL)
		{
			printf("%d\n", h->n);
			nnodes++;
			h = h->next;
		}
		return (nnodes);
	}
	return (0);
}
