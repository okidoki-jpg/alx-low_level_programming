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

	if (name != NULL && owner != NULL)
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
 * Rerurn: count of string characters
 */

int len(char *str)
{
	int c = 0;

	for (; *str; str++)
	{
		c++;
	}
	return (c);
}

/**
 * cpy - copy a string to a location
 * @dest: new locstion for copy of string
 * @str: string being copied
 */

char *cpy(char *dest, char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		dest[i] = str[i];
	dest[i++] = '\0';

	return (dest);
}
