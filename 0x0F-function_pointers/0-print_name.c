#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints name as it is
 * @name: Name to be inputted
 * @f: function pointer
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
