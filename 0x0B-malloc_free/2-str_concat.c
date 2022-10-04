#include <stdlib.h>

/**
 * str_concat - concatenate two string to new memory
 * @s1: first string
 * @s2: second string
 *
 * Return: char pointer if size > 0, else NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *cat =  NULL;
	unsigned int len1 = 0, len2 = 0, idx;

	if (s1 != NULL)
	{
		for (idx = 0; s1[idx]; len1 = idx++)
			continue;
	}

	if (s2 != NULL)
	{
		for (idx = 0; s2[idx]; len2 = idx++)
			continue;
	}

	if (!(len1) && !(len2))
		return (NULL);

	cat = malloc(sizeof(char) * (len1 + len2) + 1);
	if (cat == NULL)
		return (NULL);

	for (idx = 0; idx < len1; idx++)
	{
		cat[idx] = s1[idx];
	}

	for (idx = 0; idx <= len2; idx++)
	{
		cat[len1 + idx] = s2[idx];
	}
	return (cat);
}
