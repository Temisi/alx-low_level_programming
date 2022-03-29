#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - searches string for any set of byte
 * @s: first string
 * @accept: second string
 *
 * Return: pointer of byte in s that matchez one of the
 * byte in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int c, d;

	for (c = 0; s[c] != '\0'; c++)
	{
		for (d = 0; accept[d] != '\0'; d++)
		{
			if (s[c] == accept[d])
				return (s + c);
		}
	}
	return ('\0'); /* returns a null value */
}
