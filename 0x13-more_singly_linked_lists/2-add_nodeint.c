#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - function to add a node to a list
 * @head: the starting point of the list
 * @n: a member of the new list to add
 * Return: pointer to a new list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = NULL;

	if (*head == NULL)
	{
		*head = malloc(sizeof(listint_t));
		if (*head == NULL)
		{
			free(*head);
			return (NULL);
		}
	} else
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
		{
			free(new);
			return (NULL);
		}
		new->n = (*head)->n;
		new->next = (*head)->next;
	}
	

	(*head)->n = n;
	(*head)->next = new;
	return (*head);
}
