#include "lists.h"

/**
 * list_len - function
 * @h: pointer
 * Return: number
 */

size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}

	return (nodes);
}
