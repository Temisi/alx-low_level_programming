#include <stdio.h>
#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: pointer to character one to be changed
 * @s2: pointer to character two to be modified
 *
 * Return: 0 if s1 equals s2 and another number if not
 */

int _strcmp(char *s1, char *s2)
{
	char *str_one = s1;
	char *str_two = s2;

	while (*str_one != '\0' && *str_two != '\0' && *str_one == *str_two)
	{
		str_one++;
		str_two++;
	}

	return (*str_one - *str_two);
}
