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
 * *front: points to values from the front
 * *end: points to values from the end
 * tmp: temporarily holds end value during switch
 */


void rev_string(char *s)
{
	int end = _strlen(s) - 1, front;
	char tmp;

	/**
	 * move front index foward and swap values
	 */

	for (front = 0; front < end; front++)
	{
		tmp = s[end];
		s[end] = s[front];
		s[front] = tmp;

		/**
		 * move end index back
		 */

		end--;
	}
}
