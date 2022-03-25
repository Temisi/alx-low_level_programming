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
	int b[n];
	int i;

	for (int i = 0; i < n; i++)
	{
		b[n - 1 - i] = *a[i];
	}

	for (int i = 0; i < n; i++)
	{
		*a[i] = b[i];
	}
}
