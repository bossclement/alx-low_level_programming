#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - function to delete node at a certain index
 * @head: the starting point of the list
 * @index: the index position of the node
 * Return: a pointer to the node
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *next;
	listint_t *prev = *head;
	unsigned int i;
	listint_t *cp = *head;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		next = cp->next;
		free(*head);
		(*head) = next;
		return (1);
	}

	for (i = 0; i < index; i++)
	{
		if (cp)
		{
			prev = cp;
			cp = cp->next;
		}
		else
			return (-1);
	}
	next = cp->next;
	free(cp);
	prev->next = next;
	return (1);
}
