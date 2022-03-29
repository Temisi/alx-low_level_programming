#include <stdio.h>
#include "main.h"

/**
 * _strchr - function that locates character in string
 * @s: string
 * @c: character
 *
 * Return: pointer to first occurence of character c
 */

char *_strchr(char *s, char c)
{
	unsigned int m = 0;

	/* Declaring a for loop */
	for (; s[m] != '\0'; m++)
		/* Declaring a conditional statement */
		if (s[m] == c) /* if size of string is equal to character size */
			return (s + m); /* returns pointer to first occurence of character c */
	if (s[m] == c)
		return (s + m);

	/* returns a null value */
	return ('\0');
}
