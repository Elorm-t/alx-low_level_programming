#include "main.h"

/**
 * print_number - prints an integer using puthchar
 * @n: the number to be printed
 *
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n != 0)
	{
		print_number(n / 10);
		_putchar((n % 10) + '0');
	}
	else
		_putchar('0');
}
