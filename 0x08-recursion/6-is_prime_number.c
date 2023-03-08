#include "main.h"

/**
 * helper_fn - used to determine divisibility recursively
 * @num: number
 * @i: divisor
 *
 * Return: 0 if not prime, 1 if prime
 */

int helper_fn(int num, int i)
{
	if (num % i == 0 && num != i)
		return (0);
	if (num % i != 0 && i < num)
		return (helper_fn(num, i + 1));

	return (1);
}

/**
 * is_prime_number - determine number is prime or not
 * @n: number
 *
 * Return: 0 if not prime, 1 if prime
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n < 2)
		return (0);

	return (helper_fn(n, i));
}
