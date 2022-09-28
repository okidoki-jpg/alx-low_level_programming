/**
 * _strlen_recursion - get string length recursively
 * @s: string to measure
 *
 * Return: void
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		_strlen_recursion(s);
		return (i++);
	}
}
