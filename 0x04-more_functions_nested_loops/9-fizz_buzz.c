#include <stdio.h>
#include "mian.h"

/**
 * main - prints all the numbers from 1 to 100, followed
 * by new line, but multiples of 3 prints Fizz instead
 * of the number while multiples of 5 prints Buzz.
 *
 * Return: Always 0.
 */
int main(void)
{
	int g;

	for (g = 1; g <= 100; g++)
	{
		if (g % 3 == 0 && g % 5 != 0)
		{
			printf("Fizz");
		}
		else if (g % 5 == 0 && g % 3 != 0)
		{
			printf("Buzz");
		}
		else if (g % 3 == 0 && g % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (g == 1)
		{
			printf("%d", g);
		}
		else
		{
			printf(" %d", g);
		}
	}
	printf('\n');

	return (0);
}
