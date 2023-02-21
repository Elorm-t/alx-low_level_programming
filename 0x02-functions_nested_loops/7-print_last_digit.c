#include "main.h"

/**
 * print_last_digit - Print last digit of number.
 * @n: Number to be worked on.
 *
 * Return: The last digit of the number
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit = -last_digit;

	_putchar(last_digit + 48);

	return (last_digit);
}
