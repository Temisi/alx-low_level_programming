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
	int m, g;

	m = 0;

	while (dest[m] != '\0')
	{
		i++;
	}

	g = 0;

	while (src[g] != '\0')
	{
		dest[m] = src[g];

		if (src[g] == '\0')
			break;
		m++;
		g++;
	}
	dest[m] = '\0';

	return (dest);
}
