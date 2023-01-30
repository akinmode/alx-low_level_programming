#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* add_nodeint - function that adds a new node
* at the beginning of a listint_t list.
* @head: node of the linked  list
* @n: node to be added
* Return: elements
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	/* Initialize a node */
	listint_t *temp;

	if (head != NULL)
	{
		temp = malloc(sizeof(listint_t));
		if (temp == NULL)
			return (NULL);

		temp->n = n;
		temp->next = *head;
		*head = temp;

		return (temp);
	}
	return (0);
}
