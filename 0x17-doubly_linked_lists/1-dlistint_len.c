#include "lists.h"

/**
 * dlistint_len -  prints all the elements of a dlistint_t list.
 * @h: head node
 * Return: node count
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
