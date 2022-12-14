#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

int len(char *str);
char *cpy(char *dest, char *str);

/**
 * new_dog - create new dog object
 * @name: new dog name
 * @age: new dog age
 * @owner: new dog owner
 *
 * Return: new dog object
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;
	int name_len = 0, own_len = 0;

	if (name && owner)
	{
		doggo = malloc(sizeof(dog_t));
		if (doggo == NULL)
			return (NULL);

		name_len = len(name) + 1;
		own_len = len(owner) + 1;

		doggo->name = malloc(sizeof(char) * name_len);
		if (doggo->name == NULL)
		{
			free(doggo);
			return (NULL);
		}

		doggo->owner = malloc(sizeof(char) * own_len);
		if (doggo->owner == NULL)
		{
			free(doggo->name);
			free(doggo);
			return (NULL);
		}

		doggo->name = cpy(doggo->name, name);
		doggo->age = age;
		doggo->owner = cpy(doggo->owner, owner);
	}
	return (doggo);
}

/**
 * len - deterine string length
 * @str: string to meassure
 *
 * Return: count of string characters
 */

int len(char *str)
{
	int c = 0;

	while (*str)
	{
		c++;
		str++;
	}
	return (c);
}

/**
 * cpy - copy a string to a location
 * @dest: new location for copy of string
 * @str: string being copied
 *
 * Return: string copied to new destination
 */

char *cpy(char *dest, char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		dest[i] = str[i];
	dest[i] = '\0';

	return (dest);
}
