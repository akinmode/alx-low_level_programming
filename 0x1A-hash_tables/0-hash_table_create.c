#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the hash table/array
 * Return: pointer to the newly created hash table else NULL
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *htable;

	if (size == 0)
		return (NULL);
	htable = (hash_table_t *) malloc(sizeof(hash_table_t));
	if (htable == NULL)
		return (NULL);
	htable->size = size;
	htable->array = (hash_node_t **) calloc(htable->size, sizeof(hash_node_t *));
	if (htable->array == NULL)
	{
		free(htable);
		return (NULL);
	}
	for (i = 0; i < htable->size; i++)
		htable->array[i] = NULL;

	return (htable);
}
