#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - function
 * @head: pointer 1
 * @str: pointer 2
 * Return: number
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *next = NULL;

	if (*head == NULL)
	{
		*head = malloc(sizeof(list_t *));
		if (*head == NULL)
		{
			free(*head);
			return (NULL);
		}
	} else
	{
		next = malloc(sizeof(list_t *));

		if (next == NULL)
		{
			free(next);
			return (NULL);
		}
		next->str = strdup((*head)->str);
		next->len = (*head)->len;
		next->next = (*head)->next;
	}

	(*head)->str = strdup(str);
	(*head)->len = strlen(str);
	(*head)->next = next;
	return (*head);
}
