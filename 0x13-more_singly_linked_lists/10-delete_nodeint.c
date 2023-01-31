#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

size_t listint_len(const listint_t *h);

/**
 * insert_nodeint_at_index - function that inserts a
 * new node at a given position.
 * @head: head of list
 * @idx: index of nodes
 * @n: node to insert
 * Return: value of node, or 0 if list empty
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *inode, *temp;
	unsigned int nind = 0;

	if (head != NULL || *head != NULL)
	{
		if (idx < listint_len(*head) && idx > 0)
		{
			inode = malloc(sizeof(listint_t));
			if (inode == NULL)
				return (NULL);

			inode->n = n;
			temp = (*head);
			while (temp)
			{
				if (idx - 1 == nind)
				{
					inode->next = temp->next;
					temp->next = inode;
					return (inode);
				}
				temp = temp->next;
				nind++;
			}
			/* printf("%lu, %d, %d, \n", listint_len(*head), idx, n); */
		}
		else
		{
			return (NULL);
		}
	}
	return (NULL);
}

/**
* listint_len - function that returns the
* number of elements in a linked listint_t list.
* @h: node of the linked  list
* Return: elements
*/

size_t listint_len(const listint_t *h)
{
	size_t nnodes = 0;

	if (h != NULL)
	{
		while (h != NULL)
		{
			nnodes++;
			h = h->next;
		}
		return (nnodes);
	}
	return (0);
}
