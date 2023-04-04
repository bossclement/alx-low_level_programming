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

/**
 * insert_nodeint_at_index - function to add a new at a certain index
 * @head: the starting point of the list
 * @idx: index where to insert the new node
 * @n: member if a new node
 * Return: address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *node;

	if (head == NULL || *head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx > 0)
	{
		node = get_nodeint_at_index(*head, idx - 1);
		if (node == NULL)
			return (NULL);
		new->next = node->next;
		node->next = new;
	}
	else
	{
		node = *head;
		*head = new;
		new->next = node;
	}

	return (new);
}
