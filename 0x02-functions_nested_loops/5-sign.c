#include "main.h"

/**
 * print_sign - Checks the sign of a number
 * @n: Number to be checked
 *
 * Description: A function that checks a number and prints
 * its sign.
 *
 * Return: 1 if number is greater than 0, 0 if number is 0, and
 * -1 if number is less than 0.
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
