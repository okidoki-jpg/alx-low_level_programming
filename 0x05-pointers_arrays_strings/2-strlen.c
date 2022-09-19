/**
 * _strlen - calculate length of a string
 * @s: string to evaluate
 *
 * Return: length of string 's'
 */

int _strlen(char *s)
{
	int i = 0, len = 0;

	while (s[i++] != '\0')
	{
		len++;
	}
	return (len);
}
