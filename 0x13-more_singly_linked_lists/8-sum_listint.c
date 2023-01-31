#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - function that returns the sum of all
 * the data (n) of a listint_t linked list.
 * @head: head of list
 * Return: value of node, or 0 if list empty
 */

int sum_listint(listint_t *head)
{
	size_t nnodes = 0;
	int nodesum = 0;

	if (head != NULL)
	{
		while (head != NULL)
		{
			nodesum += head->n;
			head = head->next;
			nnodes++;
		}
		return (nodesum);
	}
	return (0);
}
