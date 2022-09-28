/**
 * _strlen_recursion - get string length recursively
 * @s: string to measure
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
