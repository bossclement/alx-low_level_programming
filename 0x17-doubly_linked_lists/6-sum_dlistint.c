#include "lists.h"

/**
 * sum_dlistint - get sum of all nodes
 * @head: start point of the node
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	size_t nodes = 0;
	dlistint_t *head_cp = head;

	while (head_cp && !(head == head_cp && nodes > 0))
	{
		sum += head_cp->n;
		nodes++;
		head_cp = head_cp->next;
	}
	return (sum);
}
