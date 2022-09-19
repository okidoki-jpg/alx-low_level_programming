/**
 * swap_int - swap two integer variable values
 * @a: first parameter
 * @b: second parameter
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int tmp = a;
	&a = b;
	&b = tmp;
}
