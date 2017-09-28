/**
 * rot13 - Converts string to rot13
 * @str: string to convert
 * Return: converted string
 */
char *rot13(char *str)
{
	int i;
	int j;
	char s[] = "ANanBOboCPcpDQdqERerFSfsGTgtHUhuIVivJWjwKXkxLYlyMZmz";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 48; j = j + 2)
		{
			if (str[i] == s[j])
				str[i] = s[j + 1];
			else if (str[i] == s[j + 1])
				str[i] = s[j];
		}
	}
	return (str);
}
