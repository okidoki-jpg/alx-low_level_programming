#include "main.h"

/**
 * _islower - determines lowercase
 * alphabet
 *
 * Return: 1 if found, else 0.
 */

int _islower(int c)
{
	if (122 - c > 26)
	{
		return (0);
	}
	return (1);
}
