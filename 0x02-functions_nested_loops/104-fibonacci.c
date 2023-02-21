#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 2;
	long long int fib_1 = 0;
	long long int fib_2 = 1;
	long long int fib_n = fib_1 + fib_2;

	while (i <= 98)
	{
		printf("%lld, ", fib_n);
		fib_1 = fib_2;
		fib_2 = fib_n;
		fib_n = fib_1 + fib_2;

		i++;
	}
	fib_n = fib_1 + fib_2;
	printf("%lld\n", fib_n);

	return (0);
}
