#include "main.h"

/**
 * set_bit - change the bit at a given location
 * @n: number to change
 * @index: location of bit to change
 *
 * Return: changed int
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int _switch = 1 << index;

	if (index > sizeof(*n) * 8)
		return (-1);

	*n |= _switch;
	return (1);
}
