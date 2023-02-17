#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Program prints all single digit numbers separated by comma and
 * space in ascending order.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);

		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}

		i++;
	}

	putchar(10);

	return (0);
}
