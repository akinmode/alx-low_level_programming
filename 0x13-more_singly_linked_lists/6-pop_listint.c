#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - function that deletes the head node
 * of a listint_t linked list, and
 * returns the head node’s data (n).
 * @head: head of list
 * Return: value of node, or 0 if list empty
 */
 
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (head != NULL || *head != NULL)
	{
		n = (*head)->n;
		temp = (*head)->next;
		free(*head);
		*head = temp;
		return (n);
	}
	return (0);
}
