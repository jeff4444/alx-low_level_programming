#include "hash_tables.h"

/**
 * free_node - frees node
 * @node: node
 */
void free_node(hash_node_t *node)
{
	hash_node_t *cur = node;

	while ((cur = node))
	{
		node = node->next;
		free(cur->key);
		free(cur->value);
	}
	free(node);
}

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;

	if (ht == NULL)
		return;
	for (; i < ht->size; i++)
		free_node(ht->array[i]);
	free(ht);
}
