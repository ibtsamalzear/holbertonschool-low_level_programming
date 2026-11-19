#include <stdlib.h>
#include "dog.h"

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
	char *new_name;
	char *new_owner;
	int i;

	if (name == NULL || owner == NULL)
		return (NULL);

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);

	i = 0;
	while (name[i] != '\0')
		i++;

	new_name = malloc(i + 1);
	if (new_name == NULL)
	{
		free(new);
		return (NULL);
	}

	i = 0;
	while (name[i] != '\0')
	{
		new_name[i] = name[i];
		i++;
	}
	new_name[i] = '\0';

	i = 0;
	while (owner[i] != '\0')
		i++;

	new_owner = malloc(i + 1);
	if (new_owner == NULL)
	{
		free(new_name);
		free(new);
		return (NULL);
	}

	i = 0;
	while (owner[i] != '\0')
	{
		new_owner[i] = owner[i];
		i++;
	}
	new_owner[i] = '\0';

	new->name = new_name;
	new->age = age;
	new->owner = new_owner;

	return (new);
}
