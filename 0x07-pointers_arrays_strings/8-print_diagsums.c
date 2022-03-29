#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints sum of two diagonals of square
 * matrix of integers
 * @a: input pointer
 * @size: size of matrix
 *
 * Return: no return
 */

void print_diagsums(int *a, int size)
{
	/* Variable declaration*/

	int i;
	int c, d;

	c = 0;
	d = 0;

	i = 0;
	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			c += a[i];
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			d += a[i];
	}
	printf("%d, %d\n", c, d);
}
