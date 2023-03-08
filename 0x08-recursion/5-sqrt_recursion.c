#include "main.h"

/**
 * helper_fn - helper function to determine the square root
 * @num: number
 * @i: guess root number
 *
 * Return: square root of num, otherwise -1 if not found
 */

int helper_fn(int num, int i)
{
	int sq;

	sq = i * i;
	if (sq == num)
		return (i);
	else if (sq < num)
		return (helper_fn(num, i + 1));

	return (-1);
}

/**
 * _sqrt_recursion - calculate square root of number
 * @n: number
 *
 * Return: square root of n, otherwise -1 if not found
 */

int _sqrt_recursion(int n)
{
	return (helper_fn(n, 1));
}
