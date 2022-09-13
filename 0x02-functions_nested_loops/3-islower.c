#include "main.h"

/**
 * _islower - determines lowercase
 * alphabet
 *
 * Return: 1 if found, else 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
