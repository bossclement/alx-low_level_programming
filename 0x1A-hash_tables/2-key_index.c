#include "hash_tables_H"

/**
 * key_index - returns the index of the node.
 * @key: the key value to search.
 * @size: the size of the array of nodes.
 * Return: index of the node.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);
	unsigned long int index = hash % size;

	return (index);
}

