#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free dog attributes
 * @d: dog object
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d->d);
	}
}
