#include <stdlib.h>
#include "lists.h"

/**
  * reverse_listint - function that reverses a listint_t linked list.
  * @head: head of list
  * Return: reversed linked list
  */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			next = *head;
			*head = (*head)->next;
			next->next = prev;
			prev = next;
		}

		*head = prev;
		return (*head);
	}

	return (NULL);
}
