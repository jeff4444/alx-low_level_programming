#include "hash_tables.h"
/**
 * hash_table_get - gets a value
 * @ht: hash table
 * @key: key
 * Return: value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index] != NULL)
		return ht->array[index]->value;
	return (NULL);
}
