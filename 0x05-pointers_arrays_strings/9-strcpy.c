#include <stdio.h>
#include "main.h"

/**
 * _strcpy - copies string pointed to by src,
 * including the terminating null byte to the buffer
 * pointed to bt dest.
 * @dest: destination.
 * @src: source.
 *
 * Return: the pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int m = 0;

	while (m >= 0)
	{
		*(dest + m) = *(src + m);
		if (*(src + m) == '\0')
			break;
		m++;
	}
	return (dest);
}
