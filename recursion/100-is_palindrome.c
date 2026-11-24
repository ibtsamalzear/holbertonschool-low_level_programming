#include "main.h"

/**
 * _palindrome_length - Returns the length of a string recursively.
 * @s: The string to measure.
 * Return: The length of the string.
 */
int _palindrome_length(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _palindrome_length(s + 1));
}

/**
 * _palindrome_helper - Compares characters from both ends.
 * @s: The string to check.
 * @start: The index at the start of the string.
 * @end: The index at the end of the string.
 * Return: 1 if the characters match through the middle, otherwise 0.
 */
int _palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}

	if (s[start] != s[end])
	{
		return (0);
	}

	return (_palindrome_helper(s, start + 1, end - 1));
}

/**
 * is_palindrome - Checks whether a string is a palindrome.
 * @s: The string to check.
 * Return: 1 if s is a palindrome, otherwise 0.
 */
int is_palindrome(char *s)
{
	int length;

	length = _palindrome_length(s);
	return (_palindrome_helper(s, 0, length - 1));
}
