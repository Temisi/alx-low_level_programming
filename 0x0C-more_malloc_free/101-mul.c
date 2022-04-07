#include <stdio.h>
#include "main.h"

/**
 * main - multiplies two positive numbers
 * @argc: n arguments
 * @argv: args
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	unsigned long mul;
	int m, b;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (m = 1; m < argc; m++)
	{
		for (b = 0; argv[m][b] != '\0'; b++)
		{
			if (argv[m][b] > 57 || argv[m][b] < 48)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%lu\n", mul);

	return (0);
}
