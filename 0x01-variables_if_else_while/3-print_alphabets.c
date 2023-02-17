#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Program outputs lower-case letters and
 * upper-case letters on a single line using putchar().
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int lower_ch = 97; /* ASCII value of first lower-case letter */
	int upper_ch = 65; /* ASCII value of first upper-case letter */

	while (lower_ch < 123)
	{
		putchar(lower_ch);
		lower_ch++;
	}

	while (upper_ch < 91)
	{
		putchar(upper_ch);
		upper_ch++;
	}

	putchar(10);

	return (0);
}
