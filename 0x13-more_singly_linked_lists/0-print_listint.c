#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function to print elements in a list
 * @h: the list
 * Return: the number of nodes inside the list
 */
 
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	if (h == NULL)
		return (nodes);
	
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
		
}
