#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "holberton");
    hash_table_set(ht, "hetairas", "test");
    hash_table_set(ht, "mentioner", "test1");
    hash_table_set(ht, "heliotropes ", "test3");
    hash_table_set(ht, "neurospora", "test4");
    hash_table_set(ht, "stylist", "test5");
    hash_table_set(ht, "subgenera", "test6");
    return (EXIT_SUCCESS);
}
