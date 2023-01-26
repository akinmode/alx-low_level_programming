#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node_end - function that returns the
* number of elements in a linked list_t list.
* @head: head node of the linked  list
* @str: node to be added
* Return: elements
*/
list_t *add_node_end(list_t **head, const char *str)
{
	/* Initialize a node */
	list_t *node, *temp;
	int strc = 0;
	char *ptr;

	if (head != NULL && str != NULL)
	{
		ptr = (char *) str;
		while (*ptr++)
			strc++;

		node = malloc(sizeof(list_t));
		if (node == NULL)
			return (NULL);

		node->str = strdup(str);
		node->len = strc;
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
