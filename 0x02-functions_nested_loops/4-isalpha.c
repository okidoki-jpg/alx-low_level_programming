#include "main.h"

/**
 * _isalpha - determines if character
 * is alphabet
 * @c: function parameter
 * Return: 1 if found, else 0.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
