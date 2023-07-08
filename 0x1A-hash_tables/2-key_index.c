#include "hash_tables.h"

/**
 * key_index - return the index of the key
 * @key: key
 * @size: size of the array of the hash table
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key);

	if (index < size)
		return (index);
	return (index);
}
