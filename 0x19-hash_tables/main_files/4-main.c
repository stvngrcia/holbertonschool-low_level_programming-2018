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
    char *value;

    ht = hash_table_create(1024);
    hash_table_set(ht, "c", "fun");
    hash_table_set(ht, "python", "awesome");
    hash_table_set(ht, "Jennie", "and Jay love asm");
    hash_table_set(ht, "N", "queens");
    hash_table_set(ht, "Asterix", "Obelix");
    hash_table_set(ht, "Betty", "Holberton");
    hash_table_set(ht, "98", "Battery Street");
    hash_table_set(ht, "c", "isfun");

    hash_table_set(ht, "hetairas", "test1");
    hash_table_set(ht, "mentioner", "test2");

    hash_table_set(ht, "heliotropes", "test3");
    hash_table_set(ht, "neurospora", "test4");

    hash_table_set(ht, "depravement", "test5");
    hash_table_set(ht, "serafins", "test6");

    hash_table_set(ht, "stylist", "test7");
    hash_table_set(ht, "subgenera", "test8");

    hash_table_set(ht, "joyful", "test9");
    hash_table_set(ht, "synaphea", "test10");

    hash_table_set(ht, "redescribed", "test11");
    hash_table_set(ht, "urites", "test12");

    hash_table_set(ht, "dram", "test14");
    hash_table_set(ht, "vivency", "test13");


    value = hash_table_get(ht, "python");
    printf("%s:%s\n", "python", value);
    value = hash_table_get(ht, "Jennie");
    printf("%s:%s\n", "Jennie", value);
    value = hash_table_get(ht, "N");
    printf("%s:%s\n", "N", value);
    value = hash_table_get(ht, "Asterix");
    printf("%s:%s\n", "Asterix", value);
    value = hash_table_get(ht, "Betty");
    printf("%s:%s\n", "Betty", value);
    value = hash_table_get(ht, "98");
    printf("%s:%s\n", "98", value);
    value = hash_table_get(ht, "c");
    printf("%s:%s\n", "c", value);
    value = hash_table_get(ht, "javascript");
    printf("%s:%s\n", "javascript", value);


    value = hash_table_get(ht, "hetairas");
    printf("%s:%s\n", "hetairas", value);

    value = hash_table_get(ht, "mentioner");
    printf("%s:%s\n", "mentioner", value);

    value = hash_table_get(ht, "heliotropes");
    printf("%s:%s\n", "heliotropes", value);

    value = hash_table_get(ht, "neurospora");
    printf("%s:%s\n", "neurospora", value);

    value = hash_table_get(ht, "depravement");
    printf("%s:%s\n", "depravement", value);

    value = hash_table_get(ht, "serafins");
    printf("%s:%s\n", "serafins", value);

        value = hash_table_get(ht, "stylist");
    printf("%s:%s\n", "stylist", value);

    value = hash_table_get(ht, "subgenera");
    printf("%s:%s\n", "subgenera", value);

    value = hash_table_get(ht, "joyful");
    printf("%s:%s\n", "joyful", value);

    value = hash_table_get(ht, "synaphea");
    printf("%s:%s\n", "synaphea", value);

    value = hash_table_get(ht, "redescribed");
    printf("%s:%s\n", "redescribed", value);

    value = hash_table_get(ht, "urites");
    printf("%s:%s\n", "urites", value);


    return (EXIT_SUCCESS);
}
