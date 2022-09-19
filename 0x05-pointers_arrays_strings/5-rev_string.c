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
 * rev_string - reverde a string
 * @s: string to reverse
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0, idx = _strlen(s);
	char str[] = *s;

	while (idx >= 0)
	{
		s[i++] = str[idx--];
	}
}
