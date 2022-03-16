#include <stdio.h>

/**
 * main - Prints the addition of the Fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	int g;
	long int n1, n2, fn;

	n1 = 1;
	n2 = 2;
	printf("%ld, %ld", n1, n2);
	for (g = 0; g < 48; g++)
	{
		fn = n1 + n2;
		printf(", %ld", fn);
		n1 = n2;
		n2 = fn;
	}
	printf("\n");
	return (0);
}
