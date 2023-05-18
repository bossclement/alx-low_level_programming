#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - adds a node at the beginning.
 * @head: starting point of the list.
 * @n: number of the new node.
 * Return: pointer to the new node.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = (dlistint_t *)malloc(sizeof(dlistint_t *));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if (*head)
		(*head)->prev = new;
	*head = new;
	return (new);
}
