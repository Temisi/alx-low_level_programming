#include <stdio.h>
#include "main.h"

/**
 * print_numbers - prints the numbers from 0 to 9, followed by a new line
 *
 * Return: 0
 */
void print_numbers(void)
{
	/* loop counter declaration */
	int i;

	/* assign initial value from where we want to print the numbers */
	i = 0;

	/* while loop, that will print numbers from 0 to 9 */
	while (i <= 9)
	{
		/*printing the numbers */
		_putchar("%d\n", i);
		/* increment */
		i++;
	}
	_putchar("\n");
}
