#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - print chessboard, 2d array
 * @a: input pointer
 *
 * Return: no return
 */

void print_chessboard(char (*a)[8])
{
	/* Declaring variables */
	unsigned int d, f = 0;

	/*Conditional statement for a number iterations*/
	for (d = 0; d < 64; d++)/*Repeat so long integer d meet the condition*/
	{
		if (d % 8 == 0 && d != 0)
		{
			f = d;
			_putchar('\n');
		}
		_putchar(a[d / 8][d - f]);
	}
		_putchar('\n'); /* Prints new line */
}
