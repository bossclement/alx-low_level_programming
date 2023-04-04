#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - function to get node at a certain index
 * @head: the starting point of the list
 * @index: the index position of the node
 * Return: a pointer to the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *cp = head;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		if (cp)
			cp = cp->next;
		else
			break;
	}

	return (cp);
}
