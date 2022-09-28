#include "main.h"

/**
 * len - get string length
 * @s: string to evaluate
 * 
 * Return: string length
 */

int len(char *s)
{
	if (*s)
		return (1 + len(s + 1));
	return (0);
}

/**
 * is_pal - evaluate palindrome
 * @s: string to evaluate
 * @front: index from the front
 * @back: index from the back
 *
 * Return: 1 if succesful, else 0
 */

int is_pal(char *s, int front, int back)
{
	if (front >= back)
		return (1);
	if (s[front] != s[back])
		return (0);
	return is_pal(s, front + 1, back - 1);
}


/**
 * is_palindrome - evaluate palindrome
 * @s: string to evaluate
 *
 * Return: 1 if succesful, else 0
 */

int is_palindrome(char *s)
{
	return (is_pal(s, 0, len(s) - 1));
}
