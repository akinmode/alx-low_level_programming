#include <stdio.h>
#include "lists.h"

/**
* print_list - function that prints all the elements of a list_t list
* @h: node of the linked  list
* Return: elements
*/
size_t print_list(const list_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		nnodes++;
		h = h->next;
	}
	return (nnodes);
}
