#include <stdio.h>
#include "main.h"

/**
 * _strcat - concartenate two strings.
 * @dest: destination parameter
 * @src: source parameter
 *
 * Return: pointer to  dest.
 */

char *_strcat(char *dest, char *src)
{
	int m = 0, g = 0;

	while (dest[m] != '\0')
	{
		i++;
	}

	while (g >= 0)
	{
		dest[m] = src[g];
		if (src[g] == '\0')
			break;
		m++;
		g++;
	}

	return (dest);
}
