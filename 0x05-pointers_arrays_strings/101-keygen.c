#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * password - generates keygen.
 * @m: length of password
 *
 * Return: 0
 */

int password(int m)
{
	char list[] = "1234567890qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHKLZXCVBNM";

	printf("\t");

	for (int i = 0; i < m; i++)
	{
		printf("*");
	}

	printf("\n");
	printf("\t");

	srand(time(NULL));

	for (int i = 0; i < m; i++)
	{
		printf("%c", list[rand() % (sizeof(list - 1))]);
	}

	printf("\n");
	printf("\t");

	for (int i = 0; i < m; i++)
	{
		printf("*");
	}

	printf("\n");
	return (0);
}
