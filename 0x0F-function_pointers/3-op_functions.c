#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - adds two numbers
 * @a: first number
 * @b: second number
 *
 * Return: sum of numbers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two numbers
 * @a: fist number
 * @b: second number
 *
 * Return: subtraction of numbers
 */

int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - multiplies two numbers
 * @a: first number
 * @b: second number
 *
 * Return: multiplication of numbers
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: first number
 * @b: second number
 *
 * Return: division of numbers
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulus of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: modulus of numbers
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

