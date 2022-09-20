/**
 * _atoi - convert string to int
 * @s: string to convert
 *
 * Return: int version of string
 */

int _atoi(char *s)
{
	int i = 0, res = 0, n = 0, sign = 0;

	while (s[i] != '\0')
	{
		if (s[i] > '9' || s[i] < '0')
		{
			if (res > 0)
			{
				break;
			}
			else if (s[i] == '-')
			{
				sign++;
			}
		}
		else
		{
			n = s[i] - 57 + 9;
			res = res * 10 + n;
		}
		i++;
	}

	if (sign % 2 != 0)
		res *= -1;
	return (res);
}
