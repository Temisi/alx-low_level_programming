#include <stdio.h>
#include "main.h"
#include <limits.h>

/**
 * _atoi - converts a string to an integer.
 * @s: inpit string
 *
 * Return: interger.
 */

int _atoi(char *s)
{
	int i, c;
	unsigned int b;

	c = 1;
	b = 0;

	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] >= 48 && s[i] <= 57)
		{
			b *= 10;
			b += s[i] - 48;
		}
		else if (b)
			break;
		else if (s[i] == 45)
			c *= -1;
	}
	return (b * c);
}
