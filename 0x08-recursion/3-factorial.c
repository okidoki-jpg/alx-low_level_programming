/**
 * factorial - calculate factorial recursively
 * @n: factorial to calculate
 *
 * Return: factorial of n
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);

	return (factorial(n) + factorial(n - 1));
}
