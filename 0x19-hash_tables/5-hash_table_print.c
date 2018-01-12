#include "hash_tables.h"
#include <stdio.h>
/**
 * hash_table_print - prints a hash table.
 * @ht: Pointer to the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	int flag;
	unsigned long int i;
	hash_node_t *tmp;

	if (ht == NULL)
		return;
	flag = 0;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			if (flag == 0)
				flag = 1;
			else
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
