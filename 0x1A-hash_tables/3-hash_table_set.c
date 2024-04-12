#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: pointer ot hash table
 * @key: string key
 * @value: string value
 * Return: Success of Failure
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i = 0;
	hash_node_t *node = NULL, *inode = NULL;

	if (ht == NULL || key == NULL || (strcmp(key, "") == 0))
		return (0);

	i = key_index((unsigned char *) key, ht->size);
	node = ht->array[i];

	if (node && strcmp(key, node->key) == 0)
	{
		free(node->value);
		node->value = strdup(value);
		return (1);
	}

	inode = malloc(sizeof(hash_node_t));
	if (inode == NULL)
		return (0);

	inode->key = strdup(key);
	inode->value = strdup(value);
	inode->next = ht->array[i];
	ht->array[i] = inode;
	return (1);
}
