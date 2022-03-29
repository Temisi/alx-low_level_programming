#include <stdio.h>
#include "main.h"

/**
 * _strstr - locates a substring. finds first occurence of
 * substring needle in string haystack and terminating
 * null bytes are not compared.
 * @haystack: entire string
 * @needle: substring
 *
 * Return: pointer to the beginning of located
 * substring or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	/* Declaring variables */
	char *a;
	char *b;

	/* Set condition for the string haystack*/
	while (*haystack != '\0')
	{
		/*string values*/
		a = haystack;
		b = needle;

		/*Condition to compare/search for occurence of substring*/
		 /* needle in the entire string haystack*/
		while (*haystack != '\0' && *b != '\0' && *haystack == *b)
		{
			haystack++;
			b++;
		}
		/* Condition to check substring not equaling a null byte*/
		if (!*b)
			return (a);
		haystack = a + 1; /*entire string increment*/
	}

	return (0);/* returns null value, substring not found*/
}
