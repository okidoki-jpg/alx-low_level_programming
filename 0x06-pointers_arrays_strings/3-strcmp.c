/**
 * _strcmp - conpare two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: value less than, eqial to or greater than 0
 */

int _strcmp(char *s1, char *s2)
{
	int res;

	while (*s1 != NULL && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	res = (int) *s1 - (int) *s2;
	return (res);
}
