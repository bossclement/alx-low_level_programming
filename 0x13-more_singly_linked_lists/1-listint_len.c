#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function to print elements in a list
 * @h: the list
 * Return: the number of nodes inside the list
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	if (h == NULL)
		return (nodes);

	while (h)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
