#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - addition function
 * @a: first number
 * @b: second number
 *
 * Return: result on succes
 */

int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - subtraction function
 * @a: first number
 * @b: second number
 *
 * Return: result on succes
 */

int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - multiplication function
 * @a: first number
 * @b: second number
 *
 * Return: result on succes
 */

int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - division function
 * @a: first number
 * @b: second number
 *
 * Return: result on succes
 */

int op_div(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}


/**
 * op_mod - modulus function
 * @a: first number
 * @b: second number
 *
 * Return: result on succes
 */

int op_mod(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
