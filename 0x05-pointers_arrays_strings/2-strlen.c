/**
 * _strlen - calculate length of a string
 * @s: string to evaluate
 *
 * Return: length of string 's'
 */

int _strlen(char *s)
{
	int len = 0;

	for (int i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}
