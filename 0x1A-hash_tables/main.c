#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1);
    hash_table_set(ht, "betty", "cool");
    hash_table_set(ht, "bettys", "cool");
    hash_table_set(ht, "bettyss", "cool");
    return (EXIT_SUCCESS);
}
