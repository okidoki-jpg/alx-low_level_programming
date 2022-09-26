/**
 * _strspn - calculate prefix span of a substring
 * @s: string to evaluate
 * @accept: array of subtring characters
 *
 * Return: length of substring span
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, span = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
			{
				span++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}
	return (span);
}
