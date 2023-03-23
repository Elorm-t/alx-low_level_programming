#include "variadic_functions.h"

/**
 * sum_them_all - sums all variable args
 * @n: number variable args
 *
 * Return: 0 if n is 0, else sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list parg;

	if (n == 0)
		return (0);

	va_start(parg, n);

	for (i = 0; i < n; i++)
		sum += varg(parg, int);

	va_end(parg);

	return (sum);
}
