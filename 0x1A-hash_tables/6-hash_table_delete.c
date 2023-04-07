#include "hash_tables.h"

/**
 * hash_table_delete -  deletes a hash table
 * @ht: hash table
 * Return: VOID
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *ptr, *next;
	unsigned long int i;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
		for (ptr = ht->array[i]; ptr != NULL; ptr = next)
		{
			next = ptr->next;
			free(ptr->key);
			free(ptr->value);
			free(ptr);
		}
	free(ht->array);
	free(ht);
}
