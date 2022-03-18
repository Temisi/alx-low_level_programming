#include <stdio.h>

/**
 * main - prints all the numbers from 1 to 100, followed
 * by new line, multiples of 3 prints Fizz instead
 * of the number while multiples of 5 prints Buzz.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;


	for (n = 1; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else if ((n % 3 == 0) && (n % 5 != 0))
		{
			printf(" Fizz");
		}
		else if ((n % 5 == 0) && (n % 3 != 0))
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", n);
		}
	}
	printf("\n");

	return (0);
}
