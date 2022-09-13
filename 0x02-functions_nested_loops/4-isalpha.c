#include "main.h"

/**
 * _isalpha - determines if character
 * is alphabet
 * @c: function parameter
 * Return: 1 if found, else 0.
 */

int _isalpha(int c)
{
	if ((90 - c) > 26 || (122 - c) > 26)
	{
		return (0);
	}
	return (1);
}
