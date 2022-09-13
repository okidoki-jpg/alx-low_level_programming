#include "main.h"

/**
 * _isalpha - determines if character
 * is alphabet
 * @c: function parameter
 * Return: 1 if found, else 0.
 */

int _isalpha(int c)
{
	if ('z' >= c <= 'a'|| 'Z' >= c <= 'A')
	{
		return (0);
	}
	return (1);
}
