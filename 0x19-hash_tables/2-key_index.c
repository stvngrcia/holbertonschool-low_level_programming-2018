#include "hash_tables.h"
/**
 * key_index - Gives the index of a key.
 * @key: is the name of the key.
 * @size: Is the size of the hash table array.
 * Return: Returns the index at which the key/value pair should be stored
 * in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);
	hash = hash % size;
	return (hash);
}
