#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int num = 612852475143;
	long int quotient = num;
	int divisor = 2;

	while (quotient != divisor)
	{
		if (quotient % divisor == 0)
			quotient = quotient / divisor;
		else
			divisor++;
	}
	print("%li\n", quotient);

	return (0);
}
