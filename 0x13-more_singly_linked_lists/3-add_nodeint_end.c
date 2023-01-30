#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* add_nodeint_end - function that adds a new node
* at the end of a listint_t list.
* @head: node of the linked  list
* @n: node to be added
* Return: elements
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/* Initialize a node */
	listint_t *node, *temp;

	if (head != NULL)
	{
		node = malloc(sizeof(listint_t));
		if (node == NULL)
			return (NULL);

		node->n = n;
		node->next = NULL;

		if (*head == NULL)
		{
			*head  = node;
			return (*head);
		}
		else
		{
			temp = *head;
			while (temp->next)
				temp = temp->next;

			temp->next = node;
			return (temp);
		}
	}
	return (0);
}
