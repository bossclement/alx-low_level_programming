#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - function to clear list of nodes
 * @head: the starting point of the list
 */

void free_listint(listint_t *head)
{
	listint_t *next = head;

	while (next)
	{
		head = next;
		next = head->next;
		free(head);
	}
	return;
}
