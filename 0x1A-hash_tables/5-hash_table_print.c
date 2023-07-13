#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	int on = 0;
	unsigned long int size = ht->size, i = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (; i < size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (on)
				printf(", ");
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			on = 1;
		}
	}
	printf("}");
}	
