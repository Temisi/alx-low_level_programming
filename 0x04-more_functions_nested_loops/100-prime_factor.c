#include <stdio.h>
#include <math.h>

/**
 * getMaxPrimeFactor - prints the largest prime factor of a given number
 * followed by a new line.
 * @n: factor number
 *
 * Return: Always 0.
 */
int getMaxPrimeFactor(int n)
{
	int i, max = -1;

	while (n % 2 == 0)
	{
		max = 2;
		n /= 2; /* reduce n by dividing this by 2 */
	}

	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		/* i will increase by 2, to get only odd numbers */
		while (n % i == 0)
		{
			max = i;
			n /= i;
		}
	}

	if (n > 2)
	{
		max = n;
	}
	printf("%1d\n", max);

	return (0);
}
