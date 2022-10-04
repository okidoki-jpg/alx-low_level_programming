#include <stdlib.h>

/**
 * create_array - create & initialize dynamic array
 * @size: size of array
 * @c: character to initialize with
 *
 * Return: char pointer if size > 0, else NULL
 */

char *create_array(unsigned int size, char c)
{
	char *lis =  NULL;
	unsigned int i;

	if (size < 1)
		return (NULL);

	lis = malloc(sizeof(char) * size);
	if (lis == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		lis[i] = c;
	}
	return (lis);
}
