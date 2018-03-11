#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    bst_t *root;
    bst_t *node;

    root = NULL;
    node = bst_insert(&root, 98);
    printf("Inserted: %d\n", node->n);
    node = bst_insert(&root, 110);
    printf("Inserted: %d\n", node->n);
    node = bst_insert(&root, 43);
    printf("Inserted: %d\n", node->n);
    node = bst_insert(&root, 56);
    printf("Inserted: %d\n", node->n);
    node = bst_insert(&root, 2);
    printf("Inserted: %d\n", node->n);
    node = bst_insert(&root, 78);
    printf("Inserted: %d\n", node->n);
    node = bst_insert(&root, 123);
    printf("Inserted: %d\n", node->n);
    node = bst_insert(&root, 76);
    printf("Inserted: %d\n", node->n);
    node = bst_insert(&root, 234);
    printf("Inserted: %d\n", node->n);
    node = bst_insert(&root, 534);
    printf("Inserted: %d\n", node->n);
    node = bst_insert(&root, 124);
    printf("Inserted: %d\n", node->n);
    node = bst_insert(&root, 76);
    printf("Node should be nil -> %p\n", (void *)node);
    binary_tree_print(root);
    return (0);
}
