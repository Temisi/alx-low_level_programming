#include <stdio.h>
#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory area
 * @b: constsnt byte
 * @n: size of byte filled
 *
 * Return: pointer to des
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	/*Declaring a for statement */
	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
