#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n) of a dlistint_t linked list.
 * @head: head of list
 * Return: sum of data in list
*/
int sum_dlistint(dlistint_t *head)
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
