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
	int i, j;
	char punctuation[] = "\t\n,;.!?\"(){}";

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[0] >= 97 && s[0] <= 122)
			s[0] = s[0] - 32;
		i++;

		while (s[0] != '\0')
		{
			for (i = 0; i < 13; i++)
			{
				if (s[0] == punctuation[i])
				{
					if ((s[j] >= 97) && s[j] <= 122)
						s[j] = s[j] - 32;
					break;
				}
			}
			i++;
		}
	}
	return (s);
}
