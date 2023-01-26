#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node - function that returns the
* number of elements in a linked list_t list.
* @head: head node of the linked  list
* @str: node to be added
* Return: elements
*/
list_t *add_node(list_t **head, const char *str)
{
	/* Initialize a node */
	list_t *temp;
	int strc = 0;
	char *ptr;

	if (head != NULL && str != NULL)
	{
		ptr = (char *) str;
		while (*ptr++)
			strc++;

		temp = malloc(sizeof(list_t));
		if (temp == NULL)
			return (NULL);

		temp->str = strdup(str);
		temp->len = strc;
		temp->next = *head;

		*head = temp;

		return (temp);
	}
	return (0);
}
