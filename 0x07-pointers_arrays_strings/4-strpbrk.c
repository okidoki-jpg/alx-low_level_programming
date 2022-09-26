/**
 * _strpbrk - point to the first occurrance of a
 * character from a substring
 * @s: string to evaluate
 * @accept: array of subtring characters
 *
 * Return: pointer to first substring character in 's'
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j, idx = 0, len = 0;

	while (*s++)
	{
		len++;
	}
	s -= len;
	idx = len;
	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
			{
				if (i <= idx)
				{
					idx = i;
					break;
				}
			}
		}
	}
	s += idx;
	return (s);
}
