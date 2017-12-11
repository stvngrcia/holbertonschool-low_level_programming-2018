# Synopsis

Creating a Dynamic library with the following functions

+ _putchar - writes the character c to stdout
+ _isupper - Checks if a letter is upper case
+ _memset - fill memory with a constant byte
+ _strcat - Concatenates two stings
+ _isdigit - checks for a digit (0 through 9)
+ _memcpy - copy memory area
+ _strncat - Concatenates two stings
+ _strchr - returns a pointer to the first occurrence of the character c in the string s.
+ _strlen - Calculates the length of a string
+ _strncpy - Copies a string up to an n byte
+ _islower - checks for lowercase character
+ _puts - prints a string
+ _strcmp - compares two strings
+ _strspn - search a string for a set of bytes
+ _isalpha - checks for lowercase or uppercase characters
+ _strpbrk - search a string for any of a set of bytes
+ _strstr - locate a substring
+ _abs - computes the absolute value of an integer.
+ _strcpy - create a copy of a string
+ _atoi - Converts numbers in a string to integers

# Usage

+ cp -r c_files/* .
+ ./1-create_dynamic_lib.sh
+ rm *.c *.o
+ To be able to use this library on your code, simply, include "holberton.h"
on your file set the LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH and then compile your
code normally.

