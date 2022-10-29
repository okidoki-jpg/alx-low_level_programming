#include "main.h"

/**
 * flip_bits - switch bits to get new number
 * @n: number with bit to flip
 * @m: new number
 *
 * Return: number of bits flipped.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int _switch = n ^ m;
	int res = 0;

	while (_switch)
	{
		if (_switch & 1)
			res++;
		_switch >>= 1;
	}
	return (res);
}
