#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - returns x raised to the power of y
 * @x: first interger/base
 * @y: second integer/exponent
 *
 * Return: value of the exponential
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
