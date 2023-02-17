#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Program outputs all single digit numbers of base 10
 * starting from 0, on a line using putchar().
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num = 48; /* ASCII value for digit 0 */

	while (num < 58)
	{
		putchar(num);
		num++;
	}

	putchar(10);

	return (0);
}
