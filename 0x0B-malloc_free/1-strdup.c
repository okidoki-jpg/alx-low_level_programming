#include <stdlib.h>

/**
 * _strdup - copy string to newly allocated memory
 * @str: string to copy
 *
 * Return: char pointer if size > 0, else NULL
 */

char *_strdup(char *str)
{
	char *copy =  NULL;
	unsigned int idx, size;

	for (size = 0; str[size]; size++)
		continue;

	copy = malloc(sizeof(char) * size);
	if (copy == NULL)
		return (NULL);

	for (idx = 0; idx < size; idx++)
	{
		copy[idx] = str[idx];
	}
	return (copy);
}
