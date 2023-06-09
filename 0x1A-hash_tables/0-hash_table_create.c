#include "hash_tables.h"
#include <stdlib.h>



/**
 * free_pointer - frees merory allocated in the heap.
 * @p: pointer to that memory
*/

void free_pointer(void *p)
{
	if (p != NULL)
		free(p);
}

/**
 * hash_table_create - function that creates hash table.
 * @size: the size of the array.
 * Return: Pointer to the newly created hash table.
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = malloc(sizeof(hash_table_t));
	hash_node_t **node_array = malloc(sizeof(hash_node_t) * (size + 1));
	unsigned long int i;

	if (new_table == NULL || node_array == NULL)
	{
		free_pointer((void *) new_table);
		free_pointer((void *) (*node_array));
		return (NULL);
	}
	
	for (i = 0; i < size + 1; i++)
		node_array[i] = NULL;

	new_table->array = node_array;
	return (new_table);
}

