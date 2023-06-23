#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>

/**
 * hash_table_set - adds an element to my hash table.
 * @ht: is the hash table.
 * @key: key of the element to add.
 * @value: the value of the key.
 * Return: 0 if fail, 1 if success.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *prev;
	unsigned long int index;

	if (strlen(key) == 0)
		return (0);

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	node->key = strdup(key);
	node->value = strdup(value);

	if (node->key == NULL || node->value == NULL)
		return (0);

	index = key_index((unsigned char *) node->key, ht->size);
	prev = ht->array[index];

	if (prev == NULL)
	{
		ht->array[index] = node;
		return (1);
	}

	while (prev->next)
		prev = prev->next;

	prev->next = node;
	return (1);
}
