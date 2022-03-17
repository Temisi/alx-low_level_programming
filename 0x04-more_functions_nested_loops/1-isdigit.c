#include <stdio.h>
#include "main.h"

/**
 * _isdigit - Shows 1 if input is a digit and 0 for other cases.
 *
 * @c: The digit in ASCII code
 *
 * Return: 1 for digit and 0 for otherwise.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
