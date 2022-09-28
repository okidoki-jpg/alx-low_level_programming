/**
 * root - find natural square root
 * @base: iterating variable
 * @eval: number evaluated againgst
 *
 * Return: base if succesful, else -1
 */

int root(int base, int eval)
{
	if (base * base == eval)
		return (base);
	else if (base * base > eval)
		return (-1);
	return (root(base++, eval));
}

/**
 * _sqrt_recursion - get the natural square root of n
 * @n: squared number
 *
 * Return: base if succesful, else -1
 */

int _sqrt_recursion(int n)
{
	return (root(1, n));
}
