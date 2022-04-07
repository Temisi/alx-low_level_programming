#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer of an array of char
 */

char *str_concat(char *s1, char *s2)
{
	char *strout;
	unsigned int i, j, m, g;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	strout = malloc(sizeof(char) * (i + j + 1));

	if (strout == NULL)
	{
		free(strout);
		return (NULL);
	}

	for (m = 0; m < i; m++)
		strout[m] = s1[m];

	g = j;
	for (j = 0; j <= g; m++, j++)
		strout[m] = s2[j];

	return (strout);
}
