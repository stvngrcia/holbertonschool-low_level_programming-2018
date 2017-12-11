/**
 * _memset - fill memory with a constant byte
 * @s: Buffer string
 * @b: Constant byte
 * @n: First n bytes
 * Return: Pointer to a memory area of s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
