#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/**
 * main - generates keygen.
 *
 * Return: 0
 */

int main(void)
{
	char a[10], c[10], d;
	int i, j, k = 0;

	printf("Keygen by Fehintola\n\n");

	while (k < 5 || k >= 10)
	{
		if (k != 0)
			printf("\n The username lenght should be 5 to 10 alphabets\n");

		printf("enter username: ");
		scanf("%s", a);
		k = strlen(a);
	}

	i = k - 1;
	j = 0;

	while (i >= 0)
	{
		c[j] = a[i] + i;
		i--;
		j++;
	}

	c[j] = 0;
	printf("\nThe password is %s\n", c);
	printf("\nHit enter to exit\n");
	getchar();
	getchar();
}
