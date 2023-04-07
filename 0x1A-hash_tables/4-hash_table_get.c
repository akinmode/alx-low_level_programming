#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: hash table
 * @key: string key
 * Return: pointer to value
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i = 0;
	hash_node_t *node = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);
	i = key_index((unsigned char *) key, ht->size);
	node = ht->array[i];
	if (node == NULL)
		return (NULL);

	while (strcmp(key, node->key) != 0)
		node = node->next;
	return (node->value);
}
