#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint2 - function to clear list of nodes
 * @head: the starting point of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *next;

	while (*head)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
}
