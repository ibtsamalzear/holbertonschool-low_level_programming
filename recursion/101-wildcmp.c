#include "main.h"

/**
 * wildcmp - Compares two strings with a wildcard.
 * @s1: The string to compare.
 * @s2: The string that may contain the wildcard *.
 * Return: 1 if the strings match, otherwise 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0')
	{
		return (*s1 == '\0');
	}

	if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1) ||
			(*s1 != '\0' && wildcmp(s1 + 1, s2)));
	}

	if (*s1 == '\0' || *s1 != *s2)
	{
		return (0);
	}

	return (wildcmp(s1 + 1, s2 + 1));
}
