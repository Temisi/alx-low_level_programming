#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - generates keygen.
 *
 * Return: 0
 */

int main(void)
{
	int i, len;

	srand((unsigned int)time(NULL));

	printf("Enter password length and must be greater than 8\n");

	scanf("%d", &len);

	if (len >= 8)
	{
		for (i = 0; i < len; i++)
		{
			int k = rand() % 128;

			if ((k >= 48 && k <= 57) || (k >= 65 && k <= 90)
					|| (k >= 97 && k <= 122)
					|| (k >= 35 && k <= 37) || k == 64)
			{
				printf("%i\n", k);
			}
			else
			{
				i--;
			}
		}
		printf("\n");
	}
	else
	{
		printf("Length should be grater than 8\n");
	}
	return (0);
}
