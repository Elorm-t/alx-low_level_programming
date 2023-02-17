#include <stdio.h>

/**
 * main - Entry point
 *
 * Discription: Program prints all different combinations of two digits.
 * The two digits must be different, and the smallesd combination of the
 * two digit is printend in ascending order.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 48;
	int j;

	while (i < 57)
	{
		j = i + 1;
		while (j < 58)
		{
			putchar(i);
			putchar(j);

			if (i < 56)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}

	putchar(10);

	return (0);
}
