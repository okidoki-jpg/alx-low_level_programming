/**
 * _strspn - calculate prefix span of a substring
 * @s: string to evaluate
 * @accept: array of subtring characters
 *
 * Return: length of substring span
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int span = 0;

	while (*s)
	{
		while (*accept)
		{
			if (*++accept == *s)
			{
				span++;
			}
		}
		s++;
	}
	return (span);
}
