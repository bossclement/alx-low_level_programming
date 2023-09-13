#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted singly linked list using Jump search
 * @list: Pointer to the head of the linked list
 * @size: Number of nodes in the list
 * @value: The value to search for
 *
 * Return: Pointer to the first node where value is located or NULL if not found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step = sqrt(size), i;
	listint_t *current = list, *prev = NULL;

	if (list == NULL)
		return (NULL);

	while (current != NULL && current->n < value)
	{
		prev = current;
		for (i = 0; i < step && current->next != NULL; i++)
			current = current->next;

		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);

		if (current->n >= value)
			break;
	}

	if (current == NULL || current->n > value)
	{
		printf("Value found between indexes [%lu] and [%lu]\n", prev->index, current->index);
		return (linear_search(prev, current, value));
	}

	printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);

	if (current->n == value)
		return (current);

	return (NULL);
}

/**
 * linear_search - Searches for a value in a singly linked list using linear search
 * @start: The starting node for the search
 * @stop: The stopping node for the search
 * @value: The value to search for
 *
 * Return: Pointer to the node where value is located or NULL if not found
 */
listint_t *linear_search(listint_t *start, listint_t *stop, int value)
{
	while (start != NULL && start != stop->next)
	{
		printf("Value checked at index [%lu] = [%d]\n", start->index, start->n);
		if (start->n == value)
			return (start);
		start = start->next;
	}
	return (NULL);
}

