#include "lists.h"

/**
 * vmain - function/statement executed before main
 *
 * Return: Nothing
 */

void __attribute__ ((constructor)) vmain()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
