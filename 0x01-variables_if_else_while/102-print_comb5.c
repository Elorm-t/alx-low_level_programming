#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Program prints all possible combinations of two two-digit
 * numbers, separated by comma and space. All numbers are printed with two
 * digits.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 48;
	int j, k, l;

	while (i < 58)
	{
		j = 48;
		while (j < 58)
		{
			k = i;
			l = j + 1;
			while (k < 58)
			{
				while (l < 58)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);

					if (i < 57)
					{
						putchar(',');
						putchar(' ');
					}
					l++;
				}
				l = 48;
				k++;
			}
			j++;
		}
		i++;
	}

	putchar(10);

	return (0);
}
