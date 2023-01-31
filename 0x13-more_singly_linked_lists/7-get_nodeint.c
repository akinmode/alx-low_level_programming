#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the
 * nth node of a listint_t linked list.
 * @head: head of list
 * @index: specified index to return
 * Return: value of node, or 0 if list empty
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
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
