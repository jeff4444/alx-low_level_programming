#include "hash_tables.h"
#include "string.h"

/**
 * add_node - adds a node to a linked list
 * @list: linkedlist
 * @item: new node
 */
void add_node(hash_node_t **list, hash_node_t *item)
{
	item->next = *list;
	*list = item;
}

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 1 (success), 0(Fail)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item;
	unsigned long int index = key_index(key, ht->size);

	item = malloc(sizeof(hash_node_t));
	if (item == NULL)
		return (0);
	item->key = malloc(sizeof(char) * strlen(key));
	if (item->key == NULL)
		return (0);
	strcpy(item->key, key);
	item->value = malloc(sizeof(char) * strlen(value));
	if (item->value == NULL)
		return (0);
	strcpy(item->value, value);
	if (ht->array[index] == NULL)
		ht->array[index] = item;
	else
		add_node(&ht->array[index], item);
	return (1);
}


