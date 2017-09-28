/**
 * leet - Switches characters for numbers
 * @str: string to be changed
 * Return: Converted string
 */
char *leet(char *str)
{
	int i;
	int j;
	char a[] = "a4A4e3E3o0O0t7T7l1L1";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 20; j++)
		{
			if (str[i] == a[j])
				str[i] = a[j + 1];
			j++;
		}
	}
	return (str);
}
