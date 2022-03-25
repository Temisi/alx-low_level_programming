#include <stdio.h>
#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * of integers
 * @a: array of integers
 * @n: number of elements of an array
 *
 * Return: returns void
 */

void reverse_array(int *a, int n)
{
	int b;
	int h;
	int p;

	b = 0;
	h = n - 1;

	while (b < h)
	{
		p = a[b];
		a[b] = a[h];
		a[h] = p;
		b++;
		h--;
	}
}
