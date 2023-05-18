#include "lists.h"

/**
 * dlistint_len - returns number of nodes
 * @h: starting point of the list
 * Return: number of nodes in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *cur = (dlistint_t *)h;
	size_t counts = 0;

	while (cur && !(cur == h && counts > 0))
	{
		cur = cur->next;
		counts++;
	}
	return (counts);
}
