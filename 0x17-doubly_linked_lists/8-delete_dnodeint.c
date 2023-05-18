#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes a node
 * @head: starting point of the node.
 * @index: index position to delete the node.
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cur = *head, *prev = NULL;
	
	if (*head == NULL)
		return (-1);

	while (cur && index)
	{
		prev = cur;
		cur = cur->next;
		index--;
	}

	if (cur)
	{
		if (prev)
		{
			prev->next = cur->next;
			if (prev->next)
				prev->next->prev = cur->next;
		}
		else
		{
			*head = cur->next;
			if (*head)
				(*head)->prev = NULL;
		}
		free(cur);
		return (1);
	}
	return (-1);
}
