#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_dnodeint_at_index - inserts new node at give position
 * @h: starting point of the node.
 * @idx: index position to put the node.
 * @n: number of the node to add.
 * Return: the node added.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *cur = *h, *prev = NULL;

	node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	node->prev = NULL;

	while (cur && idx)
	{
		prev = cur;
		cur = cur->next;
		idx--;
	}

	if (cur)
	{
		node->next = cur;
		node->prev = cur->prev;
		if (cur->prev)
			cur->prev->next = node;
		else
			*h = node;
		cur->prev = node;
		return (node);
	} else if (cur == NULL && idx > 0)
		return (NULL);
	else if (cur == NULL && idx == 0 && prev)
	{
		prev->next = node;
		return (node);
	}
	*h = node;
	return (node);
}
