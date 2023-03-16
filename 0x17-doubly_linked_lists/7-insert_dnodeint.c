#include "lists.h"

size_t dlistint_len(const dlistint_t *h);

/**
 * insert_dnodeint_at_index -  Inserts a new node at a given position.
 * @h: head of list
 * @idx: index of nodes
 * @n: node to insert
 * Return: value of node, or 0 if list empty
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *inode, *temp;
	unsigned int nind = 0;

	if (h != NULL || *h != NULL)
	{
		if (idx == 0)
			return (add_dnodeint(h, n));
		if (dlistint_len(*h) == idx)
			return (add_dnodeint_end(h, n));
		if (idx < dlistint_len(*h) && idx > 0)
		{
			inode = malloc(sizeof(dlistint_t));
			if (inode == NULL)
				return (NULL);

			inode->n = n;
			temp = (*h);
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
		}
		else
		{
			return (NULL);
		}
	}
	return (NULL);
}

/**
 * dlistint_len -  prints all the elements of a dlistint_t list.
 * @h: head node
 * Return: node count
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
