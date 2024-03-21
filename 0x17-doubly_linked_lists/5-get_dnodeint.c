#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: list
 * @index: index on list
 * Return: if the node does not exist, return NULL
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;

	if (head != NULL)
	{
		while (head)
		{
			if (index == n)
				return (head);
			head = head->next;
			n++;
		}
	}
	return (NULL);
}
