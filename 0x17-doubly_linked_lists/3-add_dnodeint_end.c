#include "lists.h"
#include <stdlib.h>


/**
 * add_dnodeint_end - adds a node at the end.
 * @head: starting point of the list.
 * @n: number of the new node.
 * Return: pointer to the new node.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = (dlistint_t *)malloc(sizeof(dlistint_t *));
	dlistint_t *tail = *head;

	if (new == NULL)
		return (NULL);

	while (tail && tail->next)
		tail = tail->next;

	new->n = n;
	new->next = NULL;
	new->prev = tail;
	if (tail)
		tail->next = new;
	if (*head == NULL)
		*head = new;
	return (new);
}
