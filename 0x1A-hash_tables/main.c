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
    hash_table_set(ht, "Holberton", "is cool");
    hash_table_set(ht, "Holberton", "is soooo cooool");
    hash_table_set(ht, "Holberton", "is awesome");
    printf("value is: %s\n", ht->array[key_index((unsigned char *) "Holberton", 1)]->value);
    return (EXIT_SUCCESS);
}
