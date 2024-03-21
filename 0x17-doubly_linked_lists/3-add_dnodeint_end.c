#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: head of the list
 * @n: input to be added to list
 * Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *current;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;

	if (*head)
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;

		temp->next = NULL;
		temp->prev = current;
		current->next = temp;
		return (temp);
	}

	temp->next = *head;
	temp->prev = NULL;
	*head = temp;
	return (*head);
}
