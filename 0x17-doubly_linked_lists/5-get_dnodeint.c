#include "lists.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * get_dnodeint_at_index - gets a node from a specifiedindex.
 * @head: starting point of the list.
 * @index: position of the node to get.
 * Return: pointer to the node found.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;

	while (node && index)
	{
		node = node->next;
		index--;
	}
	return (node);
}
