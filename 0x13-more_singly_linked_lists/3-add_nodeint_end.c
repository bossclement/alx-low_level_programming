#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - function to add a node to a list at the end
 * @head: the starting point of the list
 * @n: a member of the new list to add
 * Return: pointer to a new list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = NULL;
	listint_t *cp = *head;
	
	if (*head == NULL)
	{
		*head = malloc(sizeof(listint_t));
		if (*head == NULL)
		{
			free(*head);
			return (NULL);
		}
		(*head)->n = n;
	} else
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
		{
			free(*head);
			return (NULL);
		}
		new->n = n;
		while (cp->next)
			cp = cp->next;
		cp->next = new;
	}
	if ((*head)->next == NULL)
		(*head)->next = new;
	return (*head);
}
