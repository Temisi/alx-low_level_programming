#include <stdio.h>
#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: input string.
 *
 * Return: length of string.
 */

int _strlen(char *s)
{
	char s[] = "Programming is fun";
	int i;

	for (i = 0; s[i] != '\0'; ++i)
	{
		_putchar("Length of the string: %d", i);
	}
	return (0);
}
