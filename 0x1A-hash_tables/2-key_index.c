#include "hash_tables.h"

/**
 * key_index - returns the index of a key.
 * @key: the key value to look up for.
 * @size: size of the hash table.
 * Return: the index position of my key value.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key));
}
