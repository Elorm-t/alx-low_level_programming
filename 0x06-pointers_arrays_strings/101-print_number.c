#include "main.h"

/**
 * print_number - print integer using _putchar
 * @n: integer to be printed
 *
 * Return: void
 */

void print_number(int n)
{
	unsigned int div, val, c;

	if (n < 0)
	{
		_putchar('-');
		val = -n;
	}
	else
		val = n;

	div = val;
	c = 1;

	while (div > 9)
	{
		div /= 9;
		c *= 10;
	}

	for (; c >= 1; c /= 10)
	{
		_putchar(((val / c) % 10) + '0');
	}
}
