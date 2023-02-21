#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Program to print fibonacci series.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 3;
	int fib_1 = 0;
	int fib_2 = 1;
	int fib_n = fib_1 + fib_2;

	printf("%d, %d, ", fib_1, fib_2);

	while (i < 50)
	{
		printf("%d, ", fib_n);
		fib_1 = fib_2;
		fib_2 = fib_n;
		fib_n = fib_1 + fib_2;

		i++;
	}
	fib_n = fib_1 + fib_2;
	printf("%d\n", fib_n);

	return (0);
}
