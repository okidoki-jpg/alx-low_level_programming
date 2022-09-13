#include "main.h"

/**
 * _isalpha - determines if character
 * is alphabet
 * @c: function parameter
 * Return: 1 if found, else 0.
 */

int _isalpha(int c)
{
	if ('a' >= c <= 'z'|| 'A' >= c <= 'Z')
	{
		return (0);
	}
	return (1);
}
