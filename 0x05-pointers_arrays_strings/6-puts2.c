#include <stdio.h>
#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string
 * @s: input string.
 *
 * Return: no return
 */

void puts2(char *s)
{
	int k = 0;

	while (k >= 0)
	{
		if (s[k] == '\0')
		{
			_putchar('\n');
			break;
		}

		if (k % 2 == 0)
			_putchar(s[k]);
		k++;
	}
}
