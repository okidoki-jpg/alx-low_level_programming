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
	char *lis =  '\0';
	int i;

	if (size < 1)
		return ('\0');

	lis = malloc(sizeof(char) * size);
	if (lis == '\0')
		return ('\0');

	for (i = 0; i < size; i++)
	{
		lis[i] = c;
	}
	return (lis);
}
