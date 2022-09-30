/**
 * _strstr - point to a substring in main string
 * @haystack: string to evaluate
 * @needle: subtring to find
 *
 * Return: pointer to begining of substring
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, idx = 0;

	for (i = 0; haystack[i]; i++)
	{
		idx = 0;
		while (haystack[i] == needle[idx])
		{
			idx++;
			i++;
		}
		if (!(needle[idx]))
			return (haystack + (i - idx));
		i -= idx;
	}
	return ('\0');
}
