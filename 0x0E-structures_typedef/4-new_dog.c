#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

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

	doggo = malloc(sizeof(dog_t));
	if (!doggo)
		return (NULL);

	doggo->name = name;
	doggo->age = age;
	doggo->owner = owner;

	return (doggo);
}
