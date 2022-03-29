#include <stdio.h>
#include "main.h"

/**
 * set_string - sets value of pointer to character
 * @s: source address/content to be copied
 * @to: target address/string
 *
 * Return: no return
 */

void set_string(char **s, char *to)
{
	*s = to;
}
