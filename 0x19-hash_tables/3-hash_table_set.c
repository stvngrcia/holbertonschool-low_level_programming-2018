#include "hash_tables.h"
/**
 * hash_table_set - Adds an element to a hash table.
 * @ht: The hash table you want to add or update the key/value
 * @key:  It is the key. key can not be an empty string
 * @value: The value associated with the key. value can be an empty string
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int k_size;
	hash_node_t *hash_node;
	unsigned long int index;
	const unsigned char *u_key;

	u_key = (const unsigned char *)key;
	k_size = check_key_size(key);
	if (k_size == 0)
		return (0);

	hash_node = malloc(sizeof(hash_node_t));
	if (hash_node == NULL)
		return (0);
	index = key_index(u_key, ht->size);
	hash_node->key = (char *)key;
	hash_node->value = (char *) value;
	hash_node->next = ht->array[index];
	ht->array[index] = hash_node;
	return (1);
}


/**
 * check_key_size - Checks the key size.
 * @key: pointer to an array of characters.
 * Return: 0 if empty string. Otherwise 1.
 */
int check_key_size(const char *key)
{
	int i;

	for (i = 0; key != '\0'; i++)
	{
		if (i > 0)
			return (i);
	}
	return (i);
}
