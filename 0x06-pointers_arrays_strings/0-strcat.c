#include <stdio.h>
#include "main.h"

/**
 * *_strcat - source code to concartenate two strings.
 * @dest: parameter pointer of char
 * @src: parameter pointer of char
 *
 * Return: return value of dest.
 */

char *_strcat(char *dest, char *src)
{
	int m;
	int g;

	m = 0;
	g = 0;

	while (dest[m] != '\0')
	{
		i++;
	}

	while (src[g] != '\0')
	{
		dest[m] = src[g];
		g++;
		m++;
	}

	dest[m] = '\0';
	return (dest);
}
