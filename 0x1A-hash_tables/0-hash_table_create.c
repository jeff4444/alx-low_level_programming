#include "hash_tables.h"

/**
 * hash_table_create - creates a new hash table
 * @size: size of has_table
 * Return: Null if something went wrong or the new hash_table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *ht = malloc(sizeof(hash_table_t));

	if (ht == NULL)
		return (NULL);
	ht->size = size;
	ht->array = calloc(table->size, sizeof(hash_node_t *));

	if (ht->array == NULL)
		return (NULL);

	for (i = 0; i < ht->size; i++)
		ht->array[i] = NULL;
	return (ht);
}
