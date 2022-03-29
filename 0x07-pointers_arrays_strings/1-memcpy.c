#include <stdio.h>
#include "main.h"

/**
 * _memcpy - function to copy memory area
 * @dest: memory area of destination
 * @src: memory area of source
 * @n: size of inputted byte
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int b;

	/** Declaring a for statement */
	for (b = 0; b < n; b++)
		dest[b] = src[b]; /* Addition of 1 position to dest and src */

	return (dest);
}
