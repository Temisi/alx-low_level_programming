#include <stdio.h>

/**
 * main - prints largest prie factor.
 * Return: 0
 */

int main(void)
{
	long int n, max;

	n = 612852475143;
	for (max = 2; max <= n; max++)
	{
		if (n % max == 0)
		{
			n /= max;
			max--;
		}
	}
	printf("%ld\n", max);
	return (0);
}
