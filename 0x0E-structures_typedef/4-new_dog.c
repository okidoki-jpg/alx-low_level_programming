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
	int name_len, own_len;

	if (!(name) || !(owner))
		return (doggo);

	doggo = malloc(sizeof(dog_t));
	if (!doggo)
		return (NULL);

	name_len = len(name);
	own_len = len(owner);

	doggo->name = malloc(sizeof(char) * name_len + 1);
	if (doggo->name == NULL)
	{
		free(doggo);
		return (NULL);
	}

	doggo->owner = malloc(sizeof(char) * own_len + 1);
	if (doggo->owner == NULL)
	{
		free(doggo->name);
		free(doggo);
		return (NULL);
	}

	doggo->name = cpy(doggo->name, name);
	doggo->age = age;
	doggo->owner = cpy(doggo->owner, owner);

	return (doggo);
}

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

char *cpy(char *dest, char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		dest[i] = str[i];
	dest[i] = '\0';

	return (dest);
}
