#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - function remove the first node
 * @head: the starting point of the list
 * Return: a number
 */

int pop_listint(listint_t **head)
{
	listint_t *next;
	int num;

	if (head == NULL)
		return (0);

	next = (*head)->next;
	num = (*head)->n;
	free(*head);
	*head = next;
	return (num);
}
