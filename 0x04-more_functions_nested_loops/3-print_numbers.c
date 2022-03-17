#include <stdio.h>
#include "main.h"

/**
 * print_numbers - prints the numbers from 0 to 9, followed by a new line
 *
 * Return: no return
 */
void print_numbers(void)
{
	/* loop counter declaration */
	int i;

	/* loop goes while i < 9, and i increases by one every loop */
	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}

	_putchar("\n");
}
