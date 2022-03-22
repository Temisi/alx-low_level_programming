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
	int c = 1, b = 0, i = 0;

	while (s[i] == ' ')
	{
		i++;
	}

	if (s[i] == 45 || s[i] == 43)
	{
		c = 1 - 2 * (s[i++] == 45);
	}

	while (s[i] >= 48 && s[i] <= 57)
	{
		if (b > INT_MAX / 10 || (b == INT_MAX / 10 && s[i] - 48 > 7))
		{
			if (c == 1)
				return (INT_MAX);
			else
				return (INT_MIN);
		}
		b = 10 * b + (s[i++] - 48);
	}
	return (b * c);
}
