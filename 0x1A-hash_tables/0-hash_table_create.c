#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the hash table/array
 * Return: pointer to the newly created hash table else NULL
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	int i = 0;
	hash_table_t *htable = (hash_table_t *) malloc(sizeof(hash_table_t));

	htable->size = size;
	htable->array = (hash_node_t **) calloc(htable->size, sizeof(hash_node_t));
	for (i = 0; i < htable->size; i++)
	{
		htable->array[i] = NULL;
	}

	return (htable);
}
