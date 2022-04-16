#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point
 * Description: Program that performs simple operations
 * @argc: count argument
 * @argv: vector argument
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int (*operation)(int, int);
	int a, b;

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}

	operation = get_op_func(argv[2]);
	if (argv[2][1] != '\0' || operation == NULL)
	{
		puts("Error");
		exit(99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && atoi(argv[3]) == 0)
	{
		puts("Error");
		exit(100);
	}



	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", operation(a, b));

	return (0);
}
