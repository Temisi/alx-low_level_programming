#include <stdio.h>
/**
 * main - main block
 * Description: Print all possible combinations of two-digit numbers.
 * Numbers should range from 0 to 99.
 * The two numbers should be seperated by a space.
 * All numbers should be printed with two digits. 1 should be printed as 01.
 * Combination of numbers must be seperated by a comma followed by space.
 * Combination of numbers should be printed in ascending order.
 * You can only use `putchar` to print to console, up to 8 times
 * You are not allowed to use any variable type `char`.
 * Return: 0
 */
int main(void)
{
	int i, j;
	int a, b, c, d;

	for (i = 0; i < 100; i++)
	{
		a = i / 10; /* doubles fnum */
		b = i % 10; /* singles fnum */

		for (j = 0; j < 100; j++)
		{
			c = j / 10; /* doubles snum */
			d = j % 10; /* singles snum */

			if (a < c || (a == c && b < d))
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(32);
				putchar(c + '0');
				putchar(d + '0');

				if (!(a == 9 && b == 8))
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);

	return (0);
}





























































































































































































