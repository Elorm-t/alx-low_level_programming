#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 2;
	double fib_1 = 0;
	double fib_2 = 1;
	double fib_n = fib_1 + fib_2;

	while (i <= 98)
	{
		printf("%.0f, ", fib_n);
		fib_1 = fib_2;
		fib_2 = fib_n;
		fib_n = fib_1 + fib_2;

		i++;
	}
	fib_n = fib_1 + fib_2;
	printf("%.0f\n", fib_n);

	return (0);
}
