#include "main.h"

/**
 * _abs - Compute absolute value.
 * @n: Number to work with
 * Description: A function that computes the absolute value of an integer.
 *
 * Return: The absolute value of the input integer number.
 */

int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
