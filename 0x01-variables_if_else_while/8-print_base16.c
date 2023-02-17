#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Program outputs  all the numbers of base 16 in lowercase,
 * on a line using putchar().
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch = 0;

	while (ch < 16)
	{
		if (ch < 10)
			putchar(ch + 48);
		else
			putchar(ch + 87);

		ch++;
	}

	putchar(10);

	return (0);
}
