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

	i = 0

	printf("\t");

	srand(time(NULL));

	for (int i = 0; i < m; i++)
	{
		printf("%c", list[rand() % (sizeof(list - 1))]);
	}

	printf("\n");
	printf("\t");

	return (0);
}
