#include <stdlib.h>
#include "lists.h"

size_t listint_len(const listint_t *h);

/**
 * delete_nodeint_at_index - function that deletes the
 * node at index index of a listint_t linked list.
 * @head: head of list
 * @index: index of node to delete
 * Return: value of node, or 0 if list empty
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *dnode, *temp;

	if (head != NULL || *head != NULL)
	{
		if (index == 0)
		{
			temp = (*head)->next;
			free(*head);
			*head = temp;
			return (1);
		}

		for (temp = *head; index && temp->next != NULL; index--, temp = temp->next)
			dnode = temp;
		if (index)
			return (-1);

		dnode->next = dnode->next->next;
		free(temp);
		return (1);
	}
	else
	{
		return (-1);
	}
	return (-1);
}
