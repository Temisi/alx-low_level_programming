#include <stdio.h>
#include "main.h"

/**
 * _strncat - concartenates two string
 * @dest: pointer to a character that will change
 * @src: pointer to a character that will change
 * @n: value of character
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, m;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	m = 0;
	while (m < n && src[m] != '\0')
	{
		dest[i] = src[m];
		m++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
