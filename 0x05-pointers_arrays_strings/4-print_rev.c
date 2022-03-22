#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints a strings in reverse order,
 * followed by a new line.
 * @s: inputs string.
 *
 * Return: no return.
 */

void print_rev(char *s)
{
	int n = 0;

	while (n >= 0)
	{
		if (s[n] == '\0')
			break;
		n++;
	}

	for (n--; n >= 0; n--)
		_putchar(s[n]);
	_putchar('\n');
}
