#include <stdlib.h>
#include "dog.h"

/**
 * copy_string - creates a copy of a string
 * @str: string to copy
 *
 * Return: pointer to the copy, or NULL if it fails
 */
static char *copy_string(char *str)
{
	char *copy;
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;

	copy = malloc(i + 1);
	if (copy == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
	{
		copy[i] = str[i];
		i++;
	}
	copy[i] = '\0';

	return (copy);
}

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: pointer to the new dog, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	if (name == NULL || owner == NULL)
		return (NULL);

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);

	new->name = copy_string(name);
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}

	new->owner = copy_string(owner);
	if (new->owner == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}

	new->age = age;

	return (new);
}
