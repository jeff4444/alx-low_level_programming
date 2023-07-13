#include "hash_tables.h"
/**
 * hash_table_get - gets a value
 * @ht: hash table
 * @key: key
 * Return: value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	if (ht == NULL)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] != NULL)
	{
		while (ht->array[index] != NULL)
		{
			if (_strcmp(ht->array[index]->key, key))
				return (ht->array[index]->value);
		}
		ht->array[index] = ht->array[index]->next;
	}
	return (NULL);
}
