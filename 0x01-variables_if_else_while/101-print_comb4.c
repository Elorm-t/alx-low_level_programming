#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Program prints all possible different combinations of three
 * digits separated by comma and space. The three digits combinations are
 * and are printed in ascending order.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 48;
	int j, k;

	while (i < 56)
	{
		j = i + 1;
		while (j < 57)
		{
			k = j + 1;
			while (k < 58)
			{
				putchar(i);
				putchar(j);
				putchar(k);

				if (i < 55)
				{
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			j++;
		}
		i++;
	}

	putchar(10);

	return (0);
}
