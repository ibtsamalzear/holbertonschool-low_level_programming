#include "main.h"
#include <stdlib.h>

/**
 * string_length - returns the length of a string
 * @str: string to measure
 *
 * Return: length of the string
 */
static unsigned int string_length(char *str)
{
	unsigned int length;

	length = 0;
	while (str[length] != '\0')
		length++;

	return (length);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from s2
 *
 * Return: pointer to the new string, or NULL if allocation fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int len1, len2, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = string_length(s1);
	len2 = string_length(s2);

	if (n >= len2)
		n = len2;

	result = malloc(len1 + n + 1);
	if (result == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		result[i] = s1[i];

	for (i = 0; i < n; i++)
		result[len1 + i] = s2[i];

	result[len1 + n] = '\0';

	return (result);
}
