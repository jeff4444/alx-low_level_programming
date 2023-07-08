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
 * _strcmp - compares two strings
 * @s1: string1
 * @s2: string 2
 * Return: int
 */

int _strcmp(const char *s1, const char *s2)
{
	int i = 0;

	while (s2[i] != '\0')
	{
		if (s2[i] != s1[i])
			return (0);
		i++;
	}
	if (s1[i] != '\0')
		return (0);
	return (1);
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
	unsigned long int index = key_index((unsigned char *)key, ht->size);

	if ((key == NULL) || _strcmp(key, ""))
		return (0);
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


