#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - prints result of multiplication of two numbers
 * @argc: count argument
 * @argv: argument
 *
 * Return: return 1 as error if program does not receive two integers
 * and 0  for success
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
