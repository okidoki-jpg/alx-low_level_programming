/**
 * _strlen - get string length
 * @s: string to evaluate
 *
 * Return: lenth of string
 */

int _strlen(char *s)
{
	int len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}
