#include <stdio.h>
#define LARGEST 10000000000

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long int f_1 = 0, b_1 = 1, f_2 = 0, b_2 = 2;
	unsigned long int h1, h2, h3;
	int i;

	printf("%lu, %lu ", b_1, b_2);
	for (i = 2; i < 98; i++)
	{
		if (b_1 + b_2 > LARGEST || f_2 > 0 || f_1 > 0)
		{
			h1 = (b_1 + b_2) / LARGEST;
			h2 = (b_1 + b_2) % LARGEST;
			h3 = f_1 + f_2 + h1;
			f_1 = f_2;
			f_2 = h3;
			b_1 = b_2;
			b_2 = h2;
			printf("%lu%010lu", f_2, b_2);
		}
		else
		{
			h2 = b_1 + b_2;
			b_1 = b_2;
			b_2 = h2;
			printf("%lu", b_2);
		}
	}
	printf("\n");

	return (0);
}
