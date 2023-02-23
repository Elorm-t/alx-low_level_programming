#include "main.h"

/**
 * print_number - prints an integer using puthchar
 * @n: the number to be printed
 *
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

	while (d > 9)
	{
		d /= 10;
		c *= 10;
	}

	for (; c >= 1; c /= 10)
	{
		_putchar(((m / c) % 10) + '0');
	}
}
