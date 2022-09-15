#include <stdio.h>

/**
 * _isupper - determine uppercase letter
 * @c: ascii value being evaluated
 * Return: 1 if found, else 0
 */

int main(void)
{
	int n = 0;

	while (n++ < 101)
	{
		if (n % 15 == 0)
			printf("FizzBuzz ");
		else if (n % 3 == 0)
			printf("Fizz ");
		else if (n % 3 == 0)
			printf("Buzz ");
		else
			printf("%d ", n);
	}
	return (0);
}
