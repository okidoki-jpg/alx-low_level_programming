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

	if (str == NULL)
		return (NULL);

	for (size = 0; str[size]; size++)
		continue;

	copy = malloc(sizeof(char) * size + 1);
	if (copy == NULL)
		return (NULL);

	for (idx = 0; idx <= size; idx++)
	{
		copy[idx] = str[idx];
	}
	return (copy);
}
