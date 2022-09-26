/**
 * strchr - locate first occurences of a character
 * in a string
 * @s: string to evaluate
 * @c: character to find
 *
 * Return: NULL or pointer to character in string
 */

char *_strchr(char *s, char c)
{
	while (s++ != '\0')
	{
		if (*s == c)
			return (s);
	}
	return ('\0');
}
