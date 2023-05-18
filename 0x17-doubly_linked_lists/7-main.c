#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head, *t;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 5);
    add_dnodeint_end(&head, 6);
    add_dnodeint_end(&head, 7);
    print_dlistint(head);
    printf("-----------------\n");
    t = NULL;
    insert_dnodeint_at_index(&t, 0, 4096);
    print_dlistint(t);
    free_dlistint(head);
    head = NULL;
    return (EXIT_SUCCESS);
}
