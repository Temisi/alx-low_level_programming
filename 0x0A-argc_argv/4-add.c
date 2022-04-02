#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check string if there are digits
 * @str: array string
 *
 * Return: 0
 */

int check_num(char *str)
{
	unsigned int m;

	m = 0;

	while (m < strlen(str))
	{
		if (!isdigit(str[m]))
		{
			return (0);
		}
		m++;
	}

	return (1);
}

/**
 * main - add positive numbers
 * @argc: count numbers
 * @argv: arguments
 *
 * Return: 0 if no number is passed, 1 as error if number contains symbols
 * that are not digits
 */

int main(int argc, char *argv[])
{
	int m, j, sum = 0;

	m = 1;

	while (m < argc)
	{
		if (check_num(argv[m]))
		{
			j = atoi(argv[m]);
			sum += j;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		m++;
	}

	printf("%d\n", sum);

	return (0);
}
