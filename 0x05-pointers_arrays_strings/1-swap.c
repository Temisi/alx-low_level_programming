#include <stdio.h>
#include "main.h"

/**
 * swap_int - swaps the vlauesof two integers.
 * @a: first integer
 * @b: second integer
 *
 * Return: no return
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
