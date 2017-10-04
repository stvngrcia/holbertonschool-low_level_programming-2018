int length(char *str, int len);
int check(char *s, int len, int counter);

/**
 * is_palindrome - Checks if string is a palindrome
 * @s: String
 * Return: 1 if palindrome 0 if not palindrome
 */
int is_palindrome(char *s)
{
	int len;
	int counter;

	len = 0;
	counter = 0;

	len = length(s, len);
	len = check(s, len, counter);
	return (len);
}

/**
 * check - Checks if string is a palindrome
 * @s: String
 * @len: length of string
 * @counter: initial counter
 * Return: 1 if palindrome 0 if not palindrome
 */
int check(char *s, int len, int counter)
{
	/*Not a palindrome*/
	if (s[counter] != s[len - 1])
		return (0);
	/*It is a palindrome*/
	if (counter + 1 == len / 2)
		return (1);
	counter++;
	len--;
	return (check(s, len, counter));
}
/**
 * length - Calculates the length of the strin
 * @str: String to calculate the length
 * @len: the initial length
 * Return: The total length of the function
 */
int length(char *str, int len)
{
	if (*str == '\0')
		return (len);
	str++;
	len++;
	return (length(str, len));
}
