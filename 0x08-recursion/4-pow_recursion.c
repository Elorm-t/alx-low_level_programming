#include "main.h"

/**
 * _pow_recursion - calculates x to power y
 * @x: base
 * @y: exponent
 *
 * Return: -1 if y is less than 0, otherwise x to power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
