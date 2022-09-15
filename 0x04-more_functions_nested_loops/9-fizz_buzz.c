#include <stdio.h>

/**
 * _isupper - determine uppercase letter
 * @c: ascii value being evaluated
 * Return: 1 if found, else 0
 */

int main(void)
{
	int n = -1;

	while (n++ < 101)
	{
		if (n % 15 == 0)
			puts("FizzBuzz");
		else if (n % 3 == 0)
			puts("Fizz");
		else if (n % 3 == 0)
			puts("Buzz");
		else
			printf("%d\n", n);
	}
	return (0);
}
