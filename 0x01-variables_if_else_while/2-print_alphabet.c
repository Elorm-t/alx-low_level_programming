#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: Program outputs lower-case letters of the alphabet
 * on a single line using putchar().
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch = 97; /* ASCII value of first lower-case letter */

	while (ch < 123)
	{
		putchar(ch);
		ch++;
	}

	putchar(10);

	return (0);
}
