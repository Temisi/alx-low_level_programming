#include <stdio.h>
#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: inputs string
 *
 * Return: pointer dest.
 */

char *leet(char *s)
{
	int i = 0, j;
	int low_case[] = {97, 101, 111, 116, 108};
	int upp_case[] = {65, 69, 79, 84, 76};
	int numb[] = {52, 51, 48, 55, 49};

	while (s[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == low_case[j] || s[i] == upp_case[j])
			{
				s[i] = numb[j];
				break;
			}
		}
		i++;
	}

	return (s);
}
