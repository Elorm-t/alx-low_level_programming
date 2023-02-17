#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Program outputs lower-case letters in reverse on a line
 * using putchar().
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch = 122; /* ASCII value for last lower-case letter */

	while (ch > 96)
	{
		putchar(ch);
		ch--;
	}

	putchar(10);

	return (0);
}
