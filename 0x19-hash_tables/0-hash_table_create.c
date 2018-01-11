#include "hash_tables.h"
/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array in the hash table
 * Return: A pointer to the hash table that was created.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	table->array = malloc(size);
	if (table->array == NULL)
		return (NULL);
	table->size = size;
	return (table);
}
