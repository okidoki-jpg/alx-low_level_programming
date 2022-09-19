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
 * rev_string - reverse a string
 * @s: string to reverse
 * len: size of string
 * *front: points to values from the front
 * *end: points to values from the end
 * tmp: temporarily holds end value during switch
 * *s: changing string always at start position
 */


void rev_string(char *s)
{
	int len = _strlen(s) - 1;
	char *front = s, *end = s + len, tmp;

	/**
	 * loop through half the length of string because
	 * reverse happens by swapping two values
	 */

	for (int i = 0; i < len / 2; i++)
	{
		tmp = *end;
		*end = *front;
		*front = tmp;

		/**
		 * move front index forward
		 * move end index back
		 */

		front++;
		end--;
	}
}
