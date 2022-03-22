#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: input string
 *
 * Return: no return
 */

void puts_half(char *str)
{
	int m = 0, i;

	while (m >= 0)
	{
		if (str[m] == '\0')
			break;
		m++;
	}

	if (m % 2 == 1)
		i = m / 2;
	else
		i = (m - 1) / 2;

	for (i++; i < m; i++)
		_putchar(str[i]);
	_putchar('\n');
}
