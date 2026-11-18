
#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL
 */
char *_strdup(char *str)
{
	char *copy;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	copy = malloc(sizeof(char) * (i + 1));
	if (copy == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		copy[j] = str[j];

	return (copy);
}
