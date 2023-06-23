#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>

/**
 * free_node - frees memory of ht node.
 * @node: the node to free.
 */
void free_node(hash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
}

/**
 * hash_table_set - adds an element to my hash table.
 * @ht: is the hash table.
 * @key: key of the element to add.
 * @value: the value of the key.
 * Return: 0 if fail, 1 if success.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *prev, *prevv = NULL;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (0);
	}
	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->value);
		free(node);
		return (0);
	}

	index = key_index((unsigned char *) node->key, ht->size);
	prev = ht->array[index];

	if (prev == NULL)
	{
		ht->array[index] = node;
		return (1);
	}

	while (prev->next)
	{
		if (strcmp(prev->key, node->key) == 0)
		{
			free_node(prev);
			if (prevv != NULL)
				prevv->next = node;
			else
				ht->array[index] = node;
			return (1);
		}
		prevv = prev;
		prev = prev->next;
	}

	prev->next = node;
	node->next = ht->array[index];
	return (1);
}
