#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - function to get sum of n of the nodes in a list
 * @head: the starting point of the list
 * Return: the total sum of n
 */

int sum_listint(listint_t *head)
{
	listint_t *list = head;
	int sum = 0;

	if (list == NULL)
		return (sum);

	while (list)
	{
		sum += list->n;
		list = list->next;
	}

	return (sum);
}
