#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * delete_dnodeint_at_index - deletes a node
 * @head: starting point of the node.
 * @index: index position to delete the node.
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cur = *head, *prev = NULL;

	while (cur && index)
	{
		prev = cur;
		cur = cur->next;
		index--;
	}

	if (cur)
	{
		if (prev)
			prev->next = cur->next;
		else
			*head = cur->next;
		free(cur);
		return (1);
	}
	return (-1);
}
