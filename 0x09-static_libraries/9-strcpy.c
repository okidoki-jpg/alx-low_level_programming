#include "main.h"

/**
 * _strlen - get string length
 * @s: string to evaluate
 *
 * Return: string length
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * _strcpy - copy a string to a new pointer
 * @src: string to copy
 * @dest: destination of copy
 * Return: char pointer to new string
 */

char *_strcpy(char *dest, char *src)
{
	int len = _strlen(src), i;

	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
