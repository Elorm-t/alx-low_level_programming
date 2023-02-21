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
	long int fib_1 = 0;
	long int fib_2 = 1;
	long int fib_n = fib_1 + fib_2;

	printf("%ld, %ld, ", fib_1, fib_2);

	while (i <= 51)
	{
		printf("%ld, ", fib_n);
		fib_1 = fib_2;
		fib_2 = fib_n;
		fib_n = fib_1 + fib_2;

		i++;
	}
	fib_n = fib_1 + fib_2;
	printf("%ld\n", fib_n);

	return (0);
}
