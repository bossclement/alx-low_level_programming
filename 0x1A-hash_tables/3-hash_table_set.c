#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - adds an element to my hash table.
 * @ht: is the hash table.
 * @key: key of the element to add.
 * @value: the value of the key.
 * Return: 0 if fail, 1 if success.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long int index;
	hash_node_t *prev;

	if (strlen(key) == 0)
		return (0);
	
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	node->key = strdup(key);
	node->value = strdup(value);
	
	if (node->key == NULL || node->value == NULL)
		return (0);

	index = key_index(node->key, ht->size);
	
	prev = ht->array[index];
}
