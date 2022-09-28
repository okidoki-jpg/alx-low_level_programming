/**
 * _pow_recursion - exponetiate x by y recursively
 * @x: base number
 * @y: exponent
 *
 * Return: x exponentiated by y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
