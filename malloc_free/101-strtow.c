#include "main.h"
#include <stdlib.h>

/**
 * count_words - counts the words in a string
 * @str: the string to check
 *
 * Return: number of words
 */
static int count_words(char *str)
{
	int i, count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (str[i] == ' ')
			i++;
		if (str[i] != '\0')
		{
			count++;
			while (str[i] != ' ' && str[i] != '\0')
				i++;
		}
	}
	return (count);
}

/**
 * copy_word - copies one word into allocated memory
 * @str: source string
 * @start: starting position
 * @end: ending position
 *
 * Return: pointer to the copied word, or NULL
 */
static char *copy_word(char *str, int start, int end)
{
	char *word;
	int i;

	word = malloc(sizeof(char) * (end - start + 1));
	if (word == NULL)
		return (NULL);

	for (i = 0; i < end - start; i++)
		word[i] = str[start + i];

	word[i] = '\0';
	return (word);
}

/**
 * free_words - frees allocated words
 * @words: array of words
 * @count: number of allocated words
 *
 * Return: nothing
 */
static void free_words(char **words, int count)
{
	int i;

	for (i = 0; i < count; i++)
		free(words[i]);
	free(words);
}

/**
 * strtow - splits a string into words
 * @str: the string to split
 *
 * Return: array of words, or NULL
 */
char **strtow(char *str)
{
	char **words;
	int i, k, count, start;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	count = count_words(str);
	if (count == 0)
		return (NULL);

	words = malloc(sizeof(char *) * (count + 1));
	if (words == NULL)
		return (NULL);

	i = 0;
	k = 0;
	while (str[i] != '\0')
	{
		while (str[i] == ' ')
			i++;
		if (str[i] != '\0')
		{
			start = i;
			while (str[i] != ' ' && str[i] != '\0')
				i++;
			words[k] = copy_word(str, start, i);
			if (words[k] == NULL)
			{
				free_words(words, k);
				return (NULL);
			}
			k++;
		}
	}
	words[k] = NULL;
	return (words);
}
