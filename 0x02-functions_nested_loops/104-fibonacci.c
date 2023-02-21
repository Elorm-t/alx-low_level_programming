#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 2;
	unsigned long int fib_1 = 0;
	unsigned long int fib_2 = 1;
	unsigned long int fib_n = fib_1 + fib_2;

	while (i <= 98)
	{
		printf("%lu, ", fib_n);
		fib_1 = fib_2;
		fib_2 = fib_n;
		fib_n = fib_1 + fib_2;

		i++;
	}
	fib_n = fib_1 + fib_2;
	printf("%lu\n", fib_n);

	return (0);
}
