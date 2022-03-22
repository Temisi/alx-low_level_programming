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
	int i = 0;

	while (i < s.length && s[i] == ' ')
	{
		i++;

		if (i >= s.length)
		{
			return (0);
		}
	}

	int c = 1;

	if (s[i] == 45 || s[i] == 43)
	{
		c = 1 - 2 * (s[i++] == 45);
	}

	if (i >= s.length)
	{
		return (0);
	}

	int b = 0;

	for (int i = 0; i < s.length && s[i] >= 48 && s[i] <= 57; i++)
	{
		if (b > INT_MAX / 10 || (b == INT_MAX / 10 && s[i] - 48 > INT_MAX % 10))
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
