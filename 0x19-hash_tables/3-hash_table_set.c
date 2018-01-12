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
	hash_node_t *hash_node;
	unsigned long int index;
	const unsigned char *u_key;
	char *str_key;
	char *str_value;

	u_key = (const unsigned char *)key;
	str_size = check_key_size(key);
	if (str_size == 0)
		return (0);
	str_key = malloc(sizeof(char) * str_size + 1);
	str_size = check_value_size(value);
	str_value = malloc(sizeof(char) * str_size + 1);
	if (str_key == NULL || str_value == NULL)
		return (0);
	hash_node = malloc(sizeof(hash_node_t));
	if (hash_node == NULL)
		return (0);
	index = key_index(u_key, ht->size);
	hash_node->key = strcpy(str_key, key);
	hash_node->value = strcpy(str_value, value);
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
 * check_value_size - Checks the value size.
 * @value: pointer to an array of characters.
 * Return: 0 if empty string. Otherwise 1.
 */
int check_value_size(const char *value)
{
	int i;

	for (i = 0; value[i] != '\0'; i++)
		;
	return (i);
}
