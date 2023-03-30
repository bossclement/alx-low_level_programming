#include "lists.h"
#include <stdio.h>

/**
 * print_list - function
 * @h: pointer
 * Return: number
 */

size_t print_list(const list_t *h)
{
	unsigned int nodes = 0;
	list_t *working = (list_t *)h;

	while (working)
	{
		if (working->str != NULL)
			printf("[%d] %s\n", working->len, working->str);
		else
			printf("[0] (nil)\n");
		working = working->next;
		nodes++;
	}

	return (nodes);
}

