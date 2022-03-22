#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a string, followed by a new line.
 * @str: inputs string
 *
 * Return: no return.
 */

void _puts(char *str)
{
	int m = 0;

	while (m >= 0)
	{
		if (str[m] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[m]);
		m++;
	}
}
