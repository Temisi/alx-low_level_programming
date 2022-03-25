#include <stdio.h>
#include "main.h"

/**
 * cap_string - capitalize each character of a string
 * @s: pointer to parameter character
 *
 * Return: pointer to dest
 */

char *cap_string(char *s)
{
	int i = 0, j;
	char punc[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (s[i] >= 97 && s[i] <= 122)
		s[i] = s[i] - 32;
	i++;

	while (s[i] != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (s[i] == punc[i])
			{
				if (s[j] >= 97 && s[j] <= 122)
					s[j] = s[j] - 32;
				break;
			}
		}
		i++;
	}
	return (s);
}
