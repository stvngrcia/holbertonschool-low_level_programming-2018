#include "hash_tables.h"
#include <stdio.h>
/**
 * hash_table_set - Adds an element to a hash table.
 * @ht: The hash table you want to add or update the key/value
 * @key:  It is the key. key can not be an empty string
 * @value: The value associated with the key. value can be an empty string
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int str_size;
	int key_exist;
	hash_node_t *hash_node;
	unsigned long int index;
	const unsigned char *u_key;

	if (ht == NULL || key == NULL)
		return (0);
	u_key = (const unsigned char *)key;
	str_size = check_key_size(key);
	if (str_size == 0)
		return (0);
	index = key_index(u_key, ht->size);
	key_exist = k(ht, key, index, value);
	if (key_exist == 0)
		return (1);

	hash_node = malloc(sizeof(hash_node_t));
	if (hash_node == NULL)
		return (0);

	hash_node->key = strdup(key);
	hash_node->value = strdup(value);
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

	for (i = 0; key[i] != '\0'; i++)
		;
	return (i);
}

/**
 * k - Checks if a key is already in the hash table.
 * @h: Pointer to the hash table.
 * @k: pointer to an array of characters.
 * @idx: index where they key would exists.
 * @val: Value of the key.
 * Return: 0 if the key exist. 1 otherwise.
 */
int k(hash_table_t *h, const char *k, unsigned long int idx, const char *val)
{
	hash_node_t *tmp;

	tmp = h->array[idx];
	while (tmp != NULL)
	{

		if (strcmp(k, tmp->key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(val);
			return (0);
		}

		tmp = tmp->next;
	}
	return (1);
}
