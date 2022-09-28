/**
 * prime - determine if any other divisible numbers
 * @fact: iterating variable
 * @eval: number evaluated againgst
 *
 * Return: 1 if succesful, else 0
 */

int prime(int fact, int eval)
{
	if (eval == fact)
		return (1);
	else if (eval % fact == 0)
		return (0);
	return (prime(fact + 1, eval));
}

/**
 * is_prime_number - determine if n is prime number
 * @n: number to evaluate
 *
 * Return: 1 if succesful, else 0
 */

int is_prime_number(int n)
{
	return (prime(1, n));
}
