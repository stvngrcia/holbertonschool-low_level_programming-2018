int length(char *str, int len);
int check(char *s, int len, int counter, int half);

/**
 * is_palindrome - Checks if string is a palindrome
 * @s: String
 * Return: 1 if palindrome 0 if not palindrome
 */
int is_palindrome(char *s)
{
	int len;
	int counter;
	int half;

	if (*s == '\0')
		return (1);
	len = 0;
	counter = 0;

	len = length(s, len);
	half = len / 2;
	len = check(s, len, counter, half);
	return (len);
}

/**
 * check - Checks if string is a palindrome
 * @s: String
 * @len: length of string
 * @counter: initial counter
 * @half: Contains the half of the length
 * Return: 1 if palindrome 0 if not palindrome
 */
int check(char *s, int len, int counter, int half)
{
	/*Not a palindrome*/
	if (s[counter] != s[len - 1])
		return (0);
	/*It is a palindrome*/
	if (counter == half)
		return (1);
	counter++;
	len--;
	return (check(s, len, counter, half));
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
