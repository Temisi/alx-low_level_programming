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

				for (j = 0; punctuation[j] != '\0'; j++)
				{
					if (s[i] == punctuation[j] &&
						s[j] >= 97 && s[j] <= 122)
						s[j] = s[j] - 32;
				}
	}
	return (s);
}
