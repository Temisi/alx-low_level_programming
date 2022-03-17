#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - prints diagonal line in n times.
 * @n: times diagonal line is printed.
 *
 * Return: no return
 */
void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(92);
	}
	_putchar('\n');
}
