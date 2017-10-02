/**
 * _strspn - search a string for a set of bytes
 * @s: String to check
 * @accept: String that checks
 * Return: The number of bytes in the initial segment of s which consist
 * only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int l;
	unsigned int c;
	unsigned int counter;

	counter = 0;
	for (c = 0; accept[c] != '\0'; c++)
	{
		for (l = 0; s[l] != '\0'; l++)
		{
			if (accept[c] == s[l])
				counter++;
			/*Stop counting when not a character*/
			if (s[l + 1] < 'A' || s[l + 1] > 'Z')
			{
				if (s[l + 1] < 'a' || s[l + 1] > 'z')
					break;
			}

		}
	}
	return (counter);
}
