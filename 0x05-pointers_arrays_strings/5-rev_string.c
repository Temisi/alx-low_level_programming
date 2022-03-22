#include <stdio.h>
#include "main.h"

/**
 * rev_string -returns a string.
 * @s: inouts string.
 *
 * Return: no return
 */

void rev_string(char *s)
{
	int m = 0, k, l;
	char *str, temp;

	while (m >= 0)
	{
		if (s[m] == '\0')
			break;
		m++;
	}
	str = s;

	for (k = 0; k < (m - 1); k++)
	{
		for (l = k + 1; l > 0; l--)
		{
			temp = *(str + l);
			*(str + l) = *(str + (l - 1));
			*(str + (l - 1)) = temp;
		}
	}
}
