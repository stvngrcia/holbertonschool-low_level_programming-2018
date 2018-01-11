/**
 * hash_djb2 - Hashing algorithm refrenced from cse.yorku.ca/~oz/hash.html
 * @str: string that is going to be hashed
 * Return: An unsigned int representing the hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	return (hash);
}
