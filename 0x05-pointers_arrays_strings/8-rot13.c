/**
 * rot13 - Converts string to rot13
 * @str: string to convert
 * Return: converted string
 */
char *rot13(char *str)
{
	int i;
	int x;
	char s[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char u[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";


	for (i = 0; str[i] != '\0'; i++)
	{
		for (x = 0; x <= 48; x++)
		{
			if (str[i] == s[x])
			{
				str[i] = u[x];
				break;
			}
		}
	}
	return (str);
}
